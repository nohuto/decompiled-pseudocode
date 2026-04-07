/*
 * XREFs of _lambda_6ef9b93c8223aae52c204c0fb0e06403_::operator() @ 0x180001E54
 * Callers:
 *     ??$ForEachOwnedWindow@V_lambda_6ef9b93c8223aae52c204c0fb0e06403_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_6ef9b93c8223aae52c204c0fb0e06403_@@_N@Z @ 0x180001D8C (--$ForEachOwnedWindow@V_lambda_6ef9b93c8223aae52c204c0fb0e06403_@@@CTransitionVisualController@@.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_6ef9b93c8223aae52c204c0fb0e06403_::operator()(const RECT ***a1, __int64 a2)
{
  struct tagRECT rcDst; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a2 + 552) & 1) != 0 && (*(_DWORD *)(a2 + 100) & 0x20000000) == 0 )
  {
    UnionRect(&rcDst, **a1, (const RECT *)(a2 + 48));
    ***a1 = rcDst;
  }
  return 0LL;
}
