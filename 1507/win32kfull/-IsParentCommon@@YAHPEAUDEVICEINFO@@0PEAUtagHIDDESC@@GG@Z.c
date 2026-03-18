/*
 * XREFs of ?IsParentCommon@@YAHPEAUDEVICEINFO@@0PEAUtagHIDDESC@@GG@Z @ 0x1C01D28B8
 * Callers:
 *     ?FindInputDeviceForConfig@@YAHPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAH2PEAPEAU2@@Z @ 0x1C01D2564 (-FindInputDeviceForConfig@@YAHPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAH2PEAPEAU2@@Z.c)
 *     FindConfigDeviceForInput @ 0x1C01D3374 (FindConfigDeviceForInput.c)
 *     FindSiblingMouseDevice @ 0x1C01D3404 (FindSiblingMouseDevice.c)
 *     FindSiblingPointerDevice @ 0x1C01D34C8 (FindSiblingPointerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsParentCommon(
        struct DEVICEINFO *a1,
        struct DEVICEINFO *a2,
        struct tagHIDDESC *a3,
        unsigned __int16 a4,
        unsigned __int16 a5)
{
  unsigned int v5; // r10d
  unsigned int v6; // edi

  v5 = *((_DWORD *)a1 + 84);
  v6 = 0;
  if ( *(_DWORD *)((char *)a3 + 110) == __PAIR32__(a5, a4)
    && v5 == *((_DWORD *)a2 + 84)
    && (!v5 || RtlCompareMemory(*((const void **)a1 + 41), *((const void **)a2 + 41), v5) == v5) )
  {
    return 1;
  }
  return v6;
}
