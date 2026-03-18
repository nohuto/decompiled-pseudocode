/*
 * XREFs of IoSetGenericIrpExtension @ 0x140105308
 * Callers:
 *     StRtlIoStorInfoSetNvCachePriority @ 0x14022098C (StRtlIoStorInfoSetNvCachePriority.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x140101C04 (IopIrpHasExtensionType.c)
 *     IopAllocateIrpExtension @ 0x14010536C (IopAllocateIrpExtension.c)
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall IoSetGenericIrpExtension(__int64 a1, const void *a2, unsigned __int16 a3, char a4)
{
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 IrpExtension; // rax

  v6 = a1;
  if ( a3 > 4u )
    return 3221225485LL;
  v7 = 2LL;
  if ( !a4 && IopIrpHasExtensionType(a1, 2u) )
    return 3221225505LL;
  IrpExtension = IopAllocateIrpExtension(v6, v7);
  if ( !IrpExtension )
    return 3221225626LL;
  memmove((void *)(IrpExtension + 4), a2, a3);
  return 0LL;
}
