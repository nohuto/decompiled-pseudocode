/*
 * XREFs of ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0008_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x1800168F0
 * Callers:
 *     ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180016AE0 (-IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001A7C0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18008BC80 (-IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001AF20 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOWrapperClient::IsAudioFormatSupported(
        __int64 a1,
        __int64 a2,
        CAudioMediaType *a3,
        _QWORD *a4,
        struct IAudioMediaType **a5)
{
  unsigned int v6; // r15d
  __int64 v8; // rdi
  const struct tWAVEFORMATEX *(__fastcall *v9)(CAudioMediaType *__hidden); // rax
  __int64 v10; // r9
  const struct tWAVEFORMATEX *(__fastcall *v11)(CAudioMediaType *__hidden); // rax
  int v12; // eax
  int v13; // ebx
  int v14; // edi
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  int v18; // [rsp+30h] [rbp-71h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-69h] BYREF
  int v20; // [rsp+40h] [rbp-61h] BYREF
  __int64 v21; // [rsp+48h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-31h] BYREF
  int *v24; // [rsp+80h] [rbp-21h]
  __int64 v25; // [rsp+88h] [rbp-19h]
  int *v26; // [rsp+90h] [rbp-11h]
  __int64 v27; // [rsp+98h] [rbp-9h]

  v21 = -2LL;
  v6 = a2;
  v18 = 0;
  pv = 0LL;
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v13 = -2147024809;
    goto LABEL_16;
  }
  v8 = 0LL;
  if ( a3
    && ((v9 = *(const struct tWAVEFORMATEX *(__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)a3 + 40LL),
         v9 != CAudioMediaType::GetAudioFormat)
      ? (v8 = (__int64)v9(a3))
      : (v8 = *((_QWORD *)a3 + 2)),
        !v8) )
  {
    v13 = -2004287480;
    v18 = -2004287480;
  }
  else
  {
    v10 = 0LL;
    if ( a4
      && ((v11 = *(const struct tWAVEFORMATEX *(__fastcall **)(CAudioMediaType *__hidden))(*a4 + 40LL),
           v11 != CAudioMediaType::GetAudioFormat)
        ? (v10 = ((__int64 (__fastcall *)(_QWORD *, __int64, CAudioMediaType *, _QWORD))v11)(a4, a2, a3, 0LL))
        : (v10 = a4[2]),
          !v10) )
    {
      v13 = -2004287480;
      v18 = -2004287480;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, LPVOID *))(**(_QWORD **)(a1 + 32) + 40LL))(
              *(_QWORD *)(a1 + 32),
              v6,
              v8,
              v10,
              &pv);
      v13 = v12;
      v18 = v12;
      if ( v12 >= 0 )
      {
        v14 = v12;
        if ( pv )
        {
          v13 = CAudioMediaType::Create(
                  (const struct tWAVEFORMATEX *)pv,
                  (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                  a5,
                  0.0);
          v18 = v13;
          if ( v13 >= 0 )
          {
            if ( v14 )
              v13 = v14;
            v18 = v13;
            goto LABEL_16;
          }
        }
        else
        {
          v13 = -2004287480;
          v18 = -2004287480;
        }
      }
    }
  }
  if ( (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "CAPOWrapperClient::IsAudioFormatSupported");
    v20 = 275;
    v24 = &v20;
    v25 = 4LL;
    v26 = &v18;
    v27 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v16, v17, 5u, &pData);
    v13 = v18;
  }
LABEL_16:
  CoTaskMemFree(pv);
  pv = 0LL;
  return (unsigned int)v13;
}
