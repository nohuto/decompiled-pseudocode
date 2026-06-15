/*
 * XREFs of ?GetLength@CAccessAce@CDacl@ATL@@UEBAIXZ @ 0x18000CE40
 * Callers:
 *     ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x18000CE60 (-GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002CCA8 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CDacl::CAccessAce::GetLength(ATL::CDacl::CAccessAce *this)
{
  __int64 v1; // rax

  LODWORD(v1) = GetLengthSid((char *)this + 16);
  return v1 + 8;
}
