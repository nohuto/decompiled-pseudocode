/*
 * XREFs of PiDmInit @ 0x140742F20
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiDmObjectManagerInit @ 0x14051B110 (PiDmObjectManagerInit.c)
 *     PiDmObjectManagerPopulate @ 0x14051B15C (PiDmObjectManagerPopulate.c)
 *     PiDmListInit @ 0x14051B528 (PiDmListInit.c)
 */

__int64 PiDmInit()
{
  __int64 result; // rax
  unsigned int i; // ebx

  PiDmObjectManagerInit((__int64)&PiDmDeviceManager, 1);
  PiDmObjectManagerInit((__int64)&PiDmDeviceInterfaceManager, 3);
  PiDmObjectManagerInit((__int64)&PiDmDeviceInterfaceClassManager, 4);
  PiDmObjectManagerInit((__int64)&PiDmDeviceContainerManager, 5);
  PiDmObjectManagerInit((__int64)&PiDmDeviceInstallerClassManager, 2);
  result = PiDmObjectManagerPopulate((__int64)&PiDmDeviceManager);
  if ( (int)result >= 0 )
  {
    result = PiDmObjectManagerPopulate((__int64)&PiDmDeviceInterfaceManager);
    if ( (int)result >= 0 )
    {
      result = PiDmObjectManagerPopulate((__int64)&PiDmDeviceInterfaceClassManager);
      if ( (int)result >= 0 )
      {
        result = PiDmObjectManagerPopulate((__int64)&PiDmDeviceContainerManager);
        if ( (int)result >= 0 )
        {
          result = PiDmObjectManagerPopulate((__int64)&PiDmDeviceInstallerClassManager);
          if ( (int)result >= 0 )
          {
            for ( i = 0; i < 5; ++i )
            {
              result = PiDmListInit(i);
              if ( (int)result < 0 )
                break;
            }
          }
        }
      }
    }
  }
  return result;
}
