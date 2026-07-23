/*
 * XREFs of IoSetGenericIrpExtension @ 0x1401107F4
 * Callers:
 *     StRtlIoStorInfoSetNvCachePriority @ 0x14023CBC8 (StRtlIoStorInfoSetNvCachePriority.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14008DD94 (IopAllocateIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x1400CF278 (IopIrpHasExtensionType.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall IoSetGenericIrpExtension(__int64 a1, const void *a2, unsigned __int16 a3, char a4)
{
  __int64 v6; // r10
  int v7; // edx
  _WORD *IrpExtension; // rax

  v6 = a1;
  if ( a3 > 4u )
    return 3221225485LL;
  v7 = 2;
  if ( !a4 && IopIrpHasExtensionType(a1, 2u) )
    return 3221225505LL;
  IrpExtension = IopAllocateIrpExtension(v6, v7);
  if ( !IrpExtension )
    return 3221225626LL;
  memmove(IrpExtension + 2, a2, a3);
  return 0LL;
}
