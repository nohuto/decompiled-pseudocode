/*
 * XREFs of LdrpMapDllSearchPath @ 0x180042A04
 * Callers:
 *     LdrpProcessWork @ 0x18003913C (LdrpProcessWork.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpMapDllNtFileName @ 0x18003F1F8 (LdrpMapDllNtFileName.c)
 *     LdrpSearchPath @ 0x18003F450 (LdrpSearchPath.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180040448 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpInsertDataTableEntry @ 0x180040A6C (LdrpInsertDataTableEntry.c)
 *     LdrpHashUnicodeString @ 0x180040B80 (LdrpHashUnicodeString.c)
 *     LdrpFreeUnicodeString @ 0x180042C80 (LdrpFreeUnicodeString.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x180042DE0 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpAppCompatRedirect @ 0x180042DFC (LdrpAppCompatRedirect.c)
 *     LdrpRemoveDataTableEntry @ 0x180042EB8 (LdrpRemoveDataTableEntry.c)
 *     LdrpLoadContextReplaceModule @ 0x1800452D4 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800BD098 (LdrpLogEtwDllSearchResults.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(__int64 a1)
{
  __int64 v1; // r14
  int v3; // r15d
  int v4; // eax
  int LoadedDllByNameLockHeld; // edi
  int v6; // ebx
  char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r8d
  unsigned __int16 *v11; // rdx
  __int128 v12; // xmm1
  bool v13; // zf
  bool v15; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v16; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  __int128 v19; // [rsp+70h] [rbp-90h] BYREF
  __int16 *v20[2]; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v21; // [rsp+90h] [rbp-70h] BYREF
  _WORD v22[128]; // [rsp+A0h] [rbp-60h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v18 = 0LL;
  v20[0] = 0LL;
  v20[1] = 0LL;
  v3 = 0;
  v15 = 0;
  v21.Buffer = v22;
  v17 = 0uLL;
  *(_DWORD *)&v21.Length = 0x1000000;
  v22[0] = 0;
  v16 = 0;
  while ( 1 )
  {
    v4 = LdrpSearchPath(
           (unsigned __int16 *)a1,
           *(__int16 ***)(a1 + 16),
           (*(_BYTE *)(a1 + 24) & 8) != 0,
           v20,
           &v21,
           (__int64)&v19,
           (unsigned __int16 *)&v17,
           &v15,
           (__int64)&v16);
    LoadedDllByNameLockHeld = v4;
    if ( v15 )
      *(_DWORD *)(v1 + 104) |= 1u;
    if ( v4 == -1073741515 )
      break;
    if ( v4 < 0 )
      goto LABEL_16;
LABEL_6:
    v3 = 1;
    LoadedDllByNameLockHeld = LdrpAppCompatRedirect(
                                a1,
                                (unsigned int)&v17,
                                (unsigned int)&v19,
                                (unsigned int)&v21,
                                0LL,
                                v4);
    if ( LoadedDllByNameLockHeld < 0 )
      goto LABEL_16;
    if ( (*(_DWORD *)(a1 + 24) & 0x10000) != 0 )
      v16 |= 1u;
    v6 = LdrpHashUnicodeString((unsigned __int16 *)&v19);
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock, v7, v8, v9);
    LdrpRemoveDataTableEntry(v1);
    v10 = *(_DWORD *)(a1 + 24);
    v11 = 0LL;
    if ( (v10 & 0x20) == 0 )
      v11 = (unsigned __int16 *)(v1 + 72);
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld((unsigned __int16 *)&v19, v11, v10, &v18, v6);
    if ( LoadedDllByNameLockHeld == -1073741515 )
    {
      LdrpFreeUnicodeString(v1 + 72);
      v12 = v19;
      *(_OWORD *)(v1 + 72) = v17;
      *(_OWORD *)(v1 + 88) = v12;
      v13 = (*(_BYTE *)(a1 + 24) & 0x20) == 0;
      v17 = 0uLL;
      if ( !v13 )
        LdrpInsertDataTableEntry(v1);
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( LoadedDllByNameLockHeld != -1073741515 )
      goto LABEL_16;
    LoadedDllByNameLockHeld = LdrpMapDllNtFileName(a1, &v21);
    if ( LoadedDllByNameLockHeld != 1073741838 )
      goto LABEL_16;
    if ( v22 != v21.Buffer )
      NtdllpFreeStringRoutine((__int64)v21.Buffer);
    *(_DWORD *)&v21.Length = 0x1000000;
    v21.Buffer = v22;
    v22[0] = 0;
    LdrpFreeUnicodeString(&v17);
  }
  if ( !v3 )
    goto LABEL_6;
  LoadedDllByNameLockHeld = -1073741701;
LABEL_16:
  if ( v18 )
  {
    LdrpLoadContextReplaceModule(a1);
  }
  else if ( (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(v16, a1);
  }
  if ( v22 != v21.Buffer )
    NtdllpFreeStringRoutine((__int64)v21.Buffer);
  *(_DWORD *)&v21.Length = 0x1000000;
  v21.Buffer = v22;
  v22[0] = 0;
  LdrpFreeUnicodeString(&v17);
  return (unsigned int)LoadedDllByNameLockHeld;
}
