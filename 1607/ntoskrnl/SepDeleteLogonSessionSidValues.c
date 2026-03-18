/*
 * XREFs of SepDeleteLogonSessionSidValues @ 0x140692EB8
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1404E50DC (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x140533094 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDereferenceSidValuesBlock @ 0x140692F60 (SepDereferenceSidValuesBlock.c)
 */

__int64 __fastcall SepDeleteLogonSessionSidValues(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 120);
  if ( v2 )
  {
    result = SepDereferenceSidValuesBlock(v2);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return result;
}
