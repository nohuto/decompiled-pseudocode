/*
 * XREFs of RtlSparseBitmapCtxSubtractBitmap @ 0x1801008A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSparseBitmapCtxUnlockExclusive @ 0x18004FF20 (RtlpSparseBitmapCtxUnlockExclusive.c)
 *     RtlpSparseBitmapCtxLockExclusive @ 0x18004FF40 (RtlpSparseBitmapCtxLockExclusive.c)
 */

void __fastcall RtlSparseBitmapCtxSubtractBitmap(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // rsi
  __int64 i; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  int *v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rbp
  int v13; // ecx
  int v14; // r9d
  int j; // r10d
  int v16; // r11d
  int v17; // ecx

  v4 = ((unsigned __int64)*(unsigned int *)(a1 + 56) + 31) >> 5;
  RtlpSparseBitmapCtxLockExclusive(a1, (_RTL_SRWLOCK *)a1);
  RtlpSparseBitmapCtxLockExclusive(a2, (_RTL_SRWLOCK *)a2);
  if ( *(_QWORD *)(a1 + 8) )
  {
    if ( *(_QWORD *)(a2 + 8) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 52); i = (unsigned int)(i + 1) )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
        if ( (unsigned int)i < *(_DWORD *)(a2 + 52) )
          v9 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * i);
        else
          v9 = 0LL;
        if ( v8 )
        {
          if ( v9 )
          {
            v10 = (int *)(v8 + 24);
            if ( (_DWORD)v4 )
            {
              v11 = v9 + 24 - (_QWORD)v10;
              v12 = (unsigned int)v4;
              do
              {
                v13 = *v10;
                v14 = *v10 & ~*(int *)((char *)v10 + v11);
                if ( a3 )
                {
                  for ( j = 0; v13; v13 &= v13 - 1 )
                    ++j;
                  v16 = 0;
                  v17 = *v10 & ~*(int *)((char *)v10 + v11);
                  if ( v14 )
                  {
                    do
                    {
                      ++v16;
                      v17 &= v17 - 1;
                    }
                    while ( v17 );
                  }
                  *a3 += (unsigned int)(j - v16);
                }
                *v10++ = v14;
                --v12;
              }
              while ( v12 );
            }
          }
        }
      }
    }
  }
  RtlpSparseBitmapCtxUnlockExclusive(a1, (_RTL_SRWLOCK *)a1);
  RtlpSparseBitmapCtxUnlockExclusive(a2, (_RTL_SRWLOCK *)a2);
}
