/*
 * XREFs of ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800435B0
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18003ACC0 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18003B050 (-OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180036FCC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18003AF0C (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCL.c)
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18003AFB8 (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     ?FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z @ 0x18003B25C (-FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_g @ 0x18006F8F0 (WPP_SF_g.c)
 *     WPP_SF__guid_ @ 0x180070DE4 (WPP_SF__guid_.c)
 */

__int64 __fastcall CVolumeStrip::OnNotify(CVolumeStrip *this, __int64 a2, struct _GUID *a3)
{
  unsigned int v5; // r15d
  unsigned int v6; // r13d
  unsigned int v7; // ebx
  char *v8; // rbp
  char *v9; // rax
  char *v10; // r14
  GUID *v11; // rcx
  GUID v12; // xmm0
  int v13; // ebx
  int v14; // edx
  TraceLoggingHProvider v15; // rcx
  _OWORD *v16; // r15
  void **v18; // [rsp+20h] [rbp-38h] BYREF
  char *v19; // [rsp+28h] [rbp-30h]
  float *Src; // [rsp+60h] [rbp+8h]

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids, this);
  }
  v5 = 2 * lstrlenW(*((LPCWSTR *)this + 28)) + 2;
  v6 = 4 * *(_DWORD *)(*((_QWORD *)this + 30) + 68LL);
  v7 = v5 + v6 + 56;
  v8 = (char *)operator new(v6 + 28);
  v9 = (char *)operator new(v7);
  v10 = v9;
  if ( v9 && v8 )
  {
    memset_0(v9, 0, v7);
    *(_DWORD *)v10 = v7;
    v11 = &GUID_00000000_0000_0000_0000_000000000000;
    *((_DWORD *)v10 + 1) = 128;
    if ( a3 )
      v11 = a3;
    v12 = *v11;
    *((_DWORD *)v10 + 13) = v5;
    *(GUID *)(v10 + 24) = v12;
    v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 31) + 72LL))(
            *((_QWORD *)this + 31),
            v10 + 40);
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 30) + 112LL))(
              *((_QWORD *)this + 30),
              v10 + 44);
      if ( v13 >= 0 )
      {
        v14 = *(_DWORD *)(*((_QWORD *)this + 30) + 68LL);
        *((_DWORD *)v10 + 12) = v14;
        Src = (float *)&v10[v5 + 56];
        CVolumeControlBase::FillLevels(*((CVolumeControlBase **)this + 30), v14, Src);
        v13 = StringCbCopyW((unsigned __int16 *)v10 + 28, v5, *((size_t **)this + 28));
        if ( v13 >= 0 )
        {
          v15 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control )
            goto LABEL_32;
          if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids, this);
            v15 = WPP_GLOBAL_Control;
          }
          if ( v15 == (TraceLoggingHProvider)&WPP_GLOBAL_Control )
          {
LABEL_32:
            v16 = v10 + 24;
          }
          else
          {
            v16 = v10 + 24;
            if ( (*((_DWORD *)v15 + 7) & 0x10000) != 0 && *((_BYTE *)v15 + 25) >= 4u )
            {
              WPP_SF__guid_(*((_QWORD *)v15 + 2), 25LL, &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids, v10 + 24);
              v15 = WPP_GLOBAL_Control;
            }
            if ( v15 != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
            {
              if ( (*((_DWORD *)v15 + 7) & 0x10000) != 0 && *((_BYTE *)v15 + 25) >= 4u )
              {
                WPP_SF_S(*((_QWORD *)v15 + 2), 26LL, &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids, v10 + 56);
                v15 = WPP_GLOBAL_Control;
              }
              if ( v15 != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
              {
                if ( (*((_DWORD *)v15 + 7) & 0x10000) != 0 && *((_BYTE *)v15 + 25) >= 4u )
                {
                  WPP_SF_D(
                    *((_QWORD *)v15 + 2),
                    0x1Bu,
                    (__int64)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
                    *((_DWORD *)v10 + 10));
                  v15 = WPP_GLOBAL_Control;
                }
                if ( v15 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
                  && (*((_DWORD *)v15 + 7) & 0x10000) != 0
                  && *((_BYTE *)v15 + 25) >= 4u )
                {
                  WPP_SF_g(*((_QWORD *)v15 + 2), 28LL, &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids);
                }
              }
            }
          }
          v19 = v10;
          v18 = &CMasterVolumeNotification::`vftable';
          v13 = CLockedList<CMasterVolumeNotificationProcess,1,0>::ForEachEntry(
                  (LPCRITICAL_SECTION)((char *)this + 8),
                  (void (__fastcall ***)(_QWORD, _QWORD))&v18);
          if ( v13 >= 0 )
          {
            *(_OWORD *)v8 = *v16;
            *((_DWORD *)v8 + 6) = *(_DWORD *)(*((_QWORD *)this + 30) + 68LL);
            *((_DWORD *)v8 + 4) = *((_DWORD *)v10 + 10);
            *((_DWORD *)v8 + 5) = *((_DWORD *)v10 + 11);
            memcpy_0(v8 + 28, Src, v6);
            v19 = v8;
            v18 = &CInternalVolumeNotification::`vftable';
            v13 = CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::ForEachEntry(
                    (LPCRITICAL_SECTION)((char *)this + 112),
                    (void (__fastcall ***)(_QWORD, __int64 *))&v18);
          }
        }
      }
    }
  }
  else
  {
    v13 = -2147024882;
  }
  operator delete(v10);
  operator delete(v8);
  if ( v13 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids, v13);
  }
  return (unsigned int)v13;
}
