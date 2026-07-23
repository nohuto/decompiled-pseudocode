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

__int64 __fastcall RtlpHpAllocateHeapInternal(
        _RTL_SRWLOCK *a1,
        size_t a2,
        unsigned __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned int v5; // r13d
  _RTL_SRWLOCK *v8; // rsi
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // r15d
  _RTL_SRWLOCK *v12; // rbx
  _RTL_SRWLOCK *Value; // rbx
  char CurrentProcessorNumber; // al
  unsigned int Value_low; // ecx
  unsigned int v16; // eax
  __int64 v17; // rdi
  int v18; // ebp
  __int64 v19; // rsi
  __int64 *v20; // rbx
  int v21; // edx
  unsigned __int16 v22; // cx
  int v23; // eax
  _RTL_SRWLOCK *v24; // rcx
  struct _TEB *v25; // r8
  unsigned int v26; // r13d
  __int64 v27; // r10
  __int64 LowFragHeapDataSlot; // rdx
  int v29; // r9d
  int v30; // ecx
  unsigned int v31; // esi
  int v32; // eax
  unsigned int v33; // r15d
  __int64 v34; // r8
  unsigned int v35; // eax
  __int64 v36; // rbx
  __int64 v37; // r15
  _RTL_SRWLOCK *v38; // rsi
  __int64 result; // rax
  int v40; // esi
  unsigned __int64 v41; // rcx
  __int64 v42; // rbp
  _RTL_SRWLOCK *v43; // rdi
  unsigned __int64 v44; // rax
  _RTL_SRWLOCK *v45; // rcx
  unsigned __int64 *v46; // r15
  _RTL_SRWLOCK *v47; // rdx
  char v48; // cl
  unsigned int v49; // r8d
  __int64 v50; // rdx
  void *v51; // r9
  __int64 (__fastcall *v52)(PVOID); // rcx
  int v53; // eax
  _WORD *v54; // r8
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rax
  __int64 v57; // r15
  __int64 *v58; // rdx
  __int64 v59; // [rsp+30h] [rbp-98h]
  __int64 v60; // [rsp+30h] [rbp-98h]
  unsigned int v61; // [rsp+38h] [rbp-90h] BYREF
  __int64 v62; // [rsp+40h] [rbp-88h]
  _RTL_SRWLOCK *v63; // [rsp+48h] [rbp-80h]
  unsigned int v64; // [rsp+50h] [rbp-78h]
  unsigned int v65; // [rsp+54h] [rbp-74h]
  int v66; // [rsp+58h] [rbp-70h]
  __int64 v67; // [rsp+60h] [rbp-68h]
  __int64 (__fastcall *v68)(PVOID); // [rsp+68h] [rbp-60h]
  void *v69; // [rsp+70h] [rbp-58h]
  _QWORD v70[3]; // [rsp+78h] [rbp-50h] BYREF
  _RTL_SRWLOCK *BaseAddress; // [rsp+D0h] [rbp+8h]
  int v72; // [rsp+E0h] [rbp+18h]
  int v73; // [rsp+E0h] [rbp+18h]

  BaseAddress = a1;
  v5 = a4;
  if ( a3 <= 0x3FF0 )
  {
    v8 = a1 + 36;
    v9 = a3;
    v62 = (__int64)&a1[36];
    if ( (_DWORD)a2 != (_DWORD)a3 )
      v9 = a3 + 2;
    v10 = (unsigned __int64)(unsigned int)(v9 + 15) >> 4;
    v11 = 1;
    v12 = &v8[RtlpLfhBucketIndexMap[v10]];
    if ( (v12[24].Value & 1) == 0 )
      goto LABEL_5;
    v42 = RtlpLfhBucketIndexMap[v10];
    v43 = &v8[v42];
    if ( (v43[24].Value & 1) != 0 )
    {
      v44 = (unsigned __int64)RtlpLfhBucketUsageUpdate(v8, RtlpLfhBucketIndexMap[v10], 1LL) >> 16;
      if ( (v44 & 0x1F) > 0x10 || (unsigned __int16)v44 > 0xFF00u )
        RtlpHpLfhBucketActivate(v8, (unsigned int)v42);
    }
    if ( (v43[24].Value & 1) != 0 )
    {
      v17 = -1LL;
    }
    else
    {
LABEL_5:
      Value = (_RTL_SRWLOCK *)v12[24].Value;
      v63 = Value;
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      Value_low = LOBYTE(v8[7].Value);
      v16 = CurrentProcessorNumber & 0x3F;
      v17 = 0LL;
      if ( v16 >= Value_low )
      {
        if ( v16 == Value_low || (_BYTE)Value_low == 1 )
          v16 = 0;
        else
          v16 = *(unsigned __int8 *)(v16 - Value_low - 1 + v8[8].Value);
      }
      v18 = 0;
      v59 = 0LL;
      v19 = *(_QWORD *)(Value[13].Value + 8LL * *(unsigned __int8 *)(Value[12].Value + v16));
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)(v19 + 16));
      while ( 1 )
      {
        while ( !*(_QWORD *)(v19 + 8) )
        {
          v45 = (_RTL_SRWLOCK *)(v19 + 16);
          if ( v11 == 2 )
            RtlReleaseSRWLockExclusive(v45);
          else
            RtlReleaseSRWLockShared(v45);
          v46 = (unsigned __int64 *)&Value[3];
          if ( (unsigned __int64 *)*v46 == v46
            || ((RtlAcquireSRWLockExclusive(Value + 2), (unsigned __int64 *)*v46 == v46)
              ? (v57 = 0LL)
              : (v57 = RtlpHpLfhOwnerMoveSubsegment(Value, *v46, 2LL)),
                v60 = v57,
                RtlReleaseSRWLockExclusive(Value + 2),
                !v57) )
          {
            v47 = Value;
            v36 = v62;
            v60 = RtlpHpLfhSubsegmentCreate(v62, v47, a4);
            v37 = v60;
            if ( !v60 )
            {
              v5 = a4;
              goto LABEL_25;
            }
            Value = v63;
          }
          v11 = 2;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v19 + 16));
          v59 = RtlpHpLfhSlotAddSubsegment(v19, v60);
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
        v24 = (_RTL_SRWLOCK *)(v19 + 16);
        if ( v11 == 2 )
          RtlReleaseSRWLockExclusive(v24);
        else
          RtlReleaseSRWLockShared(v24);
        if ( v20 )
          break;
        v11 = 2;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v19 + 16));
        Value = v63;
      }
      v25 = NtCurrentTeb();
      v26 = (unsigned int)v20 >> 12;
      v27 = 1LL;
      LowFragHeapDataSlot = v25->LowFragHeapDataSlot;
      v70[0] = 2 * *((unsigned __int16 *)v20 + 17);
      v70[1] = v20 + 6;
      v29 = RtlpSearchWidth[*(unsigned __int8 *)(v19 + 1)];
      v30 = *((unsigned __int8 *)&RtlpLowFragHeapRandomData + LowFragHeapDataSlot);
      v72 = RtlpLFHKey ^ ((unsigned int)v20 >> 12) ^ *((_DWORD *)v20 + 10);
      v31 = (unsigned __int16)v72;
      if ( (unsigned int)a2 < (unsigned __int16)v72 )
        v27 = 3LL;
      v25->LowFragHeapDataSlot = (unsigned __int8)(LowFragHeapDataSlot + 1);
      v32 = RtlpLfhBlockBitmapAllocate((unsigned int)v70, *((unsigned __int16 *)v20 + 18), v30, v29, v27);
      v66 = v32;
      *((_WORD *)v20 + 18) = v32;
      v33 = HIWORD(v72) + v32 * (unsigned __int16)v72;
      if ( *((_BYTE *)v20 + 45) <= 1u )
        goto LABEL_21;
      v34 = (unsigned __int16)(RtlpLFHKey ^ v26 ^ *((_WORD *)v20 + 20));
      v64 = (unsigned __int16)(RtlpLFHKey ^ v26 ^ *((_WORD *)v20 + 20));
      v35 = RtlpHpLfhSubsegmentIncBlockCounts(v20, v33, v34, &v61);
      v65 = v35;
      if ( v35 == -1 )
        goto LABEL_21;
      v48 = *((_BYTE *)v20 + 44);
      v49 = v61 << v48;
      v50 = (__int64)v20 + (v35 << v48);
      v51 = *(void **)v62;
      v52 = (__int64 (__fastcall *)(PVOID))(v62 ^ RtlpHeapKey ^ *(_QWORD *)(v62 + 24));
      v67 = v50;
      v69 = v51;
      v68 = v52;
      v53 = v52 == RtlpHpSegLfhVsCommit
          ? RtlpHpSegLfhVsCommit(v51)
          : ((__int64 (__fastcall *)(void *, __int64, _QWORD))v68)(v69, v67, v49);
      v73 = v53;
      if ( v53 < 0 )
      {
        RtlpHpLfhSubsegmentDecBlockCounts(v20, v33, v64);
      }
      else
      {
        v54 = (_WORD *)((char *)v20 + 2 * v65 + *((unsigned __int16 *)v20 + 23));
        v55 = 0LL;
        v56 = (2 * (unsigned __int64)v61 + 1) >> 1;
        if ( v54 > &v54[v61] )
          v56 = 0LL;
        if ( v56 )
        {
          do
          {
            if ( !*v54 )
              *v54 = 1;
            ++v54;
            ++v55;
          }
          while ( v55 < v56 );
        }
        v73 = 0;
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v20 + 3);
      if ( v73 >= 0 )
      {
LABEL_21:
        v17 = (__int64)v20 + v33;
        if ( (unsigned int)a2 < v31 )
        {
          v40 = v31 - a2;
          v41 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v26 ^ (unsigned __int64)*((unsigned __int16 *)v20 + 20);
          *(_BYTE *)(v41 + v17 - 1) = 0;
          if ( v40 == 1 )
          {
            *(_WORD *)(v41 + v17 - 2) |= 0x8000u;
          }
          else
          {
            *(_WORD *)(v41 + v17 - 2) &= 0xC000u;
            *(_WORD *)(v41 + v17 - 2) |= v40 & 0x3FFF;
          }
        }
      }
      else if ( v66 != -1 )
      {
        _InterlockedAnd64(&v20[((unsigned __int64)(unsigned int)(2 * v66) >> 6) + 6], ~(3LL << ((2 * v66) & 0x3F)));
      }
      v5 = a4;
      if ( v17 )
      {
        v36 = v62;
      }
      else
      {
        v58 = v20;
        v36 = v62;
        RtlpHpLfhSubsegmentFreeBlock(v62, v58, 0LL, a4);
      }
      v37 = v59;
LABEL_25:
      v38 = v63;
      if ( v18 )
        RtlpHpLfhBucketUpdateAffinityMapping(v36, v63);
      if ( v37 )
        RtlpHpLfhBucketAddSubsegment(v36, v38, v37, v5);
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
    a1 = BaseAddress;
  }
  if ( a3 <= 0x20000 )
  {
    result = RtlpHpVsContextAllocate(a1 + 22, (unsigned int)a2, a3, v5);
LABEL_43:
    *a5 = 3;
    return result;
  }
  if ( a3 > 0x7F000 )
  {
    result = RtlpHpLargeAlloc(a1);
    goto LABEL_43;
  }
  result = RtlpHpSegAlloc(a1, a2);
  *a5 = 3;
  return result;
}
