/*
 * XREFs of ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x18012CF88
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x18012C870 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180090140 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectFlipInfo::GetCurrentDXGIResource(
        CCompositionSurfaceInfo **this,
        struct _LUID a2,
        struct IDXGIResource **a3)
{
  CBitmapRealization *RenderingRealizationNoRef; // rax
  _QWORD *AdapterLuid; // rax
  _QWORD *v6; // r9
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v11; // [rsp+48h] [rbp+10h]

  v11 = a2;
  *a3 = 0LL;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(this[4]);
  if ( RenderingRealizationNoRef
    && (AdapterLuid = (_QWORD *)CBitmapRealization::GetAdapterLuid(RenderingRealizationNoRef, &v10), *AdapterLuid == v11) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *, struct IDXGIResource **, _QWORD))(*v6 + 80LL))(v6, a3, 0LL);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x17Eu);
  }
  else
  {
    v8 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x182u);
  }
  return v8;
}
