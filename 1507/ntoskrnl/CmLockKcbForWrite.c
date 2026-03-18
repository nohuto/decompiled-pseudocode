/*
 * XREFs of CmLockKcbForWrite @ 0x1405B77C8
 * Callers:
 *     NtLockRegistryKey @ 0x1405B76B4 (NtLockRegistryKey.c)
 * Callees:
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 */

__int64 __fastcall CmLockKcbForWrite(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  signed __int32 v5; // eax
  signed __int32 v6; // ecx
  signed __int32 v7; // ett
  __int16 i; // ax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v13; // edi

  v4 = a1;
  CmpLockKcbExclusive(a1, a2, a3, a4);
  if ( (*(_DWORD *)(v4 + 4) & 0x20000) != 0 )
  {
    v13 = -1073741444;
LABEL_12:
    CmpUnlockKcb((char *)v4);
    return v13;
  }
  v5 = *(_DWORD *)v4;
  v6 = *(_DWORD *)v4 + 1;
  if ( *(_DWORD *)v4 == -1 )
  {
LABEL_11:
    v13 = -1073741790;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v7 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)v4, v6, v5);
    if ( v7 == v5 )
      break;
    v6 = v5 + 1;
    if ( v5 == -1 )
      goto LABEL_11;
  }
  for ( i = 160; ; i = 256 )
  {
    *(_WORD *)(v4 + 4) |= i;
    CmpUnlockKcb((char *)v4);
    v4 = *(_QWORD *)(v4 + 72);
    if ( !v4 || *(_QWORD *)(v4 + 32) == CmpMasterHive )
      break;
    CmpLockKcbExclusive(v4, v9, v10, v11);
  }
  return 0LL;
}
