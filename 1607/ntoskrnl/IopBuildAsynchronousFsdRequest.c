/*
 * XREFs of IopBuildAsynchronousFsdRequest @ 0x14010AEC0
 * Callers:
 *     IoBuildAsynchronousFsdRequest @ 0x14010AE94 (IoBuildAsynchronousFsdRequest.c)
 *     IopBuildSynchronousFsdRequest @ 0x14050E5E0 (IopBuildSynchronousFsdRequest.c)
 * Callees:
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400E9DD0 (IoSetDiskIoAttributionFromThread.c)
 *     IopProbeAndLockPages @ 0x14010AC3C (IopProbeAndLockPages.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopBuildAsynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7)
{
  SIZE_T v7; // r12
  __int64 v9; // r15
  __int64 Irp; // rbx
  __int64 v12; // rdi
  int v13; // eax
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rdx
  struct _MDL *Mdl; // rcx
  PVOID PoolWithTagPriority; // rax

  v7 = a4;
  v9 = a2;
  LOBYTE(a2) = *(_BYTE *)(a2 + 76);
  Irp = pIoAllocateIrp(v9, a2, 0LL, a7);
  if ( Irp )
  {
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    v12 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v12 - 72) = a1;
    if ( a1 <= 0x1B )
    {
      v13 = 138478080;
      if ( _bittest(&v13, a1) )
      {
LABEL_4:
        *(_DWORD *)(Irp + 16) = *(_DWORD *)(Irp + 16) & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(*(_QWORD *)(Irp + 152))
                                                                     + 1) << 17);
        *(_QWORD *)(Irp + 72) = a6;
        return Irp;
      }
    }
    v15 = *(_DWORD *)(v9 + 48);
    if ( (v15 & 4) != 0 )
    {
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                                NonPagedPoolNxCacheAligned,
                                v7,
                                0x20206F49u,
                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v7, 0x20206F49u);
      *(_QWORD *)(Irp + 24) = PoolWithTagPriority;
      if ( PoolWithTagPriority )
      {
        if ( a1 == 4 )
        {
          memmove(PoolWithTagPriority, a3, v7);
          *(_DWORD *)(Irp + 16) = 48;
          goto LABEL_8;
        }
        *(_DWORD *)(Irp + 16) = 112;
        goto LABEL_7;
      }
    }
    else
    {
      if ( (v15 & 0x10) == 0 )
      {
LABEL_7:
        *(_QWORD *)(Irp + 112) = a3;
LABEL_8:
        *(_DWORD *)(v12 - 64) = v7;
        if ( a5 )
          *(_QWORD *)(v12 - 48) = *a5;
        v16 = *(_DWORD *)(v9 + 72);
        if ( v16 >= 7 && (v16 <= 9 || v16 == 36) )
          IoSetDiskIoAttributionFromThread(Irp, *(struct _KTHREAD **)(Irp + 152));
        goto LABEL_4;
      }
      Mdl = IoAllocateMdl(a3, v7, 0, 0, 0LL);
      *(_QWORD *)(Irp + 8) = Mdl;
      if ( Mdl )
      {
        IopProbeAndLockPages(Mdl, v17, (LOCK_OPERATION)(a1 == 3), v9, *(unsigned __int8 *)(v12 - 72));
        goto LABEL_8;
      }
    }
    pIoFreeIrp(Irp);
  }
  return 0LL;
}
