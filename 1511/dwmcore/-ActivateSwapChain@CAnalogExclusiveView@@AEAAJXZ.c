/*
 * XREFs of ?ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ @ 0x18013B2A8
 * Callers:
 *     ?ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x1800F9998 (-ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVI.c)
 *     ?ActivateView@CAnalogExclusiveView@@QEAAJXZ @ 0x18013B398 (-ActivateView@CAnalogExclusiveView@@QEAAJXZ.c)
 *     ?WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ @ 0x18013BB54 (-WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetAnalogExclusive@CCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x1801305D8 (-SetAnalogExclusive@CCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 *     ?ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z @ 0x18013B60C (-ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z.c)
 *     ?UpdateSyncRefreshCount@CAnalogExclusiveView@@QEAAXXZ @ 0x18013BA74 (-UpdateSyncRefreshCount@CAnalogExclusiveView@@QEAAXXZ.c)
 */

__int64 __fastcall CAnalogExclusiveView::ActivateSwapChain(CAnalogExclusiveView *this)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // eax
  unsigned int v6; // edx
  char *v8; // [rsp+40h] [rbp+8h] BYREF

  CAnalogExclusiveView::UpdateSyncRefreshCount(this);
  if ( !*((_BYTE *)this + 58) )
  {
    v2 = *((_QWORD *)this + 8);
    if ( v2 )
      v2 = *(_QWORD *)(v2 + 440);
    if ( v2 )
    {
      CCompositionSurfaceInfo::SetAnalogExclusive((CCompositionSurfaceInfo *)v2, 1u);
      v8 = (char *)this + 40;
      v3 = *(_DWORD *)(v2 + 216);
      v4 = v3 + 1;
      if ( v3 + 1 >= v3 )
      {
        if ( v4 > *(_DWORD *)(v2 + 212) )
        {
          v5 = DynArrayImpl<0>::AddMultipleAndSet(v2 + 192, 8, 1, &v8);
          if ( v5 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v2 + 192) + 8LL * *(unsigned int *)(v2 + 216)) = v8;
          *(_DWORD *)(v2 + 216) = v4;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      v6 = *((_DWORD *)this + 24) + 1;
      *((_BYTE *)this + 58) = 1;
      *((_DWORD *)this + 28) = CAnalogExclusiveView::ProcessExclusiveSurfaceUpdate(this, v6) + 1;
    }
  }
  return 0LL;
}
