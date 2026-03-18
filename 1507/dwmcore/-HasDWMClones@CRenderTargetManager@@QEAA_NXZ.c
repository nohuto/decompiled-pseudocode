/*
 * XREFs of ?HasDWMClones@CRenderTargetManager@@QEAA_NXZ @ 0x1800F6B9C
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007184 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CRenderTargetManager::HasDWMClones(CRenderTargetManager *this)
{
  char v1; // si
  __int64 v3; // rbp
  __int64 v4; // rcx

  v1 = 0;
  v3 = 0LL;
  do
  {
    if ( (unsigned int)v3 >= *((_DWORD *)this + 12) )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 8 * v3) + 48LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3),
           36LL) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3) + 80LL);
      if ( *(_QWORD *)(v4 + 152) != v4 )
        v1 = 1;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( !v1 );
  return v1;
}
