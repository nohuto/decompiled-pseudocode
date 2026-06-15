/*
 * XREFs of ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180072330
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EF60 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z @ 0x18006E4F8 (-FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z.c)
 *     WPP_SF_g @ 0x1800711D8 (WPP_SF_g.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180071C74 (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCL.c)
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180071DE0 (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     WPP_SF__guid_ @ 0x180072E00 (WPP_SF__guid_.c)
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
  float *v14; // r12
  int v15; // edx
  __int64 v16; // rcx
  _OWORD *v17; // r15
  void **v19; // [rsp+20h] [rbp-38h] BYREF
  char *v20; // [rsp+28h] [rbp-30h]
  float *Src; // [rsp+60h] [rbp+8h]

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x17u,
      (__int64)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
      this);
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
      v14 = (float *)(v10 + 44);
      v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 30) + 112LL))(
              *((_QWORD *)this + 30),
              v10 + 44);
      if ( v13 >= 0 )
      {
        v15 = *(_DWORD *)(*((_QWORD *)this + 30) + 68LL);
        *((_DWORD *)v10 + 12) = v15;
        Src = (float *)&v10[v5 + 56];
        CVolumeControlBase::FillLevels(*((CVolumeControlBase **)this + 30), v15, Src);
        v13 = StringCbCopyW(v10 + 56, v5, *((char **)this + 28));
        if ( v13 >= 0 )
        {
          v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control )
            goto LABEL_32;
          if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              0x18u,
              (__int64)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
              this);
            v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
          }
          if ( (struct _GUID *)v16 == &WPP_GLOBAL_Control )
          {
LABEL_32:
            v17 = v10 + 24;
          }
          else
          {
            v17 = v10 + 24;
            if ( (*(_DWORD *)(v16 + 28) & 0x10000) != 0 && *(_BYTE *)(v16 + 25) >= 4u )
            {
              WPP_SF__guid_(*(_QWORD *)(v16 + 16), 25LL, &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids, v10 + 24);
              v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
            }
            if ( (struct _GUID *)v16 != &WPP_GLOBAL_Control )
            {
              if ( (*(_DWORD *)(v16 + 28) & 0x10000) != 0 && *(_BYTE *)(v16 + 25) >= 4u )
              {
                WPP_SF_S(
                  *(_QWORD *)(v16 + 16),
                  0x1Au,
                  (__int64)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
                  (const wchar_t *)v10 + 28);
                v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
              }
              if ( (struct _GUID *)v16 != &WPP_GLOBAL_Control )
              {
                if ( (*(_DWORD *)(v16 + 28) & 0x10000) != 0 && *(_BYTE *)(v16 + 25) >= 4u )
                {
                  WPP_SF_D(
                    *(_QWORD *)(v16 + 16),
                    0x1Bu,
                    (__int64)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
                    *((_DWORD *)v10 + 10));
                  v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
                }
                if ( (struct _GUID *)v16 != &WPP_GLOBAL_Control
                  && (*(_DWORD *)(v16 + 28) & 0x10000) != 0
                  && *(_BYTE *)(v16 + 25) >= 4u )
                {
                  WPP_SF_g(
                    *(_QWORD *)(v16 + 16),
                    0x1Cu,
                    (__int64)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
                    *v14);
                }
              }
            }
          }
          v20 = v10;
          v19 = &CMasterVolumeNotification::`vftable';
          v13 = CLockedList<CMasterVolumeNotificationProcess,1,0>::ForEachEntry(
                  (LPCRITICAL_SECTION)((char *)this + 8),
                  (void (__fastcall ***)(_QWORD, _QWORD))&v19);
          if ( v13 >= 0 )
          {
            *(_OWORD *)v8 = *v17;
            *((_DWORD *)v8 + 6) = *(_DWORD *)(*((_QWORD *)this + 30) + 68LL);
            *((_DWORD *)v8 + 4) = *((_DWORD *)v10 + 10);
            *((float *)v8 + 5) = *v14;
            memcpy_0(v8 + 28, Src, v6);
            v20 = v8;
            v19 = &CInternalVolumeNotification::`vftable';
            v13 = CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::ForEachEntry(
                    (LPCRITICAL_SECTION)((char *)this + 112),
                    (void (__fastcall ***)(_QWORD, __int64 *))&v19);
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
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Du,
      (__int64)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
      v13);
  }
  return (unsigned int)v13;
}
