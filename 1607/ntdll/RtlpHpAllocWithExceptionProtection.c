/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x1800227C0
 * Callers:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTagContextAllocateTag @ 0x180050C04 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagMappingComparison @ 0x180076F98 (RtlpHpTagMappingComparison.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     RtlpHeapFatalExceptionFilter @ 0x1800E2FB0 (RtlpHeapFatalExceptionFilter.c)
 */

__int64 __fastcall RtlpHpAllocWithExceptionProtection(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 HeapInternal; // r8
  void *SubProcessTag; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int16 Tag; // r14
  unsigned __int8 *v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // r11
  __int64 v19; // r10
  unsigned __int8 *v20; // r15
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v24; // [rsp+20h] [rbp-98h]
  __int64 v25; // [rsp+28h] [rbp-90h]
  unsigned __int8 *v26; // [rsp+30h] [rbp-88h]
  __int64 *v27; // [rsp+38h] [rbp-80h]
  __int64 v28; // [rsp+50h] [rbp-68h] BYREF
  __int64 v29; // [rsp+58h] [rbp-60h]
  _QWORD v30[2]; // [rsp+60h] [rbp-58h] BYREF

  v3 = a3;
  if ( (RtlpHpHeapFeatures & 2) == 0 )
    return RtlpAllocateHeapInternal(a1, a2, a3, 0LL);
  if ( *(_DWORD *)(a1 + 16) != -571548178 || a1 == RtlpHpMetadataHeap )
    goto LABEL_35;
  v30[0] = 0LL;
  v30[1] = 0LL;
  SubProcessTag = NtCurrentTeb()->SubProcessTag;
  v30[0] = SubProcessTag;
  v8 = (__int64)SubProcessTag - RtlpHpNullGUID;
  if ( SubProcessTag == (void *)RtlpHpNullGUID )
    v8 = -qword_1801533B8;
  if ( !v8 )
  {
LABEL_35:
    Tag = 0;
    goto LABEL_15;
  }
  if ( !word_180150944 )
    goto LABEL_17;
  v9 = *(_QWORD *)(qword_180150938 + 8LL * ((unsigned __int16)word_180150944 - 1));
  v10 = *(_QWORD *)(v9 + 16) - (_QWORD)SubProcessTag;
  if ( !v10 )
    v10 = *(_QWORD *)(v9 + 24);
  if ( v10 )
  {
LABEL_17:
    v12 = (unsigned __int8 *)v30;
    v26 = (unsigned __int8 *)v30;
    v13 = 16LL;
    v14 = 314159LL;
    v24 = 314159LL;
    while ( v13 >= 8 )
    {
      v14 = 37
          * (37 * (37 * (37 * (37 * (37 * (37 * (*v12 + 37 * v14) + v12[1]) + v12[2]) + v12[3]) + v12[4]) + v12[5])
           + v12[6])
          + v12[7];
      v24 = v14;
      v12 += 8;
      v26 = v12;
      v13 -= 8LL;
    }
    if ( v13 >= 1 )
    {
      switch ( (int)v13 )
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
          v14 = *v12++ + 37 * v14;
LABEL_42:
          v14 = *v12++ + 37 * v14;
LABEL_43:
          v14 = *v12++ + 37 * v14;
LABEL_44:
          v14 = *v12++ + 37 * v14;
LABEL_45:
          v14 = *v12++ + 37 * v14;
LABEL_46:
          v14 = *v12++ + 37 * v14;
LABEL_47:
          v14 = *v12 + 37 * v14;
          v24 = v14;
          v26 = v12 + 1;
          break;
      }
    }
    v15 = 0LL;
    v16 = qword_180150930;
    while ( 2 )
    {
      v17 = dword_18015092C & 0x1F;
      v18 = -1LL << v17;
      v19 = v14 & (-1LL << v17);
      if ( v15 )
        goto LABEL_28;
      if ( (dword_18015092C & 0xFFFFFFE0) != 0 )
      {
        v28 = v14 & (-1LL << v17);
        v20 = (unsigned __int8 *)&v28;
        v27 = &v28;
        v21 = 8LL;
        v29 = 8LL;
        v22 = 314159LL;
        v25 = 314159LL;
        while ( v21 >= 8 )
        {
          v22 = 37
              * (37 * (37 * (37 * (37 * (37 * (37 * (*v20 + 37 * v22) + v20[1]) + v20[2]) + v20[3]) + v20[4]) + v20[5])
               + v20[6])
              + v20[7];
          v25 = v22;
          v20 += 8;
          v27 = (__int64 *)v20;
          v21 -= 8LL;
          v29 = v21;
        }
        if ( v21 >= 1 )
        {
          switch ( (int)v21 )
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
              v22 = *v20++ + 37 * v22;
LABEL_50:
              v22 = *v20++ + 37 * v22;
LABEL_51:
              v22 = *v20++ + 37 * v22;
LABEL_52:
              v22 = *v20++ + 37 * v22;
LABEL_53:
              v22 = *v20++ + 37 * v22;
LABEL_54:
              v22 = *v20++ + 37 * v22;
LABEL_39:
              v22 = *v20 + 37 * v22;
              v25 = v22;
              v27 = (__int64 *)(v20 + 1);
              break;
          }
        }
        v17 = (unsigned int)v22 & (((unsigned int)dword_18015092C >> 5) - 1);
        v15 = v16 + 8 * v17;
        do
        {
LABEL_28:
          v15 = *(_QWORD *)v15;
          if ( (v15 & 1) != 0 )
          {
            v15 = 0LL;
            goto LABEL_31;
          }
        }
        while ( v19 != (v18 & *(_QWORD *)(v15 + 8)) );
        if ( !(unsigned int)RtlpHpTagMappingComparison(v15, v30) )
          continue;
LABEL_31:
        if ( v15 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 32), a2);
          Tag = *(_WORD *)(v15 + 40);
          if ( Tag )
            goto LABEL_14;
        }
      }
      break;
    }
    Tag = RtlpHpTagContextAllocateTag(v17, v30, v14, a2, v24, v25, v26, v27);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 32), a2);
    Tag = *(_WORD *)(v9 + 40);
  }
  if ( Tag )
LABEL_14:
    word_180150944 = Tag;
LABEL_15:
  HeapInternal = RtlpAllocateHeapInternal(a1, a2, v3, Tag);
  if ( !HeapInternal && Tag )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(qword_180150938 + 8LL * (Tag - 1)) + 32LL),
      -(__int64)a2);
  return HeapInternal;
}
