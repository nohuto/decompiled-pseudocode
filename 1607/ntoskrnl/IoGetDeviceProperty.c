/*
 * XREFs of IoGetDeviceProperty @ 0x1404F936C
 * Callers:
 *     PoStoreRequester @ 0x1400FB3C0 (PoStoreRequester.c)
 *     PiRebalanceOptOut @ 0x1401CE480 (PiRebalanceOptOut.c)
 *     KseDsCallbackHookAddDevice @ 0x1401DCF44 (KseDsCallbackHookAddDevice.c)
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 *     PiControlGetPropertyData @ 0x1403F3F84 (PiControlGetPropertyData.c)
 *     ArbShareDriverExclusive @ 0x1405582D0 (ArbShareDriverExclusive.c)
 *     IoGetDmaAdapter @ 0x140577C34 (IoGetDmaAdapter.c)
 *     IopIsPciRootBus @ 0x14062E770 (IopIsPciRootBus.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14066BD0C (PopRegisterCoolingExtensionProtection.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14066E438 (PopWakeSourceGetDeviceProperty.c)
 *     IoWMISuggestInstanceName @ 0x14069CF14 (IoWMISuggestInstanceName.c)
 *     ArbQueryConflict @ 0x1406E4F50 (ArbQueryConflict.c)
 *     VfIsPCIBus @ 0x140707C40 (VfIsPCIBus.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     PpvUtilFailDriver @ 0x1401D10B8 (PpvUtilFailDriver.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1403F3B7C (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     ObQueryNameStringMode @ 0x140434B90 (ObQueryNameStringMode.c)
 *     PpIrpQueryCapabilities @ 0x140486BB0 (PpIrpQueryCapabilities.c)
 *     PnpDetermineResourceListSize @ 0x1404C8F50 (PnpDetermineResourceListSize.c)
 *     PnpBusTypeGuidGet @ 0x1404EDF74 (PnpBusTypeGuidGet.c)
 *     PiGetDeviceRegProperty @ 0x1404F9894 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegProp @ 0x1404FCE4C (_CmGetDeviceRegProp.c)
 *     PiGetDeviceRegistryProperty @ 0x14062A568 (PiGetDeviceRegistryProperty.c)
 */

NTSTATUS __stdcall IoGetDeviceProperty(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        PULONG ResultLength)
{
  int v5; // edx
  PVOID DeviceNode; // rsi
  int v10; // edi
  int v11; // r15d
  NTSTATUS DeviceRegProp; // ebx
  bool v13; // zf
  int v15; // edx
  int v16; // edx
  int v17; // edx
  const void **PoolWithTag; // rax
  const void **v19; // rdi
  unsigned int v20; // eax
  int v21; // edx
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // edx
  _DWORD *v26; // rcx
  _DWORD *v27; // rbx
  size_t v28; // rdi
  unsigned int v29; // eax
  size_t v30; // r15
  int v31; // eax
  int v32; // edx
  _DWORD *v33; // rcx
  ULONG v34; // eax
  ULONG *v35; // rdx
  ULONG v36; // eax
  unsigned int v37; // [rsp+40h] [rbp-51h] BYREF
  int v38; // [rsp+44h] [rbp-4Dh] BYREF
  int v39; // [rsp+48h] [rbp-49h] BYREF
  __int128 v40; // [rsp+50h] [rbp-41h] BYREF
  int v41; // [rsp+60h] [rbp-31h] BYREF
  int v42; // [rsp+68h] [rbp-29h]

  v5 = DeviceProperty & 0xFFF;
  *ResultLength = 0;
  if ( !DeviceObject )
    return -1073741808;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
  {
    if ( v5 != 18 && (v5 != 15 || !DeviceNode) )
      PpvUtilFailDriver(2);
    return -1073741808;
  }
  if ( v5 > 11 )
  {
    v11 = 17;
    if ( v5 > 17 )
    {
      v15 = v5 - 18;
      if ( !v15 )
      {
        if ( DeviceNode == (PVOID)IopRootDeviceNode )
        {
          v31 = 0;
          DeviceRegProp = 0;
        }
        else
        {
          if ( !*((_QWORD *)DeviceNode + 6) )
            return -1073741808;
          while ( 1 )
          {
            v37 = 4;
            DeviceRegProp = CmGetDeviceRegProp(
                              PiPnpRtlCtx,
                              *((_QWORD *)DeviceNode + 6),
                              0,
                              11,
                              (__int64)&v38,
                              (__int64)&v39,
                              (__int64)&v37,
                              0);
            if ( DeviceRegProp < 0 || v38 != 4 || v37 != 4 )
              break;
            if ( (v39 & 0x20) != 0 )
            {
              v31 = 1;
            }
            else if ( (v39 & 0x40) != 0 )
            {
              v31 = 2;
            }
            else
            {
              v31 = (v39 & 0x400) != 0 ? 3 : 0;
            }
            DeviceNode = (PVOID)*((_QWORD *)DeviceNode + 2);
            if ( v31 || DeviceNode == (PVOID)IopRootDeviceNode )
              goto LABEL_77;
          }
          v31 = 2;
LABEL_77:
          if ( DeviceRegProp < 0 )
          {
            if ( DeviceRegProp == -1073741275 )
              return -1073741772;
            v13 = DeviceRegProp == -1073741810;
            goto LABEL_13;
          }
        }
        *ResultLength = 4;
        if ( BufferLength >= 4 )
        {
          *(_DWORD *)PropertyBuffer = v31;
          return DeviceRegProp;
        }
        return -1073741789;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        *ResultLength = 4;
        if ( BufferLength >= 4 )
        {
          PpHotSwapGetDevnodeRemovalPolicy((__int64)DeviceNode, 1, (signed int *)PropertyBuffer);
          return 0;
        }
        return -1073741789;
      }
      v25 = v16 - 1;
      if ( v25 )
      {
        v5 = v25 - 1;
        if ( v5 )
        {
          if ( v5 != 1 )
            return -1073741584;
          v11 = 37;
          goto LABEL_53;
        }
        ExAcquireFastMutex(&PiResourceListLock);
        v26 = (_DWORD *)*((_QWORD *)DeviceNode + 52);
        if ( v26 )
        {
          v27 = (_DWORD *)*((_QWORD *)DeviceNode + 53);
          if ( v27 )
          {
            v28 = (unsigned int)PnpDetermineResourceListSize(v26);
            v29 = PnpDetermineResourceListSize(v27);
            v30 = v29;
            *ResultLength = v28 + v29;
            if ( (unsigned int)v28 + v29 <= BufferLength )
            {
              memmove(PropertyBuffer, *((const void **)DeviceNode + 52), v28);
              memmove((char *)PropertyBuffer + v28, *((const void **)DeviceNode + 53), v30);
              DeviceRegProp = 0;
              goto LABEL_60;
            }
LABEL_59:
            DeviceRegProp = -1073741789;
LABEL_60:
            KeReleaseGuardedMutex(&PiResourceListLock);
            return DeviceRegProp;
          }
        }
      }
      else
      {
        ExAcquireFastMutex(&PiResourceListLock);
        v35 = (ULONG *)*((_QWORD *)DeviceNode + 55);
        if ( v35 )
        {
          v36 = *v35;
          *ResultLength = *v35;
          if ( v36 > BufferLength )
            goto LABEL_59;
          memmove(PropertyBuffer, v35, *v35);
LABEL_107:
          DeviceRegProp = 0;
          goto LABEL_60;
        }
      }
      *ResultLength = 0;
      goto LABEL_107;
    }
    if ( v5 == 17 )
    {
      v10 = 4;
      goto LABEL_11;
    }
    v17 = v5 - 12;
    if ( !v17 )
    {
      DeviceRegProp = PnpBusTypeGuidGet(*((_WORD *)DeviceNode + 232), &v40);
      if ( DeviceRegProp < 0 )
        return DeviceRegProp;
      *ResultLength = 16;
      if ( BufferLength >= 0x10 )
      {
        *(_OWORD *)PropertyBuffer = v40;
        return DeviceRegProp;
      }
      return -1073741789;
    }
    v21 = v17 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v5 = v22 - 1;
        if ( !v5 )
        {
          v11 = 23;
          goto LABEL_53;
        }
        if ( v5 != 1 )
          return -1073741584;
        if ( (int)PpIrpQueryCapabilities((int)DeviceObject, &v41) < 0 )
          return -1073741772;
        v23 = v42;
        if ( v42 == -1 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength < 4 )
          return -1073741789;
        *(_DWORD *)PropertyBuffer = v23;
        return 0;
      }
      if ( *((int *)DeviceNode + 115) < 0 )
        return -1073741772;
      *ResultLength = 4;
      if ( BufferLength < 4 )
        return -1073741789;
      v24 = *((_DWORD *)DeviceNode + 115);
    }
    else
    {
      if ( *((_DWORD *)DeviceNode + 114) == -1 )
        return -1073741772;
      *ResultLength = 4;
      if ( BufferLength < 4 )
        return -1073741789;
      v24 = *((_DWORD *)DeviceNode + 114);
    }
    *(_DWORD *)PropertyBuffer = v24;
    return 0;
  }
  if ( v5 != 11 )
  {
    if ( v5 > 5 )
    {
      v5 -= 6;
      if ( v5 )
      {
        if ( --v5 )
        {
          if ( --v5 )
          {
            if ( --v5 )
            {
              if ( v5 != 1 )
                return -1073741584;
              v11 = 14;
            }
            else
            {
              v11 = 13;
            }
          }
          else
          {
            v11 = 12;
          }
        }
        else
        {
          v11 = 10;
        }
      }
      else
      {
        v11 = 9;
      }
    }
    else
    {
      if ( v5 != 5 )
      {
        if ( !v5 )
        {
          v10 = 1;
          v11 = 1;
          goto LABEL_11;
        }
        if ( !--v5 )
        {
          v10 = 7;
          v11 = 2;
          goto LABEL_11;
        }
        if ( !--v5 )
        {
          v10 = 7;
          v11 = 3;
LABEL_11:
          if ( *((_QWORD *)DeviceNode + 6) )
          {
            *ResultLength = BufferLength;
            DeviceRegProp = PiGetDeviceRegProperty(
                              *((_QWORD *)DeviceNode + 6),
                              v5,
                              v10,
                              v11,
                              PropertyBuffer,
                              ResultLength);
            v13 = DeviceRegProp == -1073741275;
LABEL_13:
            if ( !v13 )
              return DeviceRegProp;
            return -1073741772;
          }
          return -1073741808;
        }
        v32 = v5 - 1;
        if ( !v32 )
        {
          *ResultLength = BufferLength;
          return PiGetDeviceRegistryProperty(
                   (_DWORD)DeviceObject,
                   0,
                   BufferLength,
                   (_DWORD)PropertyBuffer,
                   (__int64)PropertyBuffer,
                   (__int64)ResultLength);
        }
        if ( v32 == 1 )
        {
          v33 = (_DWORD *)*((_QWORD *)DeviceNode + 69);
          if ( !v33 )
          {
            *ResultLength = 0;
            return 0;
          }
          v34 = PnpDetermineResourceListSize(v33);
          *ResultLength = v34;
          if ( v34 <= BufferLength )
          {
            memmove(PropertyBuffer, *((const void **)DeviceNode + 69), v34);
            return 0;
          }
          return -1073741789;
        }
        return -1073741584;
      }
      v11 = 8;
    }
LABEL_53:
    v10 = 1;
    goto LABEL_11;
  }
  v37 = BufferLength + 16;
  PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, BufferLength + 16, 0x6F697050u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  DeviceRegProp = ObQueryNameStringMode((char *)DeviceObject, (__int64)PoolWithTag, v37, ResultLength, 0);
  if ( DeviceRegProp == -1073741820 )
    DeviceRegProp = -1073741789;
  if ( DeviceRegProp < 0 )
  {
    *ResultLength -= 16;
  }
  else if ( *(_WORD *)v19 )
  {
    v20 = *(unsigned __int16 *)v19 + 2;
    *ResultLength = v20;
    if ( v20 > BufferLength )
    {
      DeviceRegProp = -1073741789;
    }
    else
    {
      memmove(PropertyBuffer, v19[1], *(unsigned __int16 *)v19);
      *(_WORD *)((char *)PropertyBuffer + *(unsigned __int16 *)v19) = 0;
    }
  }
  else
  {
    *ResultLength = 0;
  }
  ExFreePoolWithTag(v19, 0);
  return DeviceRegProp;
}
