/*
 * XREFs of RIMUpdatePrimaryDevice @ 0x1C00D4B8C
 * Callers:
 *     RIMRemoveFromActiveDevices @ 0x1C0006A98 (RIMRemoveFromActiveDevices.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00D13A8 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C00DB798 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C00DBA60 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     IsIsPointerInputTypeRedirectedSupported_0 @ 0x1C0002D40 (IsIsPointerInputTypeRedirectedSupported_0.c)
 *     IsPointerInputTypeRedirected_0 @ 0x1C0002D48 (IsPointerInputTypeRedirected_0.c)
 *     RIMGetPointerInputType @ 0x1C00D4A84 (RIMGetPointerInputType.c)
 */

__int64 __fastcall RIMUpdatePrimaryDevice(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ebx

  result = *(_QWORD *)(a1 + 608);
  v3 = 0;
  if ( result )
    *(_DWORD *)(result + 252) &= ~4u;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 252) |= 4u;
    *(_QWORD *)(a1 + 608) = a2;
    RIMGetPointerInputType(a2);
    result = IsIsPointerInputTypeRedirectedSupported_0();
    if ( (int)result >= 0 )
    {
      result = IsPointerInputTypeRedirected_0();
      v3 = result;
    }
    *(_DWORD *)(a1 + 616) = v3;
  }
  else
  {
    *(_QWORD *)(a1 + 608) = 0LL;
    *(_DWORD *)(a1 + 616) = 0;
  }
  return result;
}
