/*
 * XREFs of RtlSparseBitmapCtxMetadataForBit @ 0x1801005C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE04 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x18004FE24 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE48 (RtlpSparseBitmapCheckRangeArrayPage.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlSparseBitmapCtxMetadataForBit(__int64 a1, unsigned __int64 a2, void *a3)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // r14
  unsigned int v8; // r9d
  __int64 v9; // rax
  _RTL_SRWLOCK *v10; // rsi
  int v11; // ecx
  char *v12; // rax

  RtlpSparseBitmapCtxLockShared(a1, (_RTL_SRWLOCK *)a1);
  v6 = 0;
  if ( *(_DWORD *)(a1 + 68) )
  {
    v7 = a2 % *(unsigned int *)(a1 + 56);
    if ( *(_QWORD *)(a1 + 8)
      && RtlpSparseBitmapCheckRangeArrayPage(a1, a2 / *(unsigned int *)(a1 + 56))
      && (v9 = *(_QWORD *)(a1 + 8), (v10 = *(_RTL_SRWLOCK **)(v9 + 8LL * v8)) != 0LL) )
    {
      RtlpSparseBitmapCtxLockShared(a1, *(_RTL_SRWLOCK **)(v9 + 8LL * v8));
      v11 = *(_DWORD *)(a1 + 68);
      if ( v11 )
        v12 = (char *)v10 + *(unsigned int *)(a1 + 64);
      else
        v12 = 0LL;
      memmove(a3, &v12[(unsigned int)(v7 * v11)], *(unsigned int *)(a1 + 68));
      RtlpSparseBitmapCtxUnlockShared(a1, v10);
    }
    else
    {
      v6 = -1073741275;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  RtlpSparseBitmapCtxUnlockShared(a1, (_RTL_SRWLOCK *)a1);
  return v6;
}
