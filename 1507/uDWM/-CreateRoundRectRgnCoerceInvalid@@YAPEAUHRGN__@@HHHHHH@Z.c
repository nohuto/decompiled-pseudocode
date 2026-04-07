/*
 * XREFs of ?CreateRoundRectRgnCoerceInvalid@@YAPEAUHRGN__@@HHHHHH@Z @ 0x180068158
 * Callers:
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x18006B388 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     <none>
 */

HRGN __fastcall CreateRoundRectRgnCoerceInvalid(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r9d
  int v7; // r11d
  int v8; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // r9d
  int v13; // eax
  int v14; // r8d
  int v15; // eax
  int v16; // edx

  v6 = a4 + 1;
  v7 = -134217728;
  v8 = 0x7FFFFFF;
  v10 = -134217728;
  if ( v6 > -134217728 )
    v10 = v6;
  v11 = -134217728;
  v12 = 0x7FFFFFF;
  if ( v10 < 0x7FFFFFF )
    v12 = v10;
  v13 = a3 + 1;
  v14 = 0x7FFFFFF;
  if ( v13 > -134217728 )
    v11 = v13;
  v15 = -134217728;
  if ( v11 < 0x7FFFFFF )
    v14 = v11;
  if ( a2 > -134217728 )
    v15 = a2;
  v16 = 0x7FFFFFF;
  if ( v15 < 0x7FFFFFF )
    v16 = v15;
  if ( a1 > -134217728 )
    v7 = a1;
  if ( v7 < 0x7FFFFFF )
    v8 = v7;
  return CreateRoundRectRgn(v8, v16, v14, v12, a5, a6);
}
