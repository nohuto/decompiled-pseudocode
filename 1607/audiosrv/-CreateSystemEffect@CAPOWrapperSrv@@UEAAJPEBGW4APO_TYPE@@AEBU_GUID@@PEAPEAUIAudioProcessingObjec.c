/*
 * XREFs of ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJPEBGW4APO_TYPE@@AEBU_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x18008B210
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180002144 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800276E8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?Create@CAPOExceptionWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x18008C1C0 (-Create@CAPOExceptionWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 */

__int64 __fastcall CAPOWrapperSrv::CreateSystemEffect(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  int v6; // edi
  struct IUnknown **v7; // rsi
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  int v11; // [rsp+30h] [rbp-51h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64); // [rsp+38h] [rbp-49h] BYREF
  struct IUnknown *v13; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-11h] BYREF
  __int64 (__fastcall ****v16)(_QWORD, GUID *, __int64); // [rsp+80h] [rbp-1h]
  int v17; // [rsp+88h] [rbp+7h]
  int v18; // [rsp+8Ch] [rbp+Bh]
  int *v19; // [rsp+90h] [rbp+Fh]
  int v20; // [rsp+98h] [rbp+17h]
  int v21; // [rsp+9Ch] [rbp+1Bh]

  v13 = 0LL;
  v12 = 0LL;
  v6 = CAPOExceptionWrapper::Create(a4, 0LL, a2, a3);
  v11 = v6;
  if ( v6 >= 0 )
  {
    v7 = (struct IUnknown **)(a1 + 80);
    v11 = (**v12)(v12, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, a1 + 80);
    v6 = v11;
    if ( v11 >= 0 )
    {
      if ( v13 != *v7 )
        ATL::AtlComQIPtrAssign(&v13, *v7, &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b);
      if ( v13 )
      {
        *a5 = a1 + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 8LL))(a1 + 8);
        v6 = v11;
        if ( v11 >= 0 )
          goto LABEL_12;
      }
      else
      {
        if ( *v7 )
          ATL::AtlComPtrAssign((struct IUnknown **)(a1 + 80), 0LL);
        v6 = -2147467262;
        v11 = -2147467262;
      }
    }
  }
  if ( (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "CAPOWrapperSrv::CreateSystemEffect");
    v18 = 0;
    v21 = 0;
    v16 = &v12;
    v19 = &v11;
    LODWORD(v12) = 53;
    v17 = 4;
    v20 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v8, v9, 5u, &pData);
    v6 = v11;
  }
LABEL_12:
  if ( v13 )
    ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
  return (unsigned int)v6;
}
