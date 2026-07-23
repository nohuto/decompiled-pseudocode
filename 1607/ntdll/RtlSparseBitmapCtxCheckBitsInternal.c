/*
 * XREFs of RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DC0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlSetUserValueHeap @ 0x180029040 (RtlSetUserValueHeap.c)
 *     RtlpHpExtrasGet @ 0x18002925C (RtlpHpExtrasGet.c)
 *     RtlpHpReallocMove @ 0x1800430A0 (RtlpHpReallocMove.c)
 *     RtlpHpReAllocateHeap @ 0x18004376C (RtlpHpReAllocateHeap.c)
 *     RtlpHpReallocComputeSizes @ 0x180043A14 (RtlpHpReallocComputeSizes.c)
 *     RtlSizeHeap @ 0x180046170 (RtlSizeHeap.c)
 *     RtlpHpSizeHeap @ 0x180046360 (RtlpHpSizeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F80 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpFreeHeap @ 0x180047A60 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpWalkHeapInternal @ 0x18004D354 (RtlpWalkHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x1800507C8 (RtlpHpAllocateHeap.c)
 *     RtlpHpExtrasSetPresent @ 0x18005172C (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x1800519DC (RtlpHpSizeHeapInternal.c)
 *     RtlValidateHeap @ 0x180076850 (RtlValidateHeap.c)
 *     RtlGetUserInfoHeap @ 0x18007AB40 (RtlGetUserInfoHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E94E0 (RtlSetUserFlagsHeap.c)
 *     RtlSparseBitmapCtxAreAllClear @ 0x180100330 (RtlSparseBitmapCtxAreAllClear.c)
 *     RtlSparseBitmapCtxAreAllSet @ 0x180100340 (RtlSparseBitmapCtxAreAllSet.c)
 *     RtlSparseBitmapCtxCheckBit @ 0x180100360 (RtlSparseBitmapCtxCheckBit.c)
 * Callees:
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE04 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x18004FE24 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE48 (RtlpSparseBitmapCheckRangeArrayPage.c)
 */

__int64 __fastcall RtlSparseBitmapCtxCheckBitsInternal(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r13
  unsigned int v9; // ebx
  int v10; // r9d
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int v14; // r10d
  unsigned __int8 v15; // al
  int v17; // ebx
  __int64 v18; // rcx
  _DWORD *v19; // r8
  _DWORD *v20; // r9
  bool v21; // zf
  bool i; // zf
  unsigned int v23; // r8d
  __int64 v24; // rcx
  _DWORD *v25; // r9
  _DWORD *v26; // rdx
  bool j; // zf
  int v28; // [rsp+50h] [rbp+8h]
  int v29; // [rsp+50h] [rbp+8h]

  v7 = a2 % *(unsigned int *)(a1 + 56);
  v8 = a2 / *(unsigned int *)(a1 + 56);
  v28 = *(_DWORD *)(a1 + 48);
  v9 = 1;
  RtlpSparseBitmapCtxLockShared(a1, a1);
  if ( !a3 )
    goto LABEL_17;
  v10 = v28;
  while ( 1 )
  {
    v11 = (unsigned int)(*(_DWORD *)(a1 + 56) - v7);
    if ( a3 < v11 )
      LODWORD(v11) = a3;
    if ( !v10 )
      break;
    if ( *(_QWORD *)(a1 + 8) )
    {
      if ( (unsigned __int8)RtlpSparseBitmapCheckRangeArrayPage(a1, (unsigned int)v8) )
      {
        v12 = *(_QWORD *)(a1 + 8);
        v13 = *(_QWORD *)(v12 + 8LL * (unsigned int)v8);
        if ( v13 )
        {
          v29 = v10 - 1;
          RtlpSparseBitmapCtxLockShared(a1, *(_QWORD *)(v12 + 8LL * (unsigned int)v8));
          if ( a4 )
          {
            v14 = v11 + v7 - 1;
            if ( v14 >= *(_DWORD *)(v13 + 8) )
              goto LABEL_15;
            if ( (unsigned int)v11 <= 1 )
            {
              if ( (_DWORD)v11 != 1 )
                goto LABEL_15;
              v15 = _bittest(*(const signed __int32 **)(v13 + 16), v7);
LABEL_14:
              if ( !v15 )
                goto LABEL_15;
LABEL_16:
              RtlpSparseBitmapCtxUnlockShared(a1, v13);
              if ( !v9 )
                goto LABEL_17;
              v10 = v29;
              goto LABEL_19;
            }
            v18 = *(_QWORD *)(v13 + 16);
            v19 = (_DWORD *)(v18 + 4 * ((unsigned __int64)(unsigned int)v7 >> 5));
            v20 = (_DWORD *)(v18 + 4 * ((unsigned __int64)v14 >> 5));
            if ( v19 == v20 )
            {
              v21 = (*v19 & (0xFFFFFFFF >> (32 - v11) << v7)) == 0xFFFFFFFF >> (32 - v11) << v7;
              goto LABEL_49;
            }
            for ( i = (*v19 & (-1 << v7)) == -1 << v7; i; i = *v19 == -1 )
            {
              if ( ++v19 == v20 )
              {
                if ( (*v19 & (0xFFFFFFFF >> -(char)(v11 + v7))) == 0xFFFFFFFF >> -(char)(v11 + v7) )
                  goto LABEL_16;
                v15 = 0;
                goto LABEL_14;
              }
            }
          }
          else
          {
            v23 = v11 + v7 - 1;
            if ( v23 >= *(_DWORD *)(v13 + 8) )
              goto LABEL_15;
            if ( (unsigned int)v11 <= 1 )
            {
              if ( (_DWORD)v11 != 1 || _bittest(*(const signed __int32 **)(v13 + 16), v7) )
                goto LABEL_15;
              goto LABEL_16;
            }
            v24 = *(_QWORD *)(v13 + 16);
            v25 = (_DWORD *)(v24 + 4 * ((unsigned __int64)(unsigned int)v7 >> 5));
            v26 = (_DWORD *)(v24 + 4 * ((unsigned __int64)v23 >> 5));
            if ( v25 == v26 )
            {
              v21 = ((0xFFFFFFFF >> (32 - v11) << v7) & *v25) == 0;
LABEL_49:
              if ( !v21 )
                goto LABEL_15;
              goto LABEL_16;
            }
            for ( j = ((-1 << v7) & *v25) == 0; j; j = *v25 == 0 )
            {
              if ( ++v25 == v26 )
              {
                v21 = ((0xFFFFFFFF >> -(char)(v11 + v7)) & *v25) == 0;
                goto LABEL_49;
              }
            }
          }
LABEL_15:
          v9 = 0;
          goto LABEL_16;
        }
      }
    }
    if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
    {
      if ( !a4 )
      {
LABEL_26:
        v9 = 0;
        goto LABEL_17;
      }
    }
    else if ( a4 )
    {
      goto LABEL_26;
    }
LABEL_19:
    LODWORD(v7) = 0;
    LODWORD(v8) = v8 + 1;
    a3 -= (unsigned int)v11;
    if ( !a3 )
      goto LABEL_17;
  }
  if ( a4 )
    v17 = *(_DWORD *)(a1 + 72);
  else
    LOBYTE(v17) = ~*(_BYTE *)(a1 + 72);
  v9 = v17 & 1;
LABEL_17:
  RtlpSparseBitmapCtxUnlockShared(a1, a1);
  return v9;
}
