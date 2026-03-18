/*
 * XREFs of ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x1800E8F84
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1800E3158 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??1CRenderTargetManager@@EEAA@XZ @ 0x1800E89FC (--1CRenderTargetManager@@EEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800519D4 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180068248 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
}
