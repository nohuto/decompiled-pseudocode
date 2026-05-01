/*
 * XREFs of dllmain_dispatch @ 0x180025998
 * Callers:
 *     _DllMainCRTStartup @ 0x180025AE0 (_DllMainCRTStartup.c)
 * Callees:
 *     dllmain_crt_dispatch @ 0x180025780 (dllmain_crt_dispatch.c)
 *     dllmain_raw @ 0x180025A80 (dllmain_raw.c)
 *     __scrt_dllmain_exception_filter @ 0x180025CAC (__scrt_dllmain_exception_filter.c)
 *     DllMain @ 0x1800261E0 (DllMain.c)
 */

__int64 __fastcall dllmain_dispatch(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  unsigned int v6; // ebx
  BOOL v7; // eax

  if ( fdwReason - 1 > 1
    || (v6 = ((__int64 (*)(void))dllmain_raw)()) != 0
    && (v6 = dllmain_crt_dispatch((__int64)hinstDLL, fdwReason, (__int64)lpvReserved)) != 0 )
  {
    v7 = DllMain(hinstDLL, fdwReason, lpvReserved);
    v6 = v7;
    if ( fdwReason == 1 && !v7 )
    {
      DllMain(hinstDLL, 0, lpvReserved);
      dllmain_crt_dispatch((__int64)hinstDLL, 0, (__int64)lpvReserved);
      dllmain_raw(hinstDLL, 0LL, lpvReserved);
    }
    if ( !fdwReason || fdwReason == 3 )
    {
      v6 = dllmain_crt_dispatch((__int64)hinstDLL, fdwReason, (__int64)lpvReserved);
      if ( v6 )
        return (unsigned int)dllmain_raw(hinstDLL, fdwReason, lpvReserved);
    }
  }
  return v6;
}
