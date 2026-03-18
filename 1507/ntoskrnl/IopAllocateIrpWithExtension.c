/*
 * XREFs of IopAllocateIrpWithExtension @ 0x140006730
 * Callers:
 *     IopMountVolume @ 0x14040ADB8 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x1407E3D08 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1400480F0 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x1401F2680 (IopInitActivityIdIrp.c)
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
