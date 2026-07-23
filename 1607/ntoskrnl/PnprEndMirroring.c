/*
 * XREFs of PnprEndMirroring @ 0x1403DB9D0
 * Callers:
 *     <none>
 * Callees:
 *     PnprQuiesce @ 0x1401D0400 (PnprQuiesce.c)
 *     PnprSwap @ 0x1401D0740 (PnprSwap.c)
 *     xHalDpMaskLevelTriggeredInterrupts @ 0x1403D6AF0 (xHalDpMaskLevelTriggeredInterrupts.c)
 *     PnprWakeProcessors @ 0x1403DCEB4 (PnprWakeProcessors.c)
 */

__int64 __fastcall PnprEndMirroring(int a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  void *v3; // r8

  v1 = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v2 = PnprSwap();
      if ( v2 < 0 )
        off_1402F2398((PVOID)3, *(_QWORD *)(PnprContext + 10632), v3);
      PnprWakeProcessors();
      if ( v2 >= 0 )
        return 1073742484;
      return (unsigned int)v2;
    }
  }
  else
  {
    *(_BYTE *)(PnprContext + 208) = 1;
    return (unsigned int)PnprQuiesce();
  }
  return v1;
}
