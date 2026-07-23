/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x1800227B0
 * Callers:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTagContextAllocateTag @ 0x180050BF4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagMappingComparison @ 0x180076F88 (RtlpHpTagMappingComparison.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     RtlpHeapFatalExceptionFilter @ 0x1800E3070 (RtlpHeapFatalExceptionFilter.c)
 */

__int64 __fastcall RtlpHpAllocWithExceptionProtection(PVOID BaseAddress, signed __int64 Size)
{
  __int64 HeapInternal; // r8
  void *SubProcessTag; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned __int16 Tag; // r14
  unsigned __int8 *v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r11
  __int64 v17; // r10
  unsigned __int8 *v18; // r15
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v22; // [rsp+20h] [rbp-98h]
  __int64 v23; // [rsp+28h] [rbp-90h]
  unsigned __int8 *v24; // [rsp+30h] [rbp-88h]
  __int64 *v25; // [rsp+38h] [rbp-80h]
  __int64 v26; // [rsp+50h] [rbp-68h] BYREF
  __int64 v27; // [rsp+58h] [rbp-60h]
  _QWORD v28[2]; // [rsp+60h] [rbp-58h] BYREF

  if ( (RtlpHpHeapFeatures & 2) == 0 )
    return RtlpAllocateHeapInternal(BaseAddress, Size);
  if ( *((_DWORD *)BaseAddress + 4) != -571548178 || BaseAddress == RtlpHpMetadataHeap )
    goto LABEL_35;
  v28[0] = 0LL;
  v28[1] = 0LL;
  SubProcessTag = NtCurrentTeb()->SubProcessTag;
  v28[0] = SubProcessTag;
  v6 = (__int64)SubProcessTag - RtlpHpNullGUID;
  if ( SubProcessTag == (void *)RtlpHpNullGUID )
    v6 = -qword_1801533B8;
  if ( !v6 )
  {
LABEL_35:
    Tag = 0;
    goto LABEL_15;
  }
  if ( !word_180150944 )
    goto LABEL_17;
  v7 = *(_QWORD *)(qword_180150938 + 8LL * ((unsigned __int16)word_180150944 - 1));
  v8 = *(_QWORD *)(v7 + 16) - (_QWORD)SubProcessTag;
  if ( !v8 )
    v8 = *(_QWORD *)(v7 + 24);
  if ( v8 )
  {
LABEL_17:
    v10 = (unsigned __int8 *)v28;
    v24 = (unsigned __int8 *)v28;
    v11 = 16LL;
    v12 = 314159LL;
    v22 = 314159LL;
    while ( v11 >= 8 )
    {
      v12 = 37
          * (37 * (37 * (37 * (37 * (37 * (37 * (*v10 + 37 * v12) + v10[1]) + v10[2]) + v10[3]) + v10[4]) + v10[5])
           + v10[6])
          + v10[7];
      v22 = v12;
      v10 += 8;
      v24 = v10;
      v11 -= 8LL;
    }
    if ( v11 >= 1 )
    {
      switch ( (int)v11 )
      {
        case 1:
          goto LABEL_47;
        case 2:
          goto LABEL_46;
        case 3:
          goto LABEL_45;
        case 4:
          goto LABEL_44;
        case 5:
          goto LABEL_43;
        case 6:
          goto LABEL_42;
        case 7:
          v12 = *v10++ + 37 * v12;
LABEL_42:
          v12 = *v10++ + 37 * v12;
LABEL_43:
          v12 = *v10++ + 37 * v12;
LABEL_44:
          v12 = *v10++ + 37 * v12;
LABEL_45:
          v12 = *v10++ + 37 * v12;
LABEL_46:
          v12 = *v10++ + 37 * v12;
LABEL_47:
          v12 = *v10 + 37 * v12;
          v22 = v12;
          v24 = v10 + 1;
          break;
      }
    }
    v13 = 0LL;
    v14 = qword_180150930;
    while ( 2 )
    {
      v15 = dword_18015092C & 0x1F;
      v16 = -1LL << v15;
      v17 = v12 & (-1LL << v15);
      if ( v13 )
        goto LABEL_28;
      if ( (dword_18015092C & 0xFFFFFFE0) != 0 )
      {
        v26 = v12 & (-1LL << v15);
        v18 = (unsigned __int8 *)&v26;
        v25 = &v26;
        v19 = 8LL;
        v27 = 8LL;
        v20 = 314159LL;
        v23 = 314159LL;
        while ( v19 >= 8 )
        {
          v20 = 37
              * (37 * (37 * (37 * (37 * (37 * (37 * (*v18 + 37 * v20) + v18[1]) + v18[2]) + v18[3]) + v18[4]) + v18[5])
               + v18[6])
              + v18[7];
          v23 = v20;
          v18 += 8;
          v25 = (__int64 *)v18;
          v19 -= 8LL;
          v27 = v19;
        }
        if ( v19 >= 1 )
        {
          switch ( (int)v19 )
          {
            case 1:
              goto LABEL_39;
            case 2:
              goto LABEL_54;
            case 3:
              goto LABEL_53;
            case 4:
              goto LABEL_52;
            case 5:
              goto LABEL_51;
            case 6:
              goto LABEL_50;
            case 7:
              v20 = *v18++ + 37 * v20;
LABEL_50:
              v20 = *v18++ + 37 * v20;
LABEL_51:
              v20 = *v18++ + 37 * v20;
LABEL_52:
              v20 = *v18++ + 37 * v20;
LABEL_53:
              v20 = *v18++ + 37 * v20;
LABEL_54:
              v20 = *v18++ + 37 * v20;
LABEL_39:
              v20 = *v18 + 37 * v20;
              v23 = v20;
              v25 = (__int64 *)(v18 + 1);
              break;
          }
        }
        v15 = (unsigned int)v20 & (((unsigned int)dword_18015092C >> 5) - 1);
        v13 = v14 + 8 * v15;
        do
        {
LABEL_28:
          v13 = *(_QWORD *)v13;
          if ( (v13 & 1) != 0 )
          {
            v13 = 0LL;
            goto LABEL_31;
          }
        }
        while ( v17 != (v16 & *(_QWORD *)(v13 + 8)) );
        if ( !(unsigned int)RtlpHpTagMappingComparison(v13, v28) )
          continue;
LABEL_31:
        if ( v13 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 32), Size);
          Tag = *(_WORD *)(v13 + 40);
          if ( Tag )
            goto LABEL_14;
        }
      }
      break;
    }
    Tag = RtlpHpTagContextAllocateTag(v15, v28, v12, Size, v22, v23, v24, v25);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 32), Size);
    Tag = *(_WORD *)(v7 + 40);
  }
  if ( Tag )
LABEL_14:
    word_180150944 = Tag;
LABEL_15:
  HeapInternal = RtlpAllocateHeapInternal(BaseAddress, Size);
  if ( !HeapInternal && Tag )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_180150938 + 8LL * (Tag - 1)) + 32LL), -Size);
  return HeapInternal;
}
