/*
 * XREFs of RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100
 * Callers:
 *     RtlpHpExtrasGet @ 0x180019CBC (RtlpHpExtrasGet.c)
 *     RtlpHpReallocMove @ 0x18001AAB0 (RtlpHpReallocMove.c)
 *     RtlpHpFreeHeap @ 0x18001ABF8 (RtlpHpFreeHeap.c)
 *     RtlpHpReAllocateHeap @ 0x18001ADE8 (RtlpHpReAllocateHeap.c)
 *     RtlpHpReallocComputeSizes @ 0x18001B074 (RtlpHpReallocComputeSizes.c)
 *     RtlSizeHeap @ 0x18001BA80 (RtlSizeHeap.c)
 *     RtlpHpSizeHeap @ 0x18001BDD0 (RtlpHpSizeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180023D40 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x180025610 (RtlpAllocateHeapInternal.c)
 *     RtlpWalkHeapInternal @ 0x18004FCE4 (RtlpWalkHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x18005A8C8 (RtlpHpAllocateHeap.c)
 *     RtlpHpExtrasSetPresent @ 0x18005C9DC (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x18005CAC8 (RtlpHpSizeHeapInternal.c)
 *     RtlGetUserInfoHeap @ 0x1800744C0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180074870 (RtlSetUserValueHeap.c)
 *     RtlValidateHeap @ 0x1800756A0 (RtlValidateHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E02C0 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlpSparseBitmapCtxUnlockShared @ 0x180040240 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x180040260 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x180040284 (RtlpSparseBitmapCheckRangeArrayPage.c)
 */

__int64 __fastcall RtlSparseBitmapCtxCheckBitsInternal(__int64 a1, unsigned __int64 a2)
{
  int v2; // r12d
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rdi
  __int64 v8; // rbp
  unsigned int v9; // r10d
  unsigned __int8 v10; // al
  __int64 v12; // rcx
  _DWORD *v13; // r9
  _DWORD *v14; // r8
  bool i; // zf

  v2 = dword_1801435F0;
  v3 = 1;
  v4 = a2 % (unsigned int)dword_1801435F8;
  v5 = a2 / (unsigned int)dword_1801435F8;
  RtlpSparseBitmapCtxLockShared(&RtlpHpLargeAllocationBitmap, &RtlpHpLargeAllocationBitmap);
  v6 = 1LL;
  while ( 1 )
  {
    v7 = (unsigned int)(dword_1801435F8 - v4);
    if ( v6 < v7 )
      LODWORD(v7) = v6;
    if ( !v2 )
    {
      v3 = dword_180143608 & 1;
      goto LABEL_15;
    }
    if ( qword_1801435C8 )
    {
      if ( (unsigned __int8)RtlpSparseBitmapCheckRangeArrayPage(&RtlpHpLargeAllocationBitmap, (unsigned int)v5) )
      {
        v8 = *(_QWORD *)(qword_1801435C8 + 8LL * (unsigned int)v5);
        if ( v8 )
        {
          --v2;
          RtlpSparseBitmapCtxLockShared(
            &RtlpHpLargeAllocationBitmap,
            *(_QWORD *)(qword_1801435C8 + 8LL * (unsigned int)v5));
          v9 = v7 + v4 - 1;
          if ( v9 < *(_DWORD *)(v8 + 8) )
          {
            if ( (unsigned int)v7 <= 1 )
            {
              if ( (_DWORD)v7 != 1 )
                goto LABEL_13;
              v10 = _bittest(*(const signed __int32 **)(v8 + 16), v4);
LABEL_12:
              if ( !v10 )
                goto LABEL_13;
LABEL_14:
              RtlpSparseBitmapCtxUnlockShared(&RtlpHpLargeAllocationBitmap, v8);
              if ( !v3 )
                goto LABEL_15;
              goto LABEL_17;
            }
            v12 = *(_QWORD *)(v8 + 16);
            v13 = (_DWORD *)(v12 + 4 * ((unsigned __int64)(unsigned int)v4 >> 5));
            v14 = (_DWORD *)(v12 + 4 * ((unsigned __int64)v9 >> 5));
            if ( v13 != v14 )
            {
              for ( i = (*v13 & (-1 << v4)) == -1 << v4; i; i = *v13 == -1 )
              {
                if ( ++v13 == v14 )
                {
                  if ( (*v13 & (0xFFFFFFFF >> -(char)(v7 + v4))) == 0xFFFFFFFF >> -(char)(v7 + v4) )
                    goto LABEL_14;
                  v10 = 0;
                  goto LABEL_12;
                }
              }
              goto LABEL_13;
            }
            if ( (*v13 & (0xFFFFFFFF >> (32 - v7) << v4)) == 0xFFFFFFFF >> (32 - v7) << v4 )
              goto LABEL_14;
          }
LABEL_13:
          v3 = 0;
          goto LABEL_14;
        }
      }
    }
    if ( (dword_180143608 & 1) == 0 )
      break;
LABEL_17:
    LODWORD(v4) = 0;
    LODWORD(v5) = v5 + 1;
    v6 -= (unsigned int)v7;
    if ( !v6 )
      goto LABEL_15;
  }
  v3 = 0;
LABEL_15:
  RtlpSparseBitmapCtxUnlockShared(&RtlpHpLargeAllocationBitmap, &RtlpHpLargeAllocationBitmap);
  return v3;
}
