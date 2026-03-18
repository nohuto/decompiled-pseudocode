/*
 * XREFs of SmFpPreAllocate @ 0x140170E0C
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400D9054 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140170D7C (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmFirstTimeInit @ 0x1404F9AFC (SmFirstTimeInit.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     SmAcquireReleaseCharges @ 0x1400D958C (SmAcquireReleaseCharges.c)
 *     SmFpCleanup @ 0x1400DAA84 (SmFpCleanup.c)
 *     SmKmAllocateMdlForLock @ 0x14014F364 (SmKmAllocateMdlForLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MmAllocateMappingAddress @ 0x1405622E0 (MmAllocateMappingAddress.c)
 */

__int64 __fastcall SmFpPreAllocate(__int64 a1, unsigned int *a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int *v6; // r12
  unsigned int v7; // ecx
  unsigned int v8; // r15d
  __int64 v9; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  void *MdlForLock; // rax
  unsigned int v15; // eax
  unsigned __int8 CurrentIrql; // si
  unsigned int v17; // ebx
  signed __int32 v18; // eax
  __int128 v19; // xmm1
  __int16 v20; // ax
  __int64 v21; // xmm0_8
  unsigned int v22; // ebx
  _OWORD v24[7]; // [rsp+20h] [rbp-49h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = a3;
  memset(v24, 0, 0x68uLL);
  HIDWORD(v24[0]) = 0;
  *((_QWORD *)&v24[1] + 1) = &v24[1];
  v6 = &a2[v4];
  WORD4(v24[0]) = 1;
  *(_QWORD *)&v24[1] = &v24[1];
  BYTE10(v24[0]) = 6;
  if ( a2 >= v6 )
  {
LABEL_11:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
    }
    else
    {
      v17 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
        v17 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a1);
      while ( 1 )
      {
        v18 = *(_DWORD *)a1;
        if ( (*(_DWORD *)a1 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v18 & 0x40000000) == 0 )
          _InterlockedCompareExchange((volatile signed __int32 *)a1, v18 | 0x40000000, v18);
        if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v17);
      }
    }
    v19 = v24[3];
    v20 = WORD4(v24[5]);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)&v24[5];
    *(_OWORD *)(a1 + 32) = v24[2];
    *(_WORD *)(a1 + 88) = v20;
    v21 = *(_QWORD *)&v24[4];
    *(_OWORD *)(a1 + 48) = v19;
    *(_QWORD *)(a1 + 64) = v21;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1, retaddr);
    else
      *(_DWORD *)a1 = 0;
    __writecr8(CurrentIrql);
    return 0;
  }
  while ( 1 )
  {
    v7 = *a2;
    v8 = 0;
    v9 = *a2 & 0xF;
    *((_WORD *)&v24[5] + v9) = *a2 >> 4;
    if ( (v7 & 0xFF00000) != 0 )
      break;
LABEL_10:
    if ( ++a2 >= v6 )
      goto LABEL_11;
  }
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x70466D73u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    v12 = *a2;
    v13 = *a2 & 0xF;
    if ( v13 == 2 )
    {
      MdlForLock = SmKmAllocateMdlForLock((unsigned __int64)(unsigned __int16)(v12 >> 4) << 12);
      goto LABEL_8;
    }
    if ( v13 != 3 )
    {
      if ( v13 >= 4 )
        MdlForLock = MmAllocateMappingAddress((unsigned __int16)((unsigned int)v12 >> 4) << 12, 0x6D526D73u);
      else
        MdlForLock = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(v12 >> 4), 0x70466D73u);
LABEL_8:
      if ( !MdlForLock )
        break;
      goto LABEL_9;
    }
    if ( !(unsigned int)SmAcquireReleaseCharges((unsigned __int64)(unsigned __int16)(v12 >> 4) << 12, 1, 0LL) )
      break;
    MdlForLock = (void *)(8LL * (v8 + 1));
LABEL_9:
    v11[1] = MdlForLock;
    ++v8;
    *v11 = *((_QWORD *)&v24[2] + v9);
    v15 = (unsigned __int8)(*a2 >> 20);
    *((_QWORD *)&v24[2] + v9) = v11;
    if ( v8 >= v15 )
      goto LABEL_10;
  }
  v22 = -1073741670;
  SmFpCleanup((__int64)v24);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return v22;
}
