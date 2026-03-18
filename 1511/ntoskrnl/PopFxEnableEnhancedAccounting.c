/*
 * XREFs of PopFxEnableEnhancedAccounting @ 0x1401ECF64
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1401EDA28 (PopPepInitializeVetoMasks.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopFxEnableEnhancedAccounting(unsigned int *a1)
{
  bool v2; // cl
  signed __int32 v3; // eax
  unsigned int v4; // r8d

  v2 = 0;
  v3 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
  v4 = v3;
  if ( v3 > 0 )
  {
    v4 = v3 | 0x80000000;
    v2 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, v3 | 0x80000000, v3) == v3;
  }
  *a1 = v4;
  return v2;
}
