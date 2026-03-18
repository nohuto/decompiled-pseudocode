/*
 * XREFs of ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800962A4
 * Callers:
 *     ?Create@CDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x1800966F4 (-Create@CDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x180060F50 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x18008DD30 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x180096168 (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDXGIEnumeration::InitDXGI(CDXGIEnumeration *this)
{
  unsigned int v2; // r15d
  int v3; // eax
  int v4; // esi
  int SystemMetrics; // eax
  __int64 RemoteSessionOcclusionEvent; // rax
  unsigned int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  void *v17; // rdi
  HANDLE EventW; // rax
  signed int LastError; // eax
  signed int v21; // eax
  int v22; // r9d
  const struct _TlgProvider_t *v23; // rdx
  const struct _TlgProvider_t *v24; // rcx
  DwmCoreAsimov::CDwmEventManager_Private **Manager; // rax
  unsigned int v26; // [rsp+20h] [rbp-40h]
  __int64 v27; // [rsp+30h] [rbp-30h] BYREF
  struct CDXGIAdapterLimited *v28; // [rsp+38h] [rbp-28h] BYREF
  __int64 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+48h] [rbp-18h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h] BYREF
  __int64 v32; // [rsp+58h] [rbp-8h] BYREF
  int v33; // [rsp+A8h] [rbp+48h] BYREF
  void *ppFactory; // [rsp+B0h] [rbp+50h] BYREF
  struct IDXGIAdapter *v35; // [rsp+B8h] [rbp+58h] BYREF

  ppFactory = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v2 = 0;
  v32 = 0LL;
  v28 = 0LL;
  v35 = 0LL;
  v27 = 0LL;
  v3 = CreateDXGIFactory1(&GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &ppFactory);
  v33 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v26 = 288;
    goto LABEL_68;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
         &v29);
  v33 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v26 = 294;
    goto LABEL_68;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
         &v30);
  v33 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v26 = 297;
    goto LABEL_68;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_b14887d9_f537_4af5_b379_7d33031be773,
         &v31);
  v33 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v26 = 300;
    goto LABEL_68;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_ea9dbf1a_c88e_4486_854a_98aa0138f30c,
         &v32);
  v33 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v26 = 306;
    goto LABEL_68;
  }
  SystemMetrics = GetSystemMetrics(4096);
  *((_DWORD *)this + 27) = SystemMetrics != 0;
  if ( SystemMetrics )
  {
    SetLastError(0);
    RemoteSessionOcclusionEvent = DwmGetRemoteSessionOcclusionEvent();
    *((_QWORD *)this + 12) = RemoteSessionOcclusionEvent;
    if ( RemoteSessionOcclusionEvent )
      goto LABEL_8;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v26 = 314;
    goto LABEL_62;
  }
  SetLastError(0);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 12) = EventW;
  if ( !EventW )
  {
    v21 = GetLastError();
    v4 = v21;
    if ( v21 > 0 )
      v4 = (unsigned __int16)v21 | 0x80070000;
    v26 = 321;
LABEL_62:
    if ( v4 >= 0 )
      v4 = -2003304445;
    v33 = v4;
    v22 = v4;
    goto LABEL_69;
  }
  v3 = (*(__int64 (__fastcall **)(void *, HANDLE, char *))(*(_QWORD *)ppFactory + 176LL))(
         ppFactory,
         EventW,
         (char *)this + 104);
  v33 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v26 = 323;
LABEL_68:
    v22 = v3;
LABEL_69:
    MilInstrumentationCheckHR(0x14u, &dword_18016AE4C, 1u, v22, v26);
    goto LABEL_34;
  }
LABEL_8:
  while ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 96LL))(ppFactory, v2, &v27) != -2005270526 )
  {
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIAdapter **))v27)(
           v27,
           &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
           &v35);
    v33 = v3;
    v4 = v3;
    if ( v3 < 0 )
    {
      v26 = 332;
      goto LABEL_68;
    }
    v3 = CDXGIAdapterLimited::Create(v35, v2, &v28);
    v33 = v3;
    v4 = v3;
    if ( v3 < 0 )
    {
      v26 = 336;
      goto LABEL_68;
    }
    v7 = *((_DWORD *)this + 22);
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v4 = -2147024362;
      v33 = -2147024362;
LABEL_66:
      MilInstrumentationCheckHR(0x14u, &dword_18016AE4C, 1u, v12, 0x152u);
      goto LABEL_34;
    }
    v4 = 0;
    if ( v8 > *((_DWORD *)this + 21) )
    {
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8u, 1, &v28);
      v12 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      v33 = v12;
      v4 = v12;
      if ( v12 < 0 )
        goto LABEL_66;
    }
    else
    {
      v9 = v7;
      v10 = *((_QWORD *)this + 8);
      v33 = 0;
      *(_QWORD *)(v10 + 8 * v9) = v28;
      *((_DWORD *)this + 22) = v8;
    }
    if ( v35 )
    {
      ((void (__fastcall *)(struct IDXGIAdapter *))v35->lpVtbl->Release)(v35);
      v35 = 0LL;
    }
    if ( v27 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      v27 = 0LL;
    }
    v28 = 0LL;
    ++v2;
  }
  if ( v2 )
  {
    v13 = v29;
    *((_QWORD *)this + 3) = v29;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = v30;
    *((_QWORD *)this + 4) = v30;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = v31;
    *((_QWORD *)this + 5) = v31;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v16 = v32;
    *((_QWORD *)this + 6) = v32;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v17 = ppFactory;
    *((_QWORD *)this + 2) = ppFactory;
    if ( v17 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 8LL))(v17);
LABEL_34:
    if ( v4 >= 0 )
      goto LABEL_35;
    goto LABEL_72;
  }
  v4 = -2003304291;
  v33 = -2003304291;
  MilInstrumentationCheckHR(0x14u, &dword_18016AE4C, 1u, -2003304291, 0x15Fu);
LABEL_72:
  TranslateDXGIorD3DErrorInContext(v4, 7, &v33);
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v24, v23);
  v4 = v33;
  DwmCoreAsimov::CDwmEventManager::ReportCompositionError(
    (DwmCoreAsimov::CDwmEventManager *)Manager,
    L"InitDXGI",
    L"InitDXGI failed.",
    v33);
LABEL_35:
  if ( ppFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppFactory + 16LL))(ppFactory);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v35 )
    ((void (__fastcall *)(struct IDXGIAdapter *))v35->lpVtbl->Release)(v35);
  return (unsigned int)v4;
}
