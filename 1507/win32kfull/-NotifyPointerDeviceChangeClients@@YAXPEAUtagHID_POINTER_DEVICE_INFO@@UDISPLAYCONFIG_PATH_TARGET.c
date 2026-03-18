/*
 * XREFs of ?NotifyPointerDeviceChangeClients@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UDISPLAYCONFIG_PATH_TARGET_INFO@@UDISPLAYCONFIG_SOURCE_MODE@@H@Z @ 0x1C01C5980
 * Callers:
 *     ?SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PEAUtagQDC_DATA@@@Z @ 0x1C01C6628 (-SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PE.c)
 * Callees:
 *     PostPointerEventMessage @ 0x1C0155090 (PostPointerEventMessage.c)
 */

void __fastcall NotifyPointerDeviceChangeClients(_DWORD *a1, __int64 a2, _DWORD *a3, int a4)
{
  int v4; // r11d
  unsigned int v5; // r10d
  int v7; // r11d
  int v8; // r11d
  int v9; // r11d
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx

  v4 = *(_DWORD *)(a2 + 20);
  v5 = 0;
  if ( a1[187] != v4 )
  {
    v7 = v4 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            v5 = 32;
        }
        else
        {
          v5 = 16;
        }
      }
      else
      {
        v5 = 8;
      }
    }
    else
    {
      v5 = 4;
    }
  }
  v10 = *(_DWORD *)(a2 + 24);
  if ( a1[188] != v10 )
  {
    v11 = v10 - 2;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
          v5 |= 0x800u;
      }
      else
      {
        v5 |= 0x40u;
      }
    }
    else
    {
      v5 |= 0x80u;
    }
  }
  if ( a1[197] != a3[3] || a1[198] != a3[4] )
    v5 |= 0x400u;
  if ( a1[194] != *a3 || a1[195] != a3[1] )
    v5 |= 0x200u;
  if ( a4 )
    v5 |= 0x100u;
  if ( v5 )
    PostPointerEventMessage((__int64)a1, 0x238u, v5, 1);
}
