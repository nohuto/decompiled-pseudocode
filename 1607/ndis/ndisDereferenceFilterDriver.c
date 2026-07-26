/*
 * XREFs of ndisDereferenceFilterDriver @ 0x1C001A4E8
 * Callers:
 *     ndisDereferenceFilter @ 0x1C0011860 (ndisDereferenceFilter.c)
 *     NdisFreeIoWorkItem @ 0x1C0012E70 (NdisFreeIoWorkItem.c)
 *     NdisAllocateIoWorkItem @ 0x1C00202A0 (NdisAllocateIoWorkItem.c)
 *     NdisFDeregisterFilterDriver @ 0x1C0057A90 (NdisFDeregisterFilterDriver.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AA6A0 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C00E049C (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0057220 (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisDereferenceFilterDriver(_NDIS_FILTER_DRIVER_BLOCK *this, __int64 a2, unsigned __int8 a3)
{
  _NDIS_FILTER_DRIVER_BLOCK *v4; // rbx
  KIRQL v5; // al
  struct _NDIS_FILTER_DRIVER_BLOCK **p_NextFilterDriver; // rcx
  KIRQL v7; // di
  struct _NDIS_FILTER_DRIVER_BLOCK *v8; // rdx
  unsigned int v9; // edx
  wchar_t *Buffer; // rcx

  v4 = this;
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_q(49LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, this);
  if ( ndisDereferenceRef(&v4->Ref.SpinLock, a3) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
    p_NextFilterDriver = &ndisFilterDriverList;
    v7 = v5;
    if ( ndisFilterDriverList )
    {
      while ( 1 )
      {
        v8 = *p_NextFilterDriver;
        if ( *p_NextFilterDriver == v4 )
          break;
        p_NextFilterDriver = &v8->NextFilterDriver;
        if ( !v8->NextFilterDriver )
          goto LABEL_11;
      }
      *p_NextFilterDriver = v4->NextFilterDriver;
      ObfDereferenceObject(ndisDriverObject);
    }
LABEL_11:
    KeReleaseSpinLock(&ndisFilterDriverListLock, v7);
    Buffer = v4->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      v4->ImageName.Buffer = 0LL;
    }
    _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(v4, v9);
    ExFreePoolWithTag(v4, 0);
    v4 = 0LL;
  }
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_q(50LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, v4);
}
