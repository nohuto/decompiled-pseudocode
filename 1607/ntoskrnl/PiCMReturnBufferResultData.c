/*
 * XREFs of PiCMReturnBufferResultData @ 0x1404FCC2C
 * Callers:
 *     PiCMGetDeviceIdList @ 0x1404DD06C (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceList @ 0x1404F5F30 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectList @ 0x1404F903C (PiCMGetObjectList.c)
 *     PiCMGetObjectProperty @ 0x1404FC99C (PiCMGetObjectProperty.c)
 *     PiCMGetRegistryProperty @ 0x140502DC0 (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1405289A0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14052C468 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140647664 (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x140647BEC (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140648028 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140648420 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     ProbeForWrite @ 0x14044DAC0 (ProbeForWrite.c)
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
