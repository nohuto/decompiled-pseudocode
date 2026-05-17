/*
 * XREFs of LdrpMapDllSearchPath @ 0x18000E5C8
 * Callers:
 *     LdrpProcessWork @ 0x18000E19C (LdrpProcessWork.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 *     LdrpRemoveDataTableEntry @ 0x18000DC88 (LdrpRemoveDataTableEntry.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18000DD04 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpAppCompatRedirect @ 0x18000E064 (LdrpAppCompatRedirect.c)
 *     LdrpFreeUnicodeString @ 0x18000E8FC (LdrpFreeUnicodeString.c)
 *     LdrpSearchPath @ 0x18000EBF0 (LdrpSearchPath.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18000F984 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpReleaseDllPath @ 0x18001216C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121B8 (LdrpInitializeDllPath.c)
 *     LdrpHashUnicodeString @ 0x180018D08 (LdrpHashUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpMapDllNtFileName @ 0x18002D3AC (LdrpMapDllNtFileName.c)
 *     LdrpInsertDataTableEntry @ 0x18002F158 (LdrpInsertDataTableEntry.c)
 *     LdrpLoadContextReplaceModule @ 0x180073728 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800D129C (LdrpLogEtwDllSearchResults.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r14
  int v4; // r12d
  __int64 v5; // r15
  __int64 v6; // rax
  _BYTE *v7; // r13
  int v8; // eax
  int LoadedDllByNameLockHeld; // edi
  int v10; // ebx
  int v11; // r8d
  _BYTE *v12; // rdx
  __int128 v13; // xmm1
  bool v14; // zf
  int v16; // eax
  char v17; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v18; // [rsp+5Ch] [rbp-ACh] BYREF
  _BYTE v19[24]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v21[2]; // [rsp+88h] [rbp-80h] BYREF
  int v22; // [rsp+98h] [rbp-70h] BYREF
  _WORD *v23; // [rsp+A0h] [rbp-68h]
  _WORD v24[128]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v25[128]; // [rsp+1A8h] [rbp+A0h] BYREF

  v22 = 0x1000000;
  memset(v19, 0, sizeof(v19));
  v21[0] = 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0LL;
  v21[1] = 0LL;
  v4 = 0;
  v17 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v23 = v24;
  v24[0] = 0;
  v18 = 0;
  if ( v2 && (v6 = *(unsigned int *)(v2 + 280), (_DWORD)v6) )
  {
    LdrpInitializeDllPath(*(_QWORD *)(v2 + 80), v6 | 1, v25);
    v7 = v25;
  }
  else
  {
    LdrpInitializeDllPath(0LL, 0LL, v25);
    v7 = *(_BYTE **)(a1 + 16);
  }
  while ( 1 )
  {
    v8 = LdrpSearchPath(
           a1,
           (_DWORD)v7,
           (*(unsigned __int8 *)(a1 + 24) >> 3) & 1,
           (unsigned int)v21,
           (__int64)&v22,
           (__int64)&v20,
           (__int64)&v19[8],
           (__int64)&v17,
           (__int64)&v18);
    LoadedDllByNameLockHeld = v8;
    if ( v17 )
      *(_DWORD *)(v5 + 104) |= 1u;
    if ( v8 == -1073741515 )
      break;
    if ( v8 < 0 )
      goto LABEL_20;
LABEL_8:
    v4 = 1;
    LoadedDllByNameLockHeld = LdrpAppCompatRedirect(a1, (__int64)&v19[8], (int)&v20, (__int64)&v22, 0LL, v8);
    if ( LoadedDllByNameLockHeld < 0 )
      goto LABEL_20;
    if ( (*(_DWORD *)(a1 + 24) & 0x10000) != 0 )
      v18 |= 1u;
    v10 = LdrpHashUnicodeString(&v20);
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    LdrpRemoveDataTableEntry((__int64 *)v5);
    v11 = *(_DWORD *)(a1 + 24);
    v12 = &v19[8];
    if ( (v11 & 0x20) != 0 )
      LODWORD(v12) = 0;
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                (unsigned int)&v20,
                                (_DWORD)v12,
                                v11,
                                (unsigned int)v19,
                                v10);
    if ( LoadedDllByNameLockHeld != -1073741515 )
    {
      v3 = *(_QWORD *)v19;
      goto LABEL_18;
    }
    if ( (*(_BYTE *)(a1 + 24) & 8) == 0 )
    {
      v3 = *(_QWORD *)v19;
LABEL_16:
      LdrpFreeUnicodeString(v5 + 72);
      v13 = v20;
      *(_OWORD *)(v5 + 72) = *(_OWORD *)&v19[8];
      *(_OWORD *)(v5 + 88) = v13;
      v14 = (*(_BYTE *)(a1 + 24) & 0x20) == 0;
      *(_QWORD *)&v19[8] = 0LL;
      *(_QWORD *)&v19[16] = 0LL;
      if ( !v14 )
        LdrpInsertDataTableEntry(v5);
      goto LABEL_18;
    }
    v16 = LdrpFindLoadedDllByNameLockHeld(0, (unsigned int)&v19[8], 0, (unsigned int)v19, v10);
    v3 = *(_QWORD *)v19;
    LoadedDllByNameLockHeld = v16;
    if ( v16 >= 0 )
      *(_DWORD *)(*(_QWORD *)v19 + 104LL) |= 1u;
    if ( v16 == -1073741515 )
      goto LABEL_16;
LABEL_18:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( LoadedDllByNameLockHeld != -1073741515 )
      goto LABEL_20;
    LoadedDllByNameLockHeld = LdrpMapDllNtFileName(a1, &v22);
    if ( LoadedDllByNameLockHeld != 1073741838 )
      goto LABEL_20;
    if ( v24 != v23 )
      NtdllpFreeStringRoutine((__int64)v23);
    v22 = 0x1000000;
    v23 = v24;
    v24[0] = 0;
    LdrpFreeUnicodeString(&v19[8]);
  }
  if ( !v4 )
    goto LABEL_8;
  LoadedDllByNameLockHeld = -1073741701;
LABEL_20:
  if ( v3 )
  {
    LdrpLoadContextReplaceModule(a1);
  }
  else if ( LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(v18, a1);
  }
  if ( v24 != v23 )
    NtdllpFreeStringRoutine((__int64)v23);
  v22 = 0x1000000;
  v23 = v24;
  v24[0] = 0;
  LdrpFreeUnicodeString(&v19[8]);
  LdrpReleaseDllPath(v25);
  return (unsigned int)LoadedDllByNameLockHeld;
}
