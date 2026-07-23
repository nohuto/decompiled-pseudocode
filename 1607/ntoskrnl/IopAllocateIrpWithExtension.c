/*
 * XREFs of IopAllocateIrpWithExtension @ 0x14000788C
 * Callers:
 *     IopMountVolume @ 0x1403ED8DC (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x1407B8C3C (IopInitializeReserveIrps.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14002DDD0 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x1401C4E8C (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateIrpWithExtension(__int64 a1, __int64 a2)
{
  __int64 IrpPrivate; // rax
  __int64 v3; // rbx
  bool v4; // zf

  LOBYTE(a2) = a2 + 1;
  IrpPrivate = IopAllocateIrpPrivate(0LL, a2);
  v3 = IrpPrivate;
  if ( IrpPrivate )
  {
    *(_QWORD *)(IrpPrivate + 184) -= 72LL;
    --*(_BYTE *)(IrpPrivate + 67);
    --*(_BYTE *)(IrpPrivate + 66);
    v4 = (IopIrpExtensionStatus & 1) == 0;
    *(_QWORD *)(IrpPrivate + 200) = *(_QWORD *)(IrpPrivate + 184);
    if ( !v4 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(IrpPrivate);
  }
  return v3;
}
