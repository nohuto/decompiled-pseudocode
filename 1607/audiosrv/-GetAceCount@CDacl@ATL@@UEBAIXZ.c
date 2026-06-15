/*
 * XREFs of ?GetAceCount@CDacl@ATL@@UEBAIXZ @ 0x18002CE60
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18002C904 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002CCA8 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CDacl::GetAceCount(ATL::CDacl *this)
{
  return *((unsigned int *)this + 8);
}
