/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x140006F40
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x140006EE4 (IoBuildDeviceIoControlRequest.c)
 * Callees:
 *     sub_14000745C @ 0x14000745C (sub_14000745C.c)
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
  size_t v10; // r15
  int v12; // r13d
  __int64 Irp; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // r14d
  int v18; // esi
  __int64 v19; // r8
  int v20; // eax
  PVOID PoolWithTagPriority; // rax
  PVOID PoolWithTag; // rax
  PMDL Mdl; // rax
  int v25; // edx

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
  if ( v18 != 3 )
  {
    if ( !v18 )
    {
      if ( !(_DWORD)v10 && !Length )
      {
        *(_DWORD *)(Irp + 16) = 0;
        *(_QWORD *)(Irp + 112) = 0LL;
        goto LABEL_6;
      }
      if ( (unsigned int)v10 > Length )
        v17 = v10;
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                                NonPagedPoolNxCacheAligned,
                                v17,
                                0x20206F49u,
                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v17, 0x20206F49u);
      *(_QWORD *)(v15 + 24) = PoolWithTagPriority;
      if ( PoolWithTagPriority )
      {
        if ( a3 )
          memmove(PoolWithTagPriority, a3, v10);
        *(_DWORD *)(v15 + 16) = 48;
        *(_QWORD *)(v15 + 112) = VirtualAddress;
        if ( VirtualAddress )
          *(_DWORD *)(v15 + 16) = 112;
        goto LABEL_6;
      }
      goto LABEL_40;
    }
    if ( (unsigned int)(v18 - 1) > 1 )
      goto LABEL_6;
    if ( a3 )
    {
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTag = ExAllocatePoolWithTagPriority(
                        NonPagedPoolNxCacheAligned,
                        v10,
                        0x20206F49u,
                        (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v10, 0x20206F49u);
      *(_QWORD *)(v15 + 24) = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_40:
        pIoFreeIrp(v15);
        return 0LL;
      }
      memmove(PoolWithTag, a3, v10);
      *(_DWORD *)(v15 + 16) = 48;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 0;
    }
    if ( !VirtualAddress )
      goto LABEL_6;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    *(_QWORD *)(v15 + 8) = Mdl;
    if ( Mdl )
    {
      sub_14000745C((_DWORD)Mdl, v25, v18 != 1, v12, *(unsigned __int8 *)(v16 - 72));
      goto LABEL_6;
    }
    if ( a3 )
      ExFreePoolWithTag(*(PVOID *)(v15 + 24), 0);
    goto LABEL_40;
  }
  *(_QWORD *)(Irp + 112) = VirtualAddress;
  *(_QWORD *)(v16 - 40) = a3;
LABEL_6:
  *(_QWORD *)(v15 + 72) = a9;
  *(_QWORD *)(v15 + 80) = a8;
  *(_QWORD *)(v15 + 152) = KeGetCurrentThread();
  IopQueueThreadIrp(v15);
  v19 = *(_QWORD *)(v15 + 152);
  v20 = (*(_DWORD *)(v19 + 1724) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(v19 + 544) + 772LL) & 0x100000) != 0 )
    v20 = 0;
  if ( v20 < 2 && (struct _KTHREAD *)v19 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(v19 + 1788) )
      v20 = 2;
  }
  *(_DWORD *)(v15 + 16) = *(_DWORD *)(v15 + 16) & 0xFFF1FFFF | ((v20 << 17) + 0x20000);
  return v15;
}
