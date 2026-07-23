/*
 * XREFs of VrpStripTrailingCharacters @ 0x140617E24
 * Callers:
 *     VrpCreateNamespaceNode @ 0x1406146FC (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x140615DBC (VrpPreLoadKey.c)
 *     VrpTranslatePath @ 0x140616A6C (VrpTranslatePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VrpStripTrailingCharacters(unsigned __int16 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  _WORD *v3; // r8

  LODWORD(v1) = (*a1 >> 1) - 1;
  if ( (int)v1 >= 0 )
  {
    result = *((_QWORD *)a1 + 1);
    v1 = (int)v1;
    v3 = (_WORD *)(result + 2LL * (int)v1);
    do
    {
      if ( *v3 != 92 )
        break;
      result = 65534LL;
      --v3;
      *a1 -= 2;
      --v1;
    }
    while ( v1 >= 0 );
  }
  return result;
}
