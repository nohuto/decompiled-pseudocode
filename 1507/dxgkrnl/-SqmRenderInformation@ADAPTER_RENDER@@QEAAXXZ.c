/*
 * XREFs of ?SqmRenderInformation@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00C2294
 * Callers:
 *     ?SqmAdapterInformation@DXGADAPTER@@QEAAXXZ @ 0x1C00BE7A0 (-SqmAdapterInformation@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEA_K11@Z @ 0x1C00052E8 (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEA_K11@Z.c)
 *     DxgkSqmCommonGeneric @ 0x1C000CDF0 (DxgkSqmCommonGeneric.c)
 */

void __fastcall ADAPTER_RENDER::SqmRenderInformation(ADAPTER_RENDER *this)
{
  struct VIDMM_GLOBAL *v1; // rdx
  VIDMM_EXPORT *v3; // rcx
  ULONG v4; // ecx
  unsigned __int64 Data; // [rsp+40h] [rbp+10h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+50h] [rbp+20h] BYREF

  v1 = (struct VIDMM_GLOBAL *)*((_QWORD *)this + 51);
  Data = 0LL;
  v3 = (VIDMM_EXPORT *)*((_QWORD *)this + 50);
  v6 = 0LL;
  v7 = 0LL;
  VIDMM_EXPORT::VidMmGetTotalSegmentSize(v3, v1, &Data, &v6, &v7);
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 284LL) & 1) != 0 )
  {
    DxgkSqmCommonGeneric(0x14F6u, 0xBu, &Data, 8u);
    DxgkSqmCommonGeneric(0x14F7u, 0xBu, &v6, 8u);
    v4 = 5368;
  }
  else
  {
    DxgkSqmCommonGeneric(0x14FBu, 0xBu, &Data, 8u);
    DxgkSqmCommonGeneric(0x14FCu, 0xBu, &v6, 8u);
    v4 = 5369;
  }
  DxgkSqmCommonGeneric(v4, 0xBu, &v7, 8u);
}
