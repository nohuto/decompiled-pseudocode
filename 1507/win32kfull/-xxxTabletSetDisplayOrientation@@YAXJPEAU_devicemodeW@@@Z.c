/*
 * XREFs of ?xxxTabletSetDisplayOrientation@@YAXJPEAU_devicemodeW@@@Z @ 0x1C01D9990
 * Callers:
 *     ?xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z @ 0x1C01D9850 (-xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?TabletRetrieveDevMode@@YAJPEAU_devicemodeW@@@Z @ 0x1C01D8D88 (-TabletRetrieveDevMode@@YAJPEAU_devicemodeW@@@Z.c)
 */

void __fastcall xxxTabletSetDisplayOrientation(unsigned int a1, struct _devicemodeW *a2)
{
  int v2; // r8d
  struct _devicemodeW *v3; // rbx
  DWORD dmFields; // ecx
  DWORD dmDisplayOrientation; // r9d
  DWORD dmPelsWidth; // ecx
  unsigned int dmBitsPerPel; // eax
  struct _devicemodeW v9; // [rsp+40h] [rbp-F8h] BYREF

  v2 = 0;
  v3 = a2;
  if ( !a2 )
  {
    v2 = TabletRetrieveDevMode(&v9);
    if ( v2 < 0 )
      return;
    v3 = &v9;
  }
  dmFields = v3->dmFields;
  if ( (dmFields & 0x80u) != 0 )
  {
    dmDisplayOrientation = v3->dmDisplayOrientation;
    if ( a1 > 3 )
    {
      if ( a1 == -1 )
      {
        gCurrentOrientation = (gCurrentOrientation + 1) % 4;
        v3->dmDisplayOrientation = gbOrientationTable[gCurrentOrientation];
      }
      else
      {
        v2 = -1073741823;
      }
    }
    else
    {
      v3->dmDisplayOrientation = a1;
    }
    if ( v2 >= 0 )
    {
      v3->dmFields = dmFields & 0x7C0080;
      if ( ((dmDisplayOrientation & 0xFFFFFFFD) == 0) != ((v3->dmDisplayOrientation & 0xFFFFFFFD) == 0) )
      {
        dmPelsWidth = v3->dmPelsWidth;
        v3->dmPelsWidth = v3->dmPelsHeight;
        v3->dmPelsHeight = dmPelsWidth;
      }
      if ( v3->dmPelsWidth >= 0x258 )
      {
        while ( (unsigned int)xxxUserChangeDisplaySettings(0LL, v3, 0LL, 9LL, 0LL, 0, 0) == -2 )
        {
          dmBitsPerPel = v3->dmBitsPerPel;
          if ( dmBitsPerPel < 0x18 )
            break;
          v3->dmBitsPerPel = dmBitsPerPel - 8;
        }
      }
    }
  }
}
