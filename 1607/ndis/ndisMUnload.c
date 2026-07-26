/*
 * XREFs of ndisMUnload @ 0x1C00F3290
 * Callers:
 *     NdisTerminateWrapper @ 0x1C00D1BF0 (NdisTerminateWrapper.c)
 * Callees:
 *     ndisDereferenceDriver @ 0x1C001331C (ndisDereferenceDriver.c)
 *     ndisCloseRef @ 0x1C001AF28 (ndisCloseRef.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 */

void __fastcall ndisMUnload(PDRIVER_OBJECT DriverObject)
{
  char v2; // bp
  _WORD *DriverObjectExtension; // rax
  __int16 v4; // cx
  KIRQL v5; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // rdi
  void (__fastcall *UnloadHandler)(_DRIVER_OBJECT *); // rax
  _NDIS_PROTOCOL_BLOCK *AssociatedProtocol; // rax

  v2 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x20u, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, (__int64)DriverObject);
  ndisReferencePackage((__int64)&ndisPkgs);
  while ( 1 )
  {
    DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E4D4944);
    if ( !DriverObjectExtension )
    {
      DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E494944);
      if ( !DriverObjectExtension )
        goto LABEL_9;
      v2 = 1;
    }
    v4 = DriverObjectExtension[13];
    if ( (v4 & 0x10) == 0 )
      DriverObjectExtension[13] = v4 | 8;
LABEL_9:
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    for ( i = ndisMiniDriverList; i && (i->DriverObject != DriverObject || v2 && (i->Flags & 1) == 0); i = i->NextDriver )
      ;
    KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
    if ( !i )
      break;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x21u, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, (__int64)i);
    i->Flags |= 0x8000u;
    ndisCloseRef(&i->Ref.SpinLock);
    UnloadHandler = i->UnloadHandler;
    if ( UnloadHandler )
      UnloadHandler(DriverObject);
    AssociatedProtocol = i->AssociatedProtocol;
    if ( AssociatedProtocol )
    {
      AssociatedProtocol->AssociatedMiniDriver = 0LL;
      i->AssociatedProtocol = 0LL;
    }
    ndisDereferenceDriver((__int64)i, 0);
    KeWaitForSingleObject(&i->MiniportsRemovedEvent, Executive, 0, 0, 0LL);
    KeClearEvent(&i->MiniportsRemovedEvent);
    if ( i == ndisDriverTrackAlloc )
      ndisDriverTrackAlloc = 0LL;
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x22u, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, DriverObject, 0LL);
}
