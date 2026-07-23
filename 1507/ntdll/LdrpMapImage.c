/*
 * XREFs of LdrpMapImage @ 0x180040760
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180040678 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x180016F10 (LdrpInsertModuleToIndexLockHeld.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800170B8 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     RtlEqualUnicodeString @ 0x180023F50 (RtlEqualUnicodeString.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180040448 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpInsertDataTableEntry @ 0x180040A6C (LdrpInsertDataTableEntry.c)
 *     LdrpHashUnicodeString @ 0x180040B80 (LdrpHashUnicodeString.c)
 *     LdrpMapViewOfSection @ 0x180040BD0 (LdrpMapViewOfSection.c)
 *     LdrpRelocateImage @ 0x180073308 (LdrpRelocateImage.c)
 *     LdrpLogError @ 0x180075B80 (LdrpLogError.c)
 *     LdrpCorValidateImage @ 0x180078A1C (LdrpCorValidateImage.c)
 *     LdrpCorFixupImage @ 0x180083A50 (LdrpCorFixupImage.c)
 *     NtRaiseHardError @ 0x180094DD0 (NtRaiseHardError.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800BD334 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpMapImage(HANDLE SectionHandle, __int64 a2, char a3, volatile signed __int32 **a4)
{
  BOOLEAN v7; // al
  bool v8; // al
  PVOID *v9; // r15
  int v10; // eax
  int v11; // esi
  unsigned __int32 v12; // ebx
  _BYTE *v13; // rax
  BOOL v14; // r12d
  PIMAGE_NT_HEADERS v15; // r14
  int v16; // r8d
  int v17; // r9d
  int v18; // esi
  _UNICODE_STRING *v20; // rdx
  PVOID v21; // rcx
  PVOID v22; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  char v26; // al
  __int64 v27; // rcx
  ULONG v28; // [rsp+30h] [rbp-30h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v30[2]; // [rsp+40h] [rbp-20h] BYREF
  ULONG64 Size; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 Parameters; // [rsp+50h] [rbp-10h] BYREF
  char v33; // [rsp+A8h] [rbp+48h]
  ULONG Response; // [rsp+B8h] [rbp+58h] BYREF

  v7 = RtlEqualUnicodeString((PUNICODE_STRING)(a2 + 88), (PUNICODE_STRING)&LdrpKernel32DllName, 1u);
  *a4 = 0LL;
  v8 = v7 && (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) != 0;
  v9 = (PVOID *)(a2 + 48);
  v33 = v8;
  v10 = LdrpMapViewOfSection(SectionHandle, (PVOID *)(a2 + 48), &Size);
  v11 = v10;
  v12 = v10;
  if ( v10 < 0 )
  {
    v25 = 5255LL;
    v27 = (unsigned int)v10;
LABEL_45:
    LdrpLogError(v27, v25, 0LL, a2 + 72);
    return v12;
  }
  v12 = RtlImageNtHeaderEx(0, *v9, Size, &OutHeaders);
  if ( (v12 & 0x80000000) != 0 )
    return v12;
  if ( (NtCurrentPeb()->BitField & 0x20) == 0 && (OutHeaders->OptionalHeader.DllCharacteristics & 0x1000) != 0 )
    return (unsigned __int32)-1073700352;
  v13 = RtlImageDirectoryEntryToData(*v9, 1u, 0xEu, &v28);
  if ( v13 )
  {
    *(_DWORD *)(a2 + 104) |= 0x400000u;
    if ( (v13[16] & 1) != 0 )
    {
      v22 = *v9;
      *(_DWORD *)(a2 + 104) |= 0x1000000u;
      v12 = LdrpCorValidateImage(v22);
      if ( (v12 & 0x80000000) != 0 )
        return v12;
      if ( v11 != 1073741838 )
        goto LABEL_9;
      v23 = LdrpCorFixupImage(*v9);
      v12 = v23;
      if ( v23 < 0 )
        return v12;
      v11 = v23;
    }
  }
  if ( v11 == 1073741838 )
  {
    if ( *(_WORD *)(LdrpAppHeaders + 72) > 3u )
      return 1073741838;
    Parameters = a2 + 72;
    v12 = NtRaiseHardError(1073741838, 1u, 1u, &Parameters, 2u, &Response);
    if ( (v12 & 0x80000000) != 0 )
      return v12;
    if ( Response == 3 )
    {
      if ( LdrInitState != 3 )
        ++LdrpFatalHardErrorCount;
      return (unsigned __int32)-1073741701;
    }
    *(_DWORD *)(a2 + 104) &= ~4u;
  }
LABEL_9:
  v14 = LdrpDllNotificationLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
  v28 = LdrpHashUnicodeString(a2 + 88);
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v15 = OutHeaders;
  if ( (*(_BYTE *)(a2 + 104) & 0x40) == 0 )
  {
    v20 = (a3 & 0x20) != 0 ? 0LL : (_UNICODE_STRING *)(a2 + 72);
    if ( (unsigned int)LdrpFindLoadedDllByNameLockHeld((PUNICODE_STRING)(a2 + 88), v20, a3, a4, v28) == -1073741515 )
    {
      v21 = *v9;
      v30[0] = v15->FileHeader.TimeDateStamp;
      v30[1] = v15->OptionalHeader.SizeOfImage;
      LdrpFindLoadedDllByMappingLockHeld(v21, v15, v30, a4);
    }
  }
  if ( !*a4 && !v14 )
  {
    LdrpInsertDataTableEntry(a2);
    LdrpInsertModuleToIndexLockHeld(a2, (__int64)v15);
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( !*a4 )
  {
    if ( v14 )
      return (unsigned __int32)-1073741275;
    if ( (v15->FileHeader.Characteristics & 0x2000) == 0 )
    {
      *(_DWORD *)(a2 + 104) &= ~4u;
      return v12;
    }
    if ( *(char *)(*(_QWORD *)(a2 + 176) + 24LL) < 0 && SLOBYTE(v15->OptionalHeader.DllCharacteristics) >= 0 )
    {
      v26 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrmap.c",
          788,
          (unsigned int)"LdrpMapImage",
          0,
          (__int64)"Could not validate the crypto signature for DLL %wZ\n",
          a2 + 72);
        v26 = LdrpDebugFlags;
      }
      if ( (v26 & 0x10) != 0 )
        __debugbreak();
      return (unsigned __int32)-1073740760;
    }
    if ( (*(_DWORD *)(a2 + 104) & 0x1000000) != 0 )
      return v12;
    v18 = v11 - 1073741827;
    if ( v18 )
    {
      if ( v18 != 51 )
        return v12;
      if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      {
        LOBYTE(v17) = -1;
        LOBYTE(v16) = -1;
        LdrpLogEtwEvent(5264, (unsigned int)*v9, v16, v17, 0LL);
      }
      if ( v33 )
      {
        v12 = -1073741800;
        v27 = 3221225496LL;
LABEL_44:
        v25 = 5264LL;
        goto LABEL_45;
      }
    }
    else
    {
      if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      {
        LOBYTE(v17) = -1;
        LOBYTE(v16) = -1;
        LdrpLogEtwEvent(5264, (unsigned int)*v9, v16, v17, 0LL);
      }
      v24 = LdrpRelocateImage(*v9, v33);
      v12 = v24;
      if ( v24 < 0 )
      {
        v27 = (unsigned int)v24;
        goto LABEL_44;
      }
    }
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      LOBYTE(v17) = -1;
      LOBYTE(v16) = -1;
      LdrpLogEtwEvent(5265, (unsigned int)*v9, v16, v17, 0LL);
    }
  }
  return v12;
}
