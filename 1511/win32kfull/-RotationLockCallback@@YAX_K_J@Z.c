/*
 * XREFs of ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01D2260
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     QueryAutoRotationState @ 0x1C0096AE4 (QueryAutoRotationState.c)
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01D22C0 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     xxxSetAutoRotationState @ 0x1C01D295C (xxxSetAutoRotationState.c)
 *     xxxSetSlateAutoRotationState @ 0x1C01D2AFC (xxxSetSlateAutoRotationState.c)
 */

void __fastcall RotationLockCallback()
{
  unsigned int AutoRotationState; // eax
  int v1; // edi

  AutoRotationState = QueryAutoRotationState();
  v1 = dword_1C0323D68;
  if ( AutoRotationState <= 1 )
  {
    xxxSetAutoRotationState(dword_1C0323D68 == 0);
    xxxSetSlateAutoRotationState(v1 == 0);
    PostShellHookMessagesEx(0x32u, dword_1C0323D68, 0LL);
  }
  else if ( (AutoRotationState & 0x2E) == 0 )
  {
    xxxApplyNativeOrientation();
  }
}
