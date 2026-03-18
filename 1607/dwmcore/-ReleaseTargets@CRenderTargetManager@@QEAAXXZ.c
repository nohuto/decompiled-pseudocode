/*
 * XREFs of ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x18011B430
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180116D28 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??1CRenderTargetManager@@EEAA@XZ @ 0x18011B048 (--1CRenderTargetManager@@EEAA@XZ.c)
 * Callees:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18003B424 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800A3618 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::ReleaseTargets(CRenderTargetManager *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdi

  if ( *((_DWORD *)this + 12) )
  {
    v4 = *((unsigned int *)this + 12);
    v5 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + *((_QWORD *)this + 3)) + 16LL))(*(_QWORD *)(v5 + *((_QWORD *)this + 3)));
      v5 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), 0, a3);
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64 *)this + 3);
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 17) = 0;
}
