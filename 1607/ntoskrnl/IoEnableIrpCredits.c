/*
 * XREFs of IoEnableIrpCredits @ 0x140620D0C
 * Callers:
 *     PspInitializeQuotaBlock @ 0x14057C79C (PspInitializeQuotaBlock.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400D4030 (KeQueryActiveProcessorCountEx.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1404D22CC (KeSynchronizeWithDynamicProcessors.c)
 *     IopQueryProcessorInitValues @ 0x140580A30 (IopQueryProcessorInitValues.c)
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
