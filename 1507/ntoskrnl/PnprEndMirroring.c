/*
 * XREFs of PnprEndMirroring @ 0x1403FFEA0
 * Callers:
 *     <none>
 * Callees:
 *     PnprQuiesce @ 0x1401FCC54 (PnprQuiesce.c)
 *     PnprSwap @ 0x1401FCF70 (PnprSwap.c)
 *     xHalDpMaskLevelTriggeredInterrupts @ 0x1403FB1C0 (xHalDpMaskLevelTriggeredInterrupts.c)
 *     PnprWakeProcessors @ 0x14040146C (PnprWakeProcessors.c)
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
        off_140321848((PVOID)3, *(_QWORD *)(PnprContext + 10632), v3);
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
