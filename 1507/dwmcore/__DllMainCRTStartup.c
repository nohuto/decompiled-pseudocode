/*
 * XREFs of __DllMainCRTStartup @ 0x180098D2C
 * Callers:
 *     _DllMainCRTStartup @ 0x180098CE8 (_DllMainCRTStartup.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     _CRT_INIT @ 0x180098A8C (_CRT_INIT.c)
 *     _XcptFilter_0 @ 0x180098FE8 (_XcptFilter_0.c)
 *     DllMain @ 0x1800E0C00 (DllMain.c)
 */

__int64 __fastcall _DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, void *a3)
{
  unsigned int v5; // ebx
  int v6; // eax

  v5 = 1;
  if ( fdwReason <= 1 )
    _native_dllmain_reason = fdwReason;
  if ( fdwReason || dword_180193010 )
  {
    if ( fdwReason - 1 > 1 )
      goto LABEL_13;
    if ( pRawDllMain )
    {
      v6 = dword_180193014;
      if ( fdwReason == 1 )
        v6 = 1;
      dword_180193014 = v6;
      v5 = ((__int64 (__fastcall *)(HINSTANCE, _QWORD, void *))pRawDllMain)(hinstDLL, fdwReason, a3);
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
            ((void (__fastcall *)(HINSTANCE, _QWORD, _QWORD))pRawDllMain)(hinstDLL, 0LL, 0LL);
        }
        if ( !fdwReason || fdwReason == 3 )
        {
          v5 = CRT_INIT((__int64)hinstDLL, fdwReason, (__int64)a3);
          if ( pRawDllMain )
          {
            if ( dword_180193014 )
              v5 = ((__int64 (__fastcall *)(HINSTANCE, _QWORD, void *))pRawDllMain)(hinstDLL, fdwReason, a3);
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
