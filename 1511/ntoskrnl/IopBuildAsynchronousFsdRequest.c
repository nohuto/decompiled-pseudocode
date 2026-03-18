/*
 * XREFs of IopBuildAsynchronousFsdRequest @ 0x1400E5238
 * Callers:
 *     IoBuildAsynchronousFsdRequest @ 0x1400E520C (IoBuildAsynchronousFsdRequest.c)
 *     IopBuildSynchronousFsdRequest @ 0x1404A9D74 (IopBuildSynchronousFsdRequest.c)
 * Callees:
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     sub_1400E53CC @ 0x1400E53CC (sub_1400E53CC.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
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
  SIZE_T v7; // r15
  __int64 v9; // r13
  __int64 Irp; // rbx
  __int64 v12; // rdi
  int v13; // eax
  int v15; // eax
  PMDL Mdl; // rax
  int v17; // edx
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
        goto LABEL_4;
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
        if ( a1 != 4 )
        {
          *(_DWORD *)(Irp + 16) = 112;
          goto LABEL_7;
        }
        memmove(PoolWithTagPriority, a3, v7);
        *(_DWORD *)(Irp + 16) = 48;
LABEL_8:
        *(_DWORD *)(v12 - 64) = v7;
        if ( a5 )
          *(_QWORD *)(v12 - 48) = *a5;
LABEL_4:
        *(_DWORD *)(Irp + 16) = *(_DWORD *)(Irp + 16) & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(*(_QWORD *)(Irp + 152))
                                                                     + 1) << 17);
        *(_QWORD *)(Irp + 72) = a6;
        return Irp;
      }
    }
    else
    {
      if ( (v15 & 0x10) == 0 )
      {
LABEL_7:
        *(_QWORD *)(Irp + 112) = a3;
        goto LABEL_8;
      }
      Mdl = IoAllocateMdl(a3, v7, 0, 0, 0LL);
      *(_QWORD *)(Irp + 8) = Mdl;
      if ( Mdl )
      {
        sub_1400E53CC((_DWORD)Mdl, v17, a1 == 3, v9, *(unsigned __int8 *)(v12 - 72));
        goto LABEL_8;
      }
    }
    pIoFreeIrp(Irp);
  }
  return 0LL;
}
