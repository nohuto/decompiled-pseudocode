/*
 * XREFs of LdrpMapImage @ 0x18002F44C
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002F26C (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18000F984 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpHashUnicodeString @ 0x180018D08 (LdrpHashUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x18001A1D0 (RtlEqualUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpInsertDataTableEntry @ 0x18002F158 (LdrpInsertDataTableEntry.c)
 *     LdrpMapViewOfSection @ 0x18002F354 (LdrpMapViewOfSection.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180031534 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x180031810 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 *     LdrpRelocateImage @ 0x180084B78 (LdrpRelocateImage.c)
 *     LdrpLogError @ 0x180086114 (LdrpLogError.c)
 *     LdrpCorValidateImage @ 0x1800885AC (LdrpCorValidateImage.c)
 *     LdrpCorFixupImage @ 0x1800908B0 (LdrpCorFixupImage.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtRaiseHardError @ 0x1800A8E90 (NtRaiseHardError.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800D1538 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpMapImage(__int64 a1, __int64 a2, unsigned int a3, volatile signed __int32 **a4)
{
  char v7; // al
  int v8; // r12d
  char v9; // al
  _QWORD *v10; // r14
  int v11; // eax
  int v12; // esi
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  char *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r15
  int v22; // r8d
  int v23; // r9d
  int v24; // esi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  char v32; // al
  __int64 v33; // rcx
  int v34; // [rsp+30h] [rbp-30h] BYREF
  __int64 v35; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v36[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v37; // [rsp+48h] [rbp-18h] BYREF
  __int64 v38; // [rsp+50h] [rbp-10h] BYREF
  char v39; // [rsp+A8h] [rbp+48h]
  int v41; // [rsp+B8h] [rbp+58h] BYREF

  v7 = RtlEqualUnicodeString((unsigned __int16 *)(a2 + 88), LdrpKernel32DllName, 1);
  v8 = 0;
  *a4 = 0LL;
  if ( !v7 || (v9 = 1, (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) == 0) )
    v9 = 0;
  v10 = (_QWORD *)(a2 + 48);
  v39 = v9;
  v11 = LdrpMapViewOfSection(a1, *(_QWORD *)(a2 + 96), *(void **)(a2 + 80), v9, (_QWORD *)(a2 + 48), &v37);
  v12 = v11;
  v13 = v11;
  if ( v11 < 0 )
  {
    v31 = 5255LL;
    v33 = (unsigned int)v11;
LABEL_45:
    LdrpLogError(v33, v31, 0LL, a2 + 72);
    return v13;
  }
  v13 = RtlImageNtHeaderEx(0LL, *v10, v37, &v35);
  if ( (v13 & 0x80000000) != 0 )
    return v13;
  if ( (NtCurrentPeb()->BitField & 0x20) == 0 && (*(_WORD *)(v35 + 94) & 0x1000) != 0 )
    return (unsigned int)-1073700352;
  LOBYTE(v14) = 1;
  v15 = RtlImageDirectoryEntryToData(*v10, v14, 14LL, &v34);
  if ( v15 )
  {
    *(_DWORD *)(a2 + 104) |= 0x400000u;
    if ( (*(_BYTE *)(v15 + 16) & 1) != 0 )
    {
      v28 = *v10;
      *(_DWORD *)(a2 + 104) |= 0x1000000u;
      v13 = LdrpCorValidateImage(v28);
      if ( (v13 & 0x80000000) != 0 )
        return v13;
      if ( v12 != 1073741838 )
        goto LABEL_9;
      v29 = LdrpCorFixupImage(*v10);
      v13 = v29;
      if ( v29 < 0 )
        return v13;
      v12 = v29;
    }
  }
  if ( v12 == 1073741838 )
  {
    if ( *(_WORD *)(LdrpAppHeaders + 72) > 3u )
    {
      NtUnmapViewOfSection(-1LL, *v10);
      *v10 = 0LL;
      v13 = 1073741838;
      *(_DWORD *)(a2 + 64) = 0;
      return v13;
    }
    v38 = a2 + 72;
    v13 = NtRaiseHardError(1073741838LL, 1LL, 1LL, &v38, 2, &v41);
    if ( (v13 & 0x80000000) != 0 )
      return v13;
    if ( v41 == 3 )
    {
      if ( LdrInitState != 3 )
        ++LdrpFatalHardErrorCount;
      return (unsigned int)-1073741701;
    }
    *(_DWORD *)(a2 + 104) &= ~4u;
  }
LABEL_9:
  LOBYTE(v8) = (void *)qword_18014C550 == NtCurrentTeb()->ClientId.UniqueThread;
  v34 = LdrpHashUnicodeString(a2 + 88, v16);
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v17, v18, v19);
  v21 = v35;
  if ( (*(_BYTE *)(a2 + 104) & 0x40) == 0 )
  {
    v26 = (a3 & 0x20) != 0 ? 0LL : a2 + 72;
    if ( (unsigned int)LdrpFindLoadedDllByNameLockHeld(a2 + 88, v26, a3, a4, v34) == -1073741515 )
    {
      v27 = *v10;
      v36[0] = *(_DWORD *)(v21 + 8);
      v36[1] = *(_DWORD *)(v21 + 80);
      LdrpFindLoadedDllByMappingLockHeld(v27, v21, v36, a4);
    }
  }
  if ( !*a4 && !v8 )
  {
    LdrpInsertDataTableEntry(a2, v20);
    LdrpInsertModuleToIndexLockHeld(a2, v21);
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( !*a4 )
  {
    if ( v8 )
      return (unsigned int)-1073741275;
    if ( (*(_WORD *)(v21 + 22) & 0x2000) == 0 )
    {
      *(_DWORD *)(a2 + 104) &= ~4u;
      return v13;
    }
    if ( *(char *)(*(_QWORD *)(a2 + 176) + 24LL) < 0 && *(char *)(v21 + 94) >= 0 )
    {
      v32 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrmap.c",
          803,
          (unsigned int)"LdrpMapImage",
          0,
          (__int64)"Could not validate the crypto signature for DLL %wZ\n",
          a2 + 72);
        v32 = LdrpDebugFlags;
      }
      if ( (v32 & 0x10) != 0 )
        __debugbreak();
      return (unsigned int)-1073740760;
    }
    if ( (*(_DWORD *)(a2 + 104) & 0x1000000) != 0 )
      return v13;
    v24 = v12 - 1073741827;
    if ( v24 )
    {
      if ( v24 != 51 )
        return v13;
      if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      {
        LOBYTE(v23) = -1;
        LOBYTE(v22) = -1;
        LdrpLogEtwEvent(5264, *v10, v22, v23, 0LL, 0LL);
      }
      if ( v39 )
      {
        v13 = -1073741800;
        v33 = 3221225496LL;
LABEL_44:
        v31 = 5264LL;
        goto LABEL_45;
      }
    }
    else
    {
      if ( MEMORY[0x7FFE0384] )
      {
        if ( (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
        {
          LOBYTE(v23) = -1;
          LOBYTE(v22) = -1;
          LdrpLogEtwEvent(5264, *v10, v22, v23, 0LL, 0LL);
        }
        LODWORD(v21) = v35;
      }
      v30 = LdrpRelocateImage(*v10, v37, v21, (int)a2 + 72, v39);
      v13 = v30;
      if ( v30 < 0 )
      {
        v33 = (unsigned int)v30;
        goto LABEL_44;
      }
    }
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      LOBYTE(v23) = -1;
      LOBYTE(v22) = -1;
      LdrpLogEtwEvent(5265, *v10, v22, v23, 0LL, 0LL);
    }
  }
  return v13;
}
