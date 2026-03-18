/*
 * XREFs of SmKmFileInfoCleanup @ 0x140697DE0
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039C4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmFileInfoDuplicate @ 0x140697E7C (SmKmFileInfoDuplicate.c)
 *     SmKmStoreFileCreate @ 0x140698AE8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x140698F68 (SmKmStoreFileCreateForIoType.c)
 *     SmcCacheCleanup @ 0x140699E38 (SmcCacheCleanup.c)
 * Callees:
 *     IoFreeIrp @ 0x140055DD0 (IoFreeIrp.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IoSetThreadHardErrorMode @ 0x140074CB8 (IoSetThreadHardErrorMode.c)
 *     MiDeleteSubsection @ 0x140087410 (MiDeleteSubsection.c)
 *     IoReuseIrp @ 0x1400D11E0 (IoReuseIrp.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140111A40 (PnpUnregisterPlugPlayNotification.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     SmKmSendUsageNotification @ 0x140698A2C (SmKmSendUsageNotification.c)
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
