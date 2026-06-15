/*
 * XREFs of ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18003D6A0
 * Callers:
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18003D250 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     StringCopyWorkerW_0 @ 0x18002E560 (StringCopyWorkerW_0.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180037FA0 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003DCE8 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CMuteControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x18003E168 (--0CMuteControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ?RegisterForNotifications@CMuteHardware@@UEAAJXZ @ 0x18003E230 (-RegisterForNotifications@CMuteHardware@@UEAAJXZ.c)
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003E2C0 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x18003E7E0 (--0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ?RegisterForNotifications@CVolumeHardware@@UEAAJXZ @ 0x18003EFB0 (-RegisterForNotifications@CVolumeHardware@@UEAAJXZ.c)
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003F010 (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Release@CMeterControlBase@@UEAAKXZ @ 0x18003F550 (-Release@CMeterControlBase@@UEAAKXZ.c)
 *     ??0CMeterControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x18003F77C (--0CMeterControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ?Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x180042680 (-Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CVolumeStrip::Initialize(CVolumeStrip *this, STRSAFE_PCNZWCH pszSrc)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  SIZE_T v6; // rdi
  HANDLE ProcessHeap; // rax
  wchar_t *v8; // rcx
  size_t *v9; // r8
  HRESULT v10; // esi
  struct IUnknown *v11; // r12
  __int64 (__fastcall *v12)(CPolicyConfig *, const unsigned __int16 *, int, struct tWAVEFORMATEX **); // rdi
  int DeviceFormat; // eax
  HANDLE v14; // rax
  CVolumeControlBase *v15; // rax
  CVolumeControlBase *v16; // rdi
  HANDLE v17; // rax
  CMuteControlBase *v18; // rax
  CMuteControlBase *v19; // rdi
  HANDLE v20; // rax
  CMeterControlBase *v21; // rax
  CMeterHardware *v22; // rbx
  __int64 (__fastcall *v23)(CMuteHardware *__hidden); // rdi
  int v24; // eax
  __int64 (__fastcall *v25)(CVolumeHardware *__hidden); // rdi
  int v26; // eax
  unsigned int (__fastcall *v28)(CMeterControlBase *__hidden); // rdi
  CMeterControlBase *v29; // rax
  CMeterSoftware *v30; // rdi
  __int64 (__fastcall *v31)(CMeterSoftware *__hidden, struct IMMDevice *); // rbx
  int v32; // eax
  __int64 v33; // rbx
  bool v34; // si
  CVolumeControlBase *v35; // rax
  CVolumeControlBase *v36; // rdi
  CMuteControlBase *v37; // rax
  CMuteControlBase *v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  size_t v42; // [rsp+20h] [rbp-59h]
  CVolumeControlBase *v43; // [rsp+30h] [rbp-49h] BYREF
  __int64 v44; // [rsp+38h] [rbp-41h]
  LPVOID pv; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v46[3]; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v47[4]; // [rsp+60h] [rbp-19h] BYREF
  GUID v48; // [rsp+70h] [rbp-9h]
  GUID v49; // [rsp+80h] [rbp+7h]
  GUID v50; // [rsp+90h] [rbp+17h]
  struct IUnknown *v51; // [rsp+E0h] [rbp+67h] BYREF
  struct IPartsList *v52; // [rsp+F0h] [rbp+77h]
  struct IUnknown *v53; // [rsp+F8h] [rbp+7Fh] BYREF

  v46[1] = -2LL;
  v51 = 0LL;
  v44 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  pv = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( pszSrc[v4] );
  v5 = v4 + 1;
  v6 = 2 * v5;
  if ( !is_mul_ok(v5, 2uLL) )
    v6 = -1LL;
  ProcessHeap = GetProcessHeap();
  v8 = (wchar_t *)HeapAlloc(ProcessHeap, 0, v6);
  *((_QWORD *)this + 28) = v8;
  if ( !v8 )
  {
    v10 = -2147024882;
    goto LABEL_120;
  }
  v10 = 0;
  if ( v5 - 1 > 0x7FFFFFFE )
    v10 = -2147024809;
  if ( v10 < 0 )
  {
    if ( v5 )
      *v8 = 0;
  }
  else
  {
    v10 = StringCopyWorkerW_0(v8, v5, v9, pszSrc, v42);
  }
  if ( v10 < 0 )
    goto LABEL_120;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
          *(_QWORD *)&g_DeviceEnumerator,
          *((_QWORD *)this + 28),
          &v51);
  if ( v10 < 0 )
    goto LABEL_120;
  v11 = v51;
  if ( !v53 )
  {
    if ( !v51 )
    {
LABEL_86:
      v10 = -2147024809;
      goto LABEL_120;
    }
    goto LABEL_14;
  }
  if ( !v51 )
    goto LABEL_14;
  v46[0] = 0LL;
  v43 = 0LL;
  ((void (__fastcall *)(struct IUnknown *, GUID *, _QWORD *))v53->lpVtbl->QueryInterface)(
    v53,
    &GUID_00000000_0000_0000_c000_000000000046,
    v46);
  ((void (__fastcall *)(struct IUnknown *, GUID *, CVolumeControlBase **))v11->lpVtbl->QueryInterface)(
    v11,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v43);
  v33 = v46[0];
  v34 = v46[0] == (_QWORD)v43;
  if ( v43 )
  {
    (*(void (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)v43 + 16LL))(v43);
    v33 = v46[0];
  }
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( !v34 )
LABEL_14:
    ATL::AtlComQIPtrAssign(&v53, v51, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
  if ( !v53 )
    goto LABEL_86;
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v53->lpVtbl[2].Release)(v53, (char *)this + 232);
  if ( v10 < 0 )
    goto LABEL_120;
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))v51->lpVtbl[1].QueryInterface)(
          v51,
          &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
          23LL);
  if ( v10 >= 0 )
  {
    v12 = *(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, int, struct tWAVEFORMATEX **))(*(_QWORD *)g_PolicyConfig + 32LL);
    if ( v12 == CPolicyConfig::GetDeviceFormat )
      DeviceFormat = CPolicyConfig::GetDeviceFormat(
                       g_PolicyConfig,
                       *((const unsigned __int16 **)this + 28),
                       0,
                       (struct tWAVEFORMATEX **)&pv);
    else
      DeviceFormat = v12(g_PolicyConfig, *((const unsigned __int16 **)this + 28), 0, (struct tWAVEFORMATEX **)&pv);
    v10 = DeviceFormat;
    if ( DeviceFormat < 0 )
      goto LABEL_120;
    memset_0(v47, 0, 0x40uLL);
    v47[0] = 64;
    v48 = GUID_73647561_0000_0010_8000_00aa00389b71;
    v50 = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
    if ( *(_WORD *)pv == 0xFFFE )
    {
      v49 = *(GUID *)((char *)pv + 24);
    }
    else
    {
      v49 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v49.Data1 = *(unsigned __int16 *)pv;
    }
    CoTaskMemFree(pv);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        18LL,
        &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
        this);
    }
    v10 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v44 + 24LL))(v44, v47, 64LL);
    if ( v10 >= 0 )
    {
      v14 = GetProcessHeap();
      v15 = (CVolumeControlBase *)HeapAlloc(v14, 0, 0x80uLL);
      v16 = v15;
      v43 = v15;
      if ( !v15 )
        goto LABEL_99;
      CVolumeControlBase::CVolumeControlBase(v15, this);
      *(_QWORD *)v16 = &CVolumeHardware::`vftable';
      *((_QWORD *)v16 + 11) = 0LL;
      *((_QWORD *)v16 + 12) = 0LL;
      *(GUID *)((char *)v16 + 104) = GUID_00000000_0000_0000_0000_000000000000;
      *((_QWORD *)v16 + 15) = 0LL;
      v10 = CVolumeHardware::Initialize(v16, (struct IMMDevice *)v51, v52);
      if ( v10 < 0 )
        (*(void (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)v16 + 16LL))(v16);
      else
        *((_QWORD *)this + 30) = v16;
    }
  }
  if ( !*((_QWORD *)this + 30) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_SD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        19,
        (unsigned int)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
        (_DWORD)pszSrc,
        v10);
    }
    v35 = (CVolumeControlBase *)operator new(0x98uLL);
    v36 = v35;
    v43 = v35;
    if ( v35 )
    {
      CVolumeControlBase::CVolumeControlBase(v35, this);
      *(_QWORD *)v36 = &CVolumeSoftware::`vftable';
      *((_QWORD *)v36 + 11) = 0LL;
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v36 + 96));
      *((_DWORD *)v36 + 34) = 1;
      *((_BYTE *)v36 + 140) = 0;
      *((_QWORD *)v36 + 18) = 0LL;
    }
    else
    {
      v36 = 0LL;
    }
    if ( !v36 )
      goto LABEL_99;
    v10 = (*(__int64 (__fastcall **)(CVolumeControlBase *, struct IUnknown *))(*(_QWORD *)v36 + 48LL))(v36, v51);
    if ( v10 < 0 )
      (*(void (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)v36 + 16LL))(v36);
    else
      *((_QWORD *)this + 30) = v36;
  }
  if ( v10 < 0 )
    goto LABEL_120;
  if ( v52 )
  {
    v17 = GetProcessHeap();
    v18 = (CMuteControlBase *)HeapAlloc(v17, 0, 0x50uLL);
    v19 = v18;
    v43 = v18;
    if ( !v18 )
      goto LABEL_99;
    CMuteControlBase::CMuteControlBase(v18, this);
    *(_QWORD *)v19 = &CMuteHardware::`vftable';
    *((_QWORD *)v19 + 5) = 0LL;
    *((_QWORD *)v19 + 6) = 0LL;
    *((_DWORD *)v19 + 14) = 0;
    v10 = CMuteHardware::Initialize(v19, (struct IMMDevice *)v51, v52);
    if ( v10 < 0 )
      (*(void (__fastcall **)(CMuteControlBase *))(*(_QWORD *)v19 + 16LL))(v19);
    else
      *((_QWORD *)this + 31) = v19;
  }
  if ( !*((_QWORD *)this + 31) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_SD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        20,
        (unsigned int)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
        (_DWORD)pszSrc,
        v10);
    }
    v37 = (CMuteControlBase *)operator new(0x68uLL);
    v38 = v37;
    v43 = v37;
    if ( v37 )
    {
      CMuteControlBase::CMuteControlBase(v37, this);
      *(_QWORD *)v38 = &CMuteSoftware::`vftable';
      *((_QWORD *)v38 + 5) = 0LL;
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v38 + 48));
      *((_QWORD *)v38 + 11) = 0LL;
      *((_BYTE *)v38 + 96) = 0;
    }
    else
    {
      v38 = 0LL;
    }
    if ( !v38 )
    {
      v10 = -2147024882;
      goto LABEL_120;
    }
    v10 = (*(__int64 (__fastcall **)(CMuteControlBase *, struct IUnknown *))(*(_QWORD *)v38 + 48LL))(v38, v51);
    if ( v10 < 0 )
      (*(void (__fastcall **)(CMuteControlBase *))(*(_QWORD *)v38 + 16LL))(v38);
    else
      *((_QWORD *)this + 31) = v38;
  }
  if ( v10 >= 0 )
  {
    if ( !v52 )
    {
LABEL_43:
      if ( *((_QWORD *)this + 32) )
        goto LABEL_44;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_SD(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          21,
          (unsigned int)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
          (_DWORD)pszSrc,
          v10);
      }
      v29 = (CMeterControlBase *)operator new(0x58uLL);
      v30 = v29;
      v43 = v29;
      if ( v29 )
      {
        CMeterControlBase::CMeterControlBase(v29, this);
        *(_QWORD *)v30 = &CMeterSoftware::`vftable';
        *((_QWORD *)v30 + 5) = 0LL;
        ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v30 + 48));
      }
      else
      {
        v30 = 0LL;
      }
      if ( v30 )
      {
        v31 = *(__int64 (__fastcall **)(CMeterSoftware *__hidden, struct IMMDevice *))(*(_QWORD *)v30 + 48LL);
        if ( v31 == CMeterSoftware::Initialize )
          v32 = CMeterSoftware::Initialize(v30, (struct IMMDevice *)v51);
        else
          v32 = v31(v30, (struct IMMDevice *)v51);
        v10 = v32;
        if ( v32 < 0 )
          (*(void (__fastcall **)(CMeterSoftware *))(*(_QWORD *)v30 + 16LL))(v30);
        else
          *((_QWORD *)this + 32) = v30;
LABEL_44:
        if ( v10 >= 0 )
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 96LL))(*((_QWORD *)this + 32));
          if ( v10 >= 0 )
          {
            v23 = *(__int64 (__fastcall **)(CMuteHardware *__hidden))(**((_QWORD **)this + 31) + 96LL);
            v24 = v23 == CMuteHardware::RegisterForNotifications
                ? CMuteHardware::RegisterForNotifications(*((CMuteHardware **)this + 31))
                : v23(*((CMuteHardware **)this + 31));
            v10 = v24;
            if ( v24 >= 0 )
            {
              v25 = *(__int64 (__fastcall **)(CVolumeHardware *__hidden))(**((_QWORD **)this + 30) + 192LL);
              v26 = v25 == CVolumeHardware::RegisterForNotifications
                  ? CVolumeHardware::RegisterForNotifications(*((CVolumeHardware **)this + 30))
                  : v25(*((CVolumeHardware **)this + 30));
              v10 = v26;
              if ( v26 >= 0 )
                goto LABEL_52;
            }
          }
        }
        goto LABEL_120;
      }
      v10 = -2147024882;
      goto LABEL_120;
    }
    v20 = GetProcessHeap();
    v21 = (CMeterControlBase *)HeapAlloc(v20, 0, 0x38uLL);
    v22 = v21;
    v43 = v21;
    if ( v21 )
    {
      CMeterControlBase::CMeterControlBase(v21, this);
      *(_QWORD *)v22 = &CMeterHardware::`vftable';
      *((_QWORD *)v22 + 5) = 0LL;
      *((_QWORD *)v22 + 6) = 0LL;
      v10 = CMeterHardware::Initialize(v22, (struct IMMDevice *)v51, v52);
      if ( v10 < 0 )
      {
        v28 = *(unsigned int (__fastcall **)(CMeterControlBase *__hidden))(*(_QWORD *)v22 + 16LL);
        if ( v28 == CMeterControlBase::Release )
          CMeterControlBase::Release(v22);
        else
          v28(v22);
      }
      else
      {
        *((_QWORD *)this + 32) = v22;
      }
      goto LABEL_43;
    }
LABEL_99:
    v10 = -2147024882;
  }
LABEL_120:
  v39 = *((_QWORD *)this + 32);
  if ( v39 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v39 + 16LL))(*((_QWORD *)this + 32));
    *((_QWORD *)this + 32) = 0LL;
  }
  v40 = *((_QWORD *)this + 31);
  if ( v40 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v40 + 16LL))(*((_QWORD *)this + 31));
    *((_QWORD *)this + 31) = 0LL;
  }
  v41 = *((_QWORD *)this + 30);
  if ( v41 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v41 + 16LL))(*((_QWORD *)this + 30));
    *((_QWORD *)this + 30) = 0LL;
  }
  if ( v10 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x16u,
      (__int64)&WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
      v10);
  }
LABEL_52:
  if ( v53 )
    ((void (__fastcall *)(struct IUnknown *))v53->lpVtbl->Release)(v53);
  if ( v52 )
    ((void (__fastcall *)(struct IPartsList *))v52->lpVtbl->Release)(v52);
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  if ( v51 )
    ((void (__fastcall *)(struct IUnknown *))v51->lpVtbl->Release)(v51);
  return (unsigned int)v10;
}
