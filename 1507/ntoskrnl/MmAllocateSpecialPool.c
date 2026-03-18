/*
 * XREFs of MmAllocateSpecialPool @ 0x14021F6C4
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 * Callees:
 *     MiNumberWsSwapPagefiles @ 0x140012980 (MiNumberWsSwapPagefiles.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     RemoveListHeadPte @ 0x14003E468 (RemoveListHeadPte.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiInitializeColorBaseSession @ 0x14012F804 (MiInitializeColorBaseSession.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiMakeSpecialPoolPaged @ 0x14020E340 (MiMakeSpecialPoolPaged.c)
 *     MiExpandSpecialPool @ 0x14021F2B8 (MiExpandSpecialPool.c)
 *     MmFreeSpecialPool @ 0x14021FC4C (MmFreeSpecialPool.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x140225A80 (MiGetContainingPageTable.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiGetPteLink @ 0x140225B3C (MiGetPteLink.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 */

ULONG_PTR __fastcall MmAllocateSpecialPool(ULONG_PTR BugCheckParameter3, int a2, int a3, int a4)
{
  int v4; // r15d
  int v6; // r12d
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v8; // al
  KSPIN_LOCK *v9; // rbp
  unsigned int v10; // r11d
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // r9
  unsigned __int64 v15; // rsi
  int v16; // eax
  int v17; // r10d
  signed __int32 *v18; // rsi
  __int16 v19; // cx
  __int64 PteLink; // rax
  unsigned __int64 v21; // r8
  __int64 *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 ContainingPageTable; // rax
  __int64 PteTimeStamp; // rax
  __int64 v27; // r9
  __int64 updated; // rax
  __int64 v29; // r9
  unsigned __int64 v30; // rsi
  __int64 v31; // rbx
  ULONG_PTR v32; // rsi
  char v33; // bl
  int v34; // r15d
  __int64 v35; // r14
  _QWORD *v37; // [rsp+30h] [rbp-78h]
  unsigned __int64 *v38; // [rsp+30h] [rbp-78h]
  unsigned __int64 v39; // [rsp+38h] [rbp-70h]
  __int64 Page; // [rsp+38h] [rbp-70h]
  _WORD *v41; // [rsp+40h] [rbp-68h] BYREF
  __int16 v42; // [rsp+48h] [rbp-60h]
  unsigned __int16 v43; // [rsp+4Ah] [rbp-5Eh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v46; // [rsp+C0h] [rbp+18h]

  v4 = a3;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 && (a3 & 0x200) == 0 && (MiFlags & 0x30000) != 0 )
    v4 = a3 | 0x200;
  CurrentIrql = KeGetCurrentIrql();
  v8 = 1;
  if ( (a3 & 1) == 0 )
    v8 = 2;
  if ( CurrentIrql > v8 )
    KeBugCheckEx(0xC1u, CurrentIrql, v4, BugCheckParameter3, 0x30uLL);
  v46 = 4;
  if ( (v4 & 0x20) != 0 )
  {
    v13 = qword_1403D0230 | 0xFFFFFFFFF021LL;
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
      v13 |= 0x100uLL;
    v9 = (KSPIN_LOCK *)qword_140350170;
    v12 = v13 & 0xFFFFFFFFFFFFFE3DuLL | 0x42;
    MiInitializeColorBaseSession((__int64)&v41);
  }
  else
  {
    v9 = &qword_14034FBC0;
    MI_INITIALIZE_COLOR_BASE(0LL, 0, (__int64)&v41);
    if ( !v6 )
    {
      if ( (v4 & 0x200) == 0 )
        v10 += 2;
      v46 = v10;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
      v11 |= 0x100uLL;
    v12 = v11 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
  }
  if ( !v9[6] )
    return 0LL;
  if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, 1uLL, 1) )
  {
    ++dword_14034E6FC;
    return 0LL;
  }
  v15 = qword_140355280;
  v39 = qword_140355280;
  if ( !Count || (v16 = MiNumberWsSwapPagefiles((__int64)MiSystemPartition), v17 == v16) )
  {
    if ( qword_14034FCF0 > v15 >> 1 )
    {
      ++dword_14034E6F4;
LABEL_26:
      MiReturnCommit((__int64)MiSystemPartition, 1LL);
      return 0LL;
    }
  }
  if ( !v6 && qword_14034E710 > qword_1403551D0 >> 3 )
  {
    ++dword_14034E6EC;
    goto LABEL_26;
  }
  v18 = 0LL;
  v37 = v9 + 1;
  if ( v6 )
  {
    if ( v9 == &qword_14034FBC0 )
    {
      v18 = dword_14034FE40;
      if ( !(unsigned int)MiChargeWsles((__int64)dword_14034FE40, 1LL, 0) )
      {
        ++dword_14034E708;
        goto LABEL_26;
      }
    }
  }
  else
  {
    if ( !(unsigned int)MiChargeResident(MiSystemPartition, 1uLL, 128LL, v14) )
    {
      ++dword_14034E6F8;
      goto LABEL_26;
    }
    _InterlockedExchangeAdd64(&qword_14034FA18, 1uLL);
    v37 = v9 + 4;
  }
  v19 = *v41 + 1;
  *v41 = v19;
  if ( v39 < 0x100
    || (Page = MiGetPage((__int64)MiSystemPartition, v43 | (unsigned int)(unsigned __int16)(v42 & v19), 0), Page == -1) )
  {
    ++dword_14034E6E8;
LABEL_66:
    MiReturnCommit((__int64)MiSystemPartition, 1LL);
    if ( v6 )
    {
      if ( v9 == &qword_14034FBC0 )
        MiChargeWsles((__int64)v18, -1LL, 0);
    }
    else
    {
      MiReturnResidentAvailable(1uLL);
      _InterlockedExchangeAdd64(&qword_14034FA20, 1uLL);
    }
    return 0LL;
  }
  KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
  PteLink = MiGetPteLink(*v37);
  if ( PteLink != (__int64)(((v21 >> 9) & 0x7FFFFFFFF8LL) - *(_QWORD *)(v21 + 16) - 0x98000000000LL) >> 3 )
  {
    v38 = RemoveListHeadPte((_QWORD *)v21);
    v22 = (__int64 *)v38;
    ContainingPageTable = MiGetContainingPageTable(v38, v23, v24);
    PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(48 * ContainingPageTable - 0x58000000000LL + 16));
    updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v27 + 16), PteTimeStamp + 1);
    *(_QWORD *)(v29 + 16) = updated;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_38;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v38 = (unsigned __int64 *)MiExpandSpecialPool(v4);
  v22 = (__int64 *)v38;
  if ( !v38 )
  {
    MiReleaseFreshPage(48 * Page - 0x58000000000LL);
    ++dword_14034E6F0;
    goto LABEL_66;
  }
LABEL_38:
  v30 = _InterlockedIncrement64(&qword_14034FCF0);
  if ( v30 == 1 )
    _InterlockedAdd(&dword_14034FB88, 1u);
  v31 = (v12 ^ (Page << 12)) & 0xFFFFFFFFF000LL ^ v12;
  MiInitializePfn(48 * Page - 0x58000000000LL, v22, v46, 4);
  *v22 = v31;
  if ( (unsigned __int64)(v22 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v22, v31);
  if ( v30 > qword_14034E6E0 )
    qword_14034E6E0 = v30;
  v32 = (__int64)((_QWORD)v22 << 25) >> 16;
  v33 = MEMORY[0xFFFFF78000000320];
  memset((void *)v32, MEMORY[0xFFFFF78000000320] | 1, 0x1000uLL);
  v34 = v4 & 0x40;
  if ( v34 )
    BugCheckParameter3 -= 8LL;
  if ( a4 && (a4 == 1 || MmSpecialPoolCatchOverruns != 1) )
  {
    v35 = v32 + 4080;
  }
  else
  {
    v35 = (__int64)((_QWORD)v22 << 25) >> 16;
    v32 = (v32 - BugCheckParameter3 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
  }
  *(_QWORD *)v35 = 0LL;
  *(_QWORD *)(v35 + 8) = 0LL;
  *(_DWORD *)v35 = BugCheckParameter3;
  if ( v9 != &qword_14034FBC0 )
  {
    *(_DWORD *)v35 = BugCheckParameter3 | 0x2000;
    _InterlockedAdd64((volatile signed __int64 *)v9 + 7, 1uLL);
  }
  *(_BYTE *)(v35 + 2) = v33 | 1;
  *(_DWORD *)(v35 + 4) = a2;
  if ( v6 )
  {
    *(_DWORD *)v35 |= 0x8000u;
    if ( !(unsigned int)MiMakeSpecialPoolPaged(v9, v38) )
    {
      ++dword_14034E700;
      MmFreeSpecialPool(v32);
      return 0LL;
    }
  }
  else
  {
    _InterlockedAdd64(&qword_14034E710, 1uLL);
  }
  if ( v34 )
    *(_DWORD *)v35 |= 0x4000u;
  return v32;
}
