/*
 * XREFs of IoEnableIrpCredits @ 0x140620DC0
 * Callers:
 *     PspInitializeQuotaBlock @ 0x14057CC48 (PspInitializeQuotaBlock.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1404B5D6C (KeSynchronizeWithDynamicProcessors.c)
 *     IopQueryProcessorInitValues @ 0x140580EDC (IopQueryProcessorInitValues.c)
 */

ULONG IoEnableIrpCredits()
{
  ULONG result; // eax
  ULONG v1; // ecx
  int v2; // r9d
  __int64 *v3; // rdx
  _BYTE v4[28]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+3Ch] [rbp-Ch]

  result = IopIrpCreditsEnabled;
  if ( IopIrpCreditsEnabled < 1 )
  {
    result = _InterlockedCompareExchange(&IopIrpCreditsEnabled, 1, 0);
    if ( !result )
    {
      IopQueryProcessorInitValues((__int64)v4);
      KeSynchronizeWithDynamicProcessors();
      result = KeQueryActiveProcessorCountEx(0xFFFFu);
      v1 = 0;
      if ( result )
      {
        v2 = v5;
        v3 = KiProcessorBlock;
        do
        {
          if ( *(_DWORD *)(*v3 + 11548) != 0x7FFFFFFF )
            break;
          ++v1;
          *(_DWORD *)(*v3++ + 11548) = v2;
        }
        while ( v1 < result );
      }
      _InterlockedAdd(&IopIrpCreditsEnabled, 1u);
    }
  }
  return result;
}
