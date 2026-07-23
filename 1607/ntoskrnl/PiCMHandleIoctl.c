/*
 * XREFs of PiCMHandleIoctl @ 0x1404DF70C
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x1404DF6A4 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiCMHandleIoctl(
        unsigned __int64 a1,
        __int64 a2,
        _OWORD *a3,
        unsigned int a4,
        _DWORD *a5,
        HANDLE Handle,
        int a7)
{
  *a5 = 0;
  if ( (unsigned int)Handle <= 0x47083F )
  {
    if ( (_DWORD)Handle == 4655167 )
      return PiCMGetDeviceInterfaceAlias(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
    if ( (unsigned int)Handle > 0x47081F )
    {
      switch ( (_DWORD)Handle )
      {
        case 0x470823:
          return PiCMGetRelatedDeviceInstance(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
        case 0x470827:
          return PiCMGetDeviceStatus(a1, a2, a3, a4, a7, (__int64)a5);
        case 0x47082B:
          return PiCMGetDeviceDepth(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
        case 0x47082F:
          return PiCMSetDeviceProblem(a1, a2, (_DWORD)a3, a4, (_DWORD)a5, (__int64)a5);
        case 0x470833:
          return PiCMQueryRemove(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
        case 0x470837:
          return PiCMRegisterDeviceInterface(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
        case 0x47083B:
          return PiCMUnregisterDeviceInterface(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
      }
    }
    else
    {
      switch ( (_DWORD)Handle )
      {
        case 0x47081F:
          return PiCMSetRegistryProperty(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
        case 0x470803:
          return PiCMGetDeviceIdList(a1, a2, (__int64)a3, a4, a7, a5);
        case 0x470807:
          return PiCMGetDeviceInterfaceList(a1, a2, (__int64)a3, a4, a7, a5);
        case 0x47080B:
          return PiCMEnumerateSubKeys(a1, a2, (_DWORD)a3, a4, (_DWORD)a5, (__int64)a5);
        case 0x47080F:
          return PiCMGetObjectPropertyKeys(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
        case 0x470813:
          return PiCMGetObjectProperty(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
        case 0x470817:
          return PiCMSetObjectProperty(a1, a2, (__int64)a3, a4, a7, a5);
        case 0x47081B:
          return PiCMGetRegistryProperty(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
      }
    }
    return 3221225659LL;
  }
  if ( (unsigned int)Handle <= 0x47085F )
  {
    switch ( (_DWORD)Handle )
    {
      case 0x47085F:
        return PiCMDeleteDeviceKey(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
      case 0x470843:
        return PiCMValidateDeviceInstance(a1, a2, (__int64)a3, a4, a7, a5);
      case 0x470847:
        return PiCMCreateDevice(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
      case 0x47084B:
        return PiCMDeleteDevice(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
      case 0x47084F:
        return PiCMDeviceAction(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
      case 0x470853:
        return PiCMOpenDeviceInterfaceKey(a1, a2, (int)a3, a4, a7, a5);
      case 0x470857:
        return PiCMDeleteDeviceInterfaceKey(a1, a2, (int)a3, a4, a7, a5);
      case 0x47085B:
        return PiCMOpenDeviceKey(a1, a2, (__int64)a3, a4, a7, a5);
    }
    return 3221225659LL;
  }
  switch ( (_DWORD)Handle )
  {
    case 0x470863:
      return PiCMOpenClassKey(a1, a2, (__int64)a3, a4, a7, a5);
    case 0x470867:
      return PiCMDeleteClassKey(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
    case 0x47086B:
      return PiCMOpenObjectKey(a1, a2, a3, a4, a7, a5);
    case 0x47086F:
      return PiCMCreateObject(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
  }
  if ( (_DWORD)Handle != 4655219 )
  {
    if ( (_DWORD)Handle == 4655223 )
      return PiCMGetObjectList(a1, a2, (__int64)a3, a4, a7, (__int64)a5);
    return 3221225659LL;
  }
  return PiCMDeleteObject(a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
}
