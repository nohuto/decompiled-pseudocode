/*
 * XREFs of ?ProviderFinalRelease@CVolumeStrip@@QEAAXXZ @ 0x1800706DC
 * Callers:
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@QEAAXKI@Z @ 0x18000EF14 (-NotifyNewAudioProtocol@CVolumeProvider@@QEAAXKI@Z.c)
 *     ?Cleanup@CVolumeProvider@@AEAAXXZ @ 0x180070E18 (-Cleanup@CVolumeProvider@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CVolumeStrip::ProviderFinalRelease(LPUNKNOWN pUnk)
{
  struct IUnknownVtbl *lpVtbl; // rsi
  struct IUnknownVtbl *v3; // rsi
  struct IUnknownVtbl *v4; // rsi
  HRESULT v5; // eax

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids);
  }
  lpVtbl = pUnk[30].lpVtbl;
  if ( lpVtbl )
    (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 5))(pUnk[30].lpVtbl);
  v3 = pUnk[31].lpVtbl;
  if ( v3 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v3->QueryInterface + 5))(pUnk[31].lpVtbl);
  v4 = pUnk[32].lpVtbl;
  if ( v4 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v4->QueryInterface + 4))(pUnk[32].lpVtbl);
  v5 = CoDisconnectObject(pUnk, 0);
  if ( v5 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids, v5);
  }
}
