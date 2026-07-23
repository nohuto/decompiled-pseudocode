/*
 * XREFs of _CmDeleteDeviceInterfaceWorker @ 0x1406D8330
 * Callers:
 *     _CmDeleteDeviceInterface @ 0x1406D7F18 (_CmDeleteDeviceInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140576F88 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _CmDeleteDeviceInterfaceRegKey @ 0x1406D8034 (_CmDeleteDeviceInterfaceRegKey.c)
 *     _CmRaiseDeleteEvent @ 0x1406DC09C (_CmRaiseDeleteEvent.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x1406DD288 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceWorker(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  int v4; // ebx
  int *v7; // r14
  int v8; // esi
  int v9; // ebp
  int v10; // eax
  PVOID PoolWithTag; // rsi
  unsigned int v12; // r14d
  int DeviceInterfaceMappedPropertyKeys; // eax
  unsigned int v14; // ebp
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // r9
  unsigned int v19; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v20[4]; // [rsp+48h] [rbp-40h] BYREF

  v4 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v20[0] = 768;
    v7 = v20;
    v20[1] = 512;
    v8 = 0;
    v20[2] = 256;
    while ( 1 )
    {
      v9 = *v7;
      v10 = CmDeleteDeviceInterfaceRegKey(a1, a2, *v7 | 0x30u, a4, 1);
      if ( v10 )
      {
        if ( v10 != -1073741772 && v10 != -1073741811 && v10 != -1073741637 )
          break;
      }
      v10 = CmDeleteDeviceInterfaceRegKey(a1, a2, v9 | 0x31u, a4, 0);
      if ( v10 )
      {
        if ( v10 != -1073741772 && v10 != -1073741811 && v10 != -1073741637 && v10 != -1073741535 )
          break;
      }
      ++v8;
      ++v7;
      if ( (unsigned __int64)v8 >= 3 )
        goto LABEL_16;
    }
    v4 = v10;
    if ( v10 < 0 )
      return (unsigned int)v4;
LABEL_16:
    PoolWithTag = 0LL;
    v12 = 0;
    v19 = 0;
    do
    {
      LOBYTE(a4) = 1;
      DeviceInterfaceMappedPropertyKeys = CmGetDeviceInterfaceMappedPropertyKeys(
                                            a1,
                                            a2,
                                            0,
                                            a4,
                                            (__int64)PoolWithTag,
                                            v12,
                                            (__int64)&v19);
      v12 = v19;
      if ( DeviceInterfaceMappedPropertyKeys != -1073741789 )
        goto LABEL_23;
      v14 = 20 * v19;
      if ( 20 * (unsigned __int64)v19 > 0xFFFFFFFF )
      {
        DeviceInterfaceMappedPropertyKeys = -1073741811;
        goto LABEL_25;
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x52504E50u);
    }
    while ( PoolWithTag );
    DeviceInterfaceMappedPropertyKeys = -1073741801;
LABEL_23:
    if ( DeviceInterfaceMappedPropertyKeys && DeviceInterfaceMappedPropertyKeys != -1073741275 )
    {
LABEL_25:
      v4 = DeviceInterfaceMappedPropertyKeys;
      goto LABEL_45;
    }
    v15 = 0LL;
    if ( v12 )
    {
      while ( 1 )
      {
        v16 = CmSetDeviceInterfaceMappedProperty(a1, a2, 0LL, 0LL, (__int64)PoolWithTag + 20 * v15, 0, 0LL, 0);
        if ( v16 )
        {
          if ( v16 != -1073741275 && v16 != -1073741790 && v16 != -1073741802 && v16 != -1073741637 )
            break;
        }
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= v12 )
          goto LABEL_36;
      }
      v4 = v16;
    }
LABEL_36:
    if ( v4 >= 0 )
    {
      DeviceInterfaceMappedPropertyKeys = CmDeleteDeviceInterfaceRegKey(a1, a2, 48, a4, 1);
      if ( DeviceInterfaceMappedPropertyKeys
        && DeviceInterfaceMappedPropertyKeys != -1073741772
        && DeviceInterfaceMappedPropertyKeys != -1073741811 )
      {
        goto LABEL_25;
      }
      DeviceInterfaceMappedPropertyKeys = CmDeleteDeviceInterfaceRegKey(a1, a2, 49, v17, 0);
      if ( DeviceInterfaceMappedPropertyKeys )
      {
        if ( DeviceInterfaceMappedPropertyKeys != -1073741772
          && DeviceInterfaceMappedPropertyKeys != -1073741811
          && DeviceInterfaceMappedPropertyKeys != -1073741535 )
        {
          goto LABEL_25;
        }
      }
      CmRaiseDeleteEvent(a1, a2, 3LL);
    }
LABEL_45:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)v4;
}
