/*
 * XREFs of ACPIBusReenumerateSelfInterface @ 0x1C00689C8
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0007730 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIBusReenumerateSelfInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_WORD *)(a2 + 16) < 0x28u )
    return 3221225507LL;
  if ( !*(_WORD *)(a2 + 18) )
    return 3221225659LL;
  *(_OWORD *)v2 = ReenumerateSelfInterface;
  *(_OWORD *)(v2 + 16) = *(_OWORD *)off_1C004BD28;
  *(_QWORD *)(v2 + 32) = ACPIBusReenumerateSelf;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(a1 + 64);
  return 0LL;
}
