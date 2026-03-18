/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x140073E30
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x140073DD0 (IoBuildDeviceIoControlRequest.c)
 * Callees:
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     sub_1400E53CC @ 0x1400E53CC (sub_1400E53CC.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopBuildDeviceIoControlRequest(
        int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        PVOID VirtualAddress,
        unsigned int Length,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  SIZE_T v10; // r15
  int v12; // r13d
  __int64 Irp; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // r14d
  unsigned int v18; // esi
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  void **p_FirstArgument; // rdi
  void **v22; // rsi
  unsigned __int8 CurrentIrql; // r15
  KSPIN_LOCK *v24; // r14
  void ***v25; // rax
  PVOID PoolWithTagPriority; // rax
  int v28; // r15d
  PMDL Mdl; // rax
  int v30; // edx

  v10 = a4;
  v12 = a2;
  Irp = pIoAllocateIrp(a2, *(unsigned __int8 *)(a2 + 76), 0LL, a10);
  v15 = Irp;
  if ( !Irp )
    return 0LL;
  v16 = *(_QWORD *)(Irp + 184);
  if ( a7 )
    *(_BYTE *)(v16 - 72) = 15;
  else
    *(_BYTE *)(v16 - 72) = 14;
  v17 = Length;
  *(_DWORD *)(v16 - 64) = Length;
  *(_DWORD *)(v16 - 56) = v10;
  *(_DWORD *)(v16 - 48) = a1;
  v18 = a1 & 3;
  if ( v18 )
  {
    if ( v18 > 2 )
    {
      *(_QWORD *)(Irp + 112) = VirtualAddress;
      *(_QWORD *)(v16 - 40) = a3;
      goto LABEL_16;
    }
    if ( a3 )
    {
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                                NonPagedPoolNxCacheAligned,
                                v10,
                                0x20206F49u,
                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v10, 0x20206F49u);
      *(_QWORD *)(v15 + 24) = PoolWithTagPriority;
      if ( !PoolWithTagPriority )
        goto LABEL_36;
      memmove(PoolWithTagPriority, a3, v10);
      *(_DWORD *)(v15 + 16) = 48;
      v28 = 0;
    }
    else
    {
      v28 = 0;
      *(_DWORD *)(Irp + 16) = 0;
    }
    if ( !VirtualAddress )
      goto LABEL_16;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    *(_QWORD *)(v15 + 8) = Mdl;
    if ( Mdl )
    {
      if ( v18 != 1 )
        v28 = 1;
      sub_1400E53CC((_DWORD)Mdl, v30, v28, v12, *(unsigned __int8 *)(v16 - 72));
      goto LABEL_16;
    }
    if ( a3 )
      ExFreePoolWithTag(*(PVOID *)(v15 + 24), 0);
LABEL_36:
    pIoFreeIrp(v15);
    return 0LL;
  }
  if ( (_DWORD)v10 || Length )
  {
    if ( (unsigned int)v10 > Length )
      v17 = v10;
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTag = ExAllocatePoolWithTagPriority(
                      NonPagedPoolNxCacheAligned,
                      v17,
                      0x20206F49u,
                      (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v17, 0x20206F49u);
    *(_QWORD *)(v15 + 24) = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( a3 )
        memmove(PoolWithTag, a3, v10);
      *(_DWORD *)(v15 + 16) = 48;
      *(_QWORD *)(v15 + 112) = VirtualAddress;
      if ( VirtualAddress )
        *(_DWORD *)(v15 + 16) = 112;
      goto LABEL_16;
    }
    goto LABEL_36;
  }
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 112) = 0LL;
LABEL_16:
  *(_QWORD *)(v15 + 72) = a9;
  *(_QWORD *)(v15 + 80) = a8;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(v15 + 152) = CurrentThread;
  p_FirstArgument = &CurrentThread[1].FirstArgument;
  v22 = (void **)(v15 + 32);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v24 = (KSPIN_LOCK *)&CurrentThread[1].WaitBlockFill11[16];
  KxAcquireSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
  v25 = (void ***)*p_FirstArgument;
  *(_QWORD *)(v15 + 32) = *p_FirstArgument;
  *(_QWORD *)(v15 + 40) = p_FirstArgument;
  if ( v25[1] != p_FirstArgument )
    __fastfail(3u);
  v25[1] = v22;
  *p_FirstArgument = v22;
  KxReleaseSpinLock(v24);
  __writecr8(CurrentIrql);
  *(_DWORD *)(v15 + 16) = *(_DWORD *)(v15 + 16) & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(*(_QWORD *)(v15 + 152))
                                                               + 1) << 17);
  return v15;
}
