/*
 * XREFs of ?AceType@CAccessObjectAce@CDacl@ATL@@UEBAEXZ @ 0x180067410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CDacl::CAccessObjectAce::AceType(ATL::CDacl::CAccessObjectAce *this)
{
  return 6 - (unsigned int)(*((_BYTE *)this + 144) != 0);
}
