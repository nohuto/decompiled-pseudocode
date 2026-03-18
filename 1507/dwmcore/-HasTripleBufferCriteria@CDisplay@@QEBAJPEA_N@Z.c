/*
 * XREFs of ?HasTripleBufferCriteria@CDisplay@@QEBAJPEA_N@Z @ 0x1800909B0
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18008E790 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUHWND__@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAIPEA_N@Z @ 0x180090A30 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAU.c)
 * Callees:
 *     ?IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z @ 0x18005577C (-IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800583AC (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplay::HasTripleBufferCriteria(CDisplay *this, bool *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int IsWARPAdapterAtIndex; // eax
  bool v8; // cl
  bool v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  *a2 = 0;
  if ( CDisplay::IsPrimary(this) )
  {
    IsWARPAdapterAtIndex = CDisplaySet::IsWARPAdapterAtIndex(*(CDisplaySet **)(v6 + 16), v5, &v10);
    v2 = IsWARPAdapterAtIndex;
    if ( IsWARPAdapterAtIndex < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, IsWARPAdapterAtIndex, 0x31Bu);
    }
    else
    {
      v8 = 1;
      if ( v10 || *(_DWORD *)(*((_QWORD *)this + 2) + 72LL) > 1u || OSInfo::ProductType - 2 <= 1 )
        v8 = 0;
      *a2 = v8;
    }
  }
  return v2;
}
