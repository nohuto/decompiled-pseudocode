/*
 * XREFs of PnpGetObjectProperty @ 0x14043ED84
 * Callers:
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x1404404DC (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x140440CD4 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiDmObjectProcessPropertyChange @ 0x14045A798 (PiDmObjectProcessPropertyChange.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x14045CC84 (PiDmGetReferencedObjectFromProperty.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     PiUEventCacheObjectProperties @ 0x1404E15C4 (PiUEventCacheObjectProperties.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404EA06C (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140515AA0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140604FE4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PnpGetObjectProperty(
        ULONG Tag,
        SIZE_T NumberOfBytes,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        PVOID *a9,
        _DWORD *a10,
        int a11)
{
  PVOID *v11; // rbx
  SIZE_T v12; // rbp
  int v13; // r12d
  __int64 v15; // r13
  PVOID PoolWithTag; // rax
  int ObjectProperty; // edi
  PVOID v20; // rcx
  int v22; // eax
  int v23; // [rsp+98h] [rbp+10h] BYREF

  v11 = a9;
  LODWORD(v12) = 0;
  v13 = a11;
  v15 = a8;
  v23 = NumberOfBytes;
  *a9 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)NumberOfBytes > (unsigned int)v12 )
    {
      v12 = (unsigned int)NumberOfBytes;
      if ( *v11 )
        ExFreePoolWithTag(*v11, Tag);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, Tag);
      *v11 = PoolWithTag;
      if ( !PoolWithTag )
        break;
    }
    v23 = 0;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       a3,
                       a4,
                       a5,
                       0LL,
                       a7,
                       v15,
                       (__int64)*v11,
                       v12,
                       (__int64)&v23,
                       v13);
    if ( ObjectProperty != -1073741789 )
      goto LABEL_7;
    LODWORD(NumberOfBytes) = v23;
  }
  ObjectProperty = -1073741670;
LABEL_7:
  if ( ObjectProperty >= 0 )
  {
    v22 = v23;
    if ( a10 )
      *a10 = v23;
    if ( !v22 )
    {
      v20 = *v11;
      goto LABEL_9;
    }
  }
  else
  {
    v20 = *v11;
    if ( *v11 )
    {
LABEL_9:
      ExFreePoolWithTag(v20, Tag);
      *v11 = 0LL;
    }
  }
  return (unsigned int)ObjectProperty;
}
