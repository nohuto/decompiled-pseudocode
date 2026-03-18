/*
 * XREFs of ?GetDITWakeReason@@YAHPEAK@Z @ 0x1C00078FC
 * Callers:
 *     UserProcessDwmInput @ 0x1C00F1FE0 (UserProcessDwmInput.c)
 *     ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C0155600 (-WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z.c)
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
