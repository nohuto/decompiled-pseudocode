/*
 * XREFs of ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180033B00
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18002D6E0 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18002D960 (-OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetMute@CMuteControlBase@@UEAAJPEAH@Z @ 0x180026270 (-GetMute@CMuteControlBase@@UEAAJPEAH@Z.c)
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180026B60 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180027BAC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18002D79C (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18002D830 (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCL.c)
 *     ?FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z @ 0x18002D8EC (-FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z.c)
 *     memset @ 0x180036D30 (memset.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_g @ 0x180058F9C (WPP_SF_g.c)
 *     WPP_SF__guid_ @ 0x180059BDC (WPP_SF__guid_.c)
 */

__int64 __fastcall CVolumeStrip::OnNotify(CVolumeStrip *this, __int64 a2, struct _GUID *a3)
{
  __int64 v5; // r12
  unsigned int v6; // r14d
  char *v7; // rbp
  char *v8; // rax
  char *v9; // rsi
  GUID *v10; // rcx
  _DWORD *v11; // r13
  GUID v12; // xmm0
  CMuteControlBase *v13; // rcx
  __int64 (__fastcall *v14)(CMuteControlBase *, int *); // rax
  int *v15; // rdx
  int Mute; // eax
  int v17; // ebx
  CVolumeControlBase *v18; // rcx
  __int64 (__fastcall *v19)(CVolumeControlBase *, float *); // rax
  float *v20; // rdx
  int v21; // eax
  int v22; // edx
  CAudioSession *v23; // rcx
  void **v25; // [rsp+20h] [rbp-38h] BYREF
  char *v26; // [rsp+28h] [rbp-30h]
  unsigned int Size; // [rsp+60h] [rbp+8h]

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, ATL::Sids::SecurityNTAuthority.SubAuthority, this);
  }
  v5 = (unsigned int)(2 * lstrlenW(*((LPCWSTR *)this + 28)) + 2);
  Size = 4 * *(_DWORD *)(*((_QWORD *)this + 30) + 116LL);
  v6 = v5 + Size + 56;
  v7 = (char *)operator new(Size + 28);
  v8 = (char *)operator new(v6);
  v9 = v8;
  if ( v8 && v7 )
  {
    memset(v8, 0, v6);
    *(_DWORD *)v9 = v6;
    *((_DWORD *)v9 + 1) = 128;
    v10 = &GUID_00000000_0000_0000_0000_000000000000;
    v11 = v9 + 40;
    if ( a3 )
      v10 = a3;
    v12 = *v10;
    *((_DWORD *)v9 + 13) = v5;
    *(GUID *)(v9 + 24) = v12;
    v13 = (CMuteControlBase *)*((_QWORD *)this + 31);
    v14 = *(__int64 (__fastcall **)(CMuteControlBase *, int *))(*(_QWORD *)v13 + 72LL);
    v15 = (int *)(v9 + 40);
    if ( v14 == CMuteControlBase::GetMute )
      Mute = CMuteControlBase::GetMute(v13, v15);
    else
      Mute = v14(v13, v15);
    v17 = Mute;
    if ( Mute >= 0 )
    {
      v18 = (CVolumeControlBase *)*((_QWORD *)this + 30);
      v19 = *(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)v18 + 112LL);
      v20 = (float *)(v9 + 44);
      v21 = v19 == CVolumeControlBase::GetMasterVolumeLevelScalar
          ? CVolumeControlBase::GetMasterVolumeLevelScalar(v18, v20)
          : v19(v18, v20);
      v17 = v21;
      if ( v21 >= 0 )
      {
        v22 = *(_DWORD *)(*((_QWORD *)this + 30) + 116LL);
        *((_DWORD *)v9 + 12) = v22;
        CVolumeControlBase::FillLevels(*((CVolumeControlBase **)this + 30), v22, (float *)&v9[v5 + 56]);
        v17 = StringCbCopyW((unsigned __int16 *)v9 + 28, (unsigned int)v5, *((size_t **)this + 28));
        if ( v17 >= 0 )
        {
          v23 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control )
          {
            if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, ATL::Sids::SecurityNTAuthority.SubAuthority, this);
              v23 = WPP_GLOBAL_Control;
            }
            if ( v23 != (CAudioSession *)&WPP_GLOBAL_Control )
            {
              if ( (*((_DWORD *)v23 + 7) & 0x10000) != 0 && *((_BYTE *)v23 + 25) >= 4u )
              {
                WPP_SF__guid_(*((_QWORD *)v23 + 2), 22LL, ATL::Sids::SecurityNTAuthority.SubAuthority, v9 + 24);
                v23 = WPP_GLOBAL_Control;
              }
              if ( v23 != (CAudioSession *)&WPP_GLOBAL_Control )
              {
                if ( (*((_DWORD *)v23 + 7) & 0x10000) != 0 && *((_BYTE *)v23 + 25) >= 4u )
                {
                  WPP_SF_S(*((_QWORD *)v23 + 2), 23LL, ATL::Sids::SecurityNTAuthority.SubAuthority, v9 + 56);
                  v23 = WPP_GLOBAL_Control;
                }
                if ( v23 != (CAudioSession *)&WPP_GLOBAL_Control )
                {
                  if ( (*((_DWORD *)v23 + 7) & 0x10000) != 0 && *((_BYTE *)v23 + 25) >= 4u )
                  {
                    WPP_SF_D(
                      *((_QWORD *)v23 + 2),
                      24LL,
                      ATL::Sids::SecurityNTAuthority.SubAuthority,
                      (unsigned int)*v11);
                    v23 = WPP_GLOBAL_Control;
                  }
                  if ( v23 != (CAudioSession *)&WPP_GLOBAL_Control
                    && (*((_DWORD *)v23 + 7) & 0x10000) != 0
                    && *((_BYTE *)v23 + 25) >= 4u )
                  {
                    WPP_SF_g(*((_QWORD *)v23 + 2), 25LL, ATL::Sids::SecurityNTAuthority.SubAuthority);
                  }
                }
              }
            }
          }
          v26 = v9;
          v25 = &CMasterVolumeNotification::`vftable';
          v17 = CLockedList<CMasterVolumeNotificationProcess,1,0>::ForEachEntry(
                  (LPCRITICAL_SECTION)((char *)this + 8),
                  (void (__fastcall ***)(_QWORD, _QWORD))&v25);
          if ( v17 >= 0 )
          {
            *(_OWORD *)v7 = *(_OWORD *)(v9 + 24);
            *((_DWORD *)v7 + 6) = *(_DWORD *)(*((_QWORD *)this + 30) + 116LL);
            *((_DWORD *)v7 + 4) = *v11;
            *((_DWORD *)v7 + 5) = *((_DWORD *)v9 + 11);
            memcpy_0(v7 + 28, &v9[v5 + 56], Size);
            v26 = v7;
            v25 = &CInternalVolumeNotification::`vftable';
            v17 = CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::ForEachEntry(
                    (LPCRITICAL_SECTION)((char *)this + 112),
                    (void (__fastcall ***)(_QWORD, __int64 *))&v25);
          }
        }
      }
    }
  }
  else
  {
    v17 = -2147024882;
  }
  operator delete(v9);
  operator delete(v7);
  if ( v17 < 0 )
    AudSrvTraceLoggingErrorHelper("CVolumeStrip::OnNotify", 617, v17);
  return (unsigned int)v17;
}
