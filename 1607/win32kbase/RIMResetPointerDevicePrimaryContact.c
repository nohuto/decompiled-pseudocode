/*
 * XREFs of RIMResetPointerDevicePrimaryContact @ 0x1C00DB6BC
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00D13A8 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C00DB798 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMResetPointerDevicePrimaryContact(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1576);
  if ( result )
  {
    *(_DWORD *)(result + 32) &= ~8u;
    *(_QWORD *)(a1 + 1576) = 0LL;
  }
  return result;
}
