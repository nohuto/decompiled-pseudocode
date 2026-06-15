/*
 * XREFs of ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0008_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x14000FC00
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x14000C850 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?IsInputFormatSupported@CAPOWrapperSrv@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x14000F850 (-IsInputFormatSupported@CAPOWrapperSrv@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     _TlgWrite @ 0x140016088 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x140016CD0 (_TlgCreateSz.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x140017070 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140017F40 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     memcpy_0 @ 0x140019602 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::IsAudioFormatSupportedRemote(
        __int64 a1,
        int a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        _QWORD *a5)
{
  struct IAudioMediaType *v5; // rbx
  struct IAudioMediaType *v6; // rdi
  int v10; // eax
  int v11; // esi
  int v12; // eax
  __int64 v13; // rax
  CAPOWrapperSrv *v14; // rcx
  __int64 (__fastcall *v15)(CAPOWrapperSrv *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **); // rax
  struct IAudioMediaType *v16; // rdx
  int IsInputFormatSupported; // eax
  int v18; // r12d
  __int64 (*v19)(void); // rax
  const struct tWAVEFORMATEX *AudioFormat; // rax
  const struct tWAVEFORMATEX *v21; // r14
  __int64 cbSize; // rsi
  void *v23; // rax
  void *v24; // r15
  _QWORD *v25; // r15
  __int64 (__fastcall *v26)(CAudioMediaType *); // rax
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  ULONG (__stdcall *v28)(IAudioMediaType *); // rax
  void *v30; // rcx
  struct IAudioMediaType *v31; // rbx
  struct IAudioMediaTypeVtbl *lpVtbl; // rcx
  struct IAudioMediaType *v33; // rbx
  struct IAudioMediaTypeVtbl *v34; // rcx
  LPCGUID v35; // r8
  LPCGUID v36; // r9
  int v37; // [rsp+38h] [rbp-71h] BYREF
  struct IAudioMediaType *v38; // [rsp+40h] [rbp-69h] BYREF
  struct IAudioMediaType *v39; // [rsp+48h] [rbp-61h] BYREF
  void *Block; // [rsp+50h] [rbp-59h] BYREF
  _QWORD *v41; // [rsp+58h] [rbp-51h]
  int v42; // [rsp+60h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-21h] BYREF
  int *v45; // [rsp+98h] [rbp-11h]
  __int64 v46; // [rsp+A0h] [rbp-9h]
  int *v47; // [rsp+A8h] [rbp-1h]
  __int64 v48; // [rsp+B0h] [rbp+7h]

  v5 = 0LL;
  v6 = 0LL;
  v37 = 0;
  v41 = a5;
  v38 = 0LL;
  v39 = 0LL;
  Block = 0LL;
  if ( a3 )
  {
    v10 = CAudioMediaType::Create(a3, (unsigned int)a3->cbSize + 18, &v38, 0.0);
    v5 = v38;
    v11 = v10;
    v37 = v10;
    if ( v10 < 0 )
      goto LABEL_42;
  }
  if ( a4 )
  {
    v12 = CAudioMediaType::Create(a4, (unsigned int)a4->cbSize + 18, &v39, 0.0);
    v6 = v39;
    v11 = v12;
    v37 = v12;
    if ( v12 < 0 )
    {
LABEL_42:
      if ( (unsigned int)hProvider > 2 )
      {
        TlgCreateSz(&pDesc, "CAPOWrapperSrv::IsAudioFormatSupportedRemote");
        v42 = 209;
        v45 = &v42;
        v47 = &v37;
        v46 = 4LL;
        v48 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_140045E2B, v35, v36, 5u, &pData);
        v11 = v37;
      }
      goto LABEL_18;
    }
  }
  v13 = *(_QWORD *)(a1 + 8);
  v14 = (CAPOWrapperSrv *)(a1 + 8);
  if ( a2 )
  {
    v15 = *(__int64 (__fastcall **)(CAPOWrapperSrv *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(v13 + 64);
    v16 = v5;
  }
  else
  {
    v15 = *(__int64 (__fastcall **)(CAPOWrapperSrv *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(v13 + 56);
    v16 = v5;
    if ( v15 == CAPOWrapperSrv::IsInputFormatSupported )
    {
      IsInputFormatSupported = CAPOWrapperSrv::IsInputFormatSupported(v14, v5, v6, (struct IAudioMediaType **)&Block);
      goto LABEL_8;
    }
  }
  IsInputFormatSupported = v15(v14, v16, v6, (struct IAudioMediaType **)&Block);
LABEL_8:
  v37 = IsInputFormatSupported;
  v11 = IsInputFormatSupported;
  if ( IsInputFormatSupported < 0 )
    goto LABEL_42;
  v18 = IsInputFormatSupported;
  if ( !Block )
    goto LABEL_15;
  v19 = *(__int64 (**)(void))(*(_QWORD *)Block + 40LL);
  if ( (char *)v19 == (char *)CAudioMediaType::GetAudioFormat )
    AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)Block);
  else
    AudioFormat = (const struct tWAVEFORMATEX *)v19();
  v21 = AudioFormat;
  if ( !AudioFormat )
  {
    v11 = -2004287480;
    v37 = -2004287480;
    goto LABEL_42;
  }
  cbSize = AudioFormat->cbSize;
  v23 = CoTaskMemAlloc(cbSize + 18);
  v24 = v23;
  if ( !v23 )
  {
    v11 = -2147024882;
    v37 = -2147024882;
    goto LABEL_42;
  }
  memcpy_0(v23, v21, cbSize + 18);
  v11 = 0;
  *v41 = v24;
LABEL_15:
  if ( v18 )
    v11 = v18;
  v37 = v11;
  if ( v11 < 0 )
    goto LABEL_42;
LABEL_18:
  CoTaskMemFree(0LL);
  v25 = Block;
  if ( Block )
  {
    v26 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)Block + 16LL);
    if ( v26 == CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v25 )
      {
        v30 = (void *)v25[2];
        *v25 = &CAudioMediaType::`vftable';
        operator delete[](v30);
        v25[2] = 0LL;
        operator delete(v25);
      }
      v5 = v38;
      v6 = v39;
    }
    else
    {
      v26((CAudioMediaType *)Block);
    }
  }
  if ( v6 )
  {
    Release = v6->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v6[1], 0xFFFFFFFF) == 1 )
      {
        v31 = v39;
        lpVtbl = v39[2].lpVtbl;
        v39->lpVtbl = (struct IAudioMediaTypeVtbl *)&CAudioMediaType::`vftable';
        operator delete[](lpVtbl);
        v31[2].lpVtbl = 0LL;
        operator delete(v31);
      }
      v5 = v38;
    }
    else
    {
      ((void (__fastcall *)(struct IAudioMediaType *))Release)(v6);
    }
  }
  if ( v5 )
  {
    v28 = v5->lpVtbl->Release;
    if ( (char *)v28 == (char *)CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v5[1], 0xFFFFFFFF) == 1 )
      {
        v33 = v38;
        v34 = v38[2].lpVtbl;
        v38->lpVtbl = (struct IAudioMediaTypeVtbl *)&CAudioMediaType::`vftable';
        operator delete[](v34);
        v33[2].lpVtbl = 0LL;
        operator delete(v33);
      }
    }
    else
    {
      ((void (__fastcall *)(struct IAudioMediaType *))v28)(v5);
    }
  }
  return (unsigned int)v11;
}
