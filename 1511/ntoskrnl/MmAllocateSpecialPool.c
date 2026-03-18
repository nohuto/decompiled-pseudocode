/*
 * XREFs of MmAllocateSpecialPool @ 0x1401DAD04
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiNumberWsSwapPagefiles @ 0x14001358C (MiNumberWsSwapPagefiles.c)
 *     MiInitializeColorBaseSession @ 0x140019BD4 (MiInitializeColorBaseSession.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MI_READ_PDE @ 0x14006DE04 (MI_READ_PDE.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiInitializePfn @ 0x1400AA390 (MiInitializePfn.c)
 *     RemoveListHeadPte @ 0x1400B1A94 (RemoveListHeadPte.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSpecialPoolPaged @ 0x1401CEE78 (MiMakeSpecialPoolPaged.c)
 *     MiExpandSpecialPool @ 0x1401DA974 (MiExpandSpecialPool.c)
 *     MmFreeSpecialPool @ 0x1401DB2D8 (MmFreeSpecialPool.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

ULONG_PTR __fastcall MmAllocateSpecialPool(ULONG_PTR BugCheckParameter3, int a2, int a3, int a4)
{
  int v4; // r15d
  int v6; // r12d
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v8; // al
  KSPIN_LOCK *v9; // rbp
  __int64 v10; // r9
  int v11; // r10d
  int v12; // r11d
  unsigned __int64 v13; // rbx
  __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  int v16; // eax
  int v17; // r10d
  LONG *v18; // r14
  __int16 v19; // cx
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rsi
  __int64 v23; // rbx
  ULONG_PTR v24; // rsi
  char v25; // bl
  int v26; // r15d
  __int64 v27; // r14
  ULONG_PTR v28; // rcx
  unsigned __int64 v30; // [rsp+30h] [rbp-88h]
  unsigned __int64 v31; // [rsp+30h] [rbp-88h]
  unsigned __int64 v32; // [rsp+38h] [rbp-80h] BYREF
  LONG *v33; // [rsp+40h] [rbp-78h]
  __int64 Page; // [rsp+48h] [rbp-70h]
  _WORD *v35; // [rsp+50h] [rbp-68h] BYREF
  __int16 v36; // [rsp+58h] [rbp-60h]
  unsigned __int16 v37; // [rsp+5Ah] [rbp-5Eh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v40; // [rsp+D0h] [rbp+18h]

  v4 = a3;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 && (a3 & 0x200) == 0 && (MiFlags & 0x10000) != 0 )
    v4 = a3 | 0x200;
  CurrentIrql = KeGetCurrentIrql();
  v8 = 1;
  if ( (a3 & 1) == 0 )
    v8 = 2;
  if ( CurrentIrql > v8 )
    KeBugCheckEx(0xC1u, CurrentIrql, v4, BugCheckParameter3, 0x30uLL);
  v40 = 4;
  if ( (v4 & 0x20) != 0 )
  {
    v14 = qword_140381320 | 0xFFFFFFFFF021LL;
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
      v14 |= 0x100uLL;
    v9 = (KSPIN_LOCK *)qword_1402FFCA8;
    v13 = v14 & 0xFFFFFFFFFFFFFE3DuLL | 0x42;
    MiInitializeColorBaseSession((__int64)&v35);
  }
  else
  {
    v9 = &qword_1402FF700;
    MI_INITIALIZE_COLOR_BASE(0LL, 0, (__int64)&v35);
    if ( !v6 )
    {
      if ( (v12 & v4) == 0 )
        v11 += 2;
      v40 = v11;
    }
    v13 = MiMakeValidKernelPte(-1LL, v11, 0LL, v10) | 0x42;
  }
  if ( !v9[6] )
    return 0LL;
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)MiSystemPartition, 1uLL, 1uLL) )
  {
    ++dword_1402FE244;
    return 0LL;
  }
  v15 = qword_140301440;
  if ( !Count || (v16 = MiNumberWsSwapPagefiles((__int64)MiSystemPartition), v17 == v16) )
  {
    if ( qword_1402FF830 > v15 >> 1 )
    {
      ++dword_1402FE23C;
LABEL_24:
      MiReturnCommit((__int64)MiSystemPartition, 1uLL);
      return 0LL;
    }
  }
  if ( !v6 && qword_1402FE258 > qword_140301390 >> 3 )
  {
    ++dword_1402FE234;
    goto LABEL_24;
  }
  v18 = 0LL;
  v33 = 0LL;
  v30 = (unsigned __int64)(v9 + 1);
  if ( v6 )
  {
    if ( v9 == &qword_1402FF700 )
    {
      v18 = &dword_1402FF980;
      v33 = &dword_1402FF980;
      if ( !(unsigned int)MiChargeWsles((ULONG_PTR)&dword_1402FF980, 1LL, 0LL) )
      {
        ++dword_1402FE250;
        goto LABEL_24;
      }
    }
  }
  else
  {
    if ( !(unsigned int)MiChargeResident(MiSystemPartition, 1uLL, 128LL) )
    {
      ++dword_1402FE240;
      goto LABEL_24;
    }
    _InterlockedExchangeAdd64(&qword_1402FF578, 1uLL);
    v30 = (unsigned __int64)(v9 + 4);
  }
  v19 = *v35 + 1;
  *v35 = v19;
  if ( v15 < 0x120
    || (Page = MiGetPage((__int64)MiSystemPartition, v37 | (unsigned int)(unsigned __int16)(v36 & v19), 0), Page == -1) )
  {
    ++dword_1402FE230;
    MiReturnCommit((__int64)MiSystemPartition, 1uLL);
    if ( v6 )
    {
      if ( v9 != &qword_1402FF700 )
        return 0LL;
      v28 = (ULONG_PTR)v18;
      goto LABEL_69;
    }
LABEL_66:
    MiReturnResidentAvailable(1uLL);
    _InterlockedExchangeAdd64(&qword_1402FF580, 1uLL);
    return 0LL;
  }
  KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
  if ( *(_QWORD *)v30 >> 28 != (__int64)(((v30 >> 9) & 0x7FFFFFFFF8LL) - *(_QWORD *)(v30 + 16) - 0x98000000000LL) >> 3 )
  {
    v31 = (unsigned __int64)RemoveListHeadPte(v30);
    v20 = v31;
    v32 = MI_READ_PDE((_BYTE *)(((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
    v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((__int64 *)&v32) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v32 = (unsigned int)*(_QWORD *)(v21 + 16) ^ ((*(_QWORD *)(v21 + 16) & 0xFFFFFFFF00000000uLL) + 0x100000000LL);
    *(_QWORD *)(v21 + 16) = v32;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_36;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v31 = MiExpandSpecialPool(v4);
  v20 = v31;
  if ( !v31 )
  {
    MiReleaseFreshPage(48 * Page - 0x58000000000LL);
    ++dword_1402FE238;
    MiReturnCommit((__int64)MiSystemPartition, 1uLL);
    if ( v6 )
    {
      if ( v9 != &qword_1402FF700 )
        return 0LL;
      v28 = (ULONG_PTR)v33;
LABEL_69:
      MiChargeWsles(v28, -1LL, 0LL);
      return 0LL;
    }
    goto LABEL_66;
  }
LABEL_36:
  v22 = _InterlockedIncrement64(&qword_1402FF830);
  if ( v22 == 1 )
    _InterlockedAdd(&dword_1402FF6C8, 1u);
  v23 = (v13 ^ (Page << 12)) & 0xFFFFFFFFF000LL ^ v13;
  MiInitializePfn(48 * Page - 0x58000000000LL, v20, v40, 4);
  *(_QWORD *)v20 = v23;
  if ( (unsigned int)MiPteInShadowRange(v20) )
    MiWritePteShadow(v20, v23);
  if ( v22 > qword_1402FE228 )
    qword_1402FE228 = v22;
  v24 = (__int64)(v20 << 25) >> 16;
  v25 = MEMORY[0xFFFFF78000000320];
  memset((void *)v24, MEMORY[0xFFFFF78000000320] | 1, 0x1000uLL);
  v26 = v4 & 0x40;
  if ( v26 )
    BugCheckParameter3 -= 8LL;
  if ( a4 && (a4 == 1 || MmSpecialPoolCatchOverruns != 1) )
  {
    v27 = v24 + 4080;
  }
  else
  {
    v27 = (__int64)(v20 << 25) >> 16;
    v24 = (v24 - BugCheckParameter3 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
  }
  *(_QWORD *)v27 = 0LL;
  *(_QWORD *)(v27 + 8) = 0LL;
  *(_DWORD *)v27 = BugCheckParameter3;
  if ( v9 != &qword_1402FF700 )
  {
    *(_DWORD *)v27 = BugCheckParameter3 | 0x2000;
    _InterlockedAdd64((volatile signed __int64 *)v9 + 7, 1uLL);
  }
  *(_BYTE *)(v27 + 2) = v25 | 1;
  *(_DWORD *)(v27 + 4) = a2;
  if ( v6 )
  {
    *(_DWORD *)v27 |= 0x8000u;
    if ( !(unsigned int)MiMakeSpecialPoolPaged(v9, (__int64 *)v31) )
    {
      ++dword_1402FE248;
      MmFreeSpecialPool(v24);
      return 0LL;
    }
  }
  else
  {
    _InterlockedAdd64(&qword_1402FE258, 1uLL);
  }
  if ( v26 )
    *(_DWORD *)v27 |= 0x4000u;
  return v24;
}
