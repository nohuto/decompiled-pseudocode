/*
 * XREFs of ?GetAt@PropertyMap@Input@@QEBAJAEBU_GUID@@PEAPEAVPropertyNode@2@@Z @ 0x180027ECC
 * Callers:
 *     ??_EDisplayBinding@@UEAAPEAXI@Z @ 0x180019750 (--_EDisplayBinding@@UEAAPEAXI@Z.c)
 *     ?GetHMonitors@DisplayBinding@@UEBAJPEAPEAPEAUHMONITOR__@@PEAI@Z @ 0x18001C0D0 (-GetHMonitors@DisplayBinding@@UEBAJPEAPEAPEAUHMONITOR__@@PEAI@Z.c)
 *     ?GetBounds@DisplayBinding@@UEAAJPEAJ0@Z @ 0x18001C370 (-GetBounds@DisplayBinding@@UEAAJPEAJ0@Z.c)
 *     ?GetRotation@DisplayBinding@@UEAA?AW4DISPLAYCONFIG_ROTATION@@XZ @ 0x18001C510 (-GetRotation@DisplayBinding@@UEAA-AW4DISPLAYCONFIG_ROTATION@@XZ.c)
 *     ?SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z @ 0x18001C6A4 (-SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z.c)
 *     ?OnOrientationChanged@DisplayBinding@@UEAAJPEAUIInputDisplay@@W4DISPLAYCONFIG_ROTATION@@@Z @ 0x18001C940 (-OnOrientationChanged@DisplayBinding@@UEAAJPEAUIInputDisplay@@W4DISPLAYCONFIG_ROTATION@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x18009EAF2 (memcmp_0.c)
 */

__int64 __fastcall Input::PropertyMap::GetAt(
        Input::PropertyMap *this,
        const struct _GUID *a2,
        struct Input::PropertyNode **a3)
{
  __int64 *v3; // rdi
  unsigned int v6; // ebp
  __int64 *v7; // rbx
  __int64 *v8; // rsi

  v3 = (__int64 *)*((_QWORD *)this + 4);
  v6 = -2089336820;
  v7 = v3;
  v8 = (__int64 *)v3[1];
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( memcmp_0(v8 + 4, a2, 0x10uLL) >= 0 )
    {
      v7 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  if ( v7 == v3 || memcmp_0(a2, v7 + 4, 0x10uLL) < 0 )
    v7 = v3;
  if ( v7 != v3 )
  {
    v6 = 0;
    *a3 = (struct Input::PropertyNode *)v7[6];
  }
  return v6;
}
