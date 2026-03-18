/*
 * XREFs of IsValidKernelDpiAwarenessContext @ 0x1C0115694
 * Callers:
 *     NtUserTransformPoint @ 0x1C0115580 (NtUserTransformPoint.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidKernelDpiAwarenessContext(int a1)
{
  return (a1 & 0x7FFFFFEC) == 0 && (a1 & 0xF0) == 0x10 && (a1 & 0xFu) <= 2;
}
