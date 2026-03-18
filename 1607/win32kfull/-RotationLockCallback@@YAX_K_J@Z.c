/*
 * XREFs of ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01C9B00
 * Callers:
 *     <none>
 * Callees:
 *     QueryAutoRotationState @ 0x1C0098B04 (QueryAutoRotationState.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01C9B60 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     xxxSetAutoRotationState @ 0x1C01CA438 (xxxSetAutoRotationState.c)
 *     xxxSetSlateAutoRotationState @ 0x1C01CA5F0 (xxxSetSlateAutoRotationState.c)
 */

void __fastcall RotationLockCallback()
{
  unsigned int AutoRotationState; // eax
  int v1; // edi

  AutoRotationState = QueryAutoRotationState();
  v1 = dword_1C0329468;
  if ( AutoRotationState <= 1 )
  {
    xxxSetAutoRotationState(dword_1C0329468 == 0);
    xxxSetSlateAutoRotationState(v1 == 0);
    PostShellHookMessagesEx(0x32u, dword_1C0329468, 0LL);
  }
  else if ( (AutoRotationState & 0x2E) == 0 )
  {
    xxxApplyNativeOrientation();
  }
}
