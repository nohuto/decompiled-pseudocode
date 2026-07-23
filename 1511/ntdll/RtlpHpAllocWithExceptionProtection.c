/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x180025060
 * Callers:
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x180025610 (RtlpAllocateHeapInternal.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpTagFree @ 0x180050324 (RtlpHpTagFree.c)
 *     RtlpHpTagContextAllocateTag @ 0x180059F30 (RtlpHpTagContextAllocateTag.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, __int64 a2, int a3)
{
  unsigned __int8 *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int16 v8; // r14
  __int64 v9; // rdx
  unsigned __int8 *v10; // r9
  __int64 v11; // r10
  __int64 v12; // r8
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 HeapInternal; // rbx
  __int64 v18; // [rsp+20h] [rbp-A8h]
  __int64 v19; // [rsp+28h] [rbp-A0h]
  __int64 *v20; // [rsp+30h] [rbp-98h]
  void **v21; // [rsp+38h] [rbp-90h]
  unsigned __int64 v23; // [rsp+48h] [rbp-80h]
  _DWORD *BaseAddress; // [rsp+50h] [rbp-78h]
  __int64 v25; // [rsp+58h] [rbp-70h] BYREF
  __int64 v26; // [rsp+60h] [rbp-68h]
  __int64 v27; // [rsp+68h] [rbp-60h]
  __int64 v28; // [rsp+70h] [rbp-58h]
  void *SubProcessTag; // [rsp+78h] [rbp-50h] BYREF
  __int64 v30; // [rsp+80h] [rbp-48h]

  BaseAddress = a1;
  if ( (RtlpHpHeapFeatures & 2) != 0 )
  {
    if ( a1[4] != -571548178
      || a1 == RtlpHpMetadataHeap
      || (SubProcessTag = 0LL,
          v30 = 0LL,
          SubProcessTag = NtCurrentTeb()->SubProcessTag,
          SubProcessTag == (void *)RtlpHpNullGUID)
      && v30 == qword_180146270 )
    {
      v8 = 0;
    }
    else
    {
      v4 = (unsigned __int8 *)&SubProcessTag;
      v21 = &SubProcessTag;
      v5 = 16LL;
      v28 = 16LL;
      v6 = 314159LL;
      v19 = 314159LL;
      while ( v5 >= 8 )
      {
        v6 = 37
           * (37 * (37 * (37 * (37 * (37 * (37 * (*v4 + 37 * v6) + v4[1]) + v4[2]) + v4[3]) + v4[4]) + v4[5]) + v4[6])
           + v4[7];
        v19 = v6;
        v4 += 8;
        v21 = (void **)v4;
        v5 -= 8LL;
        v28 = v5;
      }
      if ( (unsigned __int64)(v5 - 1) <= 6 )
      {
        switch ( (int)v5 )
        {
          case 1:
            goto LABEL_17;
          case 2:
            goto LABEL_16;
          case 3:
            goto LABEL_15;
          case 4:
            goto LABEL_14;
          case 5:
            goto LABEL_13;
          case 6:
            goto LABEL_12;
          case 7:
            v6 = *v4++ + 37 * v6;
LABEL_12:
            v6 = *v4++ + 37 * v6;
LABEL_13:
            v6 = *v4++ + 37 * v6;
LABEL_14:
            v6 = *v4++ + 37 * v6;
LABEL_15:
            v6 = *v4++ + 37 * v6;
LABEL_16:
            v6 = *v4++ + 37 * v6;
LABEL_17:
            v6 = *v4 + 37 * v6;
            v19 = v6;
            v21 = (void **)(v4 + 1);
            break;
        }
      }
      v7 = a2;
      if ( !a2 )
        v7 = 16LL;
      v23 = v7;
      RtlAcquireSRWLockShared(&RtlpHpTagContext);
      v8 = 0;
      v9 = 0LL;
      while ( 2 )
      {
        if ( v9 )
          goto LABEL_36;
        if ( (dword_18014388C & 0xFFFFFFE0) != 0 )
        {
          v25 = v6 & (-1LL << (dword_18014388C & 0x1F));
          v10 = (unsigned __int8 *)&v25;
          v20 = &v25;
          v11 = 8LL;
          v26 = 8LL;
          v12 = 314159LL;
          v18 = 314159LL;
          while ( v11 >= 8 )
          {
            v12 = 37
                * (37
                 * (37 * (37 * (37 * (37 * (37 * (*v10 + 37 * v12) + v10[1]) + v10[2]) + v10[3]) + v10[4]) + v10[5])
                 + v10[6])
                + v10[7];
            v18 = v12;
            v10 += 8;
            v20 = (__int64 *)v10;
            v11 -= 8LL;
            v26 = v11;
          }
          if ( (unsigned __int64)(v11 - 1) <= 6 )
          {
            switch ( (int)v11 )
            {
              case 1:
                goto LABEL_34;
              case 2:
                goto LABEL_33;
              case 3:
                goto LABEL_32;
              case 4:
                goto LABEL_31;
              case 5:
                goto LABEL_30;
              case 6:
                goto LABEL_29;
              case 7:
                v12 = *v10++ + 37 * v12;
LABEL_29:
                v12 = *v10++ + 37 * v12;
LABEL_30:
                v12 = *v10++ + 37 * v12;
LABEL_31:
                v12 = *v10++ + 37 * v12;
LABEL_32:
                v12 = *v10++ + 37 * v12;
LABEL_33:
                v12 = *v10++ + 37 * v12;
LABEL_34:
                v12 = *v10 + 37 * v12;
                v18 = v12;
                v20 = (__int64 *)(v10 + 1);
                break;
            }
          }
          v9 = qword_180143890 + 8LL * ((unsigned int)v12 & (((unsigned int)dword_18014388C >> 5) - 1));
          do
          {
LABEL_36:
            v9 = *(_QWORD *)v9;
            if ( (v9 & 1) != 0 )
            {
              v9 = 0LL;
              goto LABEL_43;
            }
          }
          while ( (v6 & (-1LL << (dword_18014388C & 0x1F))) != ((-1LL << (dword_18014388C & 0x1F)) & *(_QWORD *)(v9 + 8)) );
          if ( SubProcessTag != *(void **)(v9 + 16) || v30 != *(_QWORD *)(v9 + 24) )
            continue;
LABEL_43:
          if ( !v9 )
            goto LABEL_45;
          v13 = v23;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 32), v23);
          v8 = *(_WORD *)(v9 + 40);
        }
        else
        {
LABEL_45:
          v13 = v23;
        }
        break;
      }
      RtlReleaseSRWLockShared(&RtlpHpTagContext);
      if ( !v8 )
        v8 = RtlpHpTagContextAllocateTag(v14, &SubProcessTag, v6, v13, v18, v19, v20, v21, a3);
      a1 = BaseAddress;
    }
    HeapInternal = RtlpAllocateHeapInternal(a1);
    if ( !HeapInternal && v8 )
      RtlpHpTagFree(v15, v8, a2);
    v27 = HeapInternal;
  }
  else
  {
    HeapInternal = RtlpAllocateHeapInternal(a1);
    v27 = HeapInternal;
  }
  return HeapInternal;
}
