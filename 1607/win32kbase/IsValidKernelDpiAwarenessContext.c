/*
 * XREFs of IsValidKernelDpiAwarenessContext @ 0x1C00745B4
 * Callers:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0035710 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C00742C0 (NtUserSetProcessDpiAwarenessContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidKernelDpiAwarenessContext(int a1)
{
  return (a1 & 0x7FFFFFEC) == 0 && (a1 & 0xF0) == 0x10 && (a1 & 0xFu) <= 2;
}
