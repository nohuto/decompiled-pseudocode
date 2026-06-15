/*
 * XREFs of __DllMainCRTStartup @ 0x1800432E4
 * Callers:
 *     _DllMainCRTStartup @ 0x1800432A0 (_DllMainCRTStartup.c)
 * Callees:
 *     _CRT_INIT @ 0x18004303C (_CRT_INIT.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     _XcptFilter_0 @ 0x180043AE4 (_XcptFilter_0.c)
 *     DllMain @ 0x18006B014 (DllMain.c)
 */

__int64 __fastcall _DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, void *a3)
{
  unsigned int v5; // ebx
  int v6; // eax

  v5 = 1;
  if ( fdwReason <= 1 )
    _native_dllmain_reason = fdwReason;
  if ( fdwReason || dword_1800E7BB0 )
  {
    if ( fdwReason - 1 > 1 )
      goto LABEL_13;
    if ( pRawDllMain )
    {
      v6 = dword_1800E7BB4;
      if ( fdwReason == 1 )
        v6 = 1;
      dword_1800E7BB4 = v6;
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
            if ( dword_1800E7BB4 )
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
