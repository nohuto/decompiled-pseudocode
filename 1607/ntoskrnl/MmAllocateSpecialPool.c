/*
 * XREFs of MmAllocateSpecialPool @ 0x1401EB90C
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RemoveListHeadPte @ 0x14001BA7C (RemoveListHeadPte.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiInitializeColorBaseSession @ 0x1400B1908 (MiInitializeColorBaseSession.c)
 *     MiNumberWsSwapPagefiles @ 0x1400BC72C (MiNumberWsSwapPagefiles.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x1400E5120 (MiInitializePfn.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiExpandSpecialPool @ 0x1401EB444 (MiExpandSpecialPool.c)
 *     MiMakeSpecialPoolPaged @ 0x1401EB5FC (MiMakeSpecialPoolPaged.c)
 *     MmFreeSpecialPool @ 0x1401EBED0 (MmFreeSpecialPool.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiGetPteLink @ 0x1401F24AC (MiGetPteLink.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

ULONG_PTR __fastcall MmAllocateSpecialPool(ULONG_PTR BugCheckParameter3, int a2, int a3, int a4)
{
  int v4; // r14d
  int v6; // r15d
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v8; // al
  KSPIN_LOCK *v9; // rbp
  int v10; // r10d
  int v11; // r11d
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  int v15; // eax
  int v16; // r10d
  char *AnyMultiplexedVm; // rdi
  unsigned __int64 v18; // r13
  __int16 v19; // cx
  __int64 Page; // rsi
  __int64 v21; // r13
  __int64 ContainingPageTable; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 PteTimeStamp; // rax
  __int64 v26; // r9
  __int64 updated; // rax
  __int64 v28; // r9
  unsigned __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  char v33; // bl
  ULONG_PTR v34; // rdi
  int v35; // r14d
  __int64 v36; // rsi
  _WORD *v38; // [rsp+30h] [rbp-68h] BYREF
  __int16 v39; // [rsp+38h] [rbp-60h]
  unsigned __int16 v40; // [rsp+3Ah] [rbp-5Eh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v43; // [rsp+B0h] [rbp+18h]

  v4 = a3;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 && (a3 & 0x200) == 0 && (MiFlags & 0x4000) != 0 )
    v4 = a3 | 0x200;
  CurrentIrql = KeGetCurrentIrql();
  v8 = 1;
  if ( (a3 & 1) == 0 )
    v8 = 2;
  if ( CurrentIrql > v8 )
    KeBugCheckEx(0xC1u, CurrentIrql, v4, BugCheckParameter3, 0x30uLL);
  v43 = 4;
  if ( (v4 & 0x20) != 0 )
  {
    v13 = qword_1403A9360 | 0xFFFFFFFFF021LL;
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
      v13 |= 0x100uLL;
    v9 = (KSPIN_LOCK *)qword_140327EE8;
    v12 = v13 & 0xFFFFFFFFFFFFFE3DuLL | 0x42;
    MiInitializeColorBaseSession((__int64)&v38);
  }
  else
  {
    v9 = &qword_140327800;
    MiInitializePageColorBase(0LL, 0, (__int64)&v38);
    if ( !v6 )
    {
      if ( (v4 & v11) == 0 )
        v10 += 2;
      v43 = v10;
    }
    v12 = MiMakeValidKernelPte(-1LL, v10, 0LL) | 0x42;
  }
  if ( !v9[6] )
    return 0LL;
  if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, 1uLL, 1) )
  {
    ++dword_140326544;
    return 0LL;
  }
  v14 = qword_140324EC0;
  if ( qword_140327938 > (unsigned __int64)qword_140324EC0 >> 1 )
  {
    if ( !Count || (v15 = MiNumberWsSwapPagefiles((__int64)MiSystemPartition), v16 == v15) )
    {
      ++dword_14032653C;
LABEL_24:
      MiReturnCommit((__int64)MiSystemPartition, 1uLL);
      return 0LL;
    }
  }
  if ( !v6 && qword_140326558 > qword_140324E10 >> 3 )
  {
    ++dword_140326534;
    goto LABEL_24;
  }
  AnyMultiplexedVm = 0LL;
  v18 = (unsigned __int64)(v9 + 1);
  if ( v6 )
  {
    if ( v9 == &qword_140327800 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      if ( !(unsigned int)MiChargeWsles((ULONG_PTR)AnyMultiplexedVm, 1LL, 0) )
      {
        ++dword_140326550;
        goto LABEL_24;
      }
    }
  }
  else
  {
    if ( !(unsigned int)MiChargeResident(MiSystemPartition, 1uLL, 128LL) )
    {
      ++dword_140326540;
      goto LABEL_24;
    }
    v18 = (unsigned __int64)(v9 + 4);
  }
  v19 = *v38 + 1;
  *v38 = v19;
  if ( v14 < 0x120
    || (Page = MiGetPage((__int64)MiSystemPartition, v40 | (unsigned int)(unsigned __int16)(v39 & v19), 0), Page == -1) )
  {
    ++dword_140326530;
LABEL_64:
    MiReturnCommit((__int64)MiSystemPartition, 1uLL);
    if ( v6 )
    {
      if ( v9 == &qword_140327800 )
        MiChargeWsles((ULONG_PTR)AnyMultiplexedVm, -1LL, 0);
    }
    else
    {
      MiReturnResidentAvailable(1uLL);
    }
    return 0LL;
  }
  KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
  if ( MiGetPteLink(*(_QWORD *)v18) != (__int64)(((v18 >> 9) & 0x7FFFFFFFF8LL) - *(_QWORD *)(v18 + 16) - 0x98000000000LL) >> 3 )
  {
    v21 = RemoveListHeadPte((_QWORD *)v18);
    ContainingPageTable = MiGetContainingPageTable(v21);
    PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(48 * ContainingPageTable - 0x58000000000LL + 16), v23, v24);
    updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v26 + 16), PteTimeStamp + 1);
    *(_QWORD *)(v28 + 16) = updated;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_36;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v21 = MiExpandSpecialPool(v4);
  if ( !v21 )
  {
    MiReleaseFreshPage(48 * Page - 0x58000000000LL);
    ++dword_140326538;
    goto LABEL_64;
  }
LABEL_36:
  v29 = _InterlockedIncrement64(&qword_140327938);
  if ( v29 == 1 )
    _InterlockedAdd(&dword_1403277C8, 1u);
  v30 = (v12 ^ (Page << 12)) & 0xFFFFFFFFF000LL ^ v12;
  MiInitializePfn(48 * Page - 0x58000000000LL, v21, v43, 4);
  *(_QWORD *)v21 = v30;
  if ( (unsigned int)MiPteInShadowRange(v21, v31) )
    MiWritePteShadow(v32, v30);
  if ( v29 > qword_140326528 )
    qword_140326528 = v29;
  v33 = MEMORY[0xFFFFF78000000320];
  v34 = v21 << 25 >> 16;
  memset((void *)v34, MEMORY[0xFFFFF78000000320] | 1, 0x1000uLL);
  v35 = v4 & 0x40;
  if ( v35 )
    BugCheckParameter3 -= 8LL;
  if ( a4 && (a4 == 1 || MmSpecialPoolCatchOverruns != 1) )
  {
    v36 = v34 + 4080;
  }
  else
  {
    v36 = v21 << 25 >> 16;
    v34 = (v34 - BugCheckParameter3 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
  }
  *(_QWORD *)v36 = 0LL;
  *(_QWORD *)(v36 + 8) = 0LL;
  *(_DWORD *)v36 = BugCheckParameter3;
  if ( v9 != &qword_140327800 )
  {
    *(_DWORD *)v36 = BugCheckParameter3 | 0x2000;
    _InterlockedAdd64((volatile signed __int64 *)v9 + 7, 1uLL);
  }
  *(_BYTE *)(v36 + 2) = v33 | 1;
  *(_DWORD *)(v36 + 4) = a2;
  if ( v6 )
  {
    *(_DWORD *)v36 |= 0x8000u;
    if ( !(unsigned int)MiMakeSpecialPoolPaged((__int64)v9, (unsigned __int64 *)v21) )
    {
      ++dword_140326548;
      MmFreeSpecialPool(v34);
      return 0LL;
    }
  }
  else
  {
    _InterlockedAdd64(&qword_140326558, 1uLL);
  }
  if ( v35 )
    *(_DWORD *)v36 |= 0x4000u;
  return v34;
}
