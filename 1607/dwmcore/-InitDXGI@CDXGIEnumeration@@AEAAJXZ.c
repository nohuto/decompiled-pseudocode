/*
 * XREFs of ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800367F8
 * Callers:
 *     ?Create@CDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x1800B6EA8 (-Create@CDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800B2D4C (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800BA398 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIEnumeration::InitDXGI(CDXGIEnumeration *this)
{
  unsigned int v2; // esi
  HRESULT v3; // eax
  int v4; // ebx
  int SystemMetrics; // eax
  __int64 RemoteSessionOcclusionEvent; // rax
  unsigned int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rcx
  HANDLE EventW; // rax
  signed int LastError; // eax
  int v20; // r9d
  signed int v21; // eax
  const struct _TlgProvider_t *v22; // rcx
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  unsigned int v24; // [rsp+20h] [rbp-40h]
  __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  struct CDXGIAdapterLimited *v26; // [rsp+38h] [rbp-28h] BYREF
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h] BYREF
  __int64 v30; // [rsp+58h] [rbp-8h] BYREF
  int v31; // [rsp+88h] [rbp+28h] BYREF
  void *ppFactory; // [rsp+90h] [rbp+30h] BYREF
  struct IDXGIAdapter *v33; // [rsp+98h] [rbp+38h] BYREF

  ppFactory = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v2 = 0;
  v30 = 0LL;
  v26 = 0LL;
  v33 = 0LL;
  v25 = 0LL;
  v3 = CreateDXGIFactory1(&GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &ppFactory);
  v31 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v24 = 308;
    goto LABEL_71;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
         &v27);
  v31 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v24 = 314;
    goto LABEL_71;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
         &v28);
  v31 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v24 = 317;
    goto LABEL_71;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_b14887d9_f537_4af5_b379_7d33031be773,
         &v29);
  v31 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v24 = 320;
    goto LABEL_71;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_ea9dbf1a_c88e_4486_854a_98aa0138f30c,
         &v30);
  v31 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v24 = 326;
    goto LABEL_71;
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
    v24 = 334;
LABEL_55:
    if ( v4 >= 0 )
      v4 = -2003304445;
    v31 = v4;
LABEL_58:
    v20 = v4;
    goto LABEL_72;
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
    v24 = 341;
    goto LABEL_55;
  }
  v3 = (*(__int64 (__fastcall **)(void *, HANDLE, char *))(*(_QWORD *)ppFactory + 176LL))(
         ppFactory,
         EventW,
         (char *)this + 104);
  v31 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v24 = 343;
LABEL_71:
    v20 = v3;
LABEL_72:
    MilInstrumentationCheckHR(0x14u, &dword_1801AD918, 1u, v20, v24);
    goto LABEL_34;
  }
LABEL_8:
  while ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 96LL))(ppFactory, v2, &v25) != -2005270526 )
  {
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIAdapter **))v25)(
           v25,
           &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
           &v33);
    v31 = v3;
    v4 = v3;
    if ( v3 < 0 )
    {
      v24 = 352;
      goto LABEL_71;
    }
    v3 = CDXGIAdapterLimited::Create(v33, v2, &v26);
    v31 = v3;
    v4 = v3;
    if ( v3 < 0 )
    {
      v24 = 356;
      goto LABEL_71;
    }
    v7 = *((_DWORD *)this + 22);
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v4 = 0;
      if ( v8 <= *((_DWORD *)this + 21) )
      {
        v9 = v7;
        v10 = *((_QWORD *)this + 8);
        v31 = 0;
        *(_QWORD *)(v10 + 8 * v9) = v26;
        *((_DWORD *)this + 22) = v8;
        goto LABEL_14;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 64, 8LL, 1LL, &v26);
      v4 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
    }
    v31 = v4;
    if ( v4 < 0 )
    {
      v24 = 358;
      goto LABEL_58;
    }
LABEL_14:
    if ( v33 )
    {
      ((void (__fastcall *)(struct IDXGIAdapter *))v33->lpVtbl->Release)(v33);
      v33 = 0LL;
    }
    if ( v25 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      v25 = 0LL;
    }
    v26 = 0LL;
    ++v2;
  }
  if ( !v2 )
  {
    v4 = -2003304291;
    v31 = -2003304291;
    MilInstrumentationCheckHR(0x14u, &dword_1801AD918, 1u, -2003304291, 0x173u);
LABEL_65:
    TranslateDXGIorD3DErrorInContext((unsigned int)v4, 6LL, &v31);
    Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v22);
    v4 = v31;
    DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"InitDXGI", L"InitDXGI failed.", v31);
    goto LABEL_35;
  }
  v12 = v27;
  *((_QWORD *)this + 3) = v27;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = v28;
  *((_QWORD *)this + 4) = v28;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = v29;
  *((_QWORD *)this + 5) = v29;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = v30;
  *((_QWORD *)this + 6) = v30;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = ppFactory;
  *((_QWORD *)this + 2) = ppFactory;
  if ( v16 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 8LL))(v16);
LABEL_34:
  if ( v4 < 0 )
    goto LABEL_65;
LABEL_35:
  if ( ppFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppFactory + 16LL))(ppFactory);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v33 )
    ((void (__fastcall *)(struct IDXGIAdapter *))v33->lpVtbl->Release)(v33);
  return (unsigned int)v4;
}
