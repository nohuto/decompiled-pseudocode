/*
 * XREFs of RtlpSparseBitmapCtxCheckRangeArray @ 0x140273248
 * Callers:
 *     RtlpSparseBitmapCtxPrepareRanges @ 0x140273AF4 (RtlpSparseBitmapCtxPrepareRanges.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     RtlpSparseBitmapCtxLockExclusive @ 0x1402739E0 (RtlpSparseBitmapCtxLockExclusive.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x140273A9C (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCtxUnlockExclusive @ 0x140273B8C (RtlpSparseBitmapCtxUnlockExclusive.c)
 *     RtlpSparseBitmapCtxUnlockShared @ 0x140273BCC (RtlpSparseBitmapCtxUnlockShared.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxCheckRangeArray(__int64 a1, __int64 *a2)
{
  int v4; // edi
  __int64 i; // rax
  __int64 v6; // rbp
  void *v7; // rdi
  size_t v8; // rsi
  void *v9; // rax

  v4 = 0;
  for ( i = RtlpSparseBitmapCtxLockShared(a1, a1); !*(_QWORD *)(a1 + 8); i = RtlpSparseBitmapCtxLockShared(a1, a1) )
  {
    if ( v4 < 0 )
      break;
    RtlpSparseBitmapCtxUnlockShared(a1, a1, i);
    v6 = RtlpSparseBitmapCtxLockExclusive(a1, a1);
    if ( !*(_QWORD *)(a1 + 8) )
    {
      v7 = 0LL;
      v8 = 8LL * *(unsigned int *)(a1 + 52);
      if ( (*(_DWORD *)(a1 + 72) & 2) != 0 )
        goto LABEL_8;
      v9 = (void *)(*(__int64 (__fastcall **)(__int64))(a1 + 32))(8LL * *(unsigned int *)(a1 + 52));
      v7 = v9;
      if ( v9 )
      {
        memset(v9, 0, v8);
LABEL_8:
        *(_QWORD *)(a1 + 8) = v7;
        v4 = 0;
        goto LABEL_9;
      }
      v4 = -1073741670;
    }
LABEL_9:
    RtlpSparseBitmapCtxUnlockExclusive(a1, a1, v6);
  }
  *a2 = i;
  return (unsigned int)v4;
}
