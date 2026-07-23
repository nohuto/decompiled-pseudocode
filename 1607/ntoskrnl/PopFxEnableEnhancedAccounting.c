/*
 * XREFs of PopFxEnableEnhancedAccounting @ 0x140205BDC
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1402063D4 (PopPepInitializeVetoMasks.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopFxEnableEnhancedAccounting(signed __int32 *a1)
{
  bool v1; // r8
  signed __int32 v2; // eax

  v1 = 0;
  v2 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  if ( v2 > 0 )
  {
    v1 = v2 == _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, v2 | 0x80000000, v2);
    v2 |= 0x80000000;
  }
  *a1 = v2;
  return v1;
}
