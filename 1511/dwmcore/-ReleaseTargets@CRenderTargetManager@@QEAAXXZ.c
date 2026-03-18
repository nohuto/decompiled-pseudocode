/*
 * XREFs of ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180104ECC
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180101248 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??1CRenderTargetManager@@EEAA@XZ @ 0x180104A5C (--1CRenderTargetManager@@EEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180094B94 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800A1918 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 */

void __fastcall CRenderTargetManager::ReleaseTargets(CRenderTargetManager *this)
{
  __int64 v2; // rbp
  __int64 v3; // r14

  if ( *((_DWORD *)this + 12) )
  {
    v2 = *((unsigned int *)this + 12);
    v3 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + *((_QWORD *)this + 3)) + 16LL))(*(_QWORD *)(v3 + *((_QWORD *)this + 3)));
      v3 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), 0);
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64 *)this + 3);
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 17) = 0;
}
