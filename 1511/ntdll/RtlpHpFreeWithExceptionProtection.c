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

__int64 __fastcall RtlpHpFreeWithExceptionProtection(int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v4; // r15
  __int64 v5; // rdi
  int v6; // r12d
  _QWORD *v7; // r14
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  int *v10; // r10
  unsigned __int8 *v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  __int64 v17; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+48h] [rbp-50h] BYREF
  __int64 v19; // [rsp+50h] [rbp-48h]
  _QWORD *v20; // [rsp+58h] [rbp-40h]
  int *v21; // [rsp+60h] [rbp-38h]
  _QWORD *v22; // [rsp+68h] [rbp-30h]
  _QWORD *v23; // [rsp+70h] [rbp-28h]
  __int64 v24; // [rsp+B8h] [rbp+20h] BYREF

  if ( (RtlpHpHeapFeatures & 2) != 0 )
  {
    v3 = RtlpFreeHeapInternal(a1, a2, a3, (unsigned int)&v17, (__int64)&v24);
    if ( v3 )
    {
      v4 = v24;
      if ( (_WORD)v24 )
      {
        v5 = v17;
        if ( !v17 )
        {
          v5 = 16LL;
          v17 = 16LL;
        }
        v6 = 0;
        v7 = *(_QWORD **)(qword_180143898 + 8LL * (unsigned __int16)v24 - 8);
        v8 = v7[4];
        while ( v8 != v5 )
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange64(v7 + 4, v8 - v5, v8);
          if ( v9 == v8 )
            goto LABEL_9;
        }
        v6 = 1;
        RtlAcquireSRWLockExclusive(&RtlpHpTagContext);
        if ( _InterlockedExchangeAdd64(v7 + 4, -v5) == v5 )
        {
          *(_QWORD *)(qword_180143898 + 8LL * v4 - 8) = 0LL;
          v10 = &dword_180143888;
          v21 = &dword_180143888;
          v22 = v7;
          v18 = v7[1] & (-1LL << (dword_18014388C & 0x1F));
          v11 = (unsigned __int8 *)&v18;
          v12 = 8LL;
          v19 = 8LL;
          v13 = 314159LL;
          v24 = 314159LL;
          while ( v12 >= 8 )
          {
            v24 = *v11 + 37 * v13;
            v24 = 37 * v24 + v11[1];
            v24 = 37 * v24 + v11[2];
            v24 = 37 * v24 + v11[3];
            v24 = 37 * v24 + v11[4];
            v24 = 37 * v24 + v11[5];
            v24 = 37 * v24 + v11[6];
            v13 = 37 * v24 + v11[7];
            v24 = v13;
            v11 += 8;
            v12 -= 8LL;
            v19 = v12;
          }
          if ( v12 >= 1 )
          {
            switch ( (int)v12 )
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
                v13 = *v11 + 37 * v13;
                v24 = v13;
                ++v11;
LABEL_27:
                v13 = *v11 + 37 * v13;
                v24 = v13;
                ++v11;
LABEL_28:
                v13 = *v11 + 37 * v13;
                v24 = v13;
                ++v11;
LABEL_29:
                v13 = *v11 + 37 * v13;
                v24 = v13;
                ++v11;
LABEL_30:
                v13 = *v11 + 37 * v13;
                v24 = v13;
                ++v11;
LABEL_31:
                v13 = *v11 + 37 * v13;
                v24 = v13;
                ++v11;
LABEL_32:
                v13 = *v11 + 37 * v13;
                v24 = v13;
                break;
            }
          }
          v14 = (_QWORD *)(*((_QWORD *)&dword_180143888 + 1)
                         + 8LL * ((unsigned int)v13 & (((unsigned int)dword_18014388C >> 5) - 1)));
          v23 = v14;
          v15 = v7;
          v20 = v7;
          if ( (*v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          {
            v14 = v23;
            v10 = v21;
            v15 = v20;
          }
          while ( (*v14 & 1) == 0 )
          {
            if ( (_QWORD *)*v14 == v15 )
            {
              *v14 = *v15;
              --*v10;
              *v15 |= 0x8000000000000002uLL;
              v22 = v14;
              break;
            }
            v14 = (_QWORD *)*v14;
          }
          word_1801438A0 = v4 - 1;
          --word_1801438A2;
          RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
          v6 = 0;
          RtlpHpMetadataFree(v7);
        }
LABEL_9:
        if ( v6 )
          RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
      }
    }
  }
  else
  {
    return (unsigned int)RtlpFreeHeapInternal(a1, a2, a3, 0, 0LL);
  }
  return v3;
}
