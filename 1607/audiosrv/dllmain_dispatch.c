/*
 * XREFs of dllmain_dispatch @ 0x180035DC8
 * Callers:
 *     _DllMainCRTStartup @ 0x180035F00 (_DllMainCRTStartup.c)
 * Callees:
 *     dllmain_crt_dispatch @ 0x180035BC0 (dllmain_crt_dispatch.c)
 *     __scrt_dllmain_exception_filter @ 0x180036138 (__scrt_dllmain_exception_filter.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     DllMain @ 0x18005426C (DllMain.c)
 */

__int64 __fastcall dllmain_dispatch(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  unsigned int v6; // ebx
  BOOL v7; // eax

  if ( fdwReason - 1 > 1
    || (!pRawDllMain || (v6 = _guard_dispatch_icall_fptr()) != 0)
    && (v6 = dllmain_crt_dispatch((__int64)hinstDLL, fdwReason, (__int64)lpvReserved)) != 0 )
  {
    v7 = DllMain(hinstDLL, fdwReason, lpvReserved);
    v6 = v7;
    if ( fdwReason == 1 && !v7 )
    {
      DllMain(hinstDLL, 0, lpvReserved);
      dllmain_crt_dispatch((__int64)hinstDLL, 0, (__int64)lpvReserved);
      if ( pRawDllMain )
        _guard_dispatch_icall_fptr();
    }
    if ( !fdwReason || fdwReason == 3 )
    {
      v6 = dllmain_crt_dispatch((__int64)hinstDLL, fdwReason, (__int64)lpvReserved);
      if ( v6 )
      {
        if ( pRawDllMain )
          return (unsigned int)_guard_dispatch_icall_fptr();
        else
          return 1;
      }
    }
  }
  return v6;
}
