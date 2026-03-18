/*
 * XREFs of Win32AllocPoolWithPriority @ 0x1C00B2340
 * Callers:
 *     <none>
 * Callees:
 *     IsWin32AllocPoolWithPriorityImplSupported_0 @ 0x1C0002BF8 (IsWin32AllocPoolWithPriorityImplSupported_0.c)
 *     Win32AllocPoolWithPriorityImpl_0 @ 0x1C0002C00 (Win32AllocPoolWithPriorityImpl_0.c)
 */

__int64 Win32AllocPoolWithPriority()
{
  if ( (int)IsWin32AllocPoolWithPriorityImplSupported_0() < 0 )
    return 0LL;
  else
    return Win32AllocPoolWithPriorityImpl_0();
}
