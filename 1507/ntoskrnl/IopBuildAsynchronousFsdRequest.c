/*
 * XREFs of IopBuildAsynchronousFsdRequest @ 0x140007270
 * Callers:
 *     IoBuildAsynchronousFsdRequest @ 0x140007244 (IoBuildAsynchronousFsdRequest.c)
 *     IopBuildSynchronousFsdRequest @ 0x14040E000 (IopBuildSynchronousFsdRequest.c)
 * Callees:
 *     sub_14000745C @ 0x14000745C (sub_14000745C.c)
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
  __int64 v14; // r8
  int v15; // edx
  int v17; // eax
  PMDL Mdl; // rax
  int v19; // edx
  PVOID PoolWithTagPriority; // rax

  v7 = a4;
  v9 = a2;
  LOBYTE(a2) = *(_BYTE *)(a2 + 76);
  Irp = pIoAllocateIrp(v9, a2, 0LL, a7);
  if ( !Irp )
    return 0LL;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  v12 = *(_QWORD *)(Irp + 184);
  *(_BYTE *)(v12 - 72) = a1;
  if ( a1 > 0x1B || (v13 = 138478080, !_bittest(&v13, a1)) )
  {
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
        if ( a1 != 4 )
        {
          *(_DWORD *)(Irp + 16) = 112;
          goto LABEL_10;
        }
        memmove(PoolWithTagPriority, a3, v7);
        *(_DWORD *)(Irp + 16) = 48;
LABEL_11:
        *(_DWORD *)(v12 - 64) = v7;
        if ( a5 )
          *(_QWORD *)(v12 - 48) = *a5;
        goto LABEL_4;
      }
    }
    else
    {
      if ( (v17 & 0x10) == 0 )
      {
LABEL_10:
        *(_QWORD *)(Irp + 112) = a3;
        goto LABEL_11;
      }
      Mdl = IoAllocateMdl(a3, v7, 0, 0, 0LL);
      *(_QWORD *)(Irp + 8) = Mdl;
      if ( Mdl )
      {
        sub_14000745C((_DWORD)Mdl, v19, a1 == 3, v9, *(unsigned __int8 *)(v12 - 72));
        goto LABEL_11;
      }
    }
    pIoFreeIrp(Irp);
    return 0LL;
  }
LABEL_4:
  v14 = *(_QWORD *)(Irp + 152);
  v15 = (*(_DWORD *)(v14 + 1724) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(v14 + 544) + 772LL) & 0x100000) != 0 )
    v15 = 0;
  if ( v15 < 2 && (struct _KTHREAD *)v14 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(v14 + 1788) )
      v15 = 2;
  }
  *(_DWORD *)(Irp + 16) = *(_DWORD *)(Irp + 16) & 0xFFF1FFFF | ((v15 << 17) + 0x20000);
  *(_QWORD *)(Irp + 72) = a6;
  return Irp;
}
