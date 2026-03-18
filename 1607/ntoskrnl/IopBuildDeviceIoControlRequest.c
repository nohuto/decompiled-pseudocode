/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x1400E9780
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x1400ED0DC (IoBuildDeviceIoControlRequest.c)
 * Callees:
 *     IoAllocateMdl @ 0x14002EF90 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x140072230 (IoFreeMdl.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E210 (ExAllocatePoolWithTagPriority.c)
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 *     IopProbeAndLockPages @ 0x1400A4754 (IopProbeAndLockPages.c)
 *     PsGetIoPriorityThread @ 0x1400E7E30 (PsGetIoPriorityThread.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
  __int64 Irp; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // r14d
  unsigned int v18; // esi
  PVOID PoolWithTag; // rax
  int v20; // ecx
  struct _KTHREAD *CurrentThread; // rax
  void **p_FirstArgument; // rdi
  _QWORD *v23; // rsi
  unsigned __int8 CurrentIrql; // r15
  KSPIN_LOCK *v25; // r14
  _QWORD *v26; // rax
  LOCK_OPERATION v28; // r15d
  __int64 v29; // rdx
  struct _MDL *Mdl; // rcx
  PVOID PoolWithTagPriority; // rax

  v10 = a4;
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
      goto LABEL_17;
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
        goto LABEL_37;
      memmove(PoolWithTagPriority, a3, v10);
      *(_DWORD *)(v15 + 16) = 48;
      v28 = IoReadAccess;
    }
    else
    {
      v28 = IoReadAccess;
      *(_DWORD *)(Irp + 16) = 0;
    }
    if ( !VirtualAddress )
      goto LABEL_17;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    *(_QWORD *)(v15 + 8) = Mdl;
    if ( Mdl )
    {
      if ( v18 != 1 )
        v28 = IoWriteAccess;
      IopProbeAndLockPages(Mdl, v29, v28, a2, *(unsigned __int8 *)(v16 - 72));
      goto LABEL_17;
    }
    if ( a3 )
      ExFreePoolWithTag(*(PVOID *)(v15 + 24), 0);
LABEL_37:
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
      v20 = *(_DWORD *)(v15 + 16);
      if ( VirtualAddress )
        v20 = 112;
      *(_DWORD *)(v15 + 16) = v20;
      goto LABEL_17;
    }
    goto LABEL_37;
  }
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 112) = 0LL;
LABEL_17:
  *(_QWORD *)(v15 + 72) = a9;
  *(_QWORD *)(v15 + 80) = a8;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(v15 + 152) = CurrentThread;
  p_FirstArgument = &CurrentThread[1].FirstArgument;
  v23 = (_QWORD *)(v15 + 32);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v25 = (KSPIN_LOCK *)&CurrentThread[1].WaitBlockFill11[16];
  KxAcquireSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
  v26 = *p_FirstArgument;
  if ( *((void ***)*p_FirstArgument + 1) != p_FirstArgument )
    __fastfail(3u);
  *v23 = v26;
  *(_QWORD *)(v15 + 40) = p_FirstArgument;
  v26[1] = v23;
  *p_FirstArgument = v23;
  KxReleaseSpinLock(v25);
  __writecr8(CurrentIrql);
  *(_DWORD *)(v15 + 16) = *(_DWORD *)(v15 + 16) & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(*(_QWORD *)(v15 + 152))
                                                               + 1) << 17);
  return v15;
}
