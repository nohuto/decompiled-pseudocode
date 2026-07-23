/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x180021080
 * Callers:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x18005A5C4 (RtlpHpMetadataFree.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(void *a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // r15
  __int64 v3; // rdi
  int v4; // r12d
  _QWORD *v5; // r14
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  int *v8; // r10
  unsigned __int8 *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v15; // [rsp+40h] [rbp-58h]
  __int64 v16; // [rsp+48h] [rbp-50h] BYREF
  __int64 v17; // [rsp+50h] [rbp-48h]
  _QWORD *v18; // [rsp+58h] [rbp-40h]
  int *v19; // [rsp+60h] [rbp-38h]
  _QWORD *v20; // [rsp+68h] [rbp-30h]
  _QWORD *v21; // [rsp+70h] [rbp-28h]
  __int64 v22; // [rsp+B8h] [rbp+20h] BYREF

  if ( (RtlpHpHeapFeatures & 2) != 0 )
  {
    v1 = RtlpFreeHeapInternal(a1, (__int64)&v22);
    if ( v1 )
    {
      v2 = v22;
      if ( (_WORD)v22 )
      {
        v3 = v15;
        if ( !v15 )
          v3 = 16LL;
        v4 = 0;
        v5 = *(_QWORD **)(qword_180143898 + 8LL * (unsigned __int16)v22 - 8);
        v6 = v5[4];
        while ( v6 != v3 )
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange64(v5 + 4, v6 - v3, v6);
          if ( v7 == v6 )
            goto LABEL_9;
        }
        v4 = 1;
        RtlAcquireSRWLockExclusive(&RtlpHpTagContext);
        if ( _InterlockedExchangeAdd64(v5 + 4, -v3) == v3 )
        {
          *(_QWORD *)(qword_180143898 + 8LL * v2 - 8) = 0LL;
          v8 = &dword_180143888;
          v19 = &dword_180143888;
          v20 = v5;
          v16 = v5[1] & (-1LL << (dword_18014388C & 0x1F));
          v9 = (unsigned __int8 *)&v16;
          v10 = 8LL;
          v17 = 8LL;
          v11 = 314159LL;
          v22 = 314159LL;
          while ( v10 >= 8 )
          {
            v22 = *v9 + 37 * v11;
            v22 = 37 * v22 + v9[1];
            v22 = 37 * v22 + v9[2];
            v22 = 37 * v22 + v9[3];
            v22 = 37 * v22 + v9[4];
            v22 = 37 * v22 + v9[5];
            v22 = 37 * v22 + v9[6];
            v11 = 37 * v22 + v9[7];
            v22 = v11;
            v9 += 8;
            v10 -= 8LL;
            v17 = v10;
          }
          if ( v10 >= 1 )
          {
            switch ( (int)v10 )
            {
              case 1:
                goto LABEL_32;
              case 2:
                goto LABEL_31;
              case 3:
                goto LABEL_30;
              case 4:
                goto LABEL_29;
              case 5:
                goto LABEL_28;
              case 6:
                goto LABEL_27;
              case 7:
                v11 = *v9 + 37 * v11;
                v22 = v11;
                ++v9;
LABEL_27:
                v11 = *v9 + 37 * v11;
                v22 = v11;
                ++v9;
LABEL_28:
                v11 = *v9 + 37 * v11;
                v22 = v11;
                ++v9;
LABEL_29:
                v11 = *v9 + 37 * v11;
                v22 = v11;
                ++v9;
LABEL_30:
                v11 = *v9 + 37 * v11;
                v22 = v11;
                ++v9;
LABEL_31:
                v11 = *v9 + 37 * v11;
                v22 = v11;
                ++v9;
LABEL_32:
                v11 = *v9 + 37 * v11;
                v22 = v11;
                break;
            }
          }
          v12 = (_QWORD *)(*((_QWORD *)&dword_180143888 + 1)
                         + 8LL * ((unsigned int)v11 & (((unsigned int)dword_18014388C >> 5) - 1)));
          v21 = v12;
          v13 = v5;
          v18 = v5;
          if ( (*v5 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          {
            v12 = v21;
            v8 = v19;
            v13 = v18;
          }
          while ( (*v12 & 1) == 0 )
          {
            if ( (_QWORD *)*v12 == v13 )
            {
              *v12 = *v13;
              --*v8;
              *v13 |= 0x8000000000000002uLL;
              v20 = v12;
              break;
            }
            v12 = (_QWORD *)*v12;
          }
          word_1801438A0 = v2 - 1;
          --word_1801438A2;
          RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
          v4 = 0;
          RtlpHpMetadataFree(v5);
        }
LABEL_9:
        if ( v4 )
          RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
      }
    }
  }
  else
  {
    return (unsigned int)RtlpFreeHeapInternal(a1, 0LL);
  }
  return v1;
}
