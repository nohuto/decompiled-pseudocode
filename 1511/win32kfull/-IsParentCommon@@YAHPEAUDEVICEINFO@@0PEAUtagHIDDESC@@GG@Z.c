/*
 * XREFs of ?IsParentCommon@@YAHPEAUDEVICEINFO@@0PEAUtagHIDDESC@@GG@Z @ 0x1C01D4334
 * Callers:
 *     ?FindInputDeviceForConfig@@YAHPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAH2PEAPEAU2@@Z @ 0x1C01D3FB4 (-FindInputDeviceForConfig@@YAHPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAH2PEAPEAU2@@Z.c)
 *     FindConfigDeviceForInput @ 0x1C01D4DF4 (FindConfigDeviceForInput.c)
 *     FindSiblingMouseDevice @ 0x1C01D4E84 (FindSiblingMouseDevice.c)
 *     FindSiblingPointerDevice @ 0x1C01D4F48 (FindSiblingPointerDevice.c)
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

  v5 = *((_DWORD *)a1 + 82);
  v6 = 0;
  if ( *(_DWORD *)((char *)a3 + 110) == __PAIR32__(a5, a4)
    && v5 == *((_DWORD *)a2 + 82)
    && (!v5 || RtlCompareMemory(*((const void **)a1 + 40), *((const void **)a2 + 40), v5) == v5) )
  {
    return 1;
  }
  return v6;
}
