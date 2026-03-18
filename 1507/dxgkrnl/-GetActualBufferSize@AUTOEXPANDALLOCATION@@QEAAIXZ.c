/*
 * XREFs of ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C00E0724
 * Callers:
 *     ?CalcCurrentTableSize@DXGADAPTERSOURCEHASH@@AEAAIXZ @ 0x1C000A9C8 (-CalcCurrentTableSize@DXGADAPTERSOURCEHASH@@AEAAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AUTOEXPANDALLOCATION::GetActualBufferSize(AUTOEXPANDALLOCATION *this)
{
  return *((unsigned int *)this + 3);
}
