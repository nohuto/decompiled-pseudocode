/*
 * XREFs of ?NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z @ 0x18017A520
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x180034D5C (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18017A7A4 (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::NotifyMetaData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  int v9; // eax
  _OWORD v11[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+60h] [rbp-18h]

  v2 = 0;
  if ( *(_QWORD *)(a1 + 40)
    && ((unsigned __int8)CDisplay::IsOffscreenRenderTarget(*(CDisplay **)(a1 + 24))
     || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5)) )
  {
    v6 = *(_QWORD *)(a1 + 40);
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
      v2 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x386u);
    }
  }
  return v2;
}
