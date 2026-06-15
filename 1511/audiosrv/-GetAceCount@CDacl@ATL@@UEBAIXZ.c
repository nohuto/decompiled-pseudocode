/*
 * XREFs of ?GetAceCount@CDacl@ATL@@UEBAIXZ @ 0x18002DAE0
 * Callers:
 *     ?IsEmpty@CAcl@ATL@@QEBA_NXZ @ 0x18002D640 (-IsEmpty@CAcl@ATL@@QEBA_NXZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002D700 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CDacl::GetAceCount(ATL::CDacl *this)
{
  return *((unsigned int *)this + 8);
}
