/*
 * XREFs of ??1WarpExtension_EndCreateSharedResourceHelper@@QEAA@XZ @ 0x1800B8A84
 * Callers:
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800B8844 (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDispl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WarpExtension_EndCreateSharedResourceHelper::~WarpExtension_EndCreateSharedResourceHelper(
        WarpExtension_EndCreateSharedResourceHelper *this)
{
  __int64 v2; // rcx
  int v3[10]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 8) )
  {
    v2 = *(_QWORD *)this;
    v3[0] = 3;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, v3);
  }
  if ( *(_QWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
}
