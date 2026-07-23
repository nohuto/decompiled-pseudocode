/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x1800270C0
 * Callers:
 *     RtlpHpReallocMove @ 0x18001AAB0 (RtlpHpReallocMove.c)
 *     RtlpAllocateHeapInternal @ 0x180025610 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x18005A8C8 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18001A548 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18001B87C (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18001D85C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpLfhBucketUsageUpdate @ 0x18001D9E4 (RtlpLfhBucketUsageUpdate.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18001F024 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlpLfhBlockBitmapAllocate @ 0x180027950 (RtlpLfhBlockBitmapAllocate.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x180027AC0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpVsContextAllocate @ 0x18002B090 (RtlpHpVsContextAllocate.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18004E8C0 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhBucketActivate @ 0x1800534A4 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180058054 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpSegAlloc @ 0x18005895C (RtlpHpSegAlloc.c)
 *     RtlpHpLargeAlloc @ 0x18005A614 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x18007D954 (RtlpHpLfhSubsegmentSetOwner.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A4CB0 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(
        _RTL_SRWLOCK *a1,
        size_t a2,
        unsigned __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // rbp
  __int64 v7; // r15
  int v8; // eax
  unsigned __int8 *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // r12
  _RTL_SRWLOCK *v15; // r14
  char CurrentProcessorNumber; // al
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v19; // r15d
  __int64 *v20; // r13
  int v21; // ebx
  __int64 v22; // rbp
  __int64 v23; // r14
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // cx
  int v26; // ecx
  _RTL_SRWLOCK *v27; // rcx
  _RTL_SRWLOCK *v28; // rcx
  __int64 **v29; // rbx
  _QWORD *v30; // rbx
  struct _TEB *v31; // r8
  unsigned int v32; // esi
  __int64 v33; // r10
  __int64 LowFragHeapDataSlot; // rdx
  __int64 v35; // rax
  int v36; // r9d
  int v37; // ecx
  unsigned int v38; // ebx
  int v39; // eax
  unsigned int v40; // edi
  __int64 v41; // r8
  unsigned int v42; // eax
  int v43; // ebx
  _WORD *v44; // r8
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  int v47; // ebx
  unsigned __int64 v48; // rcx
  __int64 result; // rax
  int v50; // [rsp+30h] [rbp-88h]
  unsigned int v51; // [rsp+34h] [rbp-84h] BYREF
  unsigned __int64 v52; // [rsp+38h] [rbp-80h]
  int v53; // [rsp+40h] [rbp-78h]
  unsigned int v54; // [rsp+44h] [rbp-74h]
  int v55; // [rsp+48h] [rbp-70h]
  unsigned int v56; // [rsp+4Ch] [rbp-6Ch]
  _RTL_SRWLOCK *v57; // [rsp+50h] [rbp-68h]
  unsigned int v58; // [rsp+58h] [rbp-60h]
  _QWORD v59[3]; // [rsp+60h] [rbp-58h] BYREF
  _RTL_SRWLOCK *BaseAddress; // [rsp+C0h] [rbp+8h]
  size_t Size; // [rsp+C8h] [rbp+10h]

  Size = a2;
  BaseAddress = a1;
  v5 = a4;
  v6 = a3;
  if ( a3 > 0x3FF0 )
    goto LABEL_83;
  v7 = (__int64)&a1[34];
  v52 = (unsigned __int64)&a1[34];
  v8 = a3;
  if ( (_DWORD)a2 != (_DWORD)a3 )
    v8 = a3 + 2;
  v9 = &RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v8 + 15) >> 4];
  v10 = v7 + 8LL * *v9;
  if ( (*(_QWORD *)(v10 + 192) & 1) == 0 )
  {
LABEL_12:
    v15 = *(_RTL_SRWLOCK **)(v10 + 192);
    v57 = v15;
    CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
    v17 = *(unsigned __int8 *)(v7 + 56);
    v18 = CurrentProcessorNumber & 0x3F;
    v14 = 0LL;
    if ( v18 >= v17 )
    {
      if ( v18 == v17 || (_BYTE)v17 == 1 )
        v18 = 0;
      else
        v18 = *(unsigned __int8 *)(v18 - v17 - 1 + *(_QWORD *)(v7 + 64));
    }
    v19 = 0;
    v20 = 0LL;
    v21 = 1;
    v22 = *(_QWORD *)(v15[13].Value + 8LL * *(unsigned __int8 *)(v15[12].Value + v18));
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(v22 + 16));
    while ( 1 )
    {
      while ( !*(_QWORD *)(v22 + 8) )
      {
        v28 = (_RTL_SRWLOCK *)(v22 + 16);
        if ( v21 == 2 )
          RtlReleaseSRWLockExclusive(v28);
        else
          RtlReleaseSRWLockShared(v28);
        v29 = (__int64 **)&v15[3];
        if ( *v29 == (__int64 *)v29
          || ((RtlAcquireSRWLockExclusive(v15 + 2), *v29 != (__int64 *)v29)
            ? (v20 = RtlpHpLfhOwnerMoveSubsegment((__int64)v15, *v29, 2))
            : (v20 = 0LL),
              RtlReleaseSRWLockExclusive(v15 + 2),
              v5 = a4,
              !v20) )
        {
          v30 = (_QWORD *)v52;
          v20 = (__int64 *)RtlpHpLfhSubsegmentCreate(v52, v15, v5);
          if ( !v20 )
            goto LABEL_72;
        }
        v21 = 2;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v22 + 16));
        RtlpHpLfhSubsegmentSetOwner(v20, v22);
        if ( *(_QWORD *)(v22 + 8) && *((_WORD *)v20 + 16) == *((_WORD *)v20 + 17) )
          v20[2] = 0LL;
        else
          v20 = RtlpHpLfhOwnerMoveSubsegment(v22, v20, 0);
      }
      v23 = *(_QWORD *)(v22 + 24);
      if ( v23 != v22 + 24 )
      {
        while ( 2 )
        {
          v24 = *(_WORD *)(v23 + 32);
          v19 = 0;
          while ( v24 != 1 || v21 != 1LL )
          {
            v25 = v24 - 1;
            v24 = _InterlockedCompareExchange16((volatile signed __int16 *)(v23 + 32), v24 - 1, v24);
            v26 = v25 + 1;
            if ( v24 == v26 )
            {
              if ( !*(_WORD *)(v23 + 32) )
                RtlpHpLfhOwnerMoveSubsegment(v22, (__int64 *)v23, 1);
              goto LABEL_28;
            }
            if ( v24 < v26 )
              v19 = 1;
          }
          v23 = *(_QWORD *)v23;
          if ( v23 != v22 + 24 )
            continue;
          break;
        }
      }
      v23 = 0LL;
LABEL_28:
      v27 = (_RTL_SRWLOCK *)(v22 + 16);
      if ( v21 == 2 )
        RtlReleaseSRWLockExclusive(v27);
      else
        RtlReleaseSRWLockShared(v27);
      if ( v23 )
        break;
      v21 = 2;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v22 + 16));
      v15 = v57;
    }
    v31 = NtCurrentTeb();
    v32 = (unsigned int)v23 >> 12;
    v33 = 1LL;
    LowFragHeapDataSlot = v31->LowFragHeapDataSlot;
    v59[0] = 2 * *(unsigned __int16 *)(v23 + 34);
    v59[1] = v23 + 48;
    v35 = *(unsigned __int8 *)(v22 + 1);
    v54 = (unsigned int)v23 >> 12;
    v36 = RtlpSearchWidth[v35];
    v37 = *((unsigned __int8 *)&RtlpLowFragHeapRandomData + LowFragHeapDataSlot);
    v38 = (unsigned __int16)(RtlpLFHKey ^ ((unsigned int)v23 >> 12) ^ *(_WORD *)(v23 + 40));
    v50 = RtlpLFHKey ^ ((unsigned int)v23 >> 12) ^ *(_DWORD *)(v23 + 40);
    if ( (unsigned int)Size < v38 )
      v33 = 3LL;
    v56 = (unsigned __int16)(RtlpLFHKey ^ ((unsigned int)v23 >> 12) ^ *(_WORD *)(v23 + 40));
    v31->LowFragHeapDataSlot = (unsigned __int8)(LowFragHeapDataSlot + 1);
    v39 = RtlpLfhBlockBitmapAllocate((unsigned int)v59, *(unsigned __int16 *)(v23 + 36), v37, v36, v33);
    v53 = v39;
    *(_WORD *)(v23 + 36) = v39;
    v40 = HIWORD(v50) + v39 * v38;
    if ( *(_BYTE *)(v23 + 45) > 1u )
    {
      v41 = (unsigned __int16)(RtlpLFHKey ^ v32 ^ *(_WORD *)(v23 + 40));
      v55 = (unsigned __int16)(RtlpLFHKey ^ v32 ^ *(_WORD *)(v23 + 40));
      v42 = RtlpHpLfhSubsegmentIncBlockCounts(v23, v40, v41, &v51);
      v58 = v42;
      if ( v42 != -1 )
      {
        v43 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))(v52 ^ RtlpHeapKey ^ *(_QWORD *)(v52 + 24)))(
                *(_QWORD *)v52,
                v23 + (v42 << *(_BYTE *)(v23 + 44)),
                v51 << *(_BYTE *)(v23 + 44));
        if ( v43 < 0 )
        {
          RtlpHpLfhSubsegmentDecBlockCounts(v23, v40, v55);
        }
        else
        {
          v44 = (_WORD *)(v23 + *(unsigned __int16 *)(v23 + 46) + 2LL * v58);
          v45 = 0LL;
          v46 = (2 * (unsigned __int64)v51 + 1) >> 1;
          if ( v44 > &v44[v51] )
            v46 = 0LL;
          if ( v46 )
          {
            do
            {
              if ( !*v44 )
                *v44 = 1;
              ++v44;
              ++v45;
            }
            while ( v45 < v46 );
          }
          v43 = 0;
        }
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v23 + 24));
        if ( v43 < 0 )
        {
          if ( v53 != -1 )
            _InterlockedAnd64(
              (volatile signed __int64 *)(v23 + 8 * ((unsigned __int64)(unsigned int)(2 * v53) >> 6) + 48),
              ~(3LL << ((2 * v53) & 0x3F)));
          goto LABEL_69;
        }
        v38 = v56;
        LOWORD(v32) = v54;
      }
    }
    v14 = v23 + v40;
    if ( (unsigned int)Size < v38 )
    {
      v47 = v38 - Size;
      v48 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v32 ^ (unsigned __int64)*(unsigned __int16 *)(v23 + 40);
      *(_BYTE *)(v48 + v14 - 1) = 0;
      if ( v47 == 1 )
      {
        *(_WORD *)(v48 + v14 - 2) |= 0x8000u;
      }
      else
      {
        *(_WORD *)(v48 + v14 - 2) &= 0xC000u;
        *(_WORD *)(v48 + v14 - 2) |= v47 & 0x3FFF;
      }
    }
LABEL_69:
    LOBYTE(v5) = a4;
    v30 = (_QWORD *)v52;
    if ( !v14 )
      RtlpHpLfhSubsegmentFreeBlock((_QWORD *)v52, v23, 0LL, a4);
    v15 = v57;
LABEL_72:
    if ( v19 )
      RtlpHpLfhBucketUpdateAffinityMapping(v30, v15);
    if ( v20 )
      RtlpHpLfhBucketAddSubsegment((unsigned __int64)v30, v15, (__int64)v20, v5);
    if ( v14 && (v5 & 2) != 0 )
      memset((void *)v14, 0, (unsigned int)Size);
    v6 = a3;
    goto LABEL_80;
  }
  v11 = *v9;
  v12 = v7 + 8 * v11;
  if ( (*(_QWORD *)(v12 + 192) & 1) != 0 )
  {
    v13 = (unsigned __int64)RtlpLfhBucketUsageUpdate(v7, *v9, 1) >> 16;
    if ( (v13 & 0x1F) > 0x10 || (unsigned __int16)v13 > 0xFF00u )
      RtlpHpLfhBucketActivate(v7, (unsigned int)v11);
  }
  if ( (*(_QWORD *)(v12 + 192) & 1) == 0 )
  {
    v5 = a4;
    goto LABEL_12;
  }
  v14 = -1LL;
LABEL_80:
  if ( v14 != -1 )
  {
    result = v14;
    *a5 = 2;
    return result;
  }
  a2 = Size;
  a1 = BaseAddress;
LABEL_83:
  if ( v6 > 0x20000 )
  {
    if ( v6 > 0x7F000 )
      result = RtlpHpLargeAlloc(a1);
    else
      result = RtlpHpSegAlloc(a1, a2);
  }
  else
  {
    result = RtlpHpVsContextAllocate(a1 + 21, a2);
  }
  *a5 = 3;
  return result;
}
