/*
 * XREFs of PTPEnableHotkeyCallback @ 0x1C01D17C0
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     EnablePTPDevices @ 0x1C01D0D58 (EnablePTPDevices.c)
 */

void PTPEnableHotkeyCallback()
{
  BOOL v0; // ebx

  v0 = gPTPEnabled == 0;
  if ( (unsigned int)EnablePTPDevices(gPTPEnabled == 0) )
    PostShellHookMessagesEx(0x39u, v0, 0LL);
}
