/*
 * XREFs of IopLiveDumpFreeMappingResources @ 0x1405FD3F4
 * Callers:
 *     IopLiveDumpAllocateMappingResources @ 0x1405FD1C8 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x1405FD674 (IopLiveDumpReleaseResources.c)
 * Callees:
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmReleaseDumpHibernateResources @ 0x1404F5948 (MmReleaseDumpHibernateResources.c)
 */

void __fastcall IopLiveDumpFreeMappingResources(__int64 a1)
{
  unsigned int i; // edi
  unsigned __int64 *v3; // rsi
  struct _MDL *v4; // rcx

  if ( *(_QWORD *)(a1 + 568) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 560); ++i )
    {
      v3 = (unsigned __int64 *)(*(_QWORD *)(a1 + 568) + 16LL * i);
      if ( *v3 )
        MmReleaseDumpHibernateResources(*v3, 0x10000uLL);
      v4 = (struct _MDL *)v3[1];
      if ( v4 )
        IoFreeMdl(v4);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 568), 0x706D644Cu);
    *(_QWORD *)(a1 + 568) = 0LL;
    *(_DWORD *)(a1 + 560) = 0;
  }
}
