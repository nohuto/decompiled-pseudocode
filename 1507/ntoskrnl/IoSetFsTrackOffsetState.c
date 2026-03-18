/*
 * XREFs of IoSetFsTrackOffsetState @ 0x1401F7C80
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x140135D90 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1401F7E04 (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetFsTrackOffsetState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r10
  int v6; // r11d
  _WORD *IrpExtension; // rax

  if ( !(unsigned __int8)IopIrpHasValidCombinationOfExtensionTypes(a1, 5LL) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v5, v6);
  if ( !IrpExtension )
    return 3221225626LL;
  *((_QWORD *)IrpExtension + 4) = a2;
  *((_QWORD *)IrpExtension + 5) = a3;
  return 0LL;
}
