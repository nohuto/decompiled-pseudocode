/*
 * XREFs of PiCMReturnBufferResultData @ 0x140441124
 * Callers:
 *     PiCMGetRegistryProperty @ 0x140440870 (PiCMGetRegistryProperty.c)
 *     PiCMGetObjectProperty @ 0x140440E88 (PiCMGetObjectProperty.c)
 *     PiCMGetDeviceInterfaceList @ 0x140457DA8 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectList @ 0x1404DBAE4 (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405506E4 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMGetDeviceIdList @ 0x140550A70 (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14055E6C0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMQueryRemove @ 0x14058A87C (PiCMQueryRemove.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140692C44 (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x1406930A8 (PiCMGetObjectPropertyKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x1406934E4 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnBufferResultData(
        unsigned int a1,
        unsigned int a2,
        int a3,
        const void *a4,
        unsigned int Size,
        int a6,
        _DWORD *Address,
        unsigned int Length,
        _DWORD *a9)
{
  unsigned int v10; // ebx
  __int128 v12; // [rsp+20h] [rbp-38h]

  *a9 = 0;
  v10 = 0;
  if ( Length >= Size + 20 && a6 == 20 )
  {
    LODWORD(v12) = 20;
    *(_QWORD *)((char *)&v12 + 4) = __PAIR64__(a2, a1);
    HIDWORD(v12) = a3;
    ProbeForWrite(Address, Length, 4u);
    *(_OWORD *)Address = v12;
    Address[4] = 0;
    if ( Size )
      memmove(Address + 4, a4, Size);
    *a9 = Size + 20;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
