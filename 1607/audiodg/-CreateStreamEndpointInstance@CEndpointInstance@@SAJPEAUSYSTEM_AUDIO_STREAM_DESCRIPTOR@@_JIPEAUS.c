/*
 * XREFs of ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140004DF0
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140010278 (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012AA0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Initialize@CCrossProcessServerOutputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x1400142D0 (-Initialize@CCrossProcessServerOutputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x1400150B4 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x1400158DC (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_DDD @ 0x140026990 (WPP_SF_DDD.c)
 *     WPP_SF_S @ 0x1400269E4 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointInstance::CreateStreamEndpointInstance(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        int a2,
        unsigned int a3,
        struct SYSTEM_AUDIO_STREAM *a4,
        struct CEndpointInstance **a5)
{
  struct IUnknown *v7; // rbx
  struct tWAVEFORMATEX *v8; // rdi
  BOOL v9; // r13d
  unsigned int nBlockAlign; // ecx
  DWORD nAvgBytesPerSec; // eax
  int v12; // eax
  double v13; // xmm3_8
  unsigned int v14; // eax
  __int64 v15; // r8
  int v16; // r12d
  int started; // r14d
  struct HandleSendReceiveServer *v18; // r13
  __int64 v19; // r8
  __int64 (__fastcall *v20)(CCrossProcessServerOutputEndpoint *__hidden, struct tWAVEFORMATEX *, unsigned int, unsigned int, const unsigned __int16 *, const unsigned __int16 *, void *, unsigned int, unsigned __int64 *, unsigned __int64 *); // rax
  int v21; // eax
  GUID v22; // xmm0
  struct HandleSendReceiveServer *v23; // rax
  struct HandleSendReceiveServer *v24; // rdi
  void *v25; // rcx
  _QWORD *v27; // rcx
  CCrossProcessServerOutputEndpoint *v28; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int16 *v29; // [rsp+68h] [rbp-19h]
  __int64 v30; // [rsp+70h] [rbp-11h]
  GUID v31; // [rsp+80h] [rbp-1h] BYREF
  _OWORD v32[4]; // [rsp+90h] [rbp+Fh] BYREF
  struct HandleSendReceiveServer *v33; // [rsp+E0h] [rbp+5Fh] BYREF
  struct IUnknown *v34; // [rsp+E8h] [rbp+67h] BYREF
  unsigned int v35; // [rsp+F0h] [rbp+6Fh]

  v35 = a3;
  v30 = -2LL;
  v7 = 0LL;
  v34 = 0LL;
  v28 = 0LL;
  v33 = 0LL;
  v8 = (struct tWAVEFORMATEX *)*((_QWORD *)a1 + 9);
  v9 = *(_DWORD *)a1 != 0;
  nBlockAlign = v8->nBlockAlign;
  nAvgBytesPerSec = v8->nAvgBytesPerSec;
  if ( nBlockAlign == 4 )
    v12 = nAvgBytesPerSec >> 2;
  else
    v12 = nAvgBytesPerSec / nBlockAlign;
  v13 = (double)v12;
  v14 = a3 + (int)((double)a2 * (double)v12 / 10000000.0 + 0.5);
  v15 = (unsigned int)(int)((double)(int)*((_QWORD *)a1 + 4) * v13 / 10000000.0 + 0.5);
  v16 = (int)((double)(int)*((_QWORD *)a1 + 4) * v13 / 10000000.0 + 0.5);
  if ( *((_DWORD *)a1 + 2) != 1 && v14 > (unsigned int)v15 )
    v16 = v14;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11LL,
      &WPP_42246890b90d314c93745c7295ac7753_Traceguids,
      v14,
      v15,
      v16);
  }
  v29 = (unsigned __int16 *)*((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 20) & 0x40000) != 0 )
  {
    started = CEndpointInstance::StartALPCHandleServer(a1, &v33);
    if ( started < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          12LL,
          &WPP_42246890b90d314c93745c7295ac7753_Traceguids,
          (unsigned int)started);
      }
      AudDGTraceLoggingErrorHelper("CEndpointInstance::CreateStreamEndpointInstance", 0x142u, started);
      goto LABEL_45;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13LL,
        &WPP_42246890b90d314c93745c7295ac7753_Traceguids,
        *((_QWORD *)a1 + 11));
    }
  }
  if ( v9 )
  {
    v31 = *(GUID *)*((_QWORD *)a1 + 7);
    v32[0] = GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6;
    started = privateCreateCrossProcessEndpoint(v32, &v31, v15, &v34);
    v7 = v34;
    if ( started >= 0 )
    {
      started = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CCrossProcessServerOutputEndpoint **))v34->lpVtbl->QueryInterface)(
                  v34,
                  &GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc,
                  &v28);
      v18 = v33;
      if ( started >= 0 )
      {
        started = (*(__int64 (__fastcall **)(CCrossProcessServerOutputEndpoint *, struct tWAVEFORMATEX *, _QWORD, _QWORD, unsigned __int16 *, _QWORD, struct HandleSendReceiveServer *, _DWORD, char *, char *))(*(_QWORD *)v28 + 24LL))(
                    v28,
                    v8,
                    v16 * (unsigned int)v8->nBlockAlign,
                    v35,
                    v29,
                    *((_QWORD *)a1 + 11),
                    v33,
                    *((_DWORD *)a1 + 20),
                    (char *)a4 + 24,
                    (char *)a4 + 32);
        if ( started >= 0 )
        {
          v22 = GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538;
          goto LABEL_23;
        }
      }
LABEL_44:
      v27 = WPP_GLOBAL_Control;
      goto LABEL_46;
    }
  }
  else
  {
    v32[0] = *(_OWORD *)*((_QWORD *)a1 + 7);
    v31 = GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561;
    started = privateCreateCrossProcessEndpoint(&v31, v32, v15, &v34);
    v7 = v34;
    if ( started >= 0 )
    {
      started = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CCrossProcessServerOutputEndpoint **))v34->lpVtbl->QueryInterface)(
                  v34,
                  &GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc,
                  &v28);
      v18 = v33;
      if ( started >= 0 )
      {
        v19 = v16 * (unsigned int)v8->nBlockAlign;
        v20 = *(__int64 (__fastcall **)(CCrossProcessServerOutputEndpoint *__hidden, struct tWAVEFORMATEX *, unsigned int, unsigned int, const unsigned __int16 *, const unsigned __int16 *, void *, unsigned int, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)v28 + 24LL);
        v21 = v20 == CCrossProcessServerOutputEndpoint::Initialize
            ? CCrossProcessServerOutputEndpoint::Initialize(
                v28,
                v8,
                v19,
                v35,
                v29,
                *((const unsigned __int16 **)a1 + 11),
                v33,
                *((_DWORD *)a1 + 20),
                (unsigned __int64 *)a4 + 3,
                (unsigned __int64 *)a4 + 4)
            : ((__int64 (__fastcall *)(CCrossProcessServerOutputEndpoint *, struct tWAVEFORMATEX *, __int64, _QWORD))v20)(
                v28,
                v8,
                v19,
                v35);
        started = v21;
        if ( v21 >= 0 )
        {
          v22 = GUID_cd773740_b187_4974_a1d5_e0ff91372277;
LABEL_23:
          *(GUID *)a4 = v22;
          *((_DWORD *)a4 + 22) = 0;
          *((_DWORD *)a4 + 4) = v16 * v8->nBlockAlign;
          v23 = (struct HandleSendReceiveServer *)operator new(0x18uLL);
          v24 = v23;
          v33 = v23;
          if ( v23 )
          {
            *(_QWORD *)v23 = 0LL;
            ATL::AtlComPtrAssign((struct IUnknown **)v23, v7);
            *((_QWORD *)v24 + 2) = v18;
            *((_QWORD *)v24 + 1) = 0LL;
            *a5 = v24;
            goto LABEL_25;
          }
          started = -2147024882;
          goto LABEL_44;
        }
      }
      goto LABEL_44;
    }
  }
LABEL_45:
  v27 = WPP_GLOBAL_Control;
  v18 = v33;
LABEL_46:
  if ( v27 != &WPP_GLOBAL_Control && (*((_DWORD *)v27 + 7) & 0x20000) != 0 && *((_BYTE *)v27 + 25) >= 2u )
    WPP_SF_D(v27[2], 14LL, &WPP_42246890b90d314c93745c7295ac7753_Traceguids, (unsigned int)started);
  AudDGTraceLoggingErrorHelper("CEndpointInstance::CreateStreamEndpointInstance", 0x19Du, started);
  if ( v18 )
    (**(void (__fastcall ***)(struct HandleSendReceiveServer *, __int64))v18)(v18, 1LL);
LABEL_25:
  v25 = (void *)*((_QWORD *)a1 + 11);
  if ( v25 )
  {
    CoTaskMemFree(v25);
    *((_QWORD *)a1 + 11) = 0LL;
  }
  if ( v28 )
    (*(void (__fastcall **)(CCrossProcessServerOutputEndpoint *))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v7 )
    ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
  return (unsigned int)started;
}
