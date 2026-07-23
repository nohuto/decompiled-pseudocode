/*
 * XREFs of IoGetFsZeroingOffset @ 0x1401CA328
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasExtensionType @ 0x1400CF278 (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoGetFsZeroingOffset(__int64 a1)
{
  __int64 v1; // r9
  _DWORD *v2; // r10
  __int64 result; // rax

  if ( !IopIrpHasExtensionType(a1, 4u) )
    return 3221226021LL;
  result = 0LL;
  *v2 = *(_DWORD *)(*(_QWORD *)(v1 + 200) + 40LL);
  return result;
}
