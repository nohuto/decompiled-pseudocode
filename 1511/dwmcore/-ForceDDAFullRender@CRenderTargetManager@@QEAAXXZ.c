/*
 * XREFs of ?ForceDDAFullRender@CRenderTargetManager@@QEAAXXZ @ 0x180104BA8
 * Callers:
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x180094AF8 (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CRenderTargetManager::ForceDDAFullRender(CRenderTargetManager *this)
{
  __int64 i; // rbp

  if ( *((_DWORD *)this + 14) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 8 * i) + 136LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * i)) )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 8 * i) + 160LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * i));
    }
  }
}
