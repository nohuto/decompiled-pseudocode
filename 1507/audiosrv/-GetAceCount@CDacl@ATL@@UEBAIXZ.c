/*
 * XREFs of ?GetAceCount@CDacl@ATL@@UEBAIXZ @ 0x180008660
 * Callers:
 *     ?IsEmpty@CAcl@ATL@@QEBA_NXZ @ 0x1800081C8 (-IsEmpty@CAcl@ATL@@QEBA_NXZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180008288 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CDacl::GetAceCount(ATL::CDacl *this)
{
  return *((unsigned int *)this + 8);
}
