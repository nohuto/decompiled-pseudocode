/*
 * XREFs of IopLiveDumpFreeMappingResources @ 0x140677D3C
 * Callers:
 *     IopLiveDumpAllocateMappingResources @ 0x140677B20 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x140677FBC (IopLiveDumpReleaseResources.c)
 * Callees:
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MmReleaseDumpHibernateResources @ 0x1405651F4 (MmReleaseDumpHibernateResources.c)
 */

void __fastcall IopLiveDumpFreeMappingResources(__int64 a1)
{
  unsigned int i; // edi
  unsigned __int64 *v3; // rsi
  struct _MDL *v4; // rcx

  if ( *(_QWORD *)(a1 + 552) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 544); ++i )
    {
      v3 = (unsigned __int64 *)(*(_QWORD *)(a1 + 552) + 16LL * i);
      if ( *v3 )
        MmReleaseDumpHibernateResources(*v3, 0x10000uLL);
      v4 = (struct _MDL *)v3[1];
      if ( v4 )
        IoFreeMdl(v4);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 552), 0x706D644Cu);
    *(_QWORD *)(a1 + 552) = 0LL;
    *(_DWORD *)(a1 + 544) = 0;
  }
}
