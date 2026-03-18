/*
 * XREFs of ?ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ @ 0x18017CB44
 * Callers:
 *     ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x18017CC90 (-SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSwapChainBase::ReleaseD2DBitmaps(CSwapChainBase *this)
{
  __int64 i; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 70); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 32) + 8 * i);
    v4 = *(_QWORD *)(v3 + 216);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *(_QWORD *)(v3 + 216) = 0LL;
    }
  }
}
