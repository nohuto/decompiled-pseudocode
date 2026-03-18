/*
 * XREFs of PnpAllocatePWSTR @ 0x14043B32C
 * Callers:
 *     PiDqPnPGetObjectProperty @ 0x14043B1A0 (PiDqPnPGetObjectProperty.c)
 *     PiDqActionDataCreate @ 0x1404424C4 (PiDqActionDataCreate.c)
 *     PiSwDeviceInterfaceSetState @ 0x14045A1AC (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x14045A278 (PiSwInterfaceCreate.c)
 *     PiSwInstanceInfoInit @ 0x14045AD54 (PiSwInstanceInfoInit.c)
 *     PiSwPdoPnPDispatch @ 0x14045ADD4 (PiSwPdoPnPDispatch.c)
 *     PiSwCompleteCreate @ 0x14045B4C4 (PiSwCompleteCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14045B774 (PiSwDeviceInterfacesUpdateState.c)
 *     PnpCopyDevProperty @ 0x14045B91C (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x14045B9B8 (PiSwPnPInfoInit.c)
 *     PiSwBusRelationAdd @ 0x14045BB44 (PiSwBusRelationAdd.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 *     PiSwIrpPropertySet @ 0x14056A754 (PiSwIrpPropertySet.c)
 *     PiDmObjectCreate @ 0x1405AC0E8 (PiDmObjectCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406911C0 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140008670 (RtlStringCchLengthW.c)
 *     RtlStringCbCopyW @ 0x1400CF240 (RtlStringCbCopyW.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
