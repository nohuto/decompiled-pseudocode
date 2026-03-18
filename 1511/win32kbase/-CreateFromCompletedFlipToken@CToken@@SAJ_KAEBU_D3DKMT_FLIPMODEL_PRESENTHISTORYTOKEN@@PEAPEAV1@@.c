/*
 * XREFs of ?CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00392F0
 * Callers:
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C003CC5C (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0039408 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00394AC (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CToken::CreateFromCompletedFlipToken(
        unsigned __int64 a1,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        struct CToken **a3)
{
  void *hCompSurf; // rbp
  struct CToken **v4; // r15
  int v7; // edi
  struct CToken *v8; // rbx
  char v9; // al
  struct CToken *v11; // [rsp+80h] [rbp+18h] BYREF

  hCompSurf = (void *)a2->hCompSurf;
  v4 = a3;
  *a3 = 0LL;
  v11 = 0LL;
  LOBYTE(a3) = 1;
  v7 = CompositionObject::ResolveHandle(hCompSurf, 2LL, a3);
  if ( v7 >= 0 )
  {
    v7 = CToken::CreateFlipToken(a1, 0LL, a2, &v11);
    if ( v7 < 0
      || (v8 = v11, v9 = (*(__int64 (__fastcall **)(struct CToken *))(*(_QWORD *)v11 + 144LL))(v11), *v4 = v8, !v9) )
    {
      ObCloseHandle(hCompSurf, 1);
    }
    ObfDereferenceObject(0LL);
  }
  return (unsigned int)v7;
}
