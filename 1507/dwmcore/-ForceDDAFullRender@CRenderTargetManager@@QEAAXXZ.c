/*
 * XREFs of ?ForceDDAFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800E8B48
 * Callers:
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x180093208 (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CRenderTargetManager::ForceDDAFullRender(CRenderTargetManager *this)
{
  __int64 i; // rbp

  if ( *((_DWORD *)this + 14) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 8 * i) + 128LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * i)) )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 8 * i) + 152LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * i));
    }
  }
}
