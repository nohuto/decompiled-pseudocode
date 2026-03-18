/*
 * XREFs of xxxRestoreSlateAutorotationPreferences @ 0x1C01D2924
 * Callers:
 *     xxxSetAutoRotationDocked @ 0x1C014F5A0 (xxxSetAutoRotationDocked.c)
 *     xxxSetAutoRotationConvertible @ 0x1C014F5D4 (xxxSetAutoRotationConvertible.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     xxxSetAutoRotationState @ 0x1C01D295C (xxxSetAutoRotationState.c)
 */

void xxxRestoreSlateAutorotationPreferences()
{
  if ( dword_1C0323D98 != dword_1C0323D68 )
  {
    dword_1C0323D88 = 0;
    xxxSetAutoRotationState((unsigned int)dword_1C0323D98);
    PostShellHookMessagesEx(0x32u, dword_1C0323D68, 0LL);
  }
}
