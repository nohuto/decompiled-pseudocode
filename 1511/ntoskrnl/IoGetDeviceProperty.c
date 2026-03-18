/*
 * XREFs of IoGetDeviceProperty @ 0x1404596E0
 * Callers:
 *     PoStoreRequester @ 0x140098274 (PoStoreRequester.c)
 *     PiRebalanceOptOut @ 0x1401BFCEC (PiRebalanceOptOut.c)
 *     KseDsCallbackHookAddDevice @ 0x1401CD320 (KseDsCallbackHookAddDevice.c)
 *     IopProcessSetInterfaceState @ 0x140456288 (IopProcessSetInterfaceState.c)
 *     PiControlGetPropertyData @ 0x140458140 (PiControlGetPropertyData.c)
 *     IoGetDmaAdapter @ 0x14054204C (IoGetDmaAdapter.c)
 *     ArbShareDriverExclusive @ 0x14054D758 (ArbShareDriverExclusive.c)
 *     IopIsPciRootBus @ 0x140604970 (IopIsPciRootBus.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140633814 (PopRegisterCoolingExtensionProtection.c)
 *     PopWakeSourceGetDeviceProperty @ 0x140636090 (PopWakeSourceGetDeviceProperty.c)
 *     IoWMISuggestInstanceName @ 0x14065D8D8 (IoWMISuggestInstanceName.c)
 *     ArbQueryConflict @ 0x14069E390 (ArbQueryConflict.c)
 *     VfIsPCIBus @ 0x1406BBBCC (VfIsPCIBus.c)
 *     VerifierIoGetDeviceProperty @ 0x1406C077C (VerifierIoGetDeviceProperty.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     PpvUtilFailDriver @ 0x1401C1AA8 (PpvUtilFailDriver.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14041FE90 (ObQueryNameStringMode.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140457D6C (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiGetDeviceRegProperty @ 0x140459C20 (PiGetDeviceRegProperty.c)
 *     PnpBusTypeGuidGet @ 0x1404C2D34 (PnpBusTypeGuidGet.c)
 *     PnpDetermineResourceListSize @ 0x1404EF918 (PnpDetermineResourceListSize.c)
 *     PpIrpQueryCapabilities @ 0x1404F10C0 (PpIrpQueryCapabilities.c)
 *     PiGetDeviceRegistryProperty @ 0x140600514 (PiGetDeviceRegistryProperty.c)
 */

NTSTATUS __stdcall IoGetDeviceProperty(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        PULONG ResultLength)
{
  int v5; // edx
  unsigned __int16 *DeviceNode; // rsi
  int v10; // edi
  int v11; // r15d
  NTSTATUS DeviceRegProp; // ebx
  bool v13; // zf
  int v15; // edx
  int v16; // edx
  const void **PoolWithTag; // rax
  const void **v18; // rdi
  unsigned int v19; // eax
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // eax
  int v24; // edx
  __int64 v25; // rbx
  size_t v26; // rdi
  unsigned int v27; // eax
  size_t v28; // r15
  int v29; // eax
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
  DeviceNode = (unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
  {
    if ( v5 != 18 && (v5 != 15 || !DeviceNode) )
      PpvUtilFailDriver(2);
    return -1073741808;
  }
  if ( v5 > 11 )
  {
    v11 = 17;
    if ( v5 <= 17 )
    {
      if ( v5 == 17 )
      {
        v10 = 4;
        goto LABEL_11;
      }
      v20 = v5 - 12;
      if ( !v20 )
      {
        DeviceRegProp = PnpBusTypeGuidGet(DeviceNode[232], &v39);
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
      v21 = v20 - 1;
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
        v29 = *((_DWORD *)DeviceNode + 115);
      }
      else
      {
        if ( *((_DWORD *)DeviceNode + 114) == -1 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength < 4 )
          return -1073741789;
        v29 = *((_DWORD *)DeviceNode + 114);
      }
      *(_DWORD *)PropertyBuffer = v29;
      return 0;
    }
    v15 = v5 - 18;
    if ( !v15 )
    {
      if ( DeviceNode == (unsigned __int16 *)IopRootDeviceNode )
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
                            *(__int64 *)&PiPnpRtlCtx,
                            *((_QWORD *)DeviceNode + 6),
                            0LL,
                            11,
                            (__int64)&v38,
                            (__int64)&v37,
                            (__int64)&v36);
          if ( DeviceRegProp < 0 || v38 != 4 || v36 != 4 )
            break;
          if ( (v37 & 0x20) != 0 )
          {
            v30 = 1;
          }
          else if ( (v37 & 0x40) != 0 )
          {
            v30 = 2;
          }
          else
          {
            v30 = (v37 & 0x400) != 0 ? 3 : 0;
          }
          DeviceNode = (unsigned __int16 *)*((_QWORD *)DeviceNode + 2);
          if ( v30 || DeviceNode == (unsigned __int16 *)IopRootDeviceNode )
            goto LABEL_75;
        }
        v30 = 2;
LABEL_75:
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
    v24 = v16 - 1;
    if ( v24 )
    {
      v5 = v24 - 1;
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
        v25 = *((_QWORD *)DeviceNode + 53);
        if ( v25 )
        {
          v26 = (unsigned int)((__int64 (*)(void))PnpDetermineResourceListSize)();
          v27 = PnpDetermineResourceListSize(v25);
          v28 = v27;
          *ResultLength = v26 + v27;
          if ( (unsigned int)v26 + v27 <= BufferLength )
          {
            memmove(PropertyBuffer, *((const void **)DeviceNode + 52), v26);
            memmove((char *)PropertyBuffer + v26, *((const void **)DeviceNode + 53), v28);
            DeviceRegProp = 0;
            goto LABEL_49;
          }
LABEL_48:
          DeviceRegProp = -1073741789;
LABEL_49:
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
          goto LABEL_48;
        memmove(PropertyBuffer, v34, *v34);
LABEL_107:
        DeviceRegProp = 0;
        goto LABEL_49;
      }
    }
    *ResultLength = 0;
    goto LABEL_107;
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
  v18 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  DeviceRegProp = ObQueryNameStringMode((char *)DeviceObject, (__int64)PoolWithTag, v36, ResultLength, 0);
  if ( DeviceRegProp == -1073741820 )
    DeviceRegProp = -1073741789;
  if ( DeviceRegProp < 0 )
  {
    *ResultLength -= 16;
  }
  else if ( *(_WORD *)v18 )
  {
    v19 = *(unsigned __int16 *)v18 + 2;
    *ResultLength = v19;
    if ( v19 > BufferLength )
    {
      DeviceRegProp = -1073741789;
    }
    else
    {
      memmove(PropertyBuffer, v18[1], *(unsigned __int16 *)v18);
      *(_WORD *)((char *)PropertyBuffer + *(unsigned __int16 *)v18) = 0;
    }
  }
  else
  {
    *ResultLength = 0;
  }
  ExFreePoolWithTag(v18, 0);
  return DeviceRegProp;
}
