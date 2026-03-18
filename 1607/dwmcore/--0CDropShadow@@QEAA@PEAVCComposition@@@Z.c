/*
 * XREFs of ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x18014ECF0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?ConfigureFastShadow@CDropShadow@@AEAAJXZ @ 0x18014EFA8 (-ConfigureFastShadow@CDropShadow@@AEAAJXZ.c)
 * Callees:
 *     ??0CPropertyChangeResource@@QEAA@PEAVCComposition@@@Z @ 0x180023F70 (--0CPropertyChangeResource@@QEAA@PEAVCComposition@@@Z.c)
 */

CDropShadow *__fastcall CDropShadow::CDropShadow(CDropShadow *this, struct CComposition *a2)
{
  CPropertyChangeResource::CPropertyChangeResource(this, a2);
  *((_DWORD *)this + 38) = 1091567616;
  *(_QWORD *)this = &CDropShadow::`vftable';
  *((_DWORD *)this + 39) = 1065353216;
  *((_DWORD *)this + 37) = 1065353216;
  return this;
}
