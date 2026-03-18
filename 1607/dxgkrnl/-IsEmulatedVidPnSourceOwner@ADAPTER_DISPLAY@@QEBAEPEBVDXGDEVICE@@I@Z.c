/*
 * XREFs of ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006AE0
 * Callers:
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0006A94 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0073484 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00875FC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     DxgkSetGammaRamp @ 0x1C0161A50 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(
        DXGADAPTER **this,
        const struct DXGDEVICE *a2,
        unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  bool result; // al
  __int64 v8; // rax
  __int64 v9; // rax

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 4260LL;
    WdLogEvent5_WdAssertion(v8);
  }
  result = ((unsigned int)v4 < *((_DWORD *)this + 20)
         || (v9 = WdLogNewEntry5_WdAssertion(v6),
             *(_QWORD *)(v9 + 24) = 4261LL,
             WdLogEvent5_WdAssertion(v9),
             (unsigned int)v4 < *((_DWORD *)this + 20)))
        && a2 == *((const struct DXGDEVICE **)this[14] + 127 * v4 + 86);
  return result;
}
