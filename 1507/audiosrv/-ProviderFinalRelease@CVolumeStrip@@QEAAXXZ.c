/*
 * XREFs of ?ProviderFinalRelease@CVolumeStrip@@QEAAXXZ @ 0x1800726D0
 * Callers:
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@QEAAXKI@Z @ 0x18002CC40 (-NotifyNewAudioProtocol@CVolumeProvider@@QEAAXKI@Z.c)
 *     ?Cleanup@CVolumeProvider@@AEAAXXZ @ 0x180072E34 (-Cleanup@CVolumeProvider@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CVolumeStrip::ProviderFinalRelease(LPUNKNOWN pUnk)
{
  struct IUnknownVtbl *lpVtbl; // rsi
  struct IUnknownVtbl *v3; // rsi
  struct IUnknownVtbl *v4; // rsi
  HRESULT v5; // eax

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xAu,
      (__int64)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids);
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
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xBu,
      (__int64)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
      v5);
  }
}
