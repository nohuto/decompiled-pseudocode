/*
 * XREFs of PnpAllocatePWSTR @ 0x14043FAE0
 * Callers:
 *     PiDqPnPGetObjectProperty @ 0x14043F954 (PiDqPnPGetObjectProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x14045A4D8 (PiPnpRtlObjectEventWorker.c)
 *     PiDqActionDataCreate @ 0x14045E804 (PiDqActionDataCreate.c)
 *     PiSwPdoPnPDispatch @ 0x14049479C (PiSwPdoPnPDispatch.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140494BAC (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceInterfaceSetState @ 0x1404E3DF0 (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x1404E3EBC (PiSwInterfaceCreate.c)
 *     PiSwCompleteCreate @ 0x1404E4050 (PiSwCompleteCreate.c)
 *     PiSwBusRelationAdd @ 0x1404E4570 (PiSwBusRelationAdd.c)
 *     PnpCopyDevProperty @ 0x1404E4784 (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x1404E4820 (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x1404E4A1C (PiSwInstanceInfoInit.c)
 *     PiSwIrpPropertySet @ 0x1404F9230 (PiSwIrpPropertySet.c)
 *     PiDmObjectCreate @ 0x14051B290 (PiDmObjectCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406113FC (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140090A3C (RtlStringCchLengthW.c)
 *     RtlStringCbCopyW @ 0x140090A98 (RtlStringCbCopyW.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
