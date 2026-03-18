/*
 * XREFs of ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x18009381C
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18004A190 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x180093208 (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x1800E3D20 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CRenderTargetManager::ForceFullRender(CRenderTargetManager *this)
{
  __int64 v1; // rsi

  v1 = 0LL;
  if ( *((_DWORD *)this + 14) && *((_DWORD *)this + 12) )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 8 * v1) + 152LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v1));
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < *((_DWORD *)this + 12) );
  }
}
