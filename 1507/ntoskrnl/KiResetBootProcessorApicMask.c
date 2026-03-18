/*
 * XREFs of KiResetBootProcessorApicMask @ 0x1405C7420
 * Callers:
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

__int64 KiResetBootProcessorApicMask()
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(KiProcessorBlock[0] + 1598);
  *(_DWORD *)(KiProcessorBlock[0] + 1628) = ~(*(unsigned __int8 *)(KiProcessorBlock[0] + 1598)
                                            * *(unsigned __int8 *)(KiProcessorBlock[0] + 1599)
                                            - 1);
  return result;
}
