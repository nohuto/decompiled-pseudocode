/*
 * XREFs of RtlSparseBitmapCtxSubtractBitmap @ 0x180100960
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSparseBitmapCtxUnlockExclusive @ 0x18004FF30 (RtlpSparseBitmapCtxUnlockExclusive.c)
 *     RtlpSparseBitmapCtxLockExclusive @ 0x18004FF50 (RtlpSparseBitmapCtxLockExclusive.c)
 */

signed __int64 __fastcall RtlSparseBitmapCtxSubtractBitmap(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 i; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  int *v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rbp
  int v16; // ecx
  int v17; // r9d
  int j; // r10d
  int v19; // r11d
  int v20; // ecx

  v5 = ((unsigned __int64)*(unsigned int *)(a1 + 56) + 31) >> 5;
  RtlpSparseBitmapCtxLockExclusive(a1, (char *)a1, (__int64)a3, a4);
  RtlpSparseBitmapCtxLockExclusive(a2, (char *)a2, v8, v9);
  if ( *(_QWORD *)(a1 + 8) )
  {
    if ( *(_QWORD *)(a2 + 8) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 52); i = (unsigned int)(i + 1) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
        if ( (unsigned int)i < *(_DWORD *)(a2 + 52) )
          v12 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * i);
        else
          v12 = 0LL;
        if ( v11 )
        {
          if ( v12 )
          {
            v13 = (int *)(v11 + 24);
            if ( (_DWORD)v5 )
            {
              v14 = v12 + 24 - (_QWORD)v13;
              v15 = (unsigned int)v5;
              do
              {
                v16 = *v13;
                v17 = *v13 & ~*(int *)((char *)v13 + v14);
                if ( a3 )
                {
                  for ( j = 0; v16; v16 &= v16 - 1 )
                    ++j;
                  v19 = 0;
                  v20 = *v13 & ~*(int *)((char *)v13 + v14);
                  if ( v17 )
                  {
                    do
                    {
                      ++v19;
                      v20 &= v20 - 1;
                    }
                    while ( v20 );
                  }
                  *a3 += (unsigned int)(j - v19);
                }
                *v13++ = v17;
                --v15;
              }
              while ( v15 );
            }
          }
        }
      }
    }
  }
  RtlpSparseBitmapCtxUnlockExclusive(a1, (volatile signed __int64 *)a1);
  return RtlpSparseBitmapCtxUnlockExclusive(a2, (volatile signed __int64 *)a2);
}
