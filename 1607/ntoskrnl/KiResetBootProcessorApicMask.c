/*
 * XREFs of KiResetBootProcessorApicMask @ 0x140581ED4
 * Callers:
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
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
