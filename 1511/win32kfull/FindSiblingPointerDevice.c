/*
 * XREFs of FindSiblingPointerDevice @ 0x1C01D4F48
 * Callers:
 *     ?IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01D014C (-IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?IsParentCommon@@YAHPEAUDEVICEINFO@@0PEAUtagHIDDESC@@GG@Z @ 0x1C01D4334 (-IsParentCommon@@YAHPEAUDEVICEINFO@@0PEAUtagHIDDESC@@GG@Z.c)
 */

__int64 __fastcall FindSiblingPointerDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  struct DEVICEINFO *v5; // rbx
  __int64 v6; // rcx

  v2 = 0;
  if ( LODWORD(aDeviceTemplate[154]) )
    v5 = gpRimDevBackedDeviceInfoList;
  else
    v5 = (struct DEVICEINFO *)gpDeviceInfoList;
  while ( v5 )
  {
    if ( *((_DWORD *)v5 + 77)
      && (unsigned int)IsParentCommon(
                         (struct DEVICEINFO *)a2,
                         v5,
                         *((struct tagHIDDESC **)v5 + 50),
                         *(_WORD *)(a1 + 6),
                         *(_WORD *)(a1 + 8)) )
    {
      v6 = *((_QWORD *)v5 + 52);
      v2 = 1;
      if ( *(_DWORD *)(v6 + 24) == 8 )
      {
        *(_WORD *)(a2 + 676) |= 2u;
      }
      else if ( (unsigned int)(*(_DWORD *)(v6 + 24) - 6) > 1 )
      {
        if ( (unsigned int)(*(_DWORD *)(v6 + 24) - 1) <= 4 )
          *(_WORD *)(a2 + 676) |= 8u;
      }
      else
      {
        *(_WORD *)(a2 + 676) |= 4u;
      }
      return v2;
    }
    v5 = (struct DEVICEINFO *)*((_QWORD *)v5 + 7);
  }
  return v2;
}
