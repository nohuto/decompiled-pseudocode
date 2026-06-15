/*
 * XREFs of ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000A810
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140013378 (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Initialize@CCrossProcessServerInputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x1400142A0 (-Initialize@CCrossProcessServerInputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140015D80 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140016648 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_DDD @ 0x140027D98 (WPP_SF_DDD.c)
 *     WPP_SF_S @ 0x140027DEC (WPP_SF_S.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x14003319C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointInstance::CreateStreamEndpointInstance(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        int a2,
        unsigned int a3,
        struct SYSTEM_AUDIO_STREAM *a4,
        struct CEndpointInstance **a5)
{
  struct IUnknown *v9; // rdi
  struct HandleSendReceiveServer *v10; // rbx
  struct tWAVEFORMATEX *v11; // rsi
  BOOL v12; // edx
  unsigned int nBlockAlign; // ecx
  DWORD nAvgBytesPerSec; // eax
  int v15; // eax
  double v16; // xmm3_8
  unsigned int v17; // eax
  __int64 v18; // r8
  int v19; // r12d
  _QWORD *v20; // rcx
  int started; // eax
  int v22; // r14d
  unsigned int v23; // r8d
  const unsigned __int16 *v24; // r9
  unsigned int v25; // r14d
  int v26; // eax
  struct IUnknown **v27; // rax
  struct IUnknown **v28; // rbx
  void *v29; // rcx
  struct tWAVEFORMATEX *v31; // rsi
  GUID *v32; // rcx
  struct HandleSendReceiveServer *v33; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v34; // [rsp+68h] [rbp-98h]
  unsigned int v35; // [rsp+6Ch] [rbp-94h]
  unsigned int v36; // [rsp+70h] [rbp-90h]
  struct IUnknown *v37; // [rsp+78h] [rbp-88h] BYREF
  CCrossProcessServerInputEndpoint *v38; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v39; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v40; // [rsp+90h] [rbp-70h]
  struct tWAVEFORMATEX *v41; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v42; // [rsp+A0h] [rbp-60h]
  GUID *v43; // [rsp+A8h] [rbp-58h]
  struct CEndpointInstance **v44; // [rsp+B0h] [rbp-50h]
  GUID v45; // [rsp+C0h] [rbp-40h] BYREF
  GUID v46; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-20h]
  wchar_t v48[56]; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t Buffer[64]; // [rsp+160h] [rbp+60h] BYREF

  v47 = -2LL;
  v43 = (GUID *)a4;
  v36 = a3;
  v44 = a5;
  v9 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v10 = 0LL;
  v33 = 0LL;
  v41 = (struct tWAVEFORMATEX *)*((_QWORD *)a1 + 10);
  v11 = v41;
  v12 = *(_DWORD *)a1 != 0;
  v34 = v12;
  nBlockAlign = v41->nBlockAlign;
  nAvgBytesPerSec = v41->nAvgBytesPerSec;
  if ( nBlockAlign == 4 )
  {
    v15 = nAvgBytesPerSec >> 2;
  }
  else
  {
    v15 = nAvgBytesPerSec / nBlockAlign;
    v12 = v34;
  }
  v16 = (double)v15;
  v17 = a3 + (int)((double)a2 * (double)v15 / 10000000.0 + 0.5);
  v18 = (unsigned int)(int)((double)(int)*((_QWORD *)a1 + 5) * v16 / 10000000.0 + 0.5);
  v19 = (int)((double)(int)*((_QWORD *)a1 + 5) * v16 / 10000000.0 + 0.5);
  if ( *((_DWORD *)a1 + 3) != 1 && v17 > (unsigned int)v18 )
    v19 = v17;
  v35 = v19;
  v20 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11LL,
      &WPP_cb2dd724c9740f90d85210ba28dcd87c_Traceguids,
      v17,
      v18,
      v19);
    v20 = WPP_GLOBAL_Control;
    v12 = v34;
  }
  v42 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  if ( *((_DWORD *)a1 + 2) )
  {
    v22 = StringCbPrintfW(Buffer, 0x74uLL, L"Global\\SYSTEM_AUDIO_STREAM_MAPPING_%I64X", *((_QWORD *)a1 + 4));
    if ( v22 < 0 )
      goto LABEL_53;
    v22 = StringCbPrintfW(v48, 0x70uLL, L"Global\\SYSTEM_AUDIO_STREAM_EVENT_%I64X", *((_QWORD *)a1 + 4));
    if ( v22 < 0 )
      goto LABEL_53;
    v42 = Buffer;
    v40 = v48;
    v39 = (unsigned __int16 *)*((_QWORD *)a1 + 3);
    v20 = WPP_GLOBAL_Control;
    v12 = v34;
  }
  if ( (*((_DWORD *)a1 + 22) & 0x40000) == 0 )
    goto LABEL_18;
  started = CEndpointInstance::StartALPCHandleServer(a1, &v33);
  v22 = started;
  if ( started >= 0 )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13LL,
        &WPP_cb2dd724c9740f90d85210ba28dcd87c_Traceguids,
        *((_QWORD *)a1 + 12));
      v20 = WPP_GLOBAL_Control;
    }
    v12 = v34;
    v10 = v33;
LABEL_18:
    if ( !v12 )
    {
      v45 = *(GUID *)*((_QWORD *)a1 + 8);
      v46 = GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561;
      v22 = privateCreateCrossProcessEndpoint(&v46, &v45, v18, &v37);
      v9 = v37;
      if ( v22 >= 0 )
      {
        v22 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CCrossProcessServerInputEndpoint **))v37->lpVtbl->QueryInterface)(
                v37,
                &GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054,
                &v38);
        if ( v22 >= 0 )
        {
          v23 = *((_DWORD *)a1 + 22);
          v35 = v23;
          v24 = (const unsigned __int16 *)*((_QWORD *)a1 + 12);
          v43 = (GUID *)v24;
          v25 = v19 * v11->nBlockAlign;
          v41 = *(struct tWAVEFORMATEX **)(*(_QWORD *)v38 + 24LL);
          v26 = v41 == (struct tWAVEFORMATEX *)CCrossProcessServerInputEndpoint::Initialize
              ? CCrossProcessServerInputEndpoint::Initialize(
                  v38,
                  v11,
                  v25,
                  v36,
                  v39,
                  v42,
                  v40,
                  v24,
                  v33,
                  v23,
                  (unsigned __int64 *)a4 + 3,
                  (unsigned __int64 *)a4 + 4)
              : ((__int64 (__fastcall *)(CCrossProcessServerInputEndpoint *, struct tWAVEFORMATEX *, _QWORD, _QWORD, unsigned __int16 *, unsigned __int16 *, unsigned __int16 *, GUID *, struct HandleSendReceiveServer *, unsigned int, char *, char *))v41)(
                  v38,
                  v11,
                  v25,
                  v36,
                  v39,
                  v42,
                  v40,
                  v43,
                  v33,
                  v35,
                  (char *)a4 + 24,
                  (char *)a4 + 32);
          v22 = v26;
          if ( v26 >= 0 )
          {
            *(GUID *)a4 = GUID_cd773740_b187_4974_a1d5_e0ff91372277;
            *((_DWORD *)a4 + 18) = 0;
            *((_DWORD *)a4 + 4) = v19 * v11->nBlockAlign;
LABEL_25:
            v27 = (struct IUnknown **)operator new(0x18uLL);
            v28 = v27;
            v43 = (GUID *)v27;
            if ( v27 )
            {
              *v27 = 0LL;
              ATL::AtlComPtrAssign(v27, v9);
              v28[2] = (struct IUnknown *)v33;
              v28[1] = 0LL;
              *v44 = (struct CEndpointInstance *)v28;
              goto LABEL_27;
            }
            v22 = -2147024882;
            v20 = WPP_GLOBAL_Control;
            v10 = v33;
            goto LABEL_54;
          }
        }
        goto LABEL_52;
      }
LABEL_53:
      v20 = WPP_GLOBAL_Control;
      goto LABEL_54;
    }
    if ( v12 )
    {
      v46 = *(GUID *)*((_QWORD *)a1 + 8);
      v45 = GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6;
      v22 = privateCreateCrossProcessEndpoint(&v45, &v46, v18, &v37);
      v9 = v37;
      if ( v22 >= 0 )
      {
        v22 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CCrossProcessServerInputEndpoint **))v37->lpVtbl->QueryInterface)(
                v37,
                &GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054,
                &v38);
        if ( v22 >= 0 )
        {
          v31 = v41;
          v22 = (*(__int64 (__fastcall **)(CCrossProcessServerInputEndpoint *, struct tWAVEFORMATEX *, _QWORD, _QWORD, unsigned __int16 *, unsigned __int16 *, unsigned __int16 *, _QWORD, struct HandleSendReceiveServer *, _DWORD, char *, char *))(*(_QWORD *)v38 + 24LL))(
                  v38,
                  v41,
                  v19 * (unsigned int)v41->nBlockAlign,
                  v36,
                  v39,
                  v42,
                  v40,
                  *((_QWORD *)a1 + 12),
                  v33,
                  *((_DWORD *)a1 + 22),
                  (char *)a4 + 24,
                  (char *)a4 + 32);
          if ( v22 >= 0 )
          {
            v32 = v43;
            *v43 = GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538;
            *(_DWORD *)v32[4].Data4 = 0;
            v32[1].Data1 = v35 * v31->nBlockAlign;
            goto LABEL_25;
          }
        }
        goto LABEL_52;
      }
      goto LABEL_53;
    }
    v22 = -2147418113;
LABEL_54:
    if ( v20 != &WPP_GLOBAL_Control && (*((_DWORD *)v20 + 7) & 0x20000) != 0 && *((_BYTE *)v20 + 25) >= 2u )
      WPP_SF_D(v20[2], 14LL, &WPP_cb2dd724c9740f90d85210ba28dcd87c_Traceguids, (unsigned int)v22);
    goto LABEL_58;
  }
  v20 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12LL,
        &WPP_cb2dd724c9740f90d85210ba28dcd87c_Traceguids,
        (unsigned int)started);
LABEL_52:
      v10 = v33;
      goto LABEL_53;
    }
    v10 = v33;
    goto LABEL_54;
  }
  v10 = v33;
LABEL_58:
  if ( v10 )
    (**(void (__fastcall ***)(struct HandleSendReceiveServer *, __int64))v10)(v33, 1LL);
LABEL_27:
  v29 = (void *)*((_QWORD *)a1 + 12);
  if ( v29 )
  {
    CoTaskMemFree(v29);
    *((_QWORD *)a1 + 12) = 0LL;
  }
  if ( v38 )
    (*(void (__fastcall **)(CCrossProcessServerInputEndpoint *))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v9 )
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  return (unsigned int)v22;
}
