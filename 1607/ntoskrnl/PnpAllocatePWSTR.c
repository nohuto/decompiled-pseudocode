/*
 * XREFs of PnpAllocatePWSTR @ 0x140501D70
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1403F1680 (PiSwPdoPnPDispatch.c)
 *     PiDqActionDataCreate @ 0x14048BD40 (PiDqActionDataCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1404C35D0 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceInterfaceSetState @ 0x1404C67BC (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x1404C6888 (PiSwInterfaceCreate.c)
 *     PiSwCompleteCreate @ 0x1404C6A1C (PiSwCompleteCreate.c)
 *     PiSwBusRelationAdd @ 0x1404C6F58 (PiSwBusRelationAdd.c)
 *     PnpCopyDevProperty @ 0x1404C7168 (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x1404C7204 (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x1404C7390 (PiSwInstanceInfoInit.c)
 *     PiDqPnPGetObjectProperty @ 0x140501BE4 (PiDqPnPGetObjectProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x14050470C (PiPnpRtlObjectEventWorker.c)
 *     PiSwIrpPropertySet @ 0x140543704 (PiSwIrpPropertySet.c)
 *     PiDmObjectCreate @ 0x1405641DC (PiDmObjectCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140645808 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1400C4760 (RtlStringCchLengthW.c)
 *     RtlStringCbCopyW @ 0x1400C47BC (RtlStringCbCopyW.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpAllocatePWSTR(NTSTRSAFE_PCWSTR pszSrc, size_t a2, ULONG a3, PVOID *a4)
{
  NTSTATUS v4; // ebx
  size_t v9; // rbx
  wchar_t *PoolWithTag; // rax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a4 = 0LL;
  if ( !pszSrc )
    return (unsigned int)v4;
  v4 = RtlStringCchLengthW(pszSrc, a2, &pcchLength);
  if ( v4 >= 0 )
  {
    if ( !pcchLength )
      goto LABEL_8;
    v9 = 2 * (pcchLength + 1);
    if ( is_mul_ok(pcchLength + 1, 2uLL) )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * (pcchLength + 1), a3);
      *a4 = PoolWithTag;
      if ( PoolWithTag )
      {
        v4 = RtlStringCbCopyW(PoolWithTag, v9, pszSrc);
LABEL_8:
        if ( v4 >= 0 )
          return (unsigned int)v4;
        goto LABEL_12;
      }
      v4 = -1073741670;
    }
    else
    {
      v4 = -1073741675;
    }
  }
LABEL_12:
  if ( *a4 )
  {
    ExFreePoolWithTag(*a4, a3);
    *a4 = 0LL;
  }
  return (unsigned int)v4;
}
