/*
 * XREFs of NtCompositionInputThread @ 0x1C004FD40
 * Callers:
 *     <none>
 * Callees:
 *     IsCompositionInputThreadSupported_0 @ 0x1C0002F48 (IsCompositionInputThreadSupported_0.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C004FE44 (-DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z.c)
 */

__int64 __fastcall NtCompositionInputThread(void *a1, void *a2, int (*a3)(struct tagDITCALLBACKSTRUCT *), int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  CInputManager *v10; // rcx

  if ( (int)IsCompositionInputThreadSupported_0() < 0 )
    return 3221225474LL;
  if ( !UserIsCurrentProcessDwm(v9, v8) )
    return 3221225506LL;
  if ( g_pInputManager )
    return CInputManager::DwmInputThread(v10, a1, a2, a3, a4);
  return 3221225473LL;
}
