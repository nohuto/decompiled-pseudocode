/*
 * XREFs of KiGetLoadOptions @ 0x140772590
 * Callers:
 *     CcInitializeBcbProfiler @ 0x14072D2C4 (CcInitializeBcbProfiler.c)
 * Callees:
 *     <none>
 */

__int64 KiGetLoadOptions()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 216);
}
