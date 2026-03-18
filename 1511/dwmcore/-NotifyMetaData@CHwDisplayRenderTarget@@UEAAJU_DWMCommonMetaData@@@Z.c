/*
 * XREFs of ?NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z @ 0x180149EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x180070458 (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18014A148 (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::NotifyMetaData(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // edi
  __int64 v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  int v9; // eax
  _OWORD v11[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+60h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  if ( v2
    && ((unsigned __int8)CDisplay::IsOffscreenRenderTarget(*(CDisplay **)(a1 + 16))
     || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2)) )
  {
    v6 = *(_QWORD *)(a1 + 32);
    if ( v6 )
    {
      v7 = *(_OWORD *)(a2 + 16);
      v11[0] = *(_OWORD *)a2;
      v8 = *(_OWORD *)(a2 + 32);
      v11[1] = v7;
      *(_QWORD *)&v7 = *(_QWORD *)(a2 + 48);
      v11[2] = v8;
      v12 = v7;
      v9 = CSwapChainBase::NotifyMetaData(v6, v11);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x3F2u);
    }
  }
  return v3;
}
