/*
 * XREFs of NdisFreeIoWorkItem @ 0x1C0013510
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C0013574 (ndisDereferenceDriver.c)
 *     ndisDereferenceFilterDriver @ 0x1C0018DB4 (ndisDereferenceFilterDriver.c)
 */

void __stdcall NdisFreeIoWorkItem(NDIS_HANDLE NdisIoWorkItemHandle)
{
  _NDIS_FILTER_DRIVER_BLOCK *v2; // rcx
  UCHAR Type; // al
  char v4; // r8

  v2 = (_NDIS_FILTER_DRIVER_BLOCK *)*((_QWORD *)NdisIoWorkItemHandle + 1);
  Type = v2->Header.Type;
  if ( v2->Header.Type == 2 )
  {
    v4 = 3;
LABEL_3:
    ndisDereferenceDriver(v2, 0LL, v4);
    goto LABEL_4;
  }
  v4 = 4;
  switch ( Type )
  {
    case 4u:
LABEL_11:
      ndisDereferenceFilterDriver(v2);
      break;
    case 9u:
      v2 = (_NDIS_FILTER_DRIVER_BLOCK *)v2->FilterQueue;
      if ( v2->Header.Type == 2 )
        goto LABEL_3;
      if ( v2->Header.Type != 4 )
        break;
      goto LABEL_11;
    case 0x11u:
      ndisDereferenceMiniport((__int64)v2, 0x60u);
      break;
  }
LABEL_4:
  IoFreeWorkItem(*((PIO_WORKITEM *)NdisIoWorkItemHandle + 2));
  ExFreePoolWithTag(NdisIoWorkItemHandle, 0);
}
