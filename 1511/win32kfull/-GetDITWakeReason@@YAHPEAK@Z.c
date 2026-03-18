/*
 * XREFs of ?GetDITWakeReason@@YAHPEAK@Z @ 0x1C0009788
 * Callers:
 *     ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C009FF44 (-WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z.c)
 *     UserProcessDwmInput @ 0x1C00F7160 (UserProcessDwmInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDITWakeReason(unsigned int *a1)
{
  unsigned int v1; // edx
  int v3; // ecx

  v1 = 0;
  if ( a1 )
  {
    v3 = gdwDITWakeReason & ~(gdwDITWakeReason - 1);
    if ( v3 )
    {
      _InterlockedAnd(&gdwDITWakeReason, ~v3);
      *a1 = v3;
      return 1;
    }
  }
  else
  {
    LOBYTE(v1) = gdwDITWakeReason != 0;
  }
  return v1;
}
