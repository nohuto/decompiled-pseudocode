/*
 * XREFs of xxxRestoreSlateAutorotationPreferences @ 0x1C01CA400
 * Callers:
 *     xxxSetAutoRotationDocked @ 0x1C0154F04 (xxxSetAutoRotationDocked.c)
 *     xxxSetAutoRotationConvertible @ 0x1C0154F84 (xxxSetAutoRotationConvertible.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     xxxSetAutoRotationState @ 0x1C01CA438 (xxxSetAutoRotationState.c)
 */

void xxxRestoreSlateAutorotationPreferences()
{
  if ( dword_1C0329498 != dword_1C0329468 )
  {
    dword_1C0329488 = 0;
    xxxSetAutoRotationState((unsigned int)dword_1C0329498);
    PostShellHookMessagesEx(0x32u, dword_1C0329468, 0LL);
  }
}
