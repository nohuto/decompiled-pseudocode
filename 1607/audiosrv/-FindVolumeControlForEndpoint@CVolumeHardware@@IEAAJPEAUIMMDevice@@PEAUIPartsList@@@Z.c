/*
 * XREFs of ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18002636C
 * Callers:
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800265C4 (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??4?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@B@ATL@@QEAAPEAUIMMEndpointInternal@@PEAUIUnknown@@@Z @ 0x180027844 (--4-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qS @ 0x180055818 (WPP_SF_qS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeHardware::FindVolumeControlForEndpoint(
        CVolumeHardware *this,
        struct IMMDevice *a2,
        struct IPartsList *a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  CAudioSession *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  LPVOID pv; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-18h]
  __int64 v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+88h] [rbp+38h] BYREF
  __int64 v16; // [rsp+98h] [rbp+48h] BYREF

  v14 = -2LL;
  v6 = 0LL;
  v16 = 0LL;
  v15 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_2804faa4bc893de444441e4f62789fd8_Traceguids, this);
    v6 = v16;
  }
  if ( a2 )
  {
    v13 = 0LL;
    pv = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a2->lpVtbl->Activate)(
           a2,
           &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
           23LL);
    if ( v7 < 0 )
      goto LABEL_34;
    v7 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
    if ( v7 < 0 )
      goto LABEL_34;
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          34,
          (unsigned int)&WPP_2804faa4bc893de444441e4f62789fd8_Traceguids,
          (_DWORD)this,
          (__int64)pv);
        v8 = WPP_GLOBAL_Control;
      }
      if ( v8 != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v8 + 7) & 0x10000) != 0
        && *((_BYTE *)v8 + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)v8 + 2), 35LL, &WPP_2804faa4bc893de444441e4f62789fd8_Traceguids, this);
      }
    }
    ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_eecca8a7_a629_4dba_9f23_20f6db42d990>::operator=(&v16, a2);
    if ( v16 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 88LL))(v16, &v15);
      if ( v7 < 0 )
        goto LABEL_34;
    }
    v9 = *v13;
    v10 = v15
        ? (*(__int64 (__fastcall **)(__int64 *, struct IPartsList *, GUID *, GUID *, char *))(v9 + 72))(
            v13,
            a3,
            &GUID_35caf6e4_f3b3_4168_bb4b_55e77a461c7e,
            &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
            (char *)this + 200)
        : (*(unsigned __int64 (__fastcall **)(__int64 *, struct IPartsList *, GUID *, char *))(v9 + 32))(
            v13,
            a3,
            &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
            (char *)this + 200);
    v7 = v10;
    if ( v10 < 0 )
      goto LABEL_34;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_2804faa4bc893de444441e4f62789fd8_Traceguids, this);
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, char *))(**((_QWORD **)this + 25) + 104LL))(
           *((_QWORD *)this + 25),
           23LL,
           &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
           (char *)this + 208);
    if ( v7 < 0 )
LABEL_34:
      AudSrvTraceLoggingErrorHelper("CVolumeHardware::FindVolumeControlForEndpoint", 0x48Bu, v7);
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
    v6 = v16;
  }
  else
  {
    v7 = -2147467261;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v7;
}
