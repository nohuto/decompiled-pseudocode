/*
 * XREFs of ?GetLength@CAccessAce@CDacl@ATL@@UEBAIXZ @ 0x18002D9D0
 * Callers:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002D700 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x18002D9F0 (-GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CDacl::CAccessAce::GetLength(ATL::CDacl::CAccessAce *this)
{
  __int64 v1; // rax

  LODWORD(v1) = GetLengthSid((char *)this + 16);
  return v1 + 8;
}
