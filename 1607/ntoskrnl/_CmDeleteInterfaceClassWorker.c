/*
 * XREFs of _CmDeleteInterfaceClassWorker @ 0x1406D9468
 * Callers:
 *     _CmDeleteInterfaceClass @ 0x1406D9324 (_CmDeleteInterfaceClass.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1404D946C (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _CmDeleteInterfaceClassRegKey @ 0x1406D9444 (_CmDeleteInterfaceClassRegKey.c)
 *     _CmRaiseDeleteEvent @ 0x1406DC09C (_CmRaiseDeleteEvent.c)
 *     _CmGetInterfaceClassMappedPropertyKeys @ 0x1406DE570 (_CmGetInterfaceClassMappedPropertyKeys.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x1406DF750 (_CmSetInterfaceClassMappedProperty.c)
 */

__int64 __fastcall CmDeleteInterfaceClassWorker(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebx
  unsigned int MatchingFilteredDeviceInterfaceList; // eax
  int *v7; // r14
  int v8; // edi
  int v9; // eax
  int v10; // r9d
  PVOID PoolWithTag; // rdi
  unsigned int v12; // ebp
  int InterfaceClassMappedPropertyKeys; // eax
  unsigned int v14; // r14d
  __int64 v15; // r14
  int v16; // eax
  unsigned int v18; // [rsp+50h] [rbp-48h] BYREF
  int v19; // [rsp+54h] [rbp-44h] BYREF
  _DWORD v20[4]; // [rsp+58h] [rbp-40h] BYREF

  v3 = 0;
  v19 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            a1,
                                            a2,
                                            0LL,
                                            0,
                                            0LL,
                                            0LL,
                                            0LL,
                                            0,
                                            (__int64)&v19,
                                            0);
    if ( MatchingFilteredDeviceInterfaceList == -1073741789 )
    {
      return (unsigned int)-1073741535;
    }
    else if ( MatchingFilteredDeviceInterfaceList )
    {
      return MatchingFilteredDeviceInterfaceList;
    }
    else
    {
      v20[0] = 832;
      v7 = v20;
      v20[1] = 576;
      v8 = 0;
      v20[2] = 320;
      while ( 1 )
      {
        v9 = CmDeleteInterfaceClassRegKey(a1, a2, *v7);
        if ( v9 )
        {
          if ( v9 != -1073741772 && v9 != -1073741811 && v9 != -1073741637 )
            break;
        }
        ++v8;
        ++v7;
        if ( (unsigned __int64)v8 >= 3 )
          goto LABEL_15;
      }
      v3 = v9;
      if ( v9 < 0 )
        return (unsigned int)v3;
LABEL_15:
      PoolWithTag = 0LL;
      v12 = 0;
      v18 = 0;
      do
      {
        LOBYTE(v10) = 1;
        InterfaceClassMappedPropertyKeys = CmGetInterfaceClassMappedPropertyKeys(
                                             a1,
                                             a2,
                                             0,
                                             v10,
                                             (__int64)PoolWithTag,
                                             v12,
                                             (__int64)&v18);
        v12 = v18;
        if ( InterfaceClassMappedPropertyKeys != -1073741789 )
          goto LABEL_22;
        v14 = 20 * v18;
        if ( 20 * (unsigned __int64)v18 > 0xFFFFFFFF )
        {
          InterfaceClassMappedPropertyKeys = -1073741811;
          goto LABEL_24;
        }
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x52504E50u);
      }
      while ( PoolWithTag );
      InterfaceClassMappedPropertyKeys = -1073741801;
LABEL_22:
      if ( InterfaceClassMappedPropertyKeys && InterfaceClassMappedPropertyKeys != -1073741275 )
      {
LABEL_24:
        v3 = InterfaceClassMappedPropertyKeys;
        goto LABEL_40;
      }
      v15 = 0LL;
      if ( v12 )
      {
        while ( 1 )
        {
          v16 = CmSetInterfaceClassMappedProperty(a1, a2, 0, 0, (__int64)PoolWithTag + 20 * v15, 0, 0LL, 0);
          if ( v16 )
          {
            if ( v16 != -1073741275 && v16 != -1073741790 && v16 != -1073741802 && v16 != -1073741637 )
              break;
          }
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= v12 )
            goto LABEL_35;
        }
        v3 = v16;
      }
LABEL_35:
      if ( v3 >= 0 )
      {
        InterfaceClassMappedPropertyKeys = CmDeleteInterfaceClassRegKey(a1, a2, 64);
        if ( InterfaceClassMappedPropertyKeys
          && InterfaceClassMappedPropertyKeys != -1073741772
          && InterfaceClassMappedPropertyKeys != -1073741811 )
        {
          goto LABEL_24;
        }
        CmRaiseDeleteEvent(a1, a2, 4LL);
      }
LABEL_40:
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
  return (unsigned int)v3;
}
