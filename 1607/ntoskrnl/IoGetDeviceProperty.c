/*
 * XREFs of IoGetDeviceProperty @ 0x1404DC2F8
 * Callers:
 *     PoStoreRequester @ 0x1400F914C (PoStoreRequester.c)
 *     PiRebalanceOptOut @ 0x1401CE2CC (PiRebalanceOptOut.c)
 *     KseDsCallbackHookAddDevice @ 0x1401DCD70 (KseDsCallbackHookAddDevice.c)
 *     IopProcessSetInterfaceState @ 0x1403F1568 (IopProcessSetInterfaceState.c)
 *     PiControlGetPropertyData @ 0x1403F2E48 (PiControlGetPropertyData.c)
 *     ArbShareDriverExclusive @ 0x140558810 (ArbShareDriverExclusive.c)
 *     IoGetDmaAdapter @ 0x140578174 (IoGetDmaAdapter.c)
 *     IopIsPciRootBus @ 0x14062E824 (IopIsPciRootBus.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14066BDF0 (PopRegisterCoolingExtensionProtection.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14066E51C (PopWakeSourceGetDeviceProperty.c)
 *     IoWMISuggestInstanceName @ 0x14069CFF8 (IoWMISuggestInstanceName.c)
 *     ArbQueryConflict @ 0x1406E5088 (ArbQueryConflict.c)
 *     VfIsPCIBus @ 0x140707C70 (VfIsPCIBus.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PpvUtilFailDriver @ 0x1401D0EE4 (PpvUtilFailDriver.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1403F2A40 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 *     PnpBusTypeGuidGet @ 0x1404D0040 (PnpBusTypeGuidGet.c)
 *     PiGetDeviceRegProperty @ 0x1404DC820 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     PnpDetermineResourceListSize @ 0x14050F344 (PnpDetermineResourceListSize.c)
 *     PpIrpQueryCapabilities @ 0x140512E24 (PpIrpQueryCapabilities.c)
 *     PiGetDeviceRegistryProperty @ 0x14062A61C (PiGetDeviceRegistryProperty.c)
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
  __int64 v26; // rbx
  size_t v27; // rdi
  unsigned int v28; // eax
  size_t v29; // r15
  int v30; // eax
  int v31; // edx
  __int64 v32; // rcx
  ULONG v33; // eax
  ULONG *v34; // rdx
  ULONG v35; // eax
  unsigned int v36; // [rsp+40h] [rbp-51h] BYREF
  int v37; // [rsp+44h] [rbp-4Dh] BYREF
  int v38; // [rsp+48h] [rbp-49h] BYREF
  __int128 v39; // [rsp+50h] [rbp-41h] BYREF
  char v40[8]; // [rsp+60h] [rbp-31h] BYREF
  int v41; // [rsp+68h] [rbp-29h]

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
          v30 = 0;
          DeviceRegProp = 0;
        }
        else
        {
          if ( !*((_QWORD *)DeviceNode + 6) )
            return -1073741808;
          while ( 1 )
          {
            v36 = 4;
            DeviceRegProp = CmGetDeviceRegProp(
                              PiPnpRtlCtx,
                              *((_QWORD *)DeviceNode + 6),
                              0,
                              11,
                              (__int64)&v37,
                              (__int64)&v38,
                              (__int64)&v36,
                              0);
            if ( DeviceRegProp < 0 || v37 != 4 || v36 != 4 )
              break;
            if ( (v38 & 0x20) != 0 )
            {
              v30 = 1;
            }
            else if ( (v38 & 0x40) != 0 )
            {
              v30 = 2;
            }
            else
            {
              v30 = (v38 & 0x400) != 0 ? 3 : 0;
            }
            DeviceNode = (PVOID)*((_QWORD *)DeviceNode + 2);
            if ( v30 || DeviceNode == (PVOID)IopRootDeviceNode )
              goto LABEL_77;
          }
          v30 = 2;
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
          *(_DWORD *)PropertyBuffer = v30;
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
        if ( *((_QWORD *)DeviceNode + 52) )
        {
          v26 = *((_QWORD *)DeviceNode + 53);
          if ( v26 )
          {
            v27 = (unsigned int)((__int64 (*)(void))PnpDetermineResourceListSize)();
            v28 = PnpDetermineResourceListSize(v26);
            v29 = v28;
            *ResultLength = v27 + v28;
            if ( (unsigned int)v27 + v28 <= BufferLength )
            {
              memmove(PropertyBuffer, *((const void **)DeviceNode + 52), v27);
              memmove((char *)PropertyBuffer + v27, *((const void **)DeviceNode + 53), v29);
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
        v34 = (ULONG *)*((_QWORD *)DeviceNode + 55);
        if ( v34 )
        {
          v35 = *v34;
          *ResultLength = *v34;
          if ( v35 > BufferLength )
            goto LABEL_59;
          memmove(PropertyBuffer, v34, *v34);
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
      DeviceRegProp = PnpBusTypeGuidGet(*((_WORD *)DeviceNode + 232), &v39);
      if ( DeviceRegProp < 0 )
        return DeviceRegProp;
      *ResultLength = 16;
      if ( BufferLength >= 0x10 )
      {
        *(_OWORD *)PropertyBuffer = v39;
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
        if ( (int)PpIrpQueryCapabilities(DeviceObject, v40) < 0 )
          return -1073741772;
        v23 = v41;
        if ( v41 == -1 )
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
        v31 = v5 - 1;
        if ( !v31 )
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
        if ( v31 == 1 )
        {
          v32 = *((_QWORD *)DeviceNode + 69);
          if ( !v32 )
          {
            *ResultLength = 0;
            return 0;
          }
          v33 = PnpDetermineResourceListSize(v32);
          *ResultLength = v33;
          if ( v33 <= BufferLength )
          {
            memmove(PropertyBuffer, *((const void **)DeviceNode + 69), v33);
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
  v36 = BufferLength + 16;
  PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, BufferLength + 16, 0x6F697050u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  DeviceRegProp = ObQueryNameStringMode((char *)DeviceObject, (__int64)PoolWithTag, v36, ResultLength, 0);
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
