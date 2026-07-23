/*
 * XREFs of LdrpMapImage @ 0x18000E70C
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18000E5C0 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     LdrpLogError @ 0x180003CE8 (LdrpLogError.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180007E28 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpMapViewOfSection @ 0x18000EA30 (LdrpMapViewOfSection.c)
 *     LdrpInsertDataTableEntry @ 0x18000EB38 (LdrpInsertDataTableEntry.c)
 *     RtlEqualUnicodeString @ 0x1800150E0 (RtlEqualUnicodeString.c)
 *     LdrpHashUnicodeString @ 0x180018FBC (LdrpHashUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180031AD0 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x180031CD4 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     LdrpRelocateImage @ 0x1800802E4 (LdrpRelocateImage.c)
 *     LdrpCorValidateImage @ 0x180084488 (LdrpCorValidateImage.c)
 *     LdrpCorFixupImage @ 0x18008DE80 (LdrpCorFixupImage.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     NtRaiseHardError @ 0x1800A7AB0 (NtRaiseHardError.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800CA054 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpMapImage(HANDLE SectionHandle, __int64 a2, char a3, _QWORD *a4)
{
  BOOLEAN v7; // al
  int v8; // r12d
  char v9; // al
  PVOID *v10; // r14
  int v11; // eax
  int v12; // esi
  unsigned __int32 v13; // ebx
  _BYTE *v14; // rax
  PIMAGE_NT_HEADERS v15; // r15
  int v16; // r8d
  int v17; // r9d
  int v18; // esi
  _UNICODE_STRING *v20; // rdx
  PVOID v21; // rcx
  PVOID v22; // rcx
  int v23; // eax
  int v24; // eax
  char v25; // dl
  char v26; // al
  int v27; // ecx
  ULONG v28; // [rsp+30h] [rbp-30h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp-28h] BYREF
  unsigned int TimeDateStamp; // [rsp+40h] [rbp-20h]
  unsigned int SizeOfImage; // [rsp+44h] [rbp-1Ch]
  ULONG64 Size; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 Parameters; // [rsp+50h] [rbp-10h] BYREF
  char v34; // [rsp+A8h] [rbp+48h]
  ULONG Response; // [rsp+B8h] [rbp+58h] BYREF

  v7 = RtlEqualUnicodeString((PUNICODE_STRING)(a2 + 88), (PUNICODE_STRING)&LdrpKernel32DllName, 1u);
  v8 = 0;
  *a4 = 0LL;
  if ( !v7 || (v9 = 1, (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) == 0) )
    v9 = 0;
  v10 = (PVOID *)(a2 + 48);
  v34 = v9;
  v11 = LdrpMapViewOfSection(SectionHandle, (PVOID *)(a2 + 48), &Size);
  v12 = v11;
  v13 = v11;
  if ( v11 < 0 )
  {
    v25 = -121;
    v27 = v11;
LABEL_45:
    LdrpLogError(v27, v25, 0, a2 + 72);
    return v13;
  }
  v13 = RtlImageNtHeaderEx(0, *v10, Size, &OutHeaders);
  if ( (v13 & 0x80000000) != 0 )
    return v13;
  if ( (NtCurrentPeb()->BitField & 0x20) == 0 && (OutHeaders->OptionalHeader.DllCharacteristics & 0x1000) != 0 )
    return (unsigned __int32)-1073700352;
  v14 = RtlImageDirectoryEntryToData(*v10, 1u, 0xEu, &v28);
  if ( v14 )
  {
    *(_DWORD *)(a2 + 104) |= 0x400000u;
    if ( (v14[16] & 1) != 0 )
    {
      v22 = *v10;
      *(_DWORD *)(a2 + 104) |= 0x1000000u;
      v13 = LdrpCorValidateImage(v22);
      if ( (v13 & 0x80000000) != 0 )
        return v13;
      if ( v12 != 1073741838 )
        goto LABEL_9;
      v23 = LdrpCorFixupImage(*v10);
      v13 = v23;
      if ( v23 < 0 )
        return v13;
      v12 = v23;
    }
  }
  if ( v12 == 1073741838 )
  {
    if ( *(_WORD *)(LdrpAppHeaders + 72) > 3u )
    {
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v10);
      *v10 = 0LL;
      v13 = 1073741838;
      *(_DWORD *)(a2 + 64) = 0;
      return v13;
    }
    Parameters = a2 + 72;
    v13 = NtRaiseHardError(1073741838, 1u, 1u, &Parameters, 2u, &Response);
    if ( (v13 & 0x80000000) != 0 )
      return v13;
    if ( Response == 3 )
    {
      if ( LdrInitState != 3 )
        ++LdrpFatalHardErrorCount;
      return (unsigned __int32)-1073741701;
    }
    *(_DWORD *)(a2 + 104) &= ~4u;
  }
LABEL_9:
  LOBYTE(v8) = LdrpDllNotificationLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
  v28 = LdrpHashUnicodeString(a2 + 88);
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v15 = OutHeaders;
  if ( (*(_BYTE *)(a2 + 104) & 0x40) == 0 )
  {
    v20 = (a3 & 0x20) != 0 ? 0LL : (_UNICODE_STRING *)(a2 + 72);
    if ( (unsigned int)LdrpFindLoadedDllByNameLockHeld((PUNICODE_STRING)(a2 + 88), v20, a3, a4, v28) == -1073741515 )
    {
      v21 = *v10;
      TimeDateStamp = v15->FileHeader.TimeDateStamp;
      SizeOfImage = v15->OptionalHeader.SizeOfImage;
      LdrpFindLoadedDllByMappingLockHeld(v21, v15);
    }
  }
  if ( !*a4 && !v8 )
  {
    LdrpInsertDataTableEntry(a2);
    LdrpInsertModuleToIndexLockHeld(a2, v15);
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( !*a4 )
  {
    if ( v8 )
      return (unsigned __int32)-1073741275;
    if ( (v15->FileHeader.Characteristics & 0x2000) == 0 )
    {
      *(_DWORD *)(a2 + 104) &= ~4u;
      return v13;
    }
    if ( *(char *)(*(_QWORD *)(a2 + 176) + 24LL) < 0 && SLOBYTE(v15->OptionalHeader.DllCharacteristics) >= 0 )
    {
      v26 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrmap.c",
          803,
          (unsigned int)"LdrpMapImage",
          0,
          (__int64)"Could not validate the crypto signature for DLL %wZ\n");
        v26 = LdrpDebugFlags;
      }
      if ( (v26 & 0x10) != 0 )
        __debugbreak();
      return (unsigned __int32)-1073740760;
    }
    if ( (*(_DWORD *)(a2 + 104) & 0x1000000) != 0 )
      return v13;
    v18 = v12 - 1073741827;
    if ( v18 )
    {
      if ( v18 != 51 )
        return v13;
      if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      {
        LOBYTE(v17) = -1;
        LOBYTE(v16) = -1;
        LdrpLogEtwEvent(5264, (unsigned int)*v10, v16, v17, 0LL);
      }
      if ( v34 )
      {
        v13 = -1073741800;
        v27 = -1073741800;
LABEL_44:
        v25 = -112;
        goto LABEL_45;
      }
    }
    else
    {
      if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      {
        LOBYTE(v17) = -1;
        LOBYTE(v16) = -1;
        LdrpLogEtwEvent(5264, (unsigned int)*v10, v16, v17, 0LL);
      }
      v24 = LdrpRelocateImage(*v10, v34);
      v13 = v24;
      if ( v24 < 0 )
      {
        v27 = v24;
        goto LABEL_44;
      }
    }
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      LOBYTE(v17) = -1;
      LOBYTE(v16) = -1;
      LdrpLogEtwEvent(5265, (unsigned int)*v10, v16, v17, 0LL);
    }
  }
  return v13;
}
