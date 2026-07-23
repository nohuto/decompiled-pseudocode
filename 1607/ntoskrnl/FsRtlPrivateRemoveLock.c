/*
 * XREFs of FsRtlPrivateRemoveLock @ 0x1401B8DE8
 * Callers:
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400A9A4C (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateLock @ 0x1400C2A48 (FsRtlPrivateLock.c)
 * Callees:
 *     FsRtlFastUnlockSingleExclusive @ 0x1400C3054 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1400C31AC (FsRtlFastUnlockSingleShared.c)
 */

__int64 __fastcall FsRtlPrivateRemoveLock(__int64 a1, __int64 a2, char a3)
{
  _RTL_SPLAY_LINKS **v3; // r9
  bool v4; // zf
  _RTL_SPLAY_LINKS *v6; // rax
  _RTL_SPLAY_LINKS *v7; // rdx
  int v9; // [rsp+28h] [rbp-30h]

  v3 = (_RTL_SPLAY_LINKS **)(a2 + 8);
  v4 = *(_BYTE *)(a2 + 16) == 0;
  v9 = *(_DWORD *)(a2 + 20);
  v6 = *(_RTL_SPLAY_LINKS **)(a2 + 32);
  v7 = *(_RTL_SPLAY_LINKS **)(a2 + 24);
  if ( v4 )
    return FsRtlFastUnlockSingleShared(a1, v7, (_RTL_SPLAY_LINKS **)a2, v3, v6, v9, 0LL, 1, a3);
  else
    return FsRtlFastUnlockSingleExclusive(a1, v7, (_RTL_SPLAY_LINKS **)a2, v3, v6, v9, 0LL, 1, a3);
}
