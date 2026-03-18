/*
 * XREFs of NtCompositionInputThread @ 0x1C004E5E0
 * Callers:
 *     <none>
 * Callees:
 *     IsCompositionInputThreadSupported_0 @ 0x1C0002F28 (IsCompositionInputThreadSupported_0.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C004E6E4 (-DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z.c)
 */

__int64 __fastcall NtCompositionInputThread(void *a1, void *a2, int (*a3)(struct tagDITCALLBACKSTRUCT *), int a4)
{
  __int64 v8; // rcx
  CInputManager *v9; // rcx

  if ( (int)IsCompositionInputThreadSupported_0() < 0 )
    return 3221225474LL;
  if ( !UserIsCurrentProcessDwm(v8) )
    return 3221225506LL;
  if ( g_pInputManager )
    return CInputManager::DwmInputThread(v9, a1, a2, a3, a4);
  return 3221225473LL;
}
