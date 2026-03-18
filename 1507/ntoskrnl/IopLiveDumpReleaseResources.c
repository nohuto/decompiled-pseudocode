/*
 * XREFs of IopLiveDumpReleaseResources @ 0x140677FBC
 * Callers:
 *     DbgkpWerCleanupContext @ 0x14066AABC (DbgkpWerCleanupContext.c)
 *     IoCaptureLiveDump @ 0x140676C1C (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406771E4 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140677378 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140677CBC (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeMappingResources @ 0x140677D3C (IopLiveDumpFreeMappingResources.c)
 */

void __fastcall IopLiveDumpReleaseResources(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  if ( a1 )
  {
    IopLiveDumpFreeMappingResources((__int64)a1);
    v2 = (void *)a1[48];
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x706D644Cu);
      a1[48] = 0LL;
    }
    v3 = (void *)a1[52];
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x706D644Cu);
      a1[52] = 0LL;
    }
    v4 = (void *)a1[55];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x706D644Cu);
      a1[55] = 0LL;
    }
    v5 = (void *)a1[58];
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x706D644Cu);
      a1[58] = 0LL;
    }
    v6 = (void *)a1[16];
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x706D644Cu);
      a1[16] = 0LL;
    }
    IopLiveDumpFreeDumpBuffers((__int64)(a1 + 59));
    v7 = (void *)a1[70];
    if ( v7 )
    {
      ZwClose(v7);
      a1[70] = 0LL;
    }
    v8 = (void *)a1[71];
    if ( v8 )
    {
      ZwClose(v8);
      a1[71] = 0LL;
    }
  }
}
