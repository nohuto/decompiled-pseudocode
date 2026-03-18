/*
 * XREFs of IoSetFsZeroingOffset @ 0x1401BC46C
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasExtensionType @ 0x140101C04 (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoSetFsZeroingOffset(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v2; // r10
  int v3; // r11d

  if ( IopIrpHasExtensionType(a1, 4u) )
    *(_DWORD *)(*(_QWORD *)(v2 + 200) + 32LL) = v3;
  else
    return (unsigned int)-1073741275;
  return v1;
}
