/*
 * XREFs of ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x180007D8C
 * Callers:
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x18000123C (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_6ef9b93c8223aae52c204c0fb0e06403_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_6ef9b93c8223aae52c204c0fb0e06403_@@_N@Z @ 0x180011520 (--$ForEachOwnedWindow@V_lambda_6ef9b93c8223aae52c204c0fb0e06403_@@@CTransitionVisualController@@.c)
 */

void __fastcall CTransitionVisualController::GetOwnedInclusiveClipRect(
        CTransitionVisualController *this,
        struct tagRECT *a2,
        struct tagRECT *a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  struct tagRECT **v5; // [rsp+38h] [rbp+10h] BYREF
  struct tagRECT *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  *a3 = a2[3];
  v4 = *((_QWORD *)this + 12);
  if ( v4 != -1 || (unsigned int)GetDesktopID(1LL, &v4) )
  {
    LOBYTE(a3) = 1;
    v5 = &v6;
    CTransitionVisualController::ForEachOwnedWindow<_lambda_6ef9b93c8223aae52c204c0fb0e06403_>(a2, &v5, a3);
  }
}
