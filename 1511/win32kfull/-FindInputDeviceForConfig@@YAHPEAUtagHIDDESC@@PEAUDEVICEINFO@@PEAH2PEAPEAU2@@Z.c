/*
 * XREFs of ?FindInputDeviceForConfig@@YAHPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAH2PEAPEAU2@@Z @ 0x1C01D3FB4
 * Callers:
 *     RequestModeSwitchOnPowerUp @ 0x1C014F6D8 (RequestModeSwitchOnPowerUp.c)
 *     ?AllocateHidConfigDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D3C48 (-AllocateHidConfigDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTIO.c)
 * Callees:
 *     ?IsParentCommon@@YAHPEAUDEVICEINFO@@0PEAUtagHIDDESC@@GG@Z @ 0x1C01D4334 (-IsParentCommon@@YAHPEAUDEVICEINFO@@0PEAUtagHIDDESC@@GG@Z.c)
 */

__int64 __fastcall FindInputDeviceForConfig(
        struct tagHIDDESC *a1,
        struct DEVICEINFO *a2,
        int *a3,
        int *a4,
        struct DEVICEINFO **a5)
{
  unsigned int v5; // edi
  __int64 i; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx

  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(_DWORD *)(i + 308) )
    {
      v11 = *(_QWORD *)(i + 416);
      if ( *(_DWORD *)(v11 + 24) == 8 || (unsigned int)(*(_DWORD *)(v11 + 24) - 1) <= 4 )
      {
        if ( (unsigned int)IsParentCommon(
                             a2,
                             (struct DEVICEINFO *)i,
                             a1,
                             *(_WORD *)(*(_QWORD *)(i + 400) + 110LL),
                             *(_WORD *)(*(_QWORD *)(i + 400) + 112LL)) )
        {
          v12 = *(_QWORD *)(i + 416);
          v5 = 1;
          *a3 = -__CFSHR__(*(_DWORD *)(v12 + 252), 15);
          if ( a5 )
            *a5 = (struct DEVICEINFO *)i;
          if ( *(_DWORD *)(i + 308) && (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 4 )
            *a4 = 1;
          return v5;
        }
      }
    }
  }
  return v5;
}
