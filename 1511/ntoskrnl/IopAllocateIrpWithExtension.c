/*
 * XREFs of IopAllocateIrpWithExtension @ 0x1401023EC
 * Callers:
 *     IopMountVolume @ 0x1404DFC14 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x14076E84C (IopInitializeReserveIrps.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x140043750 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x1401B73A0 (IopInitActivityIdIrp.c)
 */

_SLIST_ENTRY *__fastcall IopAllocateIrpWithExtension(__int64 a1, char a2, char a3)
{
  _SLIST_ENTRY *IrpPrivate; // rax
  _SLIST_ENTRY *v4; // rbx
  bool v5; // zf

  IrpPrivate = IopAllocateIrpPrivate(0LL, a2 + 1, a3);
  v4 = IrpPrivate;
  if ( IrpPrivate )
  {
    *((_QWORD *)&IrpPrivate[11].Next + 1) -= 72LL;
    --BYTE3(IrpPrivate[4].Next);
    --BYTE2(IrpPrivate[4].Next);
    v5 = (IopIrpExtensionStatus & 1) == 0;
    *((_QWORD *)&IrpPrivate[12].Next + 1) = *((_QWORD *)&IrpPrivate[11].Next + 1);
    if ( !v5 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(IrpPrivate);
  }
  return v4;
}
