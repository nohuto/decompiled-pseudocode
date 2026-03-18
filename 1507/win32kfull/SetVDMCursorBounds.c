/*
 * XREFs of SetVDMCursorBounds @ 0x1C01E69B4
 * Callers:
 *     xxxConsoleControl @ 0x1C00804C8 (xxxConsoleControl.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetVDMCursorBounds(int a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = gdwPUDFlags;
  if ( a1 )
    gdwPUDFlags |= 0x4000000u;
  else
    gdwPUDFlags &= ~0x4000000u;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}
