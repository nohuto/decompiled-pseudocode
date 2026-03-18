/*
 * XREFs of IoSetFsZeroingOffsetRequired @ 0x1401F7D0C
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x140135D90 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1401F7E04 (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetFsZeroingOffsetRequired(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // r10
  int v5; // r11d
  _WORD *IrpExtension; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) >= 0 && v2 && (*(_BYTE *)(v2 + 2) & 0x10) != 0 )
    return 3221225505LL;
  if ( !(unsigned __int8)IopIrpHasValidCombinationOfExtensionTypes(a1, 4LL) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v4, v5);
  if ( !IrpExtension )
    return 3221225626LL;
  *((_DWORD *)IrpExtension + 8) = 0;
  return 0LL;
}
