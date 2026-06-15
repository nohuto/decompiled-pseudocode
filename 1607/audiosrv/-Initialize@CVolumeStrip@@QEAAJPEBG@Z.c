/*
 * XREFs of ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180017E40
 * Callers:
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002B9B0 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800111E0 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180012D40 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180025BCC (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CMeterControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x180025E3C (--0CMeterControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ?RegisterForNotifications@CMuteHardware@@UEAAJXZ @ 0x180025F50 (-RegisterForNotifications@CMuteHardware@@UEAAJXZ.c)
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180025FC4 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CMuteControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x180026310 (--0CMuteControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ?RegisterForNotifications@CVolumeHardware@@UEAAJXZ @ 0x180026570 (-RegisterForNotifications@CVolumeHardware@@UEAAJXZ.c)
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800265C4 (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x180026E30 (--0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ??$?4UIMMDevice@@@?$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV?$CComPtr@UIMMDevice@@@1@@Z @ 0x180027688 (--$-4UIMMDevice@@@-$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV-$CComP.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180027B6C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z @ 0x180029DB4 (-InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ?Release@CMeterControlBase@@UEAAKXZ @ 0x18002F280 (-Release@CMeterControlBase@@UEAAKXZ.c)
 *     ?Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800348E0 (-Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0CVolumeSoftware@@QEAA@PEAVCVolumeStrip@@@Z @ 0x18005929C (--0CVolumeSoftware@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     WPP_SF_SD @ 0x180059B60 (WPP_SF_SD.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CVolumeStrip::Initialize(CVolumeStrip *this, const unsigned __int16 *a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  unsigned __int16 *v6; // rax
  int v7; // ebx
  const unsigned __int16 *v8; // rdx
  __int64 (__fastcall *v9)(CPolicyConfig *, const unsigned __int16 *, int, struct tWAVEFORMATEX **); // rax
  int DeviceFormat; // eax
  CVolumeControlBase *v11; // rax
  CVolumeControlBase *v12; // rsi
  CMuteControlBase *v13; // rax
  CMuteControlBase *v14; // rsi
  CMeterControlBase *v15; // rax
  CMeterHardware *v16; // rsi
  unsigned int (__fastcall *v17)(CMeterControlBase *__hidden); // rax
  CMeterControlBase *v18; // rax
  CMeterSoftware *v19; // rsi
  __int64 (__fastcall *v20)(CMeterSoftware *__hidden, struct IMMDevice *); // rax
  int v21; // eax
  CMuteHardware *v22; // rcx
  __int64 (__fastcall *v23)(CMuteHardware *__hidden); // rax
  int v24; // eax
  CVolumeHardware *v25; // rcx
  __int64 (__fastcall *v26)(CVolumeHardware *__hidden); // rax
  int v27; // eax
  CVolumeSoftware *v29; // rax
  CVolumeSoftware *v30; // rsi
  CMuteControlBase *v31; // rax
  CMuteControlBase *v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  struct IUnknown *v36; // [rsp+30h] [rbp-39h] BYREF
  __int64 v37; // [rsp+38h] [rbp-31h]
  __int64 v38; // [rsp+40h] [rbp-29h]
  CVolumeControlBase *v39; // [rsp+48h] [rbp-21h]
  KSDATAFORMAT v40; // [rsp+50h] [rbp-19h] BYREF
  struct IMMDevice *v41; // [rsp+D0h] [rbp+67h] BYREF
  struct IPartsList *v42; // [rsp+E0h] [rbp+77h]
  LPVOID pv; // [rsp+E8h] [rbp+7Fh] BYREF

  v38 = -2LL;
  v41 = 0LL;
  v37 = 0LL;
  v42 = 0LL;
  v36 = 0LL;
  pv = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
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
         &v41);
  if ( v7 < 0 )
    goto LABEL_112;
  ATL::CComPtr<IMMEndpointInternal>::operator=<IMMDevice>(&v36);
  if ( !v36 )
  {
    v7 = -2147024809;
    goto LABEL_112;
  }
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v36->lpVtbl[2].Release)(v36, (char *)this + 232);
  if ( v7 >= 0 )
  {
    v7 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v41->lpVtbl->Activate)(
           v41,
           &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
           23LL);
    if ( v7 >= 0 )
    {
      v8 = (const unsigned __int16 *)*((_QWORD *)this + 28);
      v9 = *(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, int, struct tWAVEFORMATEX **))(*(_QWORD *)g_PolicyConfig + 32LL);
      if ( v9 == CPolicyConfig::GetDeviceFormat )
        DeviceFormat = CPolicyConfig::GetDeviceFormat(g_PolicyConfig, v8, 0, (struct tWAVEFORMATEX **)&pv);
      else
        DeviceFormat = v9(g_PolicyConfig, v8, 0, (struct tWAVEFORMATEX **)&pv);
      v7 = DeviceFormat;
      if ( DeviceFormat < 0 )
        goto LABEL_112;
      InitKsDataFormat(&v40, (struct tWAVEFORMATEX *)pv);
      CoTaskMemFree(pv);
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, ATL::Sids::SecurityNTAuthority.SubAuthority, this);
      }
      v7 = (*(__int64 (__fastcall **)(__int64, KSDATAFORMAT *, __int64))(*(_QWORD *)v37 + 24LL))(v37, &v40, 64LL);
      if ( v7 >= 0 )
      {
        v11 = (CVolumeControlBase *)operator new(0xF0uLL);
        v12 = v11;
        v39 = v11;
        if ( v11 )
        {
          CVolumeControlBase::CVolumeControlBase(v11, this);
          *(_QWORD *)v12 = &CVolumeHardware::`vftable';
          *((_QWORD *)v12 + 25) = 0LL;
          *((_QWORD *)v12 + 26) = 0LL;
          *(GUID *)((char *)v12 + 216) = GUID_00000000_0000_0000_0000_000000000000;
          *((_QWORD *)v12 + 29) = 0LL;
        }
        else
        {
          v12 = 0LL;
        }
        if ( !v12 )
          v7 = -2147024882;
        if ( v7 < 0 )
          goto LABEL_112;
        v7 = CVolumeHardware::Initialize(v12, v41, v42);
        if ( v7 < 0 )
          (*(void (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)v12 + 16LL))(v12);
        else
          *((_QWORD *)this + 30) = v12;
      }
    }
    if ( !*((_QWORD *)this + 30) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          17,
          (unsigned int)ATL::Sids::SecurityNTAuthority.SubAuthority,
          (_DWORD)a2,
          v7);
      }
      v29 = (CVolumeSoftware *)operator new(0x108uLL);
      v39 = v29;
      if ( v29 )
        v30 = CVolumeSoftware::CVolumeSoftware(v29, this);
      else
        v30 = 0LL;
      if ( !v30 )
        goto LABEL_90;
      v7 = (*(__int64 (__fastcall **)(CVolumeSoftware *, struct IMMDevice *))(*(_QWORD *)v30 + 48LL))(v30, v41);
      if ( v7 < 0 )
        (*(void (__fastcall **)(CVolumeSoftware *))(*(_QWORD *)v30 + 16LL))(v30);
      else
        *((_QWORD *)this + 30) = v30;
    }
    if ( v7 < 0 )
      goto LABEL_112;
    if ( v42 )
    {
      v13 = (CMuteControlBase *)operator new(0x50uLL);
      v14 = v13;
      v39 = v13;
      if ( v13 )
      {
        CMuteControlBase::CMuteControlBase(v13, this);
        *(_QWORD *)v14 = &CMuteHardware::`vftable';
        *((_QWORD *)v14 + 5) = 0LL;
        *((_QWORD *)v14 + 6) = 0LL;
        *((_DWORD *)v14 + 14) = 0;
      }
      else
      {
        v14 = 0LL;
      }
      if ( !v14 )
        v7 = -2147024882;
      if ( v7 < 0 )
        goto LABEL_112;
      v7 = CMuteHardware::Initialize(v14, v41, v42);
      if ( v7 < 0 )
        (*(void (__fastcall **)(CMuteControlBase *))(*(_QWORD *)v14 + 16LL))(v14);
      else
        *((_QWORD *)this + 31) = v14;
    }
    if ( *((_QWORD *)this + 31) )
      goto LABEL_35;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        18,
        (unsigned int)ATL::Sids::SecurityNTAuthority.SubAuthority,
        (_DWORD)a2,
        v7);
    }
    v31 = (CMuteControlBase *)operator new(0x68uLL);
    v32 = v31;
    v39 = v31;
    if ( v31 )
    {
      CMuteControlBase::CMuteControlBase(v31, this);
      *(_QWORD *)v32 = &CMuteSoftware::`vftable';
      *((_QWORD *)v32 + 5) = 0LL;
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v32 + 48));
      *((_QWORD *)v32 + 11) = 0LL;
      *((_BYTE *)v32 + 96) = 0;
    }
    else
    {
      v32 = 0LL;
    }
    if ( v32 )
    {
      v7 = (*(__int64 (__fastcall **)(CMuteControlBase *, struct IMMDevice *))(*(_QWORD *)v32 + 48LL))(v32, v41);
      if ( v7 < 0 )
        (*(void (__fastcall **)(CMuteControlBase *))(*(_QWORD *)v32 + 16LL))(v32);
      else
        *((_QWORD *)this + 31) = v32;
LABEL_35:
      if ( v7 >= 0 )
      {
        if ( v42 )
        {
          v15 = (CMeterControlBase *)operator new(0x38uLL);
          v16 = v15;
          v39 = v15;
          if ( v15 )
          {
            CMeterControlBase::CMeterControlBase(v15, this);
            *(_QWORD *)v16 = &CMeterHardware::`vftable';
            *((_QWORD *)v16 + 5) = 0LL;
            *((_QWORD *)v16 + 6) = 0LL;
          }
          else
          {
            v16 = 0LL;
          }
          if ( !v16 )
            v7 = -2147024882;
          if ( v7 < 0 )
            goto LABEL_112;
          v7 = CMeterHardware::Initialize(v16, v41, v42);
          if ( v7 >= 0 )
          {
            *((_QWORD *)this + 32) = v16;
          }
          else
          {
            v17 = *(unsigned int (__fastcall **)(CMeterControlBase *__hidden))(*(_QWORD *)v16 + 16LL);
            if ( v17 == CMeterControlBase::Release )
              CMeterControlBase::Release(v16);
            else
              v17(v16);
          }
        }
        if ( *((_QWORD *)this + 32) )
          goto LABEL_57;
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_SD(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            19,
            (unsigned int)ATL::Sids::SecurityNTAuthority.SubAuthority,
            (_DWORD)a2,
            v7);
        }
        v18 = (CMeterControlBase *)operator new(0x58uLL);
        v19 = v18;
        v39 = v18;
        if ( v18 )
        {
          CMeterControlBase::CMeterControlBase(v18, this);
          *(_QWORD *)v19 = &CMeterSoftware::`vftable';
          *((_QWORD *)v19 + 5) = 0LL;
          ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v19 + 48));
        }
        else
        {
          v19 = 0LL;
        }
        if ( v19 )
        {
          v20 = *(__int64 (__fastcall **)(CMeterSoftware *__hidden, struct IMMDevice *))(*(_QWORD *)v19 + 48LL);
          if ( v20 == CMeterSoftware::Initialize )
            v21 = CMeterSoftware::Initialize(v19, v41);
          else
            v21 = v20(v19, v41);
          v7 = v21;
          if ( v21 < 0 )
            (*(void (__fastcall **)(CMeterSoftware *))(*(_QWORD *)v19 + 16LL))(v19);
          else
            *((_QWORD *)this + 32) = v19;
LABEL_57:
          if ( v7 >= 0 )
          {
            v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 96LL))(*((_QWORD *)this + 32));
            if ( v7 >= 0 )
            {
              v22 = (CMuteHardware *)*((_QWORD *)this + 31);
              v23 = *(__int64 (__fastcall **)(CMuteHardware *__hidden))(*(_QWORD *)v22 + 96LL);
              v24 = v23 == CMuteHardware::RegisterForNotifications
                  ? CMuteHardware::RegisterForNotifications(v22)
                  : ((__int64 (*)(void))v23)();
              v7 = v24;
              if ( v24 >= 0 )
              {
                v25 = (CVolumeHardware *)*((_QWORD *)this + 30);
                v26 = *(__int64 (__fastcall **)(CVolumeHardware *__hidden))(*(_QWORD *)v25 + 192LL);
                v27 = v26 == CVolumeHardware::RegisterForNotifications
                    ? CVolumeHardware::RegisterForNotifications(v25)
                    : ((__int64 (*)(void))v26)();
                v7 = v27;
                if ( v27 >= 0 )
                  goto LABEL_65;
              }
            }
          }
          goto LABEL_112;
        }
        goto LABEL_90;
      }
      goto LABEL_112;
    }
LABEL_90:
    v7 = -2147024882;
  }
LABEL_112:
  v33 = *((_QWORD *)this + 32);
  if ( v33 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    *((_QWORD *)this + 32) = 0LL;
  }
  v34 = *((_QWORD *)this + 31);
  if ( v34 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    *((_QWORD *)this + 31) = 0LL;
  }
  v35 = *((_QWORD *)this + 30);
  if ( v35 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    *((_QWORD *)this + 30) = 0LL;
  }
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("CVolumeStrip::Initialize", 0x1FFu, v7);
LABEL_65:
  if ( v36 )
    ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
  if ( v42 )
    ((void (__fastcall *)(struct IPartsList *))v42->lpVtbl->Release)(v42);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v41 )
    ((void (__fastcall *)(struct IMMDevice *))v41->lpVtbl->Release)(v41);
  return (unsigned int)v7;
}
