/*
 * XREFs of ?OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ @ 0x140030984
 * Callers:
 *     ?DisconnectFromSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140034354 (-DisconnectFromSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 * Callees:
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x14000B778 (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??0?$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1?_GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1400269F8 (--0-$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1-_GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054@.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::OnDisconnectedFromPump(CPipeInstance *this)
{
  __int64 v1; // rax
  _QWORD *v2; // rax
  __int64 v3; // rbx
  void (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = *((_QWORD *)this + 3);
  while ( v6 )
  {
    v1 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev((__int64)this, &v6);
    if ( *(_DWORD *)(v1 + 40) == 3 )
    {
      v2 = *(_QWORD **)(v1 + 32);
      v4 = 0LL;
      if ( (**(int (__fastcall ***)(_QWORD, GUID *, _QWORD))*v2)(*v2, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, &v4) >= 0 )
      {
        ATL::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054>::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054>(
          &v5,
          v4);
        v3 = v5;
        if ( v5 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
          v3 = v5;
        }
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
      if ( v4 )
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
    }
  }
}
