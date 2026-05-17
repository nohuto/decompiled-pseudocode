/*
 * XREFs of RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC
 * Callers:
 *     RtlSizeHeap @ 0x18002A610 (RtlSizeHeap.c)
 *     RtlpHpSizeHeap @ 0x18002A810 (RtlpHpSizeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18002B170 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpReAllocateHeapInternal @ 0x18002DA50 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18002ED90 (RtlpAllocateHeapInternal.c)
 *     RtlpHpReAllocateHeap @ 0x180037B9C (RtlpHpReAllocateHeap.c)
 *     RtlpHpSizeHeapInternal @ 0x180037E74 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpReallocMove @ 0x180037FD0 (RtlpHpReallocMove.c)
 *     RtlpHpFreeHeap @ 0x180038098 (RtlpHpFreeHeap.c)
 *     RtlpValidateHeapInternal @ 0x180038748 (RtlpValidateHeapInternal.c)
 *     RtlpGetUserInfoHeapInternal @ 0x180057D00 (RtlpGetUserInfoHeapInternal.c)
 *     RtlpSetUserValueHeapInternal @ 0x180058098 (RtlpSetUserValueHeapInternal.c)
 *     RtlpHpExtrasGet @ 0x1800582D4 (RtlpHpExtrasGet.c)
 *     RtlpHpAllocateHeap @ 0x1800589AC (RtlpHpAllocateHeap.c)
 *     RtlpHpExtrasSetPresent @ 0x18006A44C (RtlpHpExtrasSetPresent.c)
 *     RtlpSetUserFlagsHeapInternal @ 0x1800DA634 (RtlpSetUserFlagsHeapInternal.c)
 *     RtlpWalkHeapInternal @ 0x1800DB648 (RtlpWalkHeapInternal.c)
 *     RtlpFreeHeapInternal @ 0x1800DD1F4 (RtlpFreeHeapInternal.c)
 *     RtlpSizeHeapInternal @ 0x1800DD7F8 (RtlpSizeHeapInternal.c)
 *     RtlpHpVirtAllocateHeap @ 0x1800EAA94 (RtlpHpVirtAllocateHeap.c)
 *     RtlpHpVirtFindHeapByAlloc @ 0x1800EAB58 (RtlpHpVirtFindHeapByAlloc.c)
 *     RtlpHpVirtReAllocateHeap @ 0x1800EBA84 (RtlpHpVirtReAllocateHeap.c)
 * Callees:
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18005520C (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x18005522C (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x180055250 (RtlpSparseBitmapCheckRangeArrayPage.c)
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

  v2 = dword_1801445B0;
  v3 = 1;
  v4 = a2 % (unsigned int)dword_1801445B8;
  v5 = a2 / (unsigned int)dword_1801445B8;
  RtlpSparseBitmapCtxLockShared(&RtlpHpLargeAllocationBitmap, &RtlpHpLargeAllocationBitmap);
  v6 = 1LL;
  while ( 1 )
  {
    v7 = (unsigned int)(dword_1801445B8 - v4);
    if ( v6 < v7 )
      LODWORD(v7) = v6;
    if ( !v2 )
    {
      v3 = dword_1801445C8 & 1;
      goto LABEL_18;
    }
    if ( qword_180144588 )
    {
      if ( (unsigned __int8)RtlpSparseBitmapCheckRangeArrayPage(&RtlpHpLargeAllocationBitmap, (unsigned int)v5) )
      {
        v8 = *(_QWORD *)(qword_180144588 + 8LL * (unsigned int)v5);
        if ( v8 )
        {
          --v2;
          RtlpSparseBitmapCtxLockShared(
            &RtlpHpLargeAllocationBitmap,
            *(_QWORD *)(qword_180144588 + 8LL * (unsigned int)v5));
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
                goto LABEL_18;
              goto LABEL_15;
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
    if ( (dword_1801445C8 & 1) == 0 )
      break;
LABEL_15:
    LODWORD(v4) = 0;
    LODWORD(v5) = v5 + 1;
    v6 -= (unsigned int)v7;
    if ( !v6 )
      goto LABEL_18;
  }
  v3 = 0;
LABEL_18:
  RtlpSparseBitmapCtxUnlockShared(&RtlpHpLargeAllocationBitmap, &RtlpHpLargeAllocationBitmap);
  return v3;
}
