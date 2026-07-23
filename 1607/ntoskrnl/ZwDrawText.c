/*
 * XREFs of ZwDrawText @ 0x14015BBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDrawText(PUNICODE_STRING Text)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Text);
}
