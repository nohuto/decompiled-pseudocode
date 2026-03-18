/*
 * XREFs of KiGetLoadOptions @ 0x1407CFB60
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140777304 (CcInitializeBcbProfiler.c)
 * Callees:
 *     <none>
 */

__int64 KiGetLoadOptions()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 216);
}
