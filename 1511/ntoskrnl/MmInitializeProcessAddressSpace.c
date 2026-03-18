/*
 * XREFs of MmInitializeProcessAddressSpace @ 0x140462718
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     MiInitializeBootProcess @ 0x14076CFE4 (MiInitializeBootProcess.c)
 * Callees:
 *     MiAllowWorkingSetExpansion @ 0x14009B3B4 (MiAllowWorkingSetExpansion.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiCloneProcessAddressSpace @ 0x14046100C (MiCloneProcessAddressSpace.c)
 *     MiReferenceCfgVad @ 0x140462520 (MiReferenceCfgVad.c)
 *     MiInitializeProcessTopDownEntropy @ 0x140462B64 (MiInitializeProcessTopDownEntropy.c)
 *     MiInsertProcessVads @ 0x140462C58 (MiInsertProcessVads.c)
 *     MiInitializeVadBitMap @ 0x140462CA0 (MiInitializeVadBitMap.c)
 *     MiComputeProcessUserVa @ 0x140463054 (MiComputeProcessUserVa.c)
 *     MiInitializeWorkingSetList @ 0x1404631F0 (MiInitializeWorkingSetList.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1404634D4 (MiInitializeProcessBottomUpEntropy.c)
 *     MiMapProcessExecutable @ 0x1404635E8 (MiMapProcessExecutable.c)
 *     MiSessionCreate @ 0x1404FE8CC (MiSessionCreate.c)
 *     MiInitializeLockedPagesTracking @ 0x140621E34 (MiInitializeLockedPagesTracking.c)
 *     MiReturnProcessVads @ 0x140621E8C (MiReturnProcessVads.c)
 */

__int64 __fastcall MmInitializeProcessAddressSpace(
        __int64 a1,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        _DWORD *a4,
        int a5)
{
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r12
  int v12; // ecx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // edi
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // r8
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h]
  _QWORD v29[7]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v30[8]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD Src[20]; // [rsp+80h] [rbp-80h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v32; // [rsp+D0h] [rbp-30h] BYREF

  Src[0] = 0;
  memset(&Src[2], 0, 0x48uLL);
  v9 = 2LL;
  if ( BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v32);
    v28 = MEMORY[0xFFFFF58010804200];
    memmove(Src, (const void *)0xFFFFF58010804208LL, 0x50uLL);
    v10 = MEMORY[0xFFFFF580108042B0];
    *(_OWORD *)&v29[1] = MEMORY[0xFFFFF580108042C0];
    *(_OWORD *)&v29[3] = MEMORY[0xFFFFF580108042D0];
    *(_OWORD *)&v29[5] = MEMORY[0xFFFFF580108042E0];
    KiUnstackDetachProcess(&v32, 0LL);
    v25 = &v29[3];
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
    v28 = 0LL;
    v10 = 0LL;
    memset(&v29[1], 0, 0x30uLL);
  }
  KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)&v32);
  *(_QWORD *)(a1 + 1552) = 0LL;
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_QWORD *)(a1 + 880) = 0LL;
  v11 = a1 + 1280;
  *(_QWORD *)(a1 + 1464) = 0xFFFFF58010804000uLL;
  *(_DWORD *)(a1 + 1280) = 0;
  if ( (MmTrackLockedPages & 0x10000001) == 1 )
    MiInitializeLockedPagesTracking(a1);
  MiInitializeWorkingSetList(a1);
  v12 = 256;
  MEMORY[0xFFFFF58010804260] = 1;
  v13 = 0xFFFFF58010000000uLL;
  MEMORY[0xFFFFF58010804310] = 256;
  MEMORY[0xFFFFF58010804318] = 0xFFFFF580108042F0uLL;
  v14 = 0xFFFFF58010804320uLL;
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
  v29[0] = 0LL;
  v15 = MiComputeProcessUserVa(a1, BugCheckParameter1, a3, (unsigned int)&P, (__int64)v29);
  if ( v15 < 0 )
    goto LABEL_40;
  if ( !BugCheckParameter1 )
  {
    MiInitializeProcessBottomUpEntropy(a1);
    MiInitializeProcessTopDownEntropy(a1, a3, 0LL);
    if ( !(unsigned int)MiInitializeVadBitMap(0LL) )
      goto LABEL_39;
  }
  MiInsertProcessVads(a1, P, v16);
  if ( a3 )
  {
    v17 = MiMapProcessExecutable(a1, a3, a4, v29[0]);
    LOBYTE(v18) = 1;
    v15 = v17;
    MiInitializeProcessTopDownEntropy(a1, a3, v18);
LABEL_12:
    MiAllowWorkingSetExpansion(a1 + 1280);
    KiUnstackDetachProcess(&v32, 0LL);
    return (unsigned int)v15;
  }
  if ( (*(_DWORD *)(a1 + 1724) & 1) != 0 && !BugCheckParameter1 )
    goto LABEL_12;
  *a4 &= ~0x10u;
  if ( !BugCheckParameter1 )
  {
    KiUnstackDetachProcess(&v32, 0LL);
    return 0;
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 720) )
  {
    v15 = -1073741595;
    goto LABEL_40;
  }
  *(_QWORD *)(a1 + 1104) = *(_QWORD *)(BugCheckParameter1 + 1104);
  *(_DWORD *)(a1 + 1112) = *(_DWORD *)(BugCheckParameter1 + 1112);
  *(_WORD *)(a1 + 1116) = *(_WORD *)(BugCheckParameter1 + 1116);
  *(_BYTE *)(a1 + 1118) = *(_BYTE *)(BugCheckParameter1 + 1118);
  *(_QWORD *)(a1 + 1152) = *(_QWORD *)(BugCheckParameter1 + 1152);
  memmove((void *)0xFFFFF58010804208LL, Src, 0x50uLL);
  MEMORY[0xFFFFF58010804200] = v28;
  MEMORY[0xFFFFF580108042C0] = *(_OWORD *)&v29[1];
  MEMORY[0xFFFFF580108042D0] = *(_OWORD *)&v29[3];
  MEMORY[0xFFFFF580108042E0] = *(_OWORD *)&v29[5];
  if ( !(unsigned int)MiInitializeVadBitMap(1LL) )
  {
LABEL_39:
    v15 = -1073741801;
LABEL_40:
    KiUnstackDetachProcess(&v32, 0LL);
    MiReturnProcessVads(P);
    return (unsigned int)v15;
  }
  v20 = *(_QWORD **)(BugCheckParameter1 + 1064);
  if ( v20 )
    **(_QWORD **)(a1 + 1064) = *v20;
  if ( (*a4 & 0x80u) != 0 )
    v15 = MiSessionCreate(v30);
  else
    v15 = 0;
  if ( (a5 & 1) != 0 )
    v21 = v10 + 1;
  else
    v21 = 0LL;
  MEMORY[0xFFFFF580108042B0] = v21;
  v22 = 3LL;
  v23 = (_QWORD *)0xFFFFF58010804278LL;
  do
  {
    v23[1] = v23;
    *v23 = v23;
    v23 += 2;
    --v22;
  }
  while ( v22 );
  KiUnstackDetachProcess(&v32, 0LL);
  if ( v15 >= 0 )
  {
    v15 = MiCloneProcessAddressSpace((_KPROCESS *)BugCheckParameter1, (struct _KPROCESS *)a1, a5);
    if ( v15 >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)&v32);
      CurrentThread = KeGetCurrentThread();
      if ( v29[5] )
        MiReferenceCfgVad((__int64)CurrentThread, v29[4], 1);
      if ( v29[2] )
        MiReferenceCfgVad((__int64)CurrentThread, v29[1], 0);
      KiUnstackDetachProcess(&v32, 0LL);
    }
  }
  MiAllowWorkingSetExpansion(v11);
  return (unsigned int)v15;
}
