/*
 * XREFs of ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x18002CC40
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18002C904 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002CCA8 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18006759C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

__int64 __fastcall ATL::CAcl::GetLength(ATL::CAcl *this)
{
  struct _ACL *PACL; // rax
  _BYTE pAclInformation[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+24h] [rbp-24h]

  PACL = (struct _ACL *)ATL::CAcl::GetPACL(this);
  if ( *((_BYTE *)this + 16) )
    return 0LL;
  if ( !GetAclInformation(PACL, pAclInformation, 0xCu, AclSizeInformation) )
    ATL::AtlThrowLastWin32();
  return v5;
}
