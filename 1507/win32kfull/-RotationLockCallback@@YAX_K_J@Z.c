/*
 * XREFs of ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01D06B0
 * Callers:
 *     <none>
 * Callees:
 *     QueryAutoRotationState @ 0x1C007D804 (QueryAutoRotationState.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     xxxSetAutoRotationState @ 0x1C01D0D30 (xxxSetAutoRotationState.c)
 */

void __fastcall RotationLockCallback()
{
  unsigned int AutoRotationState; // eax

  AutoRotationState = QueryAutoRotationState();
  if ( AutoRotationState <= 1 )
  {
    xxxSetAutoRotationState(dword_1C0323038 == 0);
    PostShellHookMessagesEx(0x32u, dword_1C0323038, 0LL);
  }
  else if ( (AutoRotationState & 0x2C) == 0 )
  {
    xxxApplyNativeOrientation();
  }
}
