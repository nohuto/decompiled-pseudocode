/*
 * XREFs of ndisDereferenceFilterDriver @ 0x1C0018DB4
 * Callers:
 *     NdisFreeIoWorkItem @ 0x1C0013510 (NdisFreeIoWorkItem.c)
 *     NdisAllocateIoWorkItem @ 0x1C00245F0 (NdisAllocateIoWorkItem.c)
 *     NdisFDeregisterFilterDriver @ 0x1C0052FA0 (NdisFDeregisterFilterDriver.c)
 *     ndisDereferenceFilter @ 0x1C00536C0 (ndisDereferenceFilter.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00A7678 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C00DA5E4 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C001C6C4 (ndisDereferenceRef.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0052650 (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisDereferenceFilterDriver(_NDIS_FILTER_DRIVER_BLOCK *this)
{
  _NDIS_FILTER_DRIVER_BLOCK *v1; // rbx
  KIRQL v2; // al
  struct _NDIS_FILTER_DRIVER_BLOCK **p_NextFilterDriver; // rcx
  KIRQL v4; // di
  struct _NDIS_FILTER_DRIVER_BLOCK *v5; // rdx
  unsigned int v6; // edx
  wchar_t *Buffer; // rcx

  v1 = this;
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_q(49LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, this);
  if ( (unsigned __int8)ndisDereferenceRef(&v1->Ref.SpinLock) )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
    p_NextFilterDriver = &ndisFilterDriverList;
    v4 = v2;
    if ( ndisFilterDriverList )
    {
      while ( 1 )
      {
        v5 = *p_NextFilterDriver;
        if ( *p_NextFilterDriver == v1 )
          break;
        p_NextFilterDriver = &v5->NextFilterDriver;
        if ( !v5->NextFilterDriver )
          goto LABEL_11;
      }
      *p_NextFilterDriver = v1->NextFilterDriver;
      ObfDereferenceObject(ndisDriverObject);
    }
LABEL_11:
    KeReleaseSpinLock(&ndisFilterDriverListLock, v4);
    Buffer = v1->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      v1->ImageName.Buffer = 0LL;
    }
    _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(v1, v6);
    ExFreePoolWithTag(v1, 0);
    v1 = 0LL;
  }
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_q(50LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, v1);
}
