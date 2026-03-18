/*
 * XREFs of FsRtlPrivateRemoveLock @ 0x1401E2C3C
 * Callers:
 *     FsRtlPrivateLock @ 0x14010499C (FsRtlPrivateLock.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140106130 (FsRtlPrivateCheckWaitingLocks.c)
 * Callees:
 *     FsRtlFastUnlockSingleExclusive @ 0x1401050D8 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1401052C0 (FsRtlFastUnlockSingleShared.c)
 */

__int64 __fastcall FsRtlPrivateRemoveLock(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // r9
  bool v4; // zf
  __int64 v6; // rax
  _RTL_SPLAY_LINKS *v7; // rdx
  int v9; // [rsp+28h] [rbp-30h]

  v3 = (_QWORD *)(a2 + 8);
  v4 = *(_BYTE *)(a2 + 16) == 0;
  v9 = *(_DWORD *)(a2 + 20);
  v6 = *(_QWORD *)(a2 + 32);
  v7 = *(_RTL_SPLAY_LINKS **)(a2 + 24);
  if ( v4 )
    return FsRtlFastUnlockSingleShared(a1, (__int64)v7, (unsigned __int64 *)a2, v3, v6, v9, 0LL, 1, a3);
  else
    return FsRtlFastUnlockSingleExclusive(a1, v7, (_RTL_SPLAY_LINKS **)a2, v3, v6, v9, 0LL, 1, a3);
}
