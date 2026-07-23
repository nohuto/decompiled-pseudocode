/*
 * XREFs of IoSetFsZeroingOffset @ 0x1401CA3C0
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasExtensionType @ 0x1400CF278 (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoSetFsZeroingOffset(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v2; // r10
  int v3; // r11d

  if ( IopIrpHasExtensionType(a1, 4u) )
    *(_DWORD *)(*(_QWORD *)(v2 + 200) + 40LL) = v3;
  else
    return (unsigned int)-1073741275;
  return v1;
}
