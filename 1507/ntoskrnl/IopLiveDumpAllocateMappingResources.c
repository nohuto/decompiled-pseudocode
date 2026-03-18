/*
 * XREFs of IopLiveDumpAllocateMappingResources @ 0x140677B20
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140677378 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MmAllocateDumpHibernateResources @ 0x14056C428 (MmAllocateDumpHibernateResources.c)
 *     IopLiveDumpFreeMappingResources @ 0x140677D3C (IopLiveDumpFreeMappingResources.c)
 */

__int64 __fastcall IopLiveDumpAllocateMappingResources(__int64 a1)
{
  unsigned int v1; // ebp
  SIZE_T v3; // rsi
  PVOID PoolWithTag; // rax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  int v9; // r14d
  __int64 i; // rsi
  __int64 v11; // r15
  void *DumpHibernateResources; // rax
  PMDL Mdl; // rax

  v1 = KeNumberProcessors_0;
  v3 = 16LL * (unsigned int)KeNumberProcessors_0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x706D644Cu);
  v5 = 0;
  *(_QWORD *)(a1 + 552) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v3);
    *(_DWORD *)(a1 + 544) = v1;
    v9 = 0;
    if ( !v1 )
      return v5;
    for ( i = 0LL; ; i += 16LL )
    {
      v11 = *(_QWORD *)(a1 + 552);
      DumpHibernateResources = (void *)MmAllocateDumpHibernateResources(0x10000uLL, v7, v8);
      *(_QWORD *)(i + v11) = DumpHibernateResources;
      if ( !DumpHibernateResources )
        break;
      Mdl = IoAllocateMdl(DumpHibernateResources, 0x10000u, 0, 0, 0LL);
      *(_QWORD *)(i + v11 + 8) = Mdl;
      if ( !Mdl )
        break;
      if ( ++v9 >= v1 )
        return v5;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 544) = 0;
  }
  v5 = -1073741670;
  IopLiveDumpFreeMappingResources(a1);
  return v5;
}
