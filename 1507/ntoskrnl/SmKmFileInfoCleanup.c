/*
 * XREFs of SmKmFileInfoCleanup @ 0x1406DC94C
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DA708 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmcCacheCleanup @ 0x1406DAEB8 (SmcCacheCleanup.c)
 *     SmKmFileInfoDuplicate @ 0x1406DC9E8 (SmKmFileInfoDuplicate.c)
 *     SmKmStoreFileCreate @ 0x1406DD710 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x1406DDB90 (SmKmStoreFileCreateForIoType.c)
 * Callees:
 *     IoFreeIrp @ 0x14004BC70 (IoFreeIrp.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IoSetThreadHardErrorMode @ 0x1400EFE84 (IoSetThreadHardErrorMode.c)
 *     IoReuseIrp @ 0x14010B380 (IoReuseIrp.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140138BC0 (PnpUnregisterPlugPlayNotification.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     SmKmSendUsageNotification @ 0x1406DD654 (SmKmSendUsageNotification.c)
 */

BOOLEAN __fastcall SmKmFileInfoCleanup(__int64 a1)
{
  BOOLEAN v2; // al
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  BOOLEAN v6; // di
  void *v7; // rcx
  IRP *v8; // rcx
  void *v9; // rcx
  struct _PRIVILEGE_SET *v10; // rcx

  v2 = IoSetThreadHardErrorMode(0);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = v2;
  if ( v5 )
    PnpUnregisterPlugPlayNotification(v5, 0, v3, v4);
  v7 = *(void **)(a1 + 16);
  if ( v7 )
    ObfDereferenceObject(v7);
  v8 = *(IRP **)(a1 + 40);
  if ( v8 )
  {
    IoReuseIrp(v8, 0);
    SmKmSendUsageNotification(*(PIRP *)(a1 + 40), *(PFILE_OBJECT *)(a1 + 8));
    IoFreeIrp(*(PIRP *)(a1 + 40));
  }
  v9 = *(void **)(a1 + 8);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( *(_QWORD *)a1 )
    ZwClose(*(HANDLE *)a1);
  v10 = *(struct _PRIVILEGE_SET **)(a1 + 48);
  if ( v10 )
    ExFreePoolEx(v10);
  return IoSetThreadHardErrorMode(v6);
}
