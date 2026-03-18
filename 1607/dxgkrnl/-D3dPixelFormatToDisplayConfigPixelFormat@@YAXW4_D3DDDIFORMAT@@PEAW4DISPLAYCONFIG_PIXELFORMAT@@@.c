/*
 * XREFs of ?D3dPixelFormatToDisplayConfigPixelFormat@@YAXW4_D3DDDIFORMAT@@PEAW4DISPLAYCONFIG_PIXELFORMAT@@@Z @ 0x1C007A4D8
 * Callers:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C0079520 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00C06E0 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall D3dPixelFormatToDisplayConfigPixelFormat(int a1, enum DISPLAYCONFIG_PIXELFORMAT *a2)
{
  if ( a1 == 20 )
  {
    *(_DWORD *)a2 = 3;
    return;
  }
  if ( a1 <= 20 )
    goto LABEL_5;
  if ( a1 <= 22 )
  {
    *(_DWORD *)a2 = 4;
    return;
  }
  if ( a1 != 23 )
  {
    if ( a1 == 41 )
    {
      *(_DWORD *)a2 = 1;
      return;
    }
LABEL_5:
    *(_DWORD *)a2 = 5;
    return;
  }
  *(_DWORD *)a2 = 2;
}
