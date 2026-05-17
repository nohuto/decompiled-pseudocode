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

__int64 __fastcall LdrpMapImage(int a1, __int64 a2, char a3, volatile signed __int32 **a4)
{
  char v7; // al
  int v8; // r9d
  bool v9; // al
  unsigned __int64 *v10; // r15
  int v11; // eax
  int v12; // esi
  unsigned int v13; // ebx
  __int64 v14; // rax
  BOOL v15; // r12d
  char *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  int v20; // r8d
  int v21; // r9d
  int v22; // esi
  unsigned __int16 *v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  char v30; // al
  __int64 v31; // rcx
  int v32; // [rsp+30h] [rbp-30h] BYREF
  __int64 v33; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v34[2]; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-18h] BYREF
  __int64 v36; // [rsp+50h] [rbp-10h] BYREF
  char v37; // [rsp+A8h] [rbp+48h]
  int v39; // [rsp+B8h] [rbp+58h] BYREF

  v7 = RtlEqualUnicodeString((unsigned __int16 *)(a2 + 88), LdrpKernel32DllName, 1);
  *a4 = 0LL;
  v9 = v7 && (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) != 0;
  v10 = (unsigned __int64 *)(a2 + 48);
  LOBYTE(v8) = v9;
  v37 = v9;
  v11 = LdrpMapViewOfSection(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 80), v8, a2 + 48, (__int64)&v35);
  v12 = v11;
  v13 = v11;
  if ( v11 < 0 )
  {
    v29 = 5255LL;
    v31 = (unsigned int)v11;
LABEL_45:
    LdrpLogError(v31, v29, 0LL, a2 + 72);
    return v13;
  }
  v13 = RtlImageNtHeaderEx(0, *v10, v35, &v33);
  if ( (v13 & 0x80000000) != 0 )
    return v13;
  if ( (NtCurrentPeb()->BitField & 0x20) == 0 && (*(_WORD *)(v33 + 94) & 0x1000) != 0 )
    return (unsigned int)-1073700352;
  v14 = RtlImageDirectoryEntryToData(*v10, 1, 0xEu, &v32);
  if ( v14 )
  {
    *(_DWORD *)(a2 + 104) |= 0x400000u;
    if ( (*(_BYTE *)(v14 + 16) & 1) != 0 )
    {
      v26 = *v10;
      *(_DWORD *)(a2 + 104) |= 0x1000000u;
      v13 = LdrpCorValidateImage(v26);
      if ( (v13 & 0x80000000) != 0 )
        return v13;
      if ( v12 != 1073741838 )
        goto LABEL_9;
      v27 = LdrpCorFixupImage(*v10);
      v13 = v27;
      if ( v27 < 0 )
        return v13;
      v12 = v27;
    }
  }
  if ( v12 == 1073741838 )
  {
    if ( *(_WORD *)(LdrpAppHeaders + 72) > 3u )
      return 1073741838;
    v36 = a2 + 72;
    v13 = NtRaiseHardError(1073741838LL, 1LL, 1LL, &v36, 2, &v39);
    if ( (v13 & 0x80000000) != 0 )
      return v13;
    if ( v39 == 3 )
    {
      if ( LdrInitState != 3 )
        ++LdrpFatalHardErrorCount;
      return (unsigned int)-1073741701;
    }
    *(_DWORD *)(a2 + 104) &= ~4u;
  }
LABEL_9:
  v15 = (void *)qword_180143090 == NtCurrentTeb()->ClientId.UniqueThread;
  v32 = LdrpHashUnicodeString(a2 + 88);
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock, v16, v17, v18);
  v19 = v33;
  if ( (*(_BYTE *)(a2 + 104) & 0x40) == 0 )
  {
    v24 = (a3 & 0x20) != 0 ? 0LL : (unsigned __int16 *)(a2 + 72);
    if ( (unsigned int)LdrpFindLoadedDllByNameLockHeld((unsigned __int16 *)(a2 + 88), v24, a3, a4, v32) == -1073741515 )
    {
      v25 = *v10;
      v34[0] = *(_DWORD *)(v19 + 8);
      v34[1] = *(_DWORD *)(v19 + 80);
      LdrpFindLoadedDllByMappingLockHeld(v25, (const void *)v19, v34, a4);
    }
  }
  if ( !*a4 && !v15 )
  {
    LdrpInsertDataTableEntry(a2);
    LdrpInsertModuleToIndexLockHeld(a2, v19);
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( !*a4 )
  {
    if ( v15 )
      return (unsigned int)-1073741275;
    if ( (*(_WORD *)(v19 + 22) & 0x2000) == 0 )
    {
      *(_DWORD *)(a2 + 104) &= ~4u;
      return v13;
    }
    if ( *(char *)(*(_QWORD *)(a2 + 176) + 24LL) < 0 && *(char *)(v19 + 94) >= 0 )
    {
      v30 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrmap.c",
          788,
          (unsigned int)"LdrpMapImage",
          0,
          "Could not validate the crypto signature for DLL %wZ\n",
          a2 + 72);
        v30 = LdrpDebugFlags;
      }
      if ( (v30 & 0x10) != 0 )
        __debugbreak();
      return (unsigned int)-1073740760;
    }
    if ( (*(_DWORD *)(a2 + 104) & 0x1000000) != 0 )
      return v13;
    v22 = v12 - 1073741827;
    if ( v22 )
    {
      if ( v22 != 51 )
        return v13;
      if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      {
        LOBYTE(v21) = -1;
        LOBYTE(v20) = -1;
        LdrpLogEtwEvent(5264, *v10, v20, v21, 0LL);
      }
      if ( v37 )
      {
        v13 = -1073741800;
        v31 = 3221225496LL;
LABEL_44:
        v29 = 5264LL;
        goto LABEL_45;
      }
    }
    else
    {
      if ( MEMORY[0x7FFE0384] )
      {
        if ( (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
        {
          LOBYTE(v21) = -1;
          LOBYTE(v20) = -1;
          LdrpLogEtwEvent(5264, *v10, v20, v21, 0LL);
        }
        LODWORD(v19) = v33;
      }
      v28 = LdrpRelocateImage(*v10, v35, v19, (int)a2 + 72, v37);
      v13 = v28;
      if ( v28 < 0 )
      {
        v31 = (unsigned int)v28;
        goto LABEL_44;
      }
    }
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      LOBYTE(v21) = -1;
      LOBYTE(v20) = -1;
      LdrpLogEtwEvent(5265, *v10, v20, v21, 0LL);
    }
  }
  return v13;
}
