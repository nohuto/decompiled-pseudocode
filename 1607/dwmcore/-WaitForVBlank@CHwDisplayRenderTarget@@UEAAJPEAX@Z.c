/*
 * XREFs of ?WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z @ 0x1800B8DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x18008F84C (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::WaitForVBlank(CHwDisplayRenderTarget *this, void *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)((char *)this - 176));
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v4, 0x400u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5), a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v6, 0x402u);
  }
  return v5;
}
