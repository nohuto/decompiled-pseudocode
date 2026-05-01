/*
 * XREFs of __DllMainCRTStartup @ 0x180008504
 * Callers:
 *     _DllMainCRTStartup @ 0x1800084C0 (_DllMainCRTStartup.c)
 * Callees:
 *     _CRT_INIT @ 0x18000825C (_CRT_INIT.c)
 *     _XcptFilter_0 @ 0x1800088A2 (_XcptFilter_0.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     DllMain @ 0x18000BD98 (DllMain.c)
 */

__int64 __fastcall _DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, void *a3)
{
  unsigned int v5; // ebx
  int v6; // eax

  v5 = 1;
  if ( fdwReason <= 1 )
    _native_dllmain_reason = fdwReason;
  if ( fdwReason || dword_180022120 )
  {
    if ( fdwReason - 1 > 1 )
      goto LABEL_13;
    if ( pRawDllMain )
    {
      v6 = dword_180022124;
      if ( fdwReason == 1 )
        v6 = 1;
      dword_180022124 = v6;
      v5 = pRawDllMain(hinstDLL, fdwReason, a3);
    }
    if ( v5 )
    {
      v5 = CRT_INIT((__int64)hinstDLL, fdwReason, (__int64)a3);
      if ( v5 )
      {
LABEL_13:
        v5 = DllMain(hinstDLL, fdwReason, a3);
        if ( fdwReason == 1 && !v5 )
        {
          DllMain(hinstDLL, 0, 0LL);
          CRT_INIT((__int64)hinstDLL, 0, 0LL);
          if ( pRawDllMain )
            pRawDllMain(hinstDLL, 0LL, 0LL);
        }
        if ( !fdwReason || fdwReason == 3 )
        {
          v5 = CRT_INIT((__int64)hinstDLL, fdwReason, (__int64)a3);
          if ( pRawDllMain )
          {
            if ( dword_180022124 )
              v5 = pRawDllMain(hinstDLL, fdwReason, a3);
          }
        }
      }
    }
  }
  else
  {
    v5 = 0;
  }
  if ( fdwReason <= 1 )
    _native_dllmain_reason = -1;
  return v5;
}
