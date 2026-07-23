/*
 * XREFs of SmKmFileInfoCleanup @ 0x140697EC4
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140003B38 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmFileInfoDuplicate @ 0x140697F60 (SmKmFileInfoDuplicate.c)
 *     SmKmStoreFileCreate @ 0x140698BCC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14069904C (SmKmStoreFileCreateForIoType.c)
 *     SmcCacheCleanup @ 0x140699F1C (SmcCacheCleanup.c)
 * Callees:
 *     IoFreeIrp @ 0x140055950 (IoFreeIrp.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoSetThreadHardErrorMode @ 0x140074D38 (IoSetThreadHardErrorMode.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     IoReuseIrp @ 0x1400CF080 (IoReuseIrp.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140111FA4 (PnpUnregisterPlugPlayNotification.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     SmKmSendUsageNotification @ 0x140698B10 (SmKmSendUsageNotification.c)
 */

BOOLEAN __fastcall SmKmFileInfoCleanup(__int64 a1)
{
  BOOLEAN v2; // al
  __int64 v3; // rcx
  BOOLEAN v4; // di
  void *v5; // rcx
  IRP *v6; // rcx
  void *v7; // rcx
  struct _PRIVILEGE_SET *v8; // rcx

  v2 = IoSetThreadHardErrorMode(0);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v2;
  if ( v3 )
    PnpUnregisterPlugPlayNotification(v3, 0);
  v5 = *(void **)(a1 + 16);
  if ( v5 )
    ObfDereferenceObject(v5);
  v6 = *(IRP **)(a1 + 40);
  if ( v6 )
  {
    IoReuseIrp(v6, 0);
    SmKmSendUsageNotification(*(PIRP *)(a1 + 40), *(PFILE_OBJECT *)(a1 + 8));
    IoFreeIrp(*(PIRP *)(a1 + 40));
  }
  v7 = *(void **)(a1 + 8);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( *(_QWORD *)a1 )
    ZwClose(*(HANDLE *)a1);
  v8 = *(struct _PRIVILEGE_SET **)(a1 + 48);
  if ( v8 )
    MiDeleteSubsection(v8);
  return IoSetThreadHardErrorMode(v4);
}
