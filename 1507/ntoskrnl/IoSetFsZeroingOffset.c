/*
 * XREFs of IoSetFsZeroingOffset @ 0x1401F7CD8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoSetFsZeroingOffset(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) >= 0 && v3 && (*(_BYTE *)(v3 + 2) & 0x10) != 0 )
    *(_DWORD *)(*(_QWORD *)(a1 + 200) + 32LL) = a2;
  else
    return (unsigned int)-1073741275;
  return v2;
}
