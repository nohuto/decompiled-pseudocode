/*
 * XREFs of PnpGetDeviceResourcesFromRegistry @ 0x14050F164
 * Callers:
 *     IopPnPDispatch @ 0x1404C9D24 (IopPnPDispatch.c)
 *     IopQueryDeviceResources @ 0x14050EDDC (IopQueryDeviceResources.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405162A0 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PnpReadDeviceConfiguration @ 0x140570E5C (PnpReadDeviceConfiguration.c)
 */

__int64 __fastcall PnpGetDeviceResourcesFromRegistry(__int64 a1, int a2, char a3, void **a4, _DWORD *Handle)
{
  _DWORD *v5; // r12
  int RegistryValue; // ebx
  HANDLE v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int DeviceConfiguration; // eax
  __int64 v17; // rdx
  unsigned int v18; // eax
  PVOID PoolWithTag; // rax
  _DWORD *P; // [rsp+78h] [rbp+38h]

  v5 = Handle;
  RegistryValue = 0;
  *a4 = 0LL;
  *v5 = 0;
  if ( a2 )
  {
    if ( a1 )
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    else
      v14 = 0LL;
    RegistryValue = CmOpenDeviceRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(v14 + 48),
                      0x14u,
                      0,
                      131097,
                      0,
                      (__int64)&Handle,
                      0LL);
    if ( RegistryValue < 0 )
      return (unsigned int)RegistryValue;
    if ( (a3 & 1) != 0 || (a3 & 2) != 0 )
    {
      RegistryValue = IopGetRegistryValue(Handle);
      if ( RegistryValue >= 0 )
      {
        if ( P[1] == 10 )
        {
          v18 = P[3];
          if ( v18 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18, 0x75737050u);
            *a4 = PoolWithTag;
            if ( PoolWithTag )
            {
              *v5 = P[3];
              memmove(*a4, (char *)P + (unsigned int)P[2], (unsigned int)P[3]);
              if ( *((_DWORD *)*a4 + 1) == -1 )
                *(_QWORD *)((char *)*a4 + 4) = (unsigned int)PnpDefaultInterfaceType;
            }
            else
            {
              RegistryValue = -1073741584;
            }
          }
        }
        ExFreePoolWithTag(P, 0);
      }
    }
    v10 = Handle;
    goto LABEL_12;
  }
  if ( (a3 & 1) != 0 )
  {
    v17 = a1 ? *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL) : 0LL;
    RegistryValue = CmOpenDeviceRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(v17 + 48),
                      0x13u,
                      0,
                      131097,
                      0,
                      (__int64)&Handle,
                      0LL);
    if ( RegistryValue >= 0 )
    {
      RegistryValue = PnpReadDeviceConfiguration(Handle, 1LL, a4, v5);
      ZwClose(Handle);
      if ( RegistryValue >= 0 )
        return (unsigned int)RegistryValue;
    }
  }
  v10 = 0LL;
  Handle = 0LL;
  if ( (a3 & 2) != 0 )
  {
    if ( a1 )
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    else
      v15 = 0LL;
    result = CmOpenDeviceRegKey(
               *(__int64 *)&PiPnpRtlCtx,
               *(_QWORD *)(v15 + 48),
               0x14u,
               0,
               131097,
               0,
               (__int64)&Handle,
               0LL);
    if ( (int)result < 0 )
      return result;
    DeviceConfiguration = PnpReadDeviceConfiguration(Handle, 2LL, a4, v5);
    v10 = Handle;
    RegistryValue = DeviceConfiguration;
    if ( DeviceConfiguration >= 0 )
      goto LABEL_12;
  }
  if ( (a3 & 4) == 0 )
    goto LABEL_11;
  if ( v10 )
  {
LABEL_10:
    v13 = PnpReadDeviceConfiguration(v10, 4LL, a4, v5);
    v10 = Handle;
    RegistryValue = v13;
LABEL_11:
    if ( !v10 )
      return (unsigned int)RegistryValue;
LABEL_12:
    ZwClose(v10);
    return (unsigned int)RegistryValue;
  }
  if ( a1 )
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v11 = 0LL;
  result = CmOpenDeviceRegKey(
             *(__int64 *)&PiPnpRtlCtx,
             *(_QWORD *)(v11 + 48),
             0x14u,
             0,
             131097,
             0,
             (__int64)&Handle,
             0LL);
  if ( (int)result >= 0 )
  {
    v10 = Handle;
    goto LABEL_10;
  }
  return result;
}
