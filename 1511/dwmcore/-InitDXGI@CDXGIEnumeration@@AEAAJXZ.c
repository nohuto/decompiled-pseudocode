/*
 * XREFs of ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x18006B890
 * Callers:
 *     ?Create@CDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x18006A534 (-Create@CDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18006A7AC (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B0FEC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800B6448 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 */

__int64 __fastcall CDXGIEnumeration::InitDXGI(CDXGIEnumeration *this)
{
  unsigned int v2; // r15d
  HRESULT v3; // eax
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
  const struct _TlgProvider_t *v23; // rcx
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  unsigned int v25; // [rsp+20h] [rbp-40h]
  __int64 v26; // [rsp+30h] [rbp-30h] BYREF
  struct CDXGIAdapterLimited *v27; // [rsp+38h] [rbp-28h] BYREF
  __int64 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+48h] [rbp-18h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h] BYREF
  __int64 v31; // [rsp+58h] [rbp-8h] BYREF
  int v32; // [rsp+A8h] [rbp+48h] BYREF
  void *ppFactory; // [rsp+B0h] [rbp+50h] BYREF
  struct IDXGIAdapter *v34; // [rsp+B8h] [rbp+58h] BYREF

  ppFactory = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v2 = 0;
  v31 = 0LL;
  v27 = 0LL;
  v34 = 0LL;
  v26 = 0LL;
  v3 = CreateDXGIFactory1(&GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &ppFactory);
  v32 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v25 = 288;
    goto LABEL_68;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
         &v28);
  v32 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v25 = 294;
    goto LABEL_68;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
         &v29);
  v32 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v25 = 297;
    goto LABEL_68;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_b14887d9_f537_4af5_b379_7d33031be773,
         &v30);
  v32 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v25 = 300;
    goto LABEL_68;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_ea9dbf1a_c88e_4486_854a_98aa0138f30c,
         &v31);
  v32 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v25 = 306;
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
    v25 = 314;
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
    v25 = 321;
LABEL_62:
    if ( v4 >= 0 )
      v4 = -2003304445;
    v32 = v4;
    v22 = v4;
    goto LABEL_69;
  }
  v3 = (*(__int64 (__fastcall **)(void *, HANDLE, char *))(*(_QWORD *)ppFactory + 176LL))(
         ppFactory,
         EventW,
         (char *)this + 104);
  v32 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v25 = 323;
LABEL_68:
    v22 = v3;
LABEL_69:
    MilInstrumentationCheckHR(0x14u, &dword_1801745A8, 1u, v22, v25);
    goto LABEL_34;
  }
LABEL_8:
  while ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 96LL))(ppFactory, v2, &v26) != -2005270526 )
  {
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIAdapter **))v26)(
           v26,
           &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
           &v34);
    v32 = v3;
    v4 = v3;
    if ( v3 < 0 )
    {
      v25 = 332;
      goto LABEL_68;
    }
    v3 = CDXGIAdapterLimited::Create(v34, v2, &v27);
    v32 = v3;
    v4 = v3;
    if ( v3 < 0 )
    {
      v25 = 336;
      goto LABEL_68;
    }
    v7 = *((_DWORD *)this + 22);
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v4 = -2147024362;
      v32 = -2147024362;
LABEL_66:
      MilInstrumentationCheckHR(0x14u, &dword_1801745A8, 1u, v12, 0x152u);
      goto LABEL_34;
    }
    v4 = 0;
    if ( v8 > *((_DWORD *)this + 21) )
    {
      v11 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 64, 8LL, 1LL, &v27);
      v12 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      v32 = v12;
      v4 = v12;
      if ( v12 < 0 )
        goto LABEL_66;
    }
    else
    {
      v9 = v7;
      v10 = *((_QWORD *)this + 8);
      v32 = 0;
      *(_QWORD *)(v10 + 8 * v9) = v27;
      *((_DWORD *)this + 22) = v8;
    }
    if ( v34 )
    {
      ((void (__fastcall *)(struct IDXGIAdapter *))v34->lpVtbl->Release)(v34);
      v34 = 0LL;
    }
    if ( v26 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      v26 = 0LL;
    }
    v27 = 0LL;
    ++v2;
  }
  if ( v2 )
  {
    v13 = v28;
    *((_QWORD *)this + 3) = v28;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = v29;
    *((_QWORD *)this + 4) = v29;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = v30;
    *((_QWORD *)this + 5) = v30;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v16 = v31;
    *((_QWORD *)this + 6) = v31;
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
  v32 = -2003304291;
  MilInstrumentationCheckHR(0x14u, &dword_1801745A8, 1u, -2003304291, 0x15Fu);
LABEL_72:
  TranslateDXGIorD3DErrorInContext((unsigned int)v4, 7LL, &v32);
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v23);
  v4 = v32;
  DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"InitDXGI", L"InitDXGI failed.", v32);
LABEL_35:
  if ( ppFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppFactory + 16LL))(ppFactory);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v34 )
    ((void (__fastcall *)(struct IDXGIAdapter *))v34->lpVtbl->Release)(v34);
  return (unsigned int)v4;
}
