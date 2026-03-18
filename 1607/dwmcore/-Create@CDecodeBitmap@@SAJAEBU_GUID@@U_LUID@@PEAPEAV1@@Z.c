/*
 * XREFs of ?Create@CDecodeBitmap@@SAJAEBU_GUID@@U_LUID@@PEAPEAV1@@Z @ 0x18001E980
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1800998F8 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 * Callees:
 *     ??0CDecodeBitmap@@IEAA@AEBU_GUID@@U_LUID@@@Z @ 0x18001EA54 (--0CDecodeBitmap@@IEAA@AEBU_GUID@@U_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDecodeBitmap::Create(const struct _GUID *a1, struct _LUID a2, struct CDecodeBitmap **a3)
{
  unsigned int v5; // ebx
  CDecodeBitmap *v6; // rax
  struct CDecodeBitmap *v7; // rax

  v5 = 0;
  v6 = (CDecodeBitmap *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          240LL);
  if ( v6 )
    v7 = CDecodeBitmap::CDecodeBitmap(v6, a1, a2);
  else
    v7 = 0LL;
  *a3 = v7;
  if ( v7 )
  {
    (*(void (__fastcall **)(struct CDecodeBitmap *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x17u);
  }
  return v5;
}
