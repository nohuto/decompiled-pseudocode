/*
 * XREFs of RtlSparseBitmapCtxOrBitmap @ 0x1801006A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSparseBitmapCtxPrepareRanges @ 0x18004FA00 (RtlpSparseBitmapCtxPrepareRanges.c)
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE04 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x18004FE24 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE48 (RtlpSparseBitmapCheckRangeArrayPage.c)
 */

__int64 __fastcall RtlSparseBitmapCtxOrBitmap(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 i; // rdi
  __int64 v6; // r15
  __int64 v7; // r9
  _DWORD *v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = RtlpSparseBitmapCtxPrepareRanges(a1, (__int64)&v12, 0, 1u, 0, 2);
  if ( v4 >= 0 )
  {
    RtlpSparseBitmapCtxLockShared(a2, (_RTL_SRWLOCK *)a2);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 52); i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)(a2 + 8) )
      {
        if ( RtlpSparseBitmapCheckRangeArrayPage(a2, i) )
        {
          v6 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * i);
          if ( v6 )
          {
            v4 = RtlpSparseBitmapCtxPrepareRanges(a1, (__int64)&v12, i, (int)i + 1, 1, 2);
            if ( v4 < 0 )
              goto LABEL_15;
            v7 = 0LL;
            if ( *(_QWORD *)(a1 + 8) && RtlpSparseBitmapCheckRangeArrayPage(a1, i) )
              v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
            v8 = (_DWORD *)(v7 + 24);
            v9 = (4 * (((unsigned __int64)*(unsigned int *)(a1 + 56) + 31) >> 5)) >> 2;
            if ( (_DWORD)v9 )
            {
              v10 = (unsigned int)v9;
              do
              {
                *v8 |= *(_DWORD *)((char *)v8 + v6 - v7);
                ++v8;
                --v10;
              }
              while ( v10 );
            }
          }
        }
      }
    }
    v4 = 0;
LABEL_15:
    RtlpSparseBitmapCtxUnlockShared(a1, (_RTL_SRWLOCK *)a1);
    RtlpSparseBitmapCtxUnlockShared(a2, (_RTL_SRWLOCK *)a2);
  }
  return (unsigned int)v4;
}
