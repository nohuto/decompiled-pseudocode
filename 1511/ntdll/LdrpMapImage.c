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

__int64 __fastcall LdrpMapImage(int a1, __int64 a2, __int64 a3, volatile signed __int32 **a4)
{
  char v7; // al
  int v8; // r9d
  int v9; // r12d
  char v10; // al
  _QWORD *v11; // r14
  int v12; // eax
  int v13; // esi
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // r8d
  int v19; // r9d
  int v20; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  char v27; // dl
  char v28; // al
  int v29; // ecx
  int v30; // [rsp+30h] [rbp-30h] BYREF
  __int64 v31; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v32[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v33; // [rsp+48h] [rbp-18h] BYREF
  __int64 v34; // [rsp+50h] [rbp-10h] BYREF
  char v35; // [rsp+A8h] [rbp+48h]
  unsigned int v36; // [rsp+B0h] [rbp+50h]
  int v37; // [rsp+B8h] [rbp+58h] BYREF

  v36 = a3;
  LOBYTE(a3) = 1;
  v7 = RtlEqualUnicodeString(a2 + 88, &LdrpKernel32DllName, a3, a4);
  v9 = 0;
  *a4 = 0LL;
  if ( !v7 || (v10 = 1, (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) == 0) )
    v10 = 0;
  v11 = (_QWORD *)(a2 + 48);
  LOBYTE(v8) = v10;
  v35 = v10;
  v12 = LdrpMapViewOfSection(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 80), v8, a2 + 48, (__int64)&v33);
  v13 = v12;
  v14 = v12;
  if ( v12 < 0 )
  {
    v27 = -121;
    v29 = v12;
LABEL_45:
    LdrpLogError(v29, v27, 0, a2 + 72);
    return v14;
  }
  v14 = RtlImageNtHeaderEx(0LL, *v11, v33, &v31);
  if ( (v14 & 0x80000000) != 0 )
    return v14;
  if ( (NtCurrentPeb()->BitField & 0x20) == 0 && (*(_WORD *)(v31 + 94) & 0x1000) != 0 )
    return (unsigned int)-1073700352;
  LOBYTE(v15) = 1;
  v16 = RtlImageDirectoryEntryToData(*v11, v15, 14LL, &v30);
  if ( v16 )
  {
    *(_DWORD *)(a2 + 104) |= 0x400000u;
    if ( (*(_BYTE *)(v16 + 16) & 1) != 0 )
    {
      v24 = *v11;
      *(_DWORD *)(a2 + 104) |= 0x1000000u;
      v14 = LdrpCorValidateImage(v24);
      if ( (v14 & 0x80000000) != 0 )
        return v14;
      if ( v13 != 1073741838 )
        goto LABEL_9;
      v25 = LdrpCorFixupImage(*v11);
      v14 = v25;
      if ( v25 < 0 )
        return v14;
      v13 = v25;
    }
  }
  if ( v13 == 1073741838 )
  {
    if ( *(_WORD *)(LdrpAppHeaders + 72) > 3u )
    {
      NtUnmapViewOfSection(-1LL, *v11);
      *v11 = 0LL;
      v14 = 1073741838;
      *(_DWORD *)(a2 + 64) = 0;
      return v14;
    }
    v34 = a2 + 72;
    v14 = NtRaiseHardError(1073741838LL, 1LL, 1LL, &v34, 2, &v37);
    if ( (v14 & 0x80000000) != 0 )
      return v14;
    if ( v37 == 3 )
    {
      if ( LdrInitState != 3 )
        ++LdrpFatalHardErrorCount;
      return (unsigned int)-1073741701;
    }
    *(_DWORD *)(a2 + 104) &= ~4u;
  }
LABEL_9:
  LOBYTE(v9) = (void *)qword_1801421C0 == NtCurrentTeb()->ClientId.UniqueThread;
  v30 = LdrpHashUnicodeString(a2 + 88);
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v17 = v31;
  if ( (*(_BYTE *)(a2 + 104) & 0x40) == 0 )
  {
    v22 = (v36 & 0x20) != 0 ? 0LL : a2 + 72;
    if ( (unsigned int)LdrpFindLoadedDllByNameLockHeld(a2 + 88, v22, v36, a4, v30) == -1073741515 )
    {
      v23 = *v11;
      v32[0] = *(_DWORD *)(v17 + 8);
      v32[1] = *(_DWORD *)(v17 + 80);
      LdrpFindLoadedDllByMappingLockHeld(v23, v17, v32, a4);
    }
  }
  if ( !*a4 && !v9 )
  {
    LdrpInsertDataTableEntry(a2);
    LdrpInsertModuleToIndexLockHeld(a2, v17);
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( !*a4 )
  {
    if ( v9 )
      return (unsigned int)-1073741275;
    if ( (*(_WORD *)(v17 + 22) & 0x2000) == 0 )
    {
      *(_DWORD *)(a2 + 104) &= ~4u;
      return v14;
    }
    if ( *(char *)(*(_QWORD *)(a2 + 176) + 24LL) < 0 && *(char *)(v17 + 94) >= 0 )
    {
      v28 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrmap.c",
          803,
          (unsigned int)"LdrpMapImage",
          0,
          (__int64)"Could not validate the crypto signature for DLL %wZ\n");
        v28 = LdrpDebugFlags;
      }
      if ( (v28 & 0x10) != 0 )
        __debugbreak();
      return (unsigned int)-1073740760;
    }
    if ( (*(_DWORD *)(a2 + 104) & 0x1000000) != 0 )
      return v14;
    v20 = v13 - 1073741827;
    if ( v20 )
    {
      if ( v20 != 51 )
        return v14;
      if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      {
        LOBYTE(v19) = -1;
        LOBYTE(v18) = -1;
        LdrpLogEtwEvent(5264, *v11, v18, v19, 0LL);
      }
      if ( v35 )
      {
        v14 = -1073741800;
        v29 = -1073741800;
LABEL_44:
        v27 = -112;
        goto LABEL_45;
      }
    }
    else
    {
      if ( MEMORY[0x7FFE0384] )
      {
        if ( (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
        {
          LOBYTE(v19) = -1;
          LOBYTE(v18) = -1;
          LdrpLogEtwEvent(5264, *v11, v18, v19, 0LL);
        }
        LODWORD(v17) = v31;
      }
      v26 = LdrpRelocateImage(*v11, v33, v17, (int)a2 + 72, v35);
      v14 = v26;
      if ( v26 < 0 )
      {
        v29 = v26;
        goto LABEL_44;
      }
    }
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      LOBYTE(v19) = -1;
      LOBYTE(v18) = -1;
      LdrpLogEtwEvent(5265, *v11, v18, v19, 0LL);
    }
  }
  return v14;
}
