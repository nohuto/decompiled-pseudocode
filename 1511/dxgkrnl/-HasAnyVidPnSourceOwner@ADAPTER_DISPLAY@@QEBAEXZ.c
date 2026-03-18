/*
 * XREFs of ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C012CA58
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C009D4F8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00AE440 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00C70DC (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(DXGADAPTER **this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // r8d
  unsigned int v5; // edx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 26196LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = *((_DWORD *)this + 26);
  v5 = 0;
  if ( !v4 )
    return 0;
  while ( !*((_QWORD *)this[17] + 127 * v5 + 84) )
  {
    if ( ++v5 >= v4 )
      return 0;
  }
  return 1;
}
