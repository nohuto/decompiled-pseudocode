/*
 * XREFs of RtlSparseBitmapCtxOrBitmap @ 0x180100760
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSparseBitmapCtxPrepareRanges @ 0x18004FA10 (RtlpSparseBitmapCtxPrepareRanges.c)
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE14 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x18004FE34 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE58 (RtlpSparseBitmapCheckRangeArrayPage.c)
 */

__int64 __fastcall RtlSparseBitmapCtxOrBitmap(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 i; // rdi
  __int64 v8; // r15
  __int64 v9; // r9
  _DWORD *v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  v4 = RtlpSparseBitmapCtxPrepareRanges(a1, (__int64)&v14, 0, 1u, 0, 2);
  if ( v4 >= 0 )
  {
    RtlpSparseBitmapCtxLockShared(a2, (volatile signed __int64 *)a2, v5, v6);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 52); i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)(a2 + 8) )
      {
        if ( RtlpSparseBitmapCheckRangeArrayPage(a2, i) )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * i);
          if ( v8 )
          {
            v4 = RtlpSparseBitmapCtxPrepareRanges(a1, (__int64)&v14, i, (int)i + 1, 1, 2);
            if ( v4 < 0 )
              goto LABEL_15;
            v9 = 0LL;
            if ( *(_QWORD *)(a1 + 8) && RtlpSparseBitmapCheckRangeArrayPage(a1, i) )
              v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
            v10 = (_DWORD *)(v9 + 24);
            v11 = (4 * (((unsigned __int64)*(unsigned int *)(a1 + 56) + 31) >> 5)) >> 2;
            if ( (_DWORD)v11 )
            {
              v12 = (unsigned int)v11;
              do
              {
                *v10 |= *(_DWORD *)((char *)v10 + v8 - v9);
                ++v10;
                --v12;
              }
              while ( v12 );
            }
          }
        }
      }
    }
    v4 = 0;
LABEL_15:
    RtlpSparseBitmapCtxUnlockShared(a1, (volatile signed __int64 *)a1);
    RtlpSparseBitmapCtxUnlockShared(a2, (volatile signed __int64 *)a2);
  }
  return (unsigned int)v4;
}
