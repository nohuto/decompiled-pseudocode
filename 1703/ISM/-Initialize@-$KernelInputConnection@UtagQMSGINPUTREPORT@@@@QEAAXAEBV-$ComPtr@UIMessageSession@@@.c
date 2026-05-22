/*
 * XREFs of ?Initialize@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUtagQMSGINPUTREPORT@@@Z@std@@@Z @ 0x18006A564
 * Callers:
 *     ?RuntimeClassInitialize@InputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x1800686A0 (-RuntimeClassInitialize@InputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800117DC (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??I?$unique_com_token@UIMessageSession@@I$$A6AXPEAU1@I@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX0I@Z$0A@@wil@@QEAAPEAIXZ @ 0x180017EB8 (--I-$unique_com_token@UIMessageSession@@I$$A6AXPEAU1@I@Z$1-IMessageSessionCloseEndpointFunction@.c)
 *     ?associate@?$unique_com_token@UIMessageSession@@I$$A6AXPEAU1@I@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX0I@Z$0A@@wil@@QEAAXPEAUIMessageSession@@@Z @ 0x180017F44 (-associate@-$unique_com_token@UIMessageSession@@I$$A6AXPEAU1@I@Z$1-IMessageSessionCloseEndpointF.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall KernelInputConnection<tagQMSGINPUTREPORT>::Initialize(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rbx
  _BYTE *v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, _BYTE *); // r8
  _BYTE *v10; // rax
  _BYTE *v11; // r8
  _BYTE *v12; // rdx
  _DWORD *v13; // r9
  __int64 v14; // rdx
  _DWORD *v15; // r8
  _BYTE *v16; // rdx
  _BYTE *v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rbx
  _DWORD *v26; // rax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _BYTE v32[56]; // [rsp+48h] [rbp-69h] BYREF
  _BYTE *v33; // [rsp+80h] [rbp-31h]
  _BYTE v34[56]; // [rsp+88h] [rbp-29h] BYREF
  _BYTE *v35; // [rsp+C0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v7 = a1 + 8;
  v8 = 0LL;
  v33 = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a4 + 56);
  if ( v9 )
  {
    v8 = (_BYTE *)(**v9)(*(_QWORD *)(a4 + 56), v32);
    v33 = v8;
  }
  if ( v8 != v32 && *((_DWORD **)v7 + 7) != v7 )
  {
    v10 = v8;
    v8 = (_BYTE *)*((_QWORD *)v7 + 7);
    v33 = v8;
    *((_QWORD *)v7 + 7) = v10;
    goto LABEL_25;
  }
  v11 = 0LL;
  v35 = 0LL;
  if ( v8 )
  {
    if ( v8 == v32 )
    {
      v11 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *, _QWORD))(*(_QWORD *)v8 + 8LL))(v8, v34, 0LL);
      v35 = v11;
      v8 = v33;
      if ( !v33 )
        goto LABEL_12;
      v12 = v32;
      LOBYTE(v12) = v33 != v32;
      (*(void (__fastcall **)(_BYTE *, _BYTE *, _BYTE *))(*(_QWORD *)v33 + 32LL))(v33, v12, v11);
      v11 = v35;
    }
    else
    {
      v11 = v8;
      v35 = v8;
    }
    v8 = 0LL;
    v33 = 0LL;
  }
LABEL_12:
  v13 = (_DWORD *)*((_QWORD *)v7 + 7);
  if ( !v13 )
    goto LABEL_19;
  v8 = (_BYTE *)*((_QWORD *)v7 + 7);
  if ( v13 == v7 )
  {
    v8 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *, _BYTE *))(*(_QWORD *)v13 + 8LL))(v8, v32, v11);
    v33 = v8;
    v15 = (_DWORD *)*((_QWORD *)v7 + 7);
    if ( !v15 )
    {
      v11 = v35;
      goto LABEL_19;
    }
    LOBYTE(v14) = v15 != v7;
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v15 + 32LL))(*((_QWORD *)v7 + 7), v14);
    v8 = v33;
    v11 = v35;
  }
  else
  {
    v33 = (_BYTE *)*((_QWORD *)v7 + 7);
  }
  *((_QWORD *)v7 + 7) = 0LL;
LABEL_19:
  if ( v11 )
  {
    if ( v11 == v34 )
    {
      *((_QWORD *)v7 + 7) = (*(__int64 (__fastcall **)(_BYTE *, _DWORD *))(*(_QWORD *)v11 + 8LL))(v11, v7);
      if ( v35 )
      {
        v16 = v34;
        LOBYTE(v16) = v35 != v34;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v35 + 32LL))(v35, v16);
      }
      v8 = v33;
    }
    else
    {
      *((_QWORD *)v7 + 7) = v11;
    }
  }
LABEL_25:
  if ( v8 )
  {
    v17 = v32;
    LOBYTE(v17) = v8 != v32;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, v17);
  }
  v18 = *a2;
  v19 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, __int64 *))(*(_QWORD *)v18 + 64LL))(
          v18,
          L"Kernel\\MIT\\InputPort",
          a1);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\KernelInputConnection\\KernelInputConnection.h",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  LOBYTE(v21) = 1;
  v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a1 + 48LL))(*a1, v21);
  if ( v22 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\KernelInputConnection\\KernelInputConnection.h",
      (const char *)(unsigned int)v22);
    __debugbreak();
  }
  wil::unique_com_token<IMessageSession,unsigned int,void (IMessageSession *,unsigned int),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned int),0>::associate(
    (_DWORD *)a1 + 2,
    *a2);
  v23 = *a2;
  v24 = *a1;
  v25 = *(_QWORD *)*a2;
  v26 = wil::unique_com_token<IMessageSession,unsigned int,void (IMessageSession *,unsigned int),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned int),0>::operator&(a1 + 1);
  v27 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), __int64 *, __int64, _DWORD *))(v25 + 80))(
          v23,
          KernelInputConnection<tagQMSGINPUTREPORT>::s_OnKernelInputEventStatic,
          a1,
          v24,
          v26);
  if ( v27 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\KernelInputConnection\\KernelInputConnection.h",
      (const char *)(unsigned int)v27);
    __debugbreak();
  }
  v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)*a2 + 112LL))(
          *a2,
          *((unsigned int *)a1 + 4),
          (_DWORD *)a1 + 6);
  if ( v28 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\KernelInputConnection\\KernelInputConnection.h",
      (const char *)(unsigned int)v28);
    __debugbreak();
  }
  v29 = MITCoreMsgKOpenConnectionTo(1LL, a1 + 3);
  if ( v29 < 0 )
    wil::details::in1diag3::_FailFast_NtStatus(
      retaddr,
      (void *)0x45,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\KernelInputConnection\\KernelInputConnection.h",
      (const char *)(unsigned int)v29);
  v31 = *(_QWORD *)(a4 + 56);
  if ( v31 )
  {
    LOBYTE(v30) = v31 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 32LL))(v31, v30);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
}
