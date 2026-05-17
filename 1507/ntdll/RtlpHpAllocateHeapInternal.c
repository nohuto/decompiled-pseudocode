/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x180030100
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18002ED90 (RtlpAllocateHeapInternal.c)
 *     RtlpHpReallocMove @ 0x180037FD0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeap @ 0x1800589AC (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpLfhBucketAddSubsegment @ 0x180009118 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpVsContextAllocate @ 0x180028D80 (RtlpHpVsContextAllocate.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlpLfhBlockBitmapAllocate @ 0x1800309B0 (RtlpLfhBlockBitmapAllocate.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x180030B30 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1800347E0 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpSegAlloc @ 0x180036200 (RtlpHpSegAlloc.c)
 *     RtlpHpSegLfhVsCommit @ 0x180037280 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpLargeAlloc @ 0x1800586E4 (RtlpHpLargeAlloc.c)
 *     RtlpLfhBucketUsageUpdate @ 0x180060744 (RtlpLfhBucketUsageUpdate.c)
 *     RtlpHpLfhSlotAddSubsegment @ 0x180061004 (RtlpHpLfhSlotAddSubsegment.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18006199C (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800645A4 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18006C540 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhBucketActivate @ 0x18006C6F8 (RtlpHpLfhBucketActivate.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800934F0 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1800F3228 (RtlpHpLfhSubsegmentFreeBlock.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v5; // r13d
  __int64 v8; // rsi
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // rbx
  char CurrentProcessorNumber; // al
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rdi
  int v18; // ebp
  __int64 v19; // rsi
  __int64 *v20; // rbx
  int v21; // edx
  unsigned __int16 v22; // cx
  int v23; // eax
  __int64 v24; // rcx
  char *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _TEB *v28; // r8
  unsigned int v29; // r13d
  __int64 v30; // r10
  __int64 LowFragHeapDataSlot; // rdx
  int v32; // r9d
  int v33; // ecx
  unsigned int v34; // esi
  int v35; // eax
  unsigned int v36; // r15d
  __int64 v37; // r8
  unsigned int v38; // eax
  __int64 v39; // rbx
  __int64 v40; // r15
  __int64 v41; // rsi
  __int64 result; // rax
  int v43; // esi
  unsigned __int64 v44; // rcx
  __int64 v45; // rbp
  __int64 v46; // rdi
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  char *v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // r15
  __int64 v53; // rdx
  char *v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  char v57; // cl
  unsigned int v58; // r8d
  __int64 v59; // rdx
  __int64 v60; // r9
  __int64 (__fastcall *v61)(_QWORD); // rcx
  int v62; // eax
  _WORD *v63; // r8
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rax
  __int64 v66; // r15
  __int64 *v67; // rdx
  __int64 v68; // [rsp+30h] [rbp-98h]
  __int64 v69; // [rsp+30h] [rbp-98h]
  unsigned int v70; // [rsp+38h] [rbp-90h] BYREF
  __int64 v71; // [rsp+40h] [rbp-88h]
  __int64 v72; // [rsp+48h] [rbp-80h]
  unsigned int v73; // [rsp+50h] [rbp-78h]
  unsigned int v74; // [rsp+54h] [rbp-74h]
  int v75; // [rsp+58h] [rbp-70h]
  __int64 v76; // [rsp+60h] [rbp-68h]
  unsigned int (__fastcall *v77)(__int64, __int64, _QWORD); // [rsp+68h] [rbp-60h]
  __int64 v78; // [rsp+70h] [rbp-58h]
  _QWORD v79[3]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v80; // [rsp+D0h] [rbp+8h]
  int v81; // [rsp+E0h] [rbp+18h]
  int v82; // [rsp+E0h] [rbp+18h]

  v80 = a1;
  v5 = a4;
  if ( a3 <= 0x3FF0 )
  {
    v8 = a1 + 288;
    v9 = a3;
    v71 = a1 + 288;
    if ( (_DWORD)a2 != (_DWORD)a3 )
      v9 = a3 + 2;
    v10 = (unsigned __int64)(unsigned int)(v9 + 15) >> 4;
    v11 = 1;
    v12 = v8 + 8LL * RtlpLfhBucketIndexMap[v10];
    if ( (*(_QWORD *)(v12 + 192) & 1) == 0 )
      goto LABEL_5;
    v45 = RtlpLfhBucketIndexMap[v10];
    v46 = v8 + 8 * v45;
    if ( (*(_QWORD *)(v46 + 192) & 1) != 0 )
    {
      v47 = (unsigned __int64)RtlpLfhBucketUsageUpdate(v8, RtlpLfhBucketIndexMap[v10], 1LL) >> 16;
      if ( (v47 & 0x1F) > 0x10 || (unsigned __int16)v47 > 0xFF00u )
        RtlpHpLfhBucketActivate(v8, (unsigned int)v45);
    }
    if ( (*(_QWORD *)(v46 + 192) & 1) != 0 )
    {
      v17 = -1LL;
    }
    else
    {
LABEL_5:
      v13 = *(_QWORD *)(v12 + 192);
      v72 = v13;
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v15 = *(unsigned __int8 *)(v8 + 56);
      v16 = CurrentProcessorNumber & 0x3F;
      v17 = 0LL;
      if ( v16 >= v15 )
      {
        if ( v16 == v15 || (_BYTE)v15 == 1 )
          v16 = 0;
        else
          v16 = *(unsigned __int8 *)(v16 - v15 - 1 + *(_QWORD *)(v8 + 64));
      }
      v18 = 0;
      v68 = 0LL;
      v19 = *(_QWORD *)(*(_QWORD *)(v13 + 104) + 8LL * *(unsigned __int8 *)(*(_QWORD *)(v13 + 96) + v16));
      RtlAcquireSRWLockShared(v19 + 16);
      while ( 1 )
      {
        while ( !*(_QWORD *)(v19 + 8) )
        {
          v48 = v19 + 16;
          if ( v11 == 2 )
            RtlReleaseSRWLockExclusive(v48);
          else
            RtlReleaseSRWLockShared(v48);
          v52 = (_QWORD *)(v13 + 24);
          if ( (_QWORD *)*v52 == v52
            || ((RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v13 + 16), v49, v50, v51), (_QWORD *)*v52 == v52)
              ? (v66 = 0LL)
              : (v66 = RtlpHpLfhOwnerMoveSubsegment(v13, *v52, 2LL)),
                v69 = v66,
                RtlReleaseSRWLockExclusive(v13 + 16),
                !v66) )
          {
            v53 = v13;
            v39 = v71;
            v69 = RtlpHpLfhSubsegmentCreate(v71, v53, a4);
            v40 = v69;
            if ( !v69 )
            {
              v5 = a4;
              goto LABEL_25;
            }
            v13 = v72;
          }
          v11 = 2;
          RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v19 + 16), v54, v55, v56);
          v68 = RtlpHpLfhSlotAddSubsegment(v19, v69);
        }
        v20 = *(__int64 **)(v19 + 24);
        if ( v20 != (__int64 *)(v19 + 24) )
        {
          while ( 2 )
          {
            LOWORD(v21) = *((_WORD *)v20 + 16);
            v18 = 0;
            while ( (_WORD)v21 != 1 || v11 != 1LL )
            {
              v22 = v21 - 1;
              v21 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)v20 + 16, v21 - 1, v21);
              v23 = v22 + 1;
              if ( v21 == v23 )
              {
                if ( !*((_WORD *)v20 + 16) )
                  RtlpHpLfhOwnerMoveSubsegment(v19, v20, 1LL);
                goto LABEL_14;
              }
              if ( v21 < v23 )
                v18 = 1;
            }
            v20 = (__int64 *)*v20;
            if ( v20 != (__int64 *)(v19 + 24) )
              continue;
            break;
          }
        }
        v20 = 0LL;
LABEL_14:
        v24 = v19 + 16;
        if ( v11 == 2 )
          RtlReleaseSRWLockExclusive(v24);
        else
          RtlReleaseSRWLockShared(v24);
        if ( v20 )
          break;
        v11 = 2;
        RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v19 + 16), v25, v26, v27);
        v13 = v72;
      }
      v28 = NtCurrentTeb();
      v29 = (unsigned int)v20 >> 12;
      v30 = 1LL;
      LowFragHeapDataSlot = v28->LowFragHeapDataSlot;
      v79[0] = 2 * *((unsigned __int16 *)v20 + 17);
      v79[1] = v20 + 6;
      v32 = RtlpSearchWidth[*(unsigned __int8 *)(v19 + 1)];
      v33 = *((unsigned __int8 *)&RtlpLowFragHeapRandomData + LowFragHeapDataSlot);
      v81 = RtlpLFHKey ^ ((unsigned int)v20 >> 12) ^ *((_DWORD *)v20 + 10);
      v34 = (unsigned __int16)v81;
      if ( (unsigned int)a2 < (unsigned __int16)v81 )
        v30 = 3LL;
      v28->LowFragHeapDataSlot = (unsigned __int8)(LowFragHeapDataSlot + 1);
      v35 = RtlpLfhBlockBitmapAllocate((unsigned int)v79, *((unsigned __int16 *)v20 + 18), v33, v32, v30);
      v75 = v35;
      *((_WORD *)v20 + 18) = v35;
      v36 = HIWORD(v81) + v35 * (unsigned __int16)v81;
      if ( *((_BYTE *)v20 + 45) <= 1u )
        goto LABEL_21;
      v37 = (unsigned __int16)(RtlpLFHKey ^ v29 ^ *((_WORD *)v20 + 20));
      v73 = (unsigned __int16)(RtlpLFHKey ^ v29 ^ *((_WORD *)v20 + 20));
      v38 = RtlpHpLfhSubsegmentIncBlockCounts(v20, v36, v37, &v70);
      v74 = v38;
      if ( v38 == -1 )
        goto LABEL_21;
      v57 = *((_BYTE *)v20 + 44);
      v58 = v70 << v57;
      v59 = (__int64)v20 + (v38 << v57);
      v60 = *(_QWORD *)v71;
      v61 = (__int64 (__fastcall *)(_QWORD))(v71 ^ RtlpHeapKey ^ *(_QWORD *)(v71 + 24));
      v76 = v59;
      v78 = v60;
      v77 = (unsigned int (__fastcall *)(__int64, __int64, _QWORD))v61;
      v62 = v61 == RtlpHpSegLfhVsCommit ? RtlpHpSegLfhVsCommit(v60) : v77(v78, v76, v58);
      v82 = v62;
      if ( v62 < 0 )
      {
        RtlpHpLfhSubsegmentDecBlockCounts(v20, v36, v73);
      }
      else
      {
        v63 = (_WORD *)((char *)v20 + 2 * v74 + *((unsigned __int16 *)v20 + 23));
        v64 = 0LL;
        v65 = (2 * (unsigned __int64)v70 + 1) >> 1;
        if ( v63 > &v63[v70] )
          v65 = 0LL;
        if ( v65 )
        {
          do
          {
            if ( !*v63 )
              *v63 = 1;
            ++v63;
            ++v64;
          }
          while ( v64 < v65 );
        }
        v82 = 0;
      }
      RtlReleaseSRWLockExclusive(v20 + 3);
      if ( v82 >= 0 )
      {
LABEL_21:
        v17 = (__int64)v20 + v36;
        if ( (unsigned int)a2 < v34 )
        {
          v43 = v34 - a2;
          v44 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v29 ^ (unsigned __int64)*((unsigned __int16 *)v20 + 20);
          *(_BYTE *)(v44 + v17 - 1) = 0;
          if ( v43 == 1 )
          {
            *(_WORD *)(v44 + v17 - 2) |= 0x8000u;
          }
          else
          {
            *(_WORD *)(v44 + v17 - 2) &= 0xC000u;
            *(_WORD *)(v44 + v17 - 2) |= v43 & 0x3FFF;
          }
        }
      }
      else if ( v75 != -1 )
      {
        _InterlockedAnd64(&v20[((unsigned __int64)(unsigned int)(2 * v75) >> 6) + 6], ~(3LL << ((2 * v75) & 0x3F)));
      }
      v5 = a4;
      if ( v17 )
      {
        v39 = v71;
      }
      else
      {
        v67 = v20;
        v39 = v71;
        RtlpHpLfhSubsegmentFreeBlock(v71, v67, 0LL, a4);
      }
      v40 = v68;
LABEL_25:
      v41 = v72;
      if ( v18 )
        RtlpHpLfhBucketUpdateAffinityMapping(v39, v72);
      if ( v40 )
        RtlpHpLfhBucketAddSubsegment(v39, v41, v40, v5);
      if ( v17 )
      {
        if ( (v5 & 2) != 0 )
          memset((void *)v17, 0, (unsigned int)a2);
      }
    }
    if ( v17 != -1 )
    {
      result = v17;
      *a5 = 2;
      return result;
    }
    a1 = v80;
  }
  if ( a3 <= 0x20000 )
  {
    result = RtlpHpVsContextAllocate(a1 + 176, a2, a3, v5);
LABEL_43:
    *a5 = 3;
    return result;
  }
  if ( a3 > 0x7F000 )
  {
    result = RtlpHpLargeAlloc(a1, a2, a3, v5);
    goto LABEL_43;
  }
  result = RtlpHpSegAlloc(a1, a2, a3, v5);
  *a5 = 3;
  return result;
}
