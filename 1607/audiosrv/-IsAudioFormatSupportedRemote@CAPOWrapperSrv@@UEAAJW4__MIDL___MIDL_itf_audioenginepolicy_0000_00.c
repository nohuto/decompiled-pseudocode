/*
 * XREFs of ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0008_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x18008B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001AF20 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18006772C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CAPOWrapperSrv::IsAudioFormatSupportedRemote(
        __int64 a1,
        int a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX **a5)
{
  struct IAudioMediaType *v5; // rbx
  struct IAudioMediaType *v6; // rdi
  struct tWAVEFORMATEX *v7; // rsi
  int v11; // eax
  int v12; // r14d
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // r15d
  const struct tWAVEFORMATEX *v18; // rax
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  int v22; // [rsp+30h] [rbp-71h] BYREF
  struct IAudioMediaType *v23; // [rsp+38h] [rbp-69h] BYREF
  __int64 v24; // [rsp+40h] [rbp-61h] BYREF
  struct IAudioMediaType *v25; // [rsp+48h] [rbp-59h] BYREF
  struct tWAVEFORMATEX *v26; // [rsp+50h] [rbp-51h] BYREF
  struct tWAVEFORMATEX **v27; // [rsp+58h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-21h] BYREF
  struct IAudioMediaType **v30; // [rsp+90h] [rbp-11h]
  int v31; // [rsp+98h] [rbp-9h]
  int v32; // [rsp+9Ch] [rbp-5h]
  int *v33; // [rsp+A0h] [rbp-1h]
  int v34; // [rsp+A8h] [rbp+7h]
  int v35; // [rsp+ACh] [rbp+Bh]

  v22 = 0;
  v5 = 0LL;
  v24 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  v27 = a5;
  v26 = 0LL;
  if ( a3 )
  {
    v11 = CAudioMediaType::Create(a3, (unsigned int)a3->cbSize + 18, &v23, 0.0);
    v5 = v23;
    v12 = v11;
    v22 = v11;
    if ( v11 < 0 )
      goto LABEL_17;
  }
  if ( a4 )
  {
    v13 = CAudioMediaType::Create(a4, (unsigned int)a4->cbSize + 18, &v25, 0.0);
    v6 = v25;
    v12 = v13;
    v22 = v13;
    if ( v13 < 0 )
      goto LABEL_17;
  }
  v14 = a1 + 8;
  v15 = *(_QWORD *)(a1 + 8);
  v16 = a2
      ? (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(v15 + 64))(
          v14,
          v5,
          v6,
          &v24)
      : (*(unsigned __int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(v15 + 56))(
          v14,
          v5,
          v6,
          &v24);
  v22 = v16;
  v12 = v16;
  if ( v16 < 0 )
  {
LABEL_17:
    if ( (unsigned int)hProvider > 2 )
    {
      TlgCreateSz(&pDesc, "CAPOWrapperSrv::IsAudioFormatSupportedRemote");
      v32 = 0;
      v35 = 0;
      v30 = &v23;
      v33 = &v22;
      LODWORD(v23) = 209;
      v31 = 4;
      v34 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v19, v20, 5u, &pData);
      v12 = v22;
    }
    goto LABEL_19;
  }
  v17 = v16;
  if ( !v24 )
    goto LABEL_14;
  v18 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 40LL))(v24);
  if ( !v18 )
  {
    v12 = -2004287480;
    v22 = -2004287480;
    goto LABEL_17;
  }
  v22 = CloneWaveFormat(v18, &v26);
  v12 = v22;
  if ( v22 < 0 )
  {
    v7 = v26;
    goto LABEL_17;
  }
  *v27 = v26;
LABEL_14:
  if ( v17 )
    v12 = v17;
  v22 = v12;
  if ( v12 < 0 )
    goto LABEL_17;
LABEL_19:
  CoTaskMemFree(v7);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v6 )
    ((void (__fastcall *)(struct IAudioMediaType *))v6->lpVtbl->Release)(v6);
  if ( v5 )
    ((void (__fastcall *)(struct IAudioMediaType *))v5->lpVtbl->Release)(v5);
  return (unsigned int)v12;
}
