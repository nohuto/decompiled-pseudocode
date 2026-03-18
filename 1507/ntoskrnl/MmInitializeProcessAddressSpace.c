/*
 * XREFs of MmInitializeProcessAddressSpace @ 0x140467860
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     MiInitializeBootProcess @ 0x1407E2258 (MiInitializeBootProcess.c)
 * Callees:
 *     MiAllowWorkingSetExpansion @ 0x14002B61C (MiAllowWorkingSetExpansion.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 *     MiReferenceCfgVad @ 0x1404637C0 (MiReferenceCfgVad.c)
 *     MiMapProcessExecutable @ 0x1404651F4 (MiMapProcessExecutable.c)
 *     PsInitializeFullProcessImageName @ 0x140466C64 (PsInitializeFullProcessImageName.c)
 *     MiInitializeProcessTopDownEntropy @ 0x140467C98 (MiInitializeProcessTopDownEntropy.c)
 *     MiInsertProcessVads @ 0x140467DD0 (MiInsertProcessVads.c)
 *     MiInitializeVadBitMap @ 0x140467E18 (MiInitializeVadBitMap.c)
 *     MiComputeProcessUserVa @ 0x140468250 (MiComputeProcessUserVa.c)
 *     MiInitializeWorkingSetList @ 0x1404683F8 (MiInitializeWorkingSetList.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1404686D4 (MiInitializeProcessBottomUpEntropy.c)
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 *     MiInitializeLockedPagesTracking @ 0x1406A1690 (MiInitializeLockedPagesTracking.c)
 *     MiReturnProcessVads @ 0x1406A16E8 (MiReturnProcessVads.c)
 */

__int64 __fastcall MmInitializeProcessAddressSpace(
        __int64 a1,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        _BYTE *a4,
        int a5)
{
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r12
  int v12; // ecx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // edi
  int v16; // eax
  __int64 v17; // r8
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v25; // rax
  __int64 v26; // rcx
  int v27; // [rsp+30h] [rbp-91h]
  PVOID P; // [rsp+38h] [rbp-89h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-81h] BYREF
  __int64 v30; // [rsp+48h] [rbp-79h]
  __int64 v31; // [rsp+50h] [rbp-71h]
  __int64 v32[7]; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v33[48]; // [rsp+90h] [rbp-31h] BYREF

  v9 = 2LL;
  if ( BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v33);
    v10 = MEMORY[0xFFFFF58010804258];
    v30 = MEMORY[0xFFFFF58010804240];
    v31 = MEMORY[0xFFFFF58010804238];
    v27 = MEMORY[0xFFFFF58010804208];
    *(_OWORD *)&v32[1] = MEMORY[0xFFFFF58010804268];
    *(_OWORD *)&v32[3] = MEMORY[0xFFFFF58010804278];
    *(_OWORD *)&v32[5] = MEMORY[0xFFFFF58010804288];
    KiUnstackDetachProcess((struct _KTHREAD *)v33, 0);
    v25 = &v32[3];
    v26 = 2LL;
    do
    {
      *v25 = 0LL;
      v25 += 3;
      --v26;
    }
    while ( v26 );
  }
  else
  {
    v30 = 0LL;
    v31 = 0LL;
    v27 = 0;
    v10 = 0LL;
    memset(&v32[1], 0, 0x30uLL);
  }
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v33);
  *(_QWORD *)(a1 + 1544) = 0LL;
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_QWORD *)(a1 + 880) = 0LL;
  v11 = a1 + 1272;
  *(_QWORD *)(a1 + 1456) = 0xFFFFF58010804000uLL;
  *(_DWORD *)(a1 + 1272) = 0;
  MEMORY[0xFFFFF580108042F8] = 0x100000000LL;
  if ( (MmTrackLockedPages & 0x10000001) == 1 )
    MiInitializeLockedPagesTracking(a1);
  MiInitializeWorkingSetList(a1);
  v12 = 256;
  MEMORY[0xFFFFF58010804218] = 1;
  v13 = 0xFFFFF58010000000uLL;
  MEMORY[0xFFFFF580108042B8] = 256;
  MEMORY[0xFFFFF580108042C0] = 0xFFFFF58010804298uLL;
  v14 = 0xFFFFF580108042C8uLL;
  do
  {
    v12 <<= 9;
    *(_QWORD *)(v14 + 8) = v13;
    v13 = 0xFFFFF58010004000uLL;
    *(_DWORD *)v14 = v12;
    v14 += 16LL;
    --v9;
  }
  while ( v9 );
  _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x400u);
  P = 0LL;
  v29 = 0LL;
  v15 = MiComputeProcessUserVa(a1, BugCheckParameter1, a3, (unsigned int)&P, (__int64)&v29);
  if ( v15 < 0 )
    goto LABEL_42;
  if ( !BugCheckParameter1 )
  {
    MiInitializeProcessBottomUpEntropy(a1);
    MiInitializeProcessTopDownEntropy(a1, a3, 0LL);
    if ( !(unsigned int)MiInitializeVadBitMap() )
      goto LABEL_41;
  }
  MiInsertProcessVads(a1, P);
  if ( a3 )
  {
    v16 = MiMapProcessExecutable(a1, a3, a4, v29);
    LOBYTE(v17) = 1;
    v15 = v16;
    MiInitializeProcessTopDownEntropy(a1, a3, v17);
  }
  if ( (*(_DWORD *)(a1 + 1716) & 1) != 0 )
    v15 = PsInitializeFullProcessImageName(a1);
  if ( a3 || (*(_DWORD *)(a1 + 1716) & 1) != 0 && !BugCheckParameter1 )
  {
    MiAllowWorkingSetExpansion(a1 + 1272);
    KiUnstackDetachProcess((struct _KTHREAD *)v33, 0);
    return (unsigned int)v15;
  }
  if ( v15 >= 0 )
    *(_DWORD *)a4 &= ~0x10u;
  if ( !BugCheckParameter1 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v33, 0);
    return 0;
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 720) )
  {
    v15 = -1073741595;
    goto LABEL_42;
  }
  v19 = v31;
  v20 = *(_OWORD *)&v32[3];
  *(_QWORD *)(a1 + 1096) = *(_QWORD *)(BugCheckParameter1 + 1096);
  v21 = *(_OWORD *)&v32[1];
  *(_DWORD *)(a1 + 1104) = *(_DWORD *)(BugCheckParameter1 + 1104);
  *(_WORD *)(a1 + 1108) = *(_WORD *)(BugCheckParameter1 + 1108);
  *(_BYTE *)(a1 + 1110) = *(_BYTE *)(BugCheckParameter1 + 1110);
  *(_QWORD *)(a1 + 1144) = *(_QWORD *)(BugCheckParameter1 + 1144);
  MEMORY[0xFFFFF58010804238] = v19;
  MEMORY[0xFFFFF58010804208] = v27;
  MEMORY[0xFFFFF58010804240] = v30;
  MEMORY[0xFFFFF58010804248] = v30;
  MEMORY[0xFFFFF58010804268] = v21;
  MEMORY[0xFFFFF58010804278] = v20;
  MEMORY[0xFFFFF58010804288] = *(_OWORD *)&v32[5];
  if ( !(unsigned int)MiInitializeVadBitMap() )
  {
LABEL_41:
    v15 = -1073741801;
LABEL_42:
    KiUnstackDetachProcess((struct _KTHREAD *)v33, 0);
    MiReturnProcessVads(P);
    return (unsigned int)v15;
  }
  v22 = *(_QWORD *)(BugCheckParameter1 + 1064);
  if ( v22 )
    *(_QWORD *)(a1 + 1064) = v22;
  if ( (*(_DWORD *)a4 & 0x80u) != 0 )
    v15 = MiSessionCreate(v32);
  else
    v15 = 0;
  if ( (a5 & 1) != 0 )
    v23 = v10 + 1;
  else
    v23 = 0LL;
  MEMORY[0xFFFFF58010804258] = v23;
  KiUnstackDetachProcess((struct _KTHREAD *)v33, 0);
  if ( v15 >= 0 )
  {
    v15 = MiCloneProcessAddressSpace((_KPROCESS *)BugCheckParameter1, (_KPROCESS *)a1, a5);
    if ( v15 >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v33);
      CurrentThread = KeGetCurrentThread();
      if ( v32[5] )
        MiReferenceCfgVad((__int64)CurrentThread, v32[4], 1);
      if ( v32[2] )
        MiReferenceCfgVad((__int64)CurrentThread, v32[1], 0);
      KiUnstackDetachProcess((struct _KTHREAD *)v33, 0);
    }
  }
  MiAllowWorkingSetExpansion(v11);
  return (unsigned int)v15;
}
