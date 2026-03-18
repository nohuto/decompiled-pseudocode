/*
 * XREFs of IoGetDeviceProperty @ 0x1404E2C80
 * Callers:
 *     PoStoreRequester @ 0x1400D0B50 (PoStoreRequester.c)
 *     PiRebalanceOptOut @ 0x1401FB924 (PiRebalanceOptOut.c)
 *     KseDsCallbackHookAddDevice @ 0x14020C684 (KseDsCallbackHookAddDevice.c)
 *     PiControlGetPropertyData @ 0x1404E1474 (PiControlGetPropertyData.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 *     IoGetDmaAdapter @ 0x1405B8614 (IoGetDmaAdapter.c)
 *     ArbShareDriverExclusive @ 0x1405C4DA4 (ArbShareDriverExclusive.c)
 *     IopIsPciRootBus @ 0x14067F6D4 (IopIsPciRootBus.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406B2BE4 (PopRegisterCoolingExtensionProtection.c)
 *     PopWakeSourceGetDeviceProperty @ 0x1406B5974 (PopWakeSourceGetDeviceProperty.c)
 *     IoWMISuggestInstanceName @ 0x1406E0180 (IoWMISuggestInstanceName.c)
 *     ArbQueryConflict @ 0x14071E9EC (ArbQueryConflict.c)
 *     VfIsPCIBus @ 0x14073C5B0 (VfIsPCIBus.c)
 *     VerifierIoGetDeviceProperty @ 0x140741F70 (VerifierIoGetDeviceProperty.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     PpvUtilFailDriver @ 0x1401FD690 (PpvUtilFailDriver.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140426100 (ObQueryNameStringMode.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     PnpDetermineResourceListSize @ 0x14045D228 (PnpDetermineResourceListSize.c)
 *     PpIrpQueryCapabilities @ 0x140461B3C (PpIrpQueryCapabilities.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1404E118C (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiGetDeviceRegProperty @ 0x1404E3234 (PiGetDeviceRegProperty.c)
 *     PnpBusTypeGuidGet @ 0x140553C2C (PnpBusTypeGuidGet.c)
 *     PiGetDeviceRegistryProperty @ 0x14067B0F8 (PiGetDeviceRegistryProperty.c)
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
  __int64 v25; // rax
  __int64 v26; // rbx
  size_t CurrentIrql; // rcx
  signed __int8 v28; // cf
  _DWORD *v29; // rcx
  _DWORD *v30; // rbx
  size_t v31; // rax
  ULONG v32; // ecx
  unsigned __int8 v33; // si
  signed __int32 v34; // eax
  int v35; // eax
  size_t v36; // rbx
  size_t v37; // r8
  char *v38; // rcx
  ULONG *v39; // rdx
  int v40; // edx
  _DWORD *v41; // rcx
  ULONG v42; // eax
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rbx
  size_t v46; // rcx
  ULONG v47; // eax
  unsigned int v48; // [rsp+40h] [rbp-61h] BYREF
  size_t v49; // [rsp+48h] [rbp-59h]
  int v50; // [rsp+50h] [rbp-51h] BYREF
  int v51; // [rsp+54h] [rbp-4Dh] BYREF
  size_t Size; // [rsp+58h] [rbp-49h]
  __int128 v53; // [rsp+60h] [rbp-41h] BYREF
  int v54; // [rsp+70h] [rbp-31h] BYREF
  int v55; // [rsp+78h] [rbp-29h]

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
    if ( v5 > 17 )
    {
      v15 = v5 - 18;
      if ( !v15 )
      {
        if ( DeviceNode == (unsigned __int16 *)IopRootDeviceNode )
        {
          v43 = 0;
          DeviceRegProp = 0;
        }
        else
        {
          if ( !*((_QWORD *)DeviceNode + 6) )
            return -1073741808;
          while ( 1 )
          {
            v48 = 4;
            DeviceRegProp = CmGetDeviceRegProp(
                              *(__int64 *)&PiPnpRtlCtx,
                              *((_QWORD *)DeviceNode + 6),
                              0LL,
                              11,
                              (__int64)&v50,
                              (__int64)&v51,
                              (__int64)&v48);
            if ( DeviceRegProp < 0 || v50 != 4 || v48 != 4 )
              break;
            if ( (v51 & 0x20) != 0 )
            {
              v43 = 1;
            }
            else if ( (v51 & 0x40) != 0 )
            {
              v43 = 2;
            }
            else
            {
              v43 = (v51 & 0x400) != 0 ? 3 : 0;
            }
            DeviceNode = (unsigned __int16 *)*((_QWORD *)DeviceNode + 2);
            if ( v43 || DeviceNode == (unsigned __int16 *)IopRootDeviceNode )
              goto LABEL_91;
          }
          v43 = 2;
LABEL_91:
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
          *(_DWORD *)PropertyBuffer = v43;
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
          goto LABEL_47;
        }
        v25 = KeAbPreAcquire((ULONG_PTR)&PiResourceListLock, 0LL, 0LL, (__int64)PropertyBuffer);
        v26 = v25;
        CurrentIrql = KeGetCurrentIrql();
        v49 = CurrentIrql;
        __writecr8(1uLL);
        v28 = _interlockedbittestandreset((volatile signed __int32 *)&PiResourceListLock, 0);
        if ( !v28 )
        {
          ExpAcquireFastMutexContended((ULONG_PTR)&PiResourceListLock, v25);
          LOBYTE(CurrentIrql) = v49;
        }
        if ( v26 )
          *(_BYTE *)(v26 + 26) |= 1u;
        qword_14034AA48 = (__int64)KeGetCurrentThread();
        dword_14034AA70 = (unsigned __int8)CurrentIrql;
        v29 = (_DWORD *)*((_QWORD *)DeviceNode + 52);
        if ( v29 )
        {
          v30 = (_DWORD *)*((_QWORD *)DeviceNode + 53);
          if ( v30 )
          {
            LODWORD(Size) = PnpDetermineResourceListSize(v29);
            LODWORD(v49) = PnpDetermineResourceListSize(v30);
            v31 = (unsigned int)Size;
            v32 = Size + v49;
            *ResultLength = Size + v49;
            if ( v32 > BufferLength )
            {
LABEL_57:
              DeviceRegProp = -1073741789;
LABEL_58:
              qword_14034AA48 = 0LL;
              v33 = dword_14034AA70;
              v34 = _InterlockedCompareExchange((volatile signed __int32 *)&PiResourceListLock, 1, 0);
              if ( v34 )
                ExpReleaseFastMutexContended((volatile signed __int32 *)&PiResourceListLock, v34);
              __writecr8(v33);
              KeAbPostRelease((ULONG_PTR)&PiResourceListLock);
              return DeviceRegProp;
            }
            v36 = v31;
            memmove(PropertyBuffer, *((const void **)DeviceNode + 52), v31);
            v37 = (unsigned int)v49;
            v38 = (char *)PropertyBuffer + v36;
            v39 = (ULONG *)*((_QWORD *)DeviceNode + 53);
            goto LABEL_69;
          }
        }
      }
      else
      {
        v44 = KeAbPreAcquire((ULONG_PTR)&PiResourceListLock, 0LL, 0LL, (__int64)PropertyBuffer);
        v45 = v44;
        v46 = KeGetCurrentIrql();
        v49 = v46;
        __writecr8(1uLL);
        v28 = _interlockedbittestandreset((volatile signed __int32 *)&PiResourceListLock, 0);
        if ( !v28 )
        {
          ExpAcquireFastMutexContended((ULONG_PTR)&PiResourceListLock, v44);
          LOBYTE(v46) = v49;
        }
        if ( v45 )
          *(_BYTE *)(v45 + 26) |= 1u;
        qword_14034AA48 = (__int64)KeGetCurrentThread();
        dword_14034AA70 = (unsigned __int8)v46;
        v39 = (ULONG *)*((_QWORD *)DeviceNode + 55);
        if ( v39 )
        {
          v47 = *v39;
          *ResultLength = *v39;
          if ( v47 > BufferLength )
            goto LABEL_57;
          v37 = *v39;
          v38 = (char *)PropertyBuffer;
LABEL_69:
          memmove(v38, v39, v37);
LABEL_70:
          DeviceRegProp = 0;
          goto LABEL_58;
        }
      }
      *ResultLength = 0;
      goto LABEL_70;
    }
    if ( v5 == 17 )
    {
      v10 = 4;
      goto LABEL_11;
    }
    v20 = v5 - 12;
    if ( !v20 )
    {
      DeviceRegProp = PnpBusTypeGuidGet(DeviceNode[232], &v53);
      if ( DeviceRegProp < 0 )
        return DeviceRegProp;
      *ResultLength = 16;
      if ( BufferLength >= 0x10 )
      {
        *(_OWORD *)PropertyBuffer = v53;
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
          goto LABEL_47;
        }
        if ( v5 != 1 )
          return -1073741584;
        if ( (int)PpIrpQueryCapabilities((int)DeviceObject, &v54) < 0 )
          return -1073741772;
        v23 = v55;
        if ( v55 == -1 )
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
      v35 = *((_DWORD *)DeviceNode + 115);
    }
    else
    {
      if ( *((_DWORD *)DeviceNode + 114) == -1 )
        return -1073741772;
      *ResultLength = 4;
      if ( BufferLength < 4 )
        return -1073741789;
      v35 = *((_DWORD *)DeviceNode + 114);
    }
    *(_DWORD *)PropertyBuffer = v35;
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
        if ( v5 )
        {
          if ( !--v5 )
          {
            v10 = 7;
            v11 = 2;
            goto LABEL_11;
          }
          if ( --v5 )
          {
            v40 = v5 - 1;
            if ( !v40 )
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
            if ( v40 == 1 )
            {
              v41 = (_DWORD *)*((_QWORD *)DeviceNode + 69);
              if ( !v41 )
              {
                *ResultLength = 0;
                return 0;
              }
              v42 = PnpDetermineResourceListSize(v41);
              *ResultLength = v42;
              if ( v42 <= BufferLength )
              {
                memmove(PropertyBuffer, *((const void **)DeviceNode + 69), v42);
                return 0;
              }
              return -1073741789;
            }
            return -1073741584;
          }
          v10 = 7;
          v11 = 3;
        }
        else
        {
          v10 = 1;
          v11 = 1;
        }
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
      v11 = 8;
    }
LABEL_47:
    v10 = 1;
    goto LABEL_11;
  }
  v48 = BufferLength + 16;
  PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, BufferLength + 16, 0x6F697050u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  DeviceRegProp = ObQueryNameStringMode((char *)DeviceObject, (__int64)PoolWithTag, v48, ResultLength, 0);
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
