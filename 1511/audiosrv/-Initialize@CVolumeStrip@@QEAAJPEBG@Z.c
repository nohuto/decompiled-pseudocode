/*
 * XREFs of ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180043950
 * Callers:
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x180043FEC (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180019650 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A5C0 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180037010 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??$?4UIMMDevice@@@?$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV?$CComPtr@UIMMDevice@@@1@@Z @ 0x180037FF0 (--$-4UIMMDevice@@@-$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV-$CComP.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ??0CMuteControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x180041198 (--0CMuteControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ?RegisterForNotifications@CMuteHardware@@UEAAJXZ @ 0x180041250 (-RegisterForNotifications@CMuteHardware@@UEAAJXZ.c)
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800412E0 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?RegisterForNotifications@CVolumeHardware@@UEAAJXZ @ 0x180041960 (-RegisterForNotifications@CVolumeHardware@@UEAAJXZ.c)
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800419C0 (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x180042030 (--0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ?Release@CMeterControlBase@@UEAAKXZ @ 0x180042A60 (-Release@CMeterControlBase@@UEAAKXZ.c)
 *     ??0CMeterControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x180042C70 (--0CMeterControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180042D08 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x180043340 (-Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z @ 0x180043F88 (-InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CVolumeStrip::Initialize(CVolumeStrip *this, size_t *a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  unsigned __int16 *v6; // rax
  int v7; // esi
  __int64 (__fastcall *v8)(CPolicyConfig *, const unsigned __int16 *, int, struct tWAVEFORMATEX **); // rdi
  int DeviceFormat; // eax
  CVolumeControlBase *v10; // rax
  CVolumeControlBase *v11; // rdi
  CMuteControlBase *v12; // rax
  CMuteControlBase *v13; // rdi
  CMeterControlBase *v14; // rax
  CMeterHardware *v15; // rbx
  __int64 (__fastcall *v16)(CMeterControlBase *); // rdi
  CMeterControlBase *v17; // rax
  CMeterSoftware *v18; // rdi
  __int64 (__fastcall *v19)(CMeterSoftware *, struct IMMDevice *); // rbx
  int v20; // eax
  __int64 (__fastcall *v21)(CMuteHardware *); // rdi
  int v22; // eax
  __int64 (__fastcall *v23)(CVolumeHardware *); // rdi
  int v24; // eax
  CVolumeControlBase *v26; // rax
  CVolumeControlBase *v27; // rdi
  CMuteControlBase *v28; // rax
  CMuteControlBase *v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  struct IUnknown *v33; // [rsp+38h] [rbp-39h] BYREF
  __int64 v34; // [rsp+40h] [rbp-31h]
  __int64 v35; // [rsp+48h] [rbp-29h]
  CVolumeControlBase *v36; // [rsp+50h] [rbp-21h]
  KSDATAFORMAT v37; // [rsp+58h] [rbp-19h] BYREF
  struct IMMDevice *v38; // [rsp+D8h] [rbp+67h] BYREF
  struct IPartsList *v39; // [rsp+E8h] [rbp+77h]
  LPVOID pv; // [rsp+F0h] [rbp+7Fh] BYREF

  v35 = -2LL;
  v38 = 0LL;
  v34 = 0LL;
  v39 = 0LL;
  v33 = 0LL;
  pv = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( *((_WORD *)a2 + v4) );
  v5 = v4 + 1;
  v6 = (unsigned __int16 *)operator new(saturated_mul(v5, 2uLL));
  *((_QWORD *)this + 28) = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
    goto LABEL_112;
  }
  v7 = StringCchCopyW(v6, v5, a2);
  if ( v7 < 0 )
    goto LABEL_112;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_QWORD *)this + 28),
         &v38);
  if ( v7 < 0 )
    goto LABEL_112;
  ATL::CComPtr<IMMEndpointInternal>::operator=<IMMDevice>(&v33, (struct IUnknown **)&v38);
  if ( !v33 )
  {
    v7 = -2147024809;
    goto LABEL_112;
  }
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v33->lpVtbl[2].Release)(v33, (char *)this + 232);
  if ( v7 >= 0 )
  {
    v7 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v38->lpVtbl->Activate)(
           v38,
           &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
           23LL);
    if ( v7 >= 0 )
    {
      v8 = *(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, int, struct tWAVEFORMATEX **))(*(_QWORD *)g_PolicyConfig + 32LL);
      if ( v8 == CPolicyConfig::GetDeviceFormat )
        DeviceFormat = CPolicyConfig::GetDeviceFormat(
                         g_PolicyConfig,
                         *((const unsigned __int16 **)this + 28),
                         0,
                         (struct tWAVEFORMATEX **)&pv);
      else
        DeviceFormat = v8(g_PolicyConfig, *((const unsigned __int16 **)this + 28), 0, (struct tWAVEFORMATEX **)&pv);
      v7 = DeviceFormat;
      if ( DeviceFormat < 0 )
        goto LABEL_112;
      InitKsDataFormat(&v37, (struct tWAVEFORMATEX *)pv);
      CoTaskMemFree(pv);
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids, this);
      }
      v7 = (*(__int64 (__fastcall **)(__int64, KSDATAFORMAT *, __int64))(*(_QWORD *)v34 + 24LL))(v34, &v37, 64LL);
      if ( v7 >= 0 )
      {
        v10 = (CVolumeControlBase *)operator new(0x80uLL);
        v11 = v10;
        v36 = v10;
        if ( v10 )
        {
          CVolumeControlBase::CVolumeControlBase(v10, this);
          *(_QWORD *)v11 = &CVolumeHardware::`vftable';
          *((_QWORD *)v11 + 11) = 0LL;
          *((_QWORD *)v11 + 12) = 0LL;
          *(GUID *)((char *)v11 + 104) = GUID_00000000_0000_0000_0000_000000000000;
          *((_QWORD *)v11 + 15) = 0LL;
        }
        else
        {
          v11 = 0LL;
        }
        if ( !v11 )
          v7 = -2147024882;
        if ( v7 < 0 )
          goto LABEL_112;
        v7 = CVolumeHardware::Initialize(v11, v38, v39);
        if ( v7 < 0 )
          (*(void (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)v11 + 16LL))(v11);
        else
          *((_QWORD *)this + 30) = v11;
      }
    }
    if ( !*((_QWORD *)this + 30) )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          19,
          (unsigned int)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
          (_DWORD)a2,
          v7);
      }
      v26 = (CVolumeControlBase *)operator new(0x98uLL);
      v27 = v26;
      v36 = v26;
      if ( v26 )
      {
        CVolumeControlBase::CVolumeControlBase(v26, this);
        *(_QWORD *)v27 = &CVolumeSoftware::`vftable';
        *((_QWORD *)v27 + 11) = 0LL;
        ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v27 + 96));
        *((_DWORD *)v27 + 34) = 1;
        *((_BYTE *)v27 + 140) = 0;
        *((_QWORD *)v27 + 18) = 0LL;
      }
      else
      {
        v27 = 0LL;
      }
      if ( !v27 )
        goto LABEL_89;
      v7 = (*(__int64 (__fastcall **)(CVolumeControlBase *, struct IMMDevice *))(*(_QWORD *)v27 + 48LL))(v27, v38);
      if ( v7 < 0 )
        (*(void (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)v27 + 16LL))(v27);
      else
        *((_QWORD *)this + 30) = v27;
    }
    if ( v7 < 0 )
      goto LABEL_112;
    if ( v39 )
    {
      v12 = (CMuteControlBase *)operator new(0x50uLL);
      v13 = v12;
      v36 = v12;
      if ( v12 )
      {
        CMuteControlBase::CMuteControlBase(v12, this);
        *(_QWORD *)v13 = &CMuteHardware::`vftable';
        *((_QWORD *)v13 + 5) = 0LL;
        *((_QWORD *)v13 + 6) = 0LL;
        *((_DWORD *)v13 + 14) = 0;
      }
      else
      {
        v13 = 0LL;
      }
      if ( !v13 )
        v7 = -2147024882;
      if ( v7 < 0 )
        goto LABEL_112;
      v7 = CMuteHardware::Initialize(v13, v38, v39);
      if ( v7 < 0 )
        (*(void (__fastcall **)(CMuteControlBase *))(*(_QWORD *)v13 + 16LL))(v13);
      else
        *((_QWORD *)this + 31) = v13;
    }
    if ( *((_QWORD *)this + 31) )
      goto LABEL_35;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20,
        (unsigned int)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
        (_DWORD)a2,
        v7);
    }
    v28 = (CMuteControlBase *)operator new(0x68uLL);
    v29 = v28;
    v36 = v28;
    if ( v28 )
    {
      CMuteControlBase::CMuteControlBase(v28, this);
      *(_QWORD *)v29 = &CMuteSoftware::`vftable';
      *((_QWORD *)v29 + 5) = 0LL;
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v29 + 48));
      *((_QWORD *)v29 + 11) = 0LL;
      *((_BYTE *)v29 + 96) = 0;
    }
    else
    {
      v29 = 0LL;
    }
    if ( v29 )
    {
      v7 = (*(__int64 (__fastcall **)(CMuteControlBase *, struct IMMDevice *))(*(_QWORD *)v29 + 48LL))(v29, v38);
      if ( v7 < 0 )
        (*(void (__fastcall **)(CMuteControlBase *))(*(_QWORD *)v29 + 16LL))(v29);
      else
        *((_QWORD *)this + 31) = v29;
LABEL_35:
      if ( v7 >= 0 )
      {
        if ( v39 )
        {
          v14 = (CMeterControlBase *)operator new(0x38uLL);
          v15 = v14;
          v36 = v14;
          if ( v14 )
          {
            CMeterControlBase::CMeterControlBase(v14, this);
            *(_QWORD *)v15 = &CMeterHardware::`vftable';
            *((_QWORD *)v15 + 5) = 0LL;
            *((_QWORD *)v15 + 6) = 0LL;
          }
          else
          {
            v15 = 0LL;
          }
          if ( !v15 )
            v7 = -2147024882;
          if ( v7 < 0 )
            goto LABEL_112;
          v7 = CMeterHardware::Initialize(v15, v38, v39);
          if ( v7 >= 0 )
          {
            *((_QWORD *)this + 32) = v15;
          }
          else
          {
            v16 = *(__int64 (__fastcall **)(CMeterControlBase *))(*(_QWORD *)v15 + 16LL);
            if ( v16 == CMeterControlBase::Release )
              CMeterControlBase::Release(v15);
            else
              v16(v15);
          }
        }
        if ( *((_QWORD *)this + 32) )
          goto LABEL_57;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_SD(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            21,
            (unsigned int)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
            (_DWORD)a2,
            v7);
        }
        v17 = (CMeterControlBase *)operator new(0x58uLL);
        v18 = v17;
        v36 = v17;
        if ( v17 )
        {
          CMeterControlBase::CMeterControlBase(v17, this);
          *(_QWORD *)v18 = &CMeterSoftware::`vftable';
          *((_QWORD *)v18 + 5) = 0LL;
          ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v18 + 48));
        }
        else
        {
          v18 = 0LL;
        }
        if ( v18 )
        {
          v19 = *(__int64 (__fastcall **)(CMeterSoftware *, struct IMMDevice *))(*(_QWORD *)v18 + 48LL);
          if ( v19 == CMeterSoftware::Initialize )
            v20 = CMeterSoftware::Initialize(v18, v38);
          else
            v20 = v19(v18, v38);
          v7 = v20;
          if ( v20 < 0 )
            (*(void (__fastcall **)(CMeterSoftware *))(*(_QWORD *)v18 + 16LL))(v18);
          else
            *((_QWORD *)this + 32) = v18;
LABEL_57:
          if ( v7 >= 0 )
          {
            v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 96LL))(*((_QWORD *)this + 32));
            if ( v7 >= 0 )
            {
              v21 = *(__int64 (__fastcall **)(CMuteHardware *))(**((_QWORD **)this + 31) + 96LL);
              v22 = v21 == CMuteHardware::RegisterForNotifications
                  ? CMuteHardware::RegisterForNotifications(*((CMuteHardware **)this + 31))
                  : v21(*((CMuteHardware **)this + 31));
              v7 = v22;
              if ( v22 >= 0 )
              {
                v23 = *(__int64 (__fastcall **)(CVolumeHardware *))(**((_QWORD **)this + 30) + 192LL);
                v24 = v23 == CVolumeHardware::RegisterForNotifications
                    ? CVolumeHardware::RegisterForNotifications(*((CVolumeHardware **)this + 30))
                    : v23(*((CVolumeHardware **)this + 30));
                v7 = v24;
                if ( v24 >= 0 )
                  goto LABEL_65;
              }
            }
          }
          goto LABEL_112;
        }
        goto LABEL_89;
      }
      goto LABEL_112;
    }
LABEL_89:
    v7 = -2147024882;
  }
LABEL_112:
  v30 = *((_QWORD *)this + 32);
  if ( v30 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30 + 16LL))(*((_QWORD *)this + 32));
    *((_QWORD *)this + 32) = 0LL;
  }
  v31 = *((_QWORD *)this + 31);
  if ( v31 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v31 + 16LL))(*((_QWORD *)this + 31));
    *((_QWORD *)this + 31) = 0LL;
  }
  v32 = *((_QWORD *)this + 30);
  if ( v32 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32 + 16LL))(*((_QWORD *)this + 30));
    *((_QWORD *)this + 30) = 0LL;
  }
  if ( v7 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, (__int64)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids, v7);
  }
LABEL_65:
  if ( v33 )
    ((void (__fastcall *)(struct IUnknown *))v33->lpVtbl->Release)(v33);
  if ( v39 )
    ((void (__fastcall *)(struct IPartsList *))v39->lpVtbl->Release)(v39);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v38 )
    ((void (__fastcall *)(struct IMMDevice *))v38->lpVtbl->Release)(v38);
  return (unsigned int)v7;
}
