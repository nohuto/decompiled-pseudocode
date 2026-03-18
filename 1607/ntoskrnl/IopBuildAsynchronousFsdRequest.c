/*
 * XREFs of IopBuildAsynchronousFsdRequest @ 0x1400A4594
 * Callers:
 *     IoBuildAsynchronousFsdRequest @ 0x1400A4568 (IoBuildAsynchronousFsdRequest.c)
 *     IopBuildSynchronousFsdRequest @ 0x1404CDF48 (IopBuildSynchronousFsdRequest.c)
 * Callees:
 *     IoAllocateMdl @ 0x14002EF90 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x140072230 (IoFreeMdl.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E210 (ExAllocatePoolWithTagPriority.c)
 *     IopProbeAndLockPages @ 0x1400A4754 (IopProbeAndLockPages.c)
 *     PsGetIoPriorityThread @ 0x1400E7E30 (PsGetIoPriorityThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400EBF60 (IoSetDiskIoAttributionFromThread.c)
 *     memmove @ 0x140171280 (memmove.c)
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
  __int64 v11; // rdx
  __int64 Irp; // rbx
  __int64 v13; // r8
  __int64 v14; // rdi
  int v15; // eax
  int v17; // eax
  unsigned int v18; // eax
  PMDL Mdl; // rax
  int v20; // edx
  PVOID PoolWithTagPriority; // rax

  v7 = a4;
  v9 = a2;
  LOBYTE(a2) = *(_BYTE *)(a2 + 76);
  Irp = pIoAllocateIrp(v9, a2, 0LL, a7);
  if ( Irp )
  {
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    v14 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v14 - 72) = a1;
    if ( a1 <= 0x1B )
    {
      v15 = 138478080;
      if ( _bittest(&v15, a1) )
      {
LABEL_4:
        *(_DWORD *)(Irp + 16) = *(_DWORD *)(Irp + 16) & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(
                                                                                       *(_QWORD *)(Irp + 152),
                                                                                       v11,
                                                                                       v13)
                                                                     + 1) << 17);
        *(_QWORD *)(Irp + 72) = a6;
        return Irp;
      }
    }
    v17 = *(_DWORD *)(v9 + 48);
    if ( (v17 & 4) != 0 )
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
      if ( (v17 & 0x10) == 0 )
      {
LABEL_7:
        *(_QWORD *)(Irp + 112) = a3;
LABEL_8:
        *(_DWORD *)(v14 - 64) = v7;
        if ( a5 )
          *(_QWORD *)(v14 - 48) = *a5;
        v18 = *(_DWORD *)(v9 + 72);
        if ( v18 >= 7 && (v18 <= 9 || v18 == 36) )
          IoSetDiskIoAttributionFromThread(Irp, *(_QWORD *)(Irp + 152));
        goto LABEL_4;
      }
      Mdl = IoAllocateMdl(a3, v7, 0, 0, 0LL);
      *(_QWORD *)(Irp + 8) = Mdl;
      if ( Mdl )
      {
        IopProbeAndLockPages((_DWORD)Mdl, v20, a1 == 3, v9, *(unsigned __int8 *)(v14 - 72));
        goto LABEL_8;
      }
    }
    pIoFreeIrp(Irp);
  }
  return 0LL;
}
