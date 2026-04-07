/*
 * XREFs of _lambda_22fca495aa2a21adbf46ac02ecb94f06_::operator() @ 0x180001614
 * Callers:
 *     ??$ForEachOwnedWindow@V_lambda_22fca495aa2a21adbf46ac02ecb94f06_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_22fca495aa2a21adbf46ac02ecb94f06_@@_N@Z @ 0x180001550 (--$ForEachOwnedWindow@V_lambda_22fca495aa2a21adbf46ac02ecb94f06_@@@CTransitionVisualController@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_22fca495aa2a21adbf46ac02ecb94f06_::operator()(const RECT ***a1, __int64 a2)
{
  struct tagRECT rcDst; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a2 + 576) & 1) != 0 && (*(_DWORD *)(a2 + 100) & 0x20000000) == 0 )
  {
    UnionRect(&rcDst, **a1, (const RECT *)(a2 + 48));
    ***a1 = rcDst;
  }
  return 0LL;
}
