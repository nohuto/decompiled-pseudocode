/*
 * XREFs of ?FindSaDeviceForAudioDeviceGraph@CEndpointSaDeviceLists@@QEAAPEAVCSaDeviceInstance@@PEAUIAudioDeviceGraph@@@Z @ 0x180074184
 * Callers:
 *     ?IsUsingResource@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@_KPEAH@Z @ 0x180074E00 (-IsUsingResource@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@_KPEAH@Z.c)
 *     ?RegisterStream@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@PEAUIAudioGraphCallback@@@Z @ 0x180075040 (-RegisterStream@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?ReleaseSaDevice@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800751F0 (-ReleaseSaDevice@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?UnregisterStream@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@PEAUIAudioGraphCallback@@@Z @ 0x1800758B0 (-UnregisterStream@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?UpdateSaDevicePriority@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800759B0 (-UpdateSaDevicePriority@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCSaDeviceInstance@@V?$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@QEAAAEAPEAVCSaDeviceInstance@@AEAPEAU__POSITION@@@Z @ 0x1800745A4 (-GetNext@-$CAtlList@PEAVCSaDeviceInstance@@V-$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@.c)
 */

struct CSaDeviceInstance *__fastcall CEndpointSaDeviceLists::FindSaDeviceForAudioDeviceGraph(
        CEndpointSaDeviceLists *this,
        struct IAudioDeviceGraph *a2)
{
  struct IAudioDeviceGraph *v2; // rbx
  unsigned int v4; // edi
  CEndpointSaDeviceLists *v5; // r14
  __int64 Next; // rax
  __int64 v7; // rsi
  struct IUnknown *v8; // rdx
  struct IUnknown *v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0LL;
  v10 = 0LL;
  v4 = 0;
  v5 = this;
  while ( 1 )
  {
    v11 = *(_QWORD *)v5;
    if ( v11 )
      break;
LABEL_7:
    ++v4;
    v5 = (CEndpointSaDeviceLists *)((char *)v5 + 48);
    if ( v4 >= 4 )
    {
      v7 = 0LL;
      goto LABEL_9;
    }
  }
  while ( 1 )
  {
    Next = ATL::CAtlList<CSaDeviceInstance *,ATL::CElementTraits<CSaDeviceInstance *>>::GetNext(this, &v11);
    v2 = (struct IAudioDeviceGraph *)v10;
    v7 = *(_QWORD *)Next;
    v8 = *(struct IUnknown **)(*(_QWORD *)Next + 24LL);
    if ( v10 != v8 )
    {
      ATL::AtlComQIPtrAssign(&v10, v8, &GUID_e2bd719f_11ad_4d4d_b5cb_e1b102141726);
      v2 = (struct IAudioDeviceGraph *)v10;
    }
    if ( v2 == a2 )
      break;
    if ( !v11 )
      goto LABEL_7;
  }
LABEL_9:
  if ( v2 )
    (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v2 + 16LL))(v2);
  return (struct CSaDeviceInstance *)v7;
}
