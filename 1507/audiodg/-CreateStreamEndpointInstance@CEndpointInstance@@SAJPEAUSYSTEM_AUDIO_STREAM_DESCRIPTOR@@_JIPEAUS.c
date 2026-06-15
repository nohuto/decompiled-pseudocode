/*
 * XREFs of ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140003FB0
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000C250 (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM.c)
 * Callees:
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x1400030B4 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140015420 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x140015D40 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_S @ 0x14002749C (WPP_SF_S.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x140032F48 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointInstance::CreateStreamEndpointInstance(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        __int64 a2,
        unsigned int a3,
        struct SYSTEM_AUDIO_STREAM *a4,
        struct CEndpointInstance **a5)
{
  __int64 v7; // r8
  struct IUnknown *v9; // rdi
  struct HandleSendReceiveServer *v10; // rsi
  struct tWAVEFORMATEX *v11; // r15
  BOOL v12; // ebx
  unsigned int nBlockAlign; // ecx
  DWORD nAvgBytesPerSec; // eax
  int v15; // eax
  double v16; // xmm3_8
  unsigned int v17; // eax
  __int64 v18; // rcx
  int started; // eax
  int v20; // r14d
  unsigned int v21; // r8d
  const unsigned __int16 *v22; // r9
  unsigned int v23; // r14d
  int v24; // eax
  struct IUnknown **v25; // rax
  struct IUnknown **v26; // rbx
  void *v27; // rcx
  __int64 v29; // rcx
  struct tWAVEFORMATEX *v30; // rsi
  GUID *v31; // rcx
  struct HandleSendReceiveServer *v32; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-98h]
  struct IUnknown *v34; // [rsp+70h] [rbp-90h] BYREF
  CCrossProcessBaseServerEndpoint *v35; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h]
  LPCWSTR v37; // [rsp+88h] [rbp-78h]
  LPCWSTR v38; // [rsp+90h] [rbp-70h]
  GUID *v39; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v40; // [rsp+A0h] [rbp-60h]
  struct tWAVEFORMATEX *v41; // [rsp+A8h] [rbp-58h]
  struct CEndpointInstance **v42; // [rsp+B0h] [rbp-50h]
  GUID v43; // [rsp+C0h] [rbp-40h] BYREF
  GUID v44; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v45; // [rsp+E0h] [rbp-20h]
  wchar_t v46[56]; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t Buffer[64]; // [rsp+160h] [rbp+60h] BYREF

  v45 = -2LL;
  v39 = (GUID *)a4;
  v33 = a3;
  v7 = a2;
  v42 = a5;
  v9 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v10 = 0LL;
  v32 = 0LL;
  v41 = (struct tWAVEFORMATEX *)*((_QWORD *)a1 + 9);
  v11 = v41;
  v12 = *(_DWORD *)a1 != 0;
  nBlockAlign = v41->nBlockAlign;
  nAvgBytesPerSec = v41->nAvgBytesPerSec;
  if ( nBlockAlign == 4 )
    v15 = nAvgBytesPerSec >> 2;
  else
    v15 = nAvgBytesPerSec / nBlockAlign;
  v16 = (double)v15;
  v17 = a3 + (int)((double)(int)a2 * (double)v15 / 10000000.0 + 0.5);
  v18 = (unsigned int)(int)((double)(int)*((_QWORD *)a1 + 4) * v16 / 10000000.0 + 0.5);
  if ( v17 > (unsigned int)v18 )
    v18 = v17;
  v36 = v18;
  v38 = 0LL;
  v37 = 0LL;
  v40 = 0LL;
  if ( *((_DWORD *)a1 + 2) )
  {
    v20 = StringCbPrintfW(Buffer, 0x74uLL, L"Global\\SYSTEM_AUDIO_STREAM_MAPPING_%I64X", *((_QWORD *)a1 + 3));
    if ( v20 < 0 )
      goto LABEL_47;
    v20 = StringCbPrintfW(v46, 0x70uLL, L"Global\\SYSTEM_AUDIO_STREAM_EVENT_%I64X", *((_QWORD *)a1 + 3));
    if ( v20 < 0 )
      goto LABEL_47;
    v38 = Buffer;
    v37 = v46;
    v40 = (unsigned __int16 *)*((_QWORD *)a1 + 2);
  }
  if ( (*((_DWORD *)a1 + 20) & 0x40000) == 0 )
    goto LABEL_12;
  started = CEndpointInstance::StartALPCHandleServer(a1, &v32);
  v20 = started;
  if ( started >= 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        11LL,
        &WPP_ffe90e00dae7115ac53e8b1f73fce6e5_Traceguids,
        *((_QWORD *)a1 + 11));
      v10 = v32;
    }
    else
    {
      v10 = v32;
    }
LABEL_12:
    if ( !v12 )
    {
      v43 = *(GUID *)*((_QWORD *)a1 + 7);
      v44 = GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561;
      v20 = privateCreateCrossProcessEndpoint(&v44, &v43, v7, &v34);
      v9 = v34;
      if ( v20 >= 0 )
      {
        v20 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CCrossProcessBaseServerEndpoint **))v34->lpVtbl->QueryInterface)(
                v34,
                &GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054,
                &v35);
        if ( v20 >= 0 )
        {
          v21 = *((_DWORD *)a1 + 20);
          LODWORD(v32) = v21;
          v22 = (const unsigned __int16 *)*((_QWORD *)a1 + 11);
          v39 = (GUID *)v22;
          v23 = v36 * v11->nBlockAlign;
          v41 = *(struct tWAVEFORMATEX **)(*(_QWORD *)v35 + 24LL);
          v24 = v41 == (struct tWAVEFORMATEX *)CCrossProcessBaseServerEndpoint::Initialize
              ? CCrossProcessBaseServerEndpoint::Initialize(
                  v35,
                  v11,
                  v23,
                  v33,
                  v40,
                  v38,
                  v37,
                  v22,
                  v10,
                  v21,
                  (unsigned __int64 *)a4 + 3,
                  (unsigned __int64 *)a4 + 4)
              : ((__int64 (__fastcall *)(CCrossProcessBaseServerEndpoint *, struct tWAVEFORMATEX *, _QWORD, _QWORD, unsigned __int16 *, LPCWSTR, LPCWSTR, GUID *, struct HandleSendReceiveServer *, _DWORD, char *, char *))v41)(
                  v35,
                  v11,
                  v23,
                  v33,
                  v40,
                  v38,
                  v37,
                  v39,
                  v10,
                  (_DWORD)v32,
                  (char *)a4 + 24,
                  (char *)a4 + 32);
          v20 = v24;
          if ( v24 >= 0 )
          {
            *(GUID *)a4 = GUID_cd773740_b187_4974_a1d5_e0ff91372277;
            *((_DWORD *)a4 + 4) = v36 * v11->nBlockAlign;
LABEL_19:
            v25 = (struct IUnknown **)operator new(0x18uLL);
            v26 = v25;
            v39 = (GUID *)v25;
            if ( v25 )
            {
              *v25 = 0LL;
              ATL::AtlComPtrAssign(v25, v9);
              v26[2] = (struct IUnknown *)v10;
              v26[1] = 0LL;
              *v42 = (struct CEndpointInstance *)v26;
              goto LABEL_21;
            }
            v20 = -2147024882;
          }
        }
      }
LABEL_47:
      v29 = *(_QWORD *)&WPP_GLOBAL_Control;
      goto LABEL_48;
    }
    v44 = *(GUID *)*((_QWORD *)a1 + 7);
    v43 = GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6;
    v20 = privateCreateCrossProcessEndpoint(&v43, &v44, v7, &v34);
    v9 = v34;
    if ( v20 < 0 )
      goto LABEL_47;
    v20 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CCrossProcessBaseServerEndpoint **))v34->lpVtbl->QueryInterface)(
            v34,
            &GUID_ac67aa4b_5f51_4bcb_9b5d_c71155af8054,
            &v35);
    if ( v20 < 0 )
      goto LABEL_47;
    v30 = v41;
    v20 = (*(__int64 (__fastcall **)(CCrossProcessBaseServerEndpoint *, struct tWAVEFORMATEX *, _QWORD, _QWORD, unsigned __int16 *, LPCWSTR, LPCWSTR, _QWORD, struct HandleSendReceiveServer *, _DWORD, char *, char *))(*(_QWORD *)v35 + 24LL))(
            v35,
            v41,
            (unsigned int)v36 * v11->nBlockAlign,
            v33,
            v40,
            v38,
            v37,
            *((_QWORD *)a1 + 11),
            v32,
            *((_DWORD *)a1 + 20),
            (char *)a4 + 24,
            (char *)a4 + 32);
    if ( v20 >= 0 )
    {
      v31 = v39;
      *v39 = GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538;
      v31[1].Data1 = v36 * v30->nBlockAlign;
      v10 = v32;
      goto LABEL_19;
    }
LABEL_37:
    v10 = v32;
    goto LABEL_47;
  }
  v29 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 2u )
    {
      v10 = v32;
LABEL_48:
      if ( (unsigned int *)v29 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v29 + 28) & 0x20000) != 0
        && *(_BYTE *)(v29 + 25) >= 2u )
      {
        WPP_SF_D(*(_QWORD *)(v29 + 16), 12LL, &WPP_ffe90e00dae7115ac53e8b1f73fce6e5_Traceguids, (unsigned int)v20);
      }
      goto LABEL_52;
    }
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      10LL,
      &WPP_ffe90e00dae7115ac53e8b1f73fce6e5_Traceguids,
      (unsigned int)started);
    goto LABEL_37;
  }
  v10 = v32;
LABEL_52:
  if ( v10 )
    (**(void (__fastcall ***)(struct HandleSendReceiveServer *, __int64))v10)(v10, 1LL);
LABEL_21:
  v27 = (void *)*((_QWORD *)a1 + 11);
  if ( v27 )
  {
    CoTaskMemFree(v27);
    *((_QWORD *)a1 + 11) = 0LL;
  }
  if ( v35 )
    (*(void (__fastcall **)(CCrossProcessBaseServerEndpoint *))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v9 )
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  return (unsigned int)v20;
}
