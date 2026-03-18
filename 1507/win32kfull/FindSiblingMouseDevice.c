/*
 * XREFs of FindSiblingMouseDevice @ 0x1C01D3404
 * Callers:
 *     ?AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D2374 (-AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFO.c)
 * Callees:
 *     ?IsParentCommon@@YAHPEAUDEVICEINFO@@0PEAUtagHIDDESC@@GG@Z @ 0x1C01D28B8 (-IsParentCommon@@YAHPEAUDEVICEINFO@@0PEAUtagHIDDESC@@GG@Z.c)
 */

__int16 __fastcall FindSiblingMouseDevice(struct tagHIDDESC *a1, __int16 a2, struct DEVICEINFO *a3)
{
  int v3; // eax
  __int16 v7; // di
  __int64 i; // rbx

  LOWORD(v3) = gpDeviceInfoList;
  v7 = 0;
  for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
  {
    if ( !*(_BYTE *)(i + 48) )
    {
      v3 = IsParentCommon(a3, (struct DEVICEINFO *)i, a1, *(_WORD *)(i + 678), *(_WORD *)(i + 680));
      if ( v3 )
      {
        switch ( a2 )
        {
          case 2:
            v7 = 4;
            break;
          case 4:
            v7 = 8;
            break;
          case 5:
            v7 = 2;
            break;
        }
        LOWORD(v3) = (v7 | *(_WORD *)(i + 676)) & 0xFFFE;
        *(_WORD *)(i + 676) = v3;
        return v3;
      }
    }
  }
  return v3;
}
