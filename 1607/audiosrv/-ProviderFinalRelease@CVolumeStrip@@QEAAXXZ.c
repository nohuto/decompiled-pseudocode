/*
 * XREFs of ?ProviderFinalRelease@CVolumeStrip@@QEAAXXZ @ 0x18005994C
 * Callers:
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x18002B8D0 (-NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z.c)
 *     ?Cleanup@CVolumeProvider@@AEAAXXZ @ 0x180059C8C (-Cleanup@CVolumeProvider@@AEAAXXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

void __fastcall CVolumeStrip::ProviderFinalRelease(LPUNKNOWN pUnk)
{
  struct IUnknownVtbl *lpVtbl; // rcx
  struct IUnknownVtbl *v3; // rcx
  struct IUnknownVtbl *v4; // rcx
  HRESULT v5; // eax

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)ATL::Sids::SecurityNTAuthority.SubAuthority);
  }
  lpVtbl = pUnk[30].lpVtbl;
  if ( lpVtbl )
    (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 5))(lpVtbl);
  v3 = pUnk[31].lpVtbl;
  if ( v3 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v3->QueryInterface + 5))(v3);
  v4 = pUnk[32].lpVtbl;
  if ( v4 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v4->QueryInterface + 4))(v4);
  v5 = CoDisconnectObject(pUnk, 0);
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("CVolumeStrip::ProviderFinalRelease", 95, v5);
}
