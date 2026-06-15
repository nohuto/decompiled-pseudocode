/*
 * XREFs of ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N6@Z @ 0x140033D28
 * Callers:
 *     ?GetEffectsList@CAPOExceptionWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1400104B0 (-GetEffectsList@CAPOExceptionWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?IsInputFormatSupported@CAPOExceptionWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140010530 (-IsInputFormatSupported@CAPOExceptionWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?Initialize@CAPOExceptionWrapper@@UEAAJIPEAE@Z @ 0x1400105B0 (-Initialize@CAPOExceptionWrapper@@UEAAJIPEAE@Z.c)
 *     ?NDRelease@CAPOExceptionWrapper@@UEAAKXZ @ 0x140010630 (-NDRelease@CAPOExceptionWrapper@@UEAAKXZ.c)
 *     ?QIInternal@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400108A4 (-QIInternal@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Init@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x140010920 (-Init@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 *     ?APOProcess@CAPOExceptionWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z @ 0x140033C70 (-APOProcess@CAPOExceptionWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z.c)
 *     ?CalcInputFrames@CAPOExceptionWrapper@@UEAAII@Z @ 0x140033EA0 (-CalcInputFrames@CAPOExceptionWrapper@@UEAAII@Z.c)
 *     ?CalcOutputFrames@CAPOExceptionWrapper@@UEAAII@Z @ 0x140033F50 (-CalcOutputFrames@CAPOExceptionWrapper@@UEAAII@Z.c)
 *     ?GetInputChannelCount@CAPOExceptionWrapper@@UEAAJPEAI@Z @ 0x140034070 (-GetInputChannelCount@CAPOExceptionWrapper@@UEAAJPEAI@Z.c)
 *     ?GetLatency@CAPOExceptionWrapper@@UEAAJPEA_J@Z @ 0x1400340F0 (-GetLatency@CAPOExceptionWrapper@@UEAAJPEA_J@Z.c)
 *     ?GetRegistrationProperties@CAPOExceptionWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x140034170 (-GetRegistrationProperties@CAPOExceptionWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?IsOutputFormatSupported@CAPOExceptionWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1400341F0 (-IsOutputFormatSupported@CAPOExceptionWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?LockForProcess@CAPOExceptionWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z @ 0x140034270 (-LockForProcess@CAPOExceptionWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z.c)
 *     ?Reset@CAPOExceptionWrapper@@UEAAJXZ @ 0x140034300 (-Reset@CAPOExceptionWrapper@@UEAAJXZ.c)
 *     ?UnlockForProcess@CAPOExceptionWrapper@@UEAAJXZ @ 0x140034380 (-UnlockForProcess@CAPOExceptionWrapper@@UEAAJXZ.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140003150 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     _TlgWrite @ 0x140016088 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140016124 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x140016B4C (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x140016CD0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall APOTrackAndLogException(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const CHAR *psz,
        char a7,
        char a8)
{
  unsigned __int64 v8; // rdi
  const WCHAR *v9; // rbx
  const struct _TlgProvider_t *v10; // rsi
  const CHAR *v11; // rdx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  __int64 cData; // [rsp+28h] [rbp-A9h]
  LPVOID pv[2]; // [rsp+38h] [rbp-99h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-89h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-69h] BYREF
  __int64 v18; // [rsp+78h] [rbp-59h]
  __int64 v19; // [rsp+80h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+88h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+98h] [rbp-39h] BYREF
  char *v22; // [rsp+A8h] [rbp-29h]
  __int64 v23; // [rsp+B0h] [rbp-21h]
  char *v24; // [rsp+B8h] [rbp-19h]
  __int64 v25; // [rsp+C0h] [rbp-11h]

  pv[1] = (LPVOID)-2LL;
  v8 = a4;
  v9 = a2;
  v10 = g_SysFxUtilTlp;
  pv[0] = 0LL;
  if ( !a2 )
  {
    v9 = L"Unknown";
    if ( (*(int (__fastcall **)(_QWORD, LPVOID *))(MEMORY[0] + 40LL))(0LL, pv) >= 0 )
      v9 = (const WCHAR *)pv[0];
  }
  if ( *(_DWORD *)v10 > 2u && TlgKeywordOn(v10, 0x400000000000uLL) )
  {
    if ( (v8 & 0x80000000) != 0LL || v8 >= 4 )
      v11 = "Unknown";
    else
      v11 = `APOTrackAndLogException'::`2'::strAPO[v8];
    TlgCreateSz(&pDesc, v11);
    v18 = a5;
    v19 = 16LL;
    TlgCreateWsz(&v20, v9);
    TlgCreateSz(&v21, psz);
    v22 = &a7;
    v23 = 4LL;
    v24 = &a8;
    v25 = 4LL;
    TlgWrite(v10, &unk_140045E5A, v12, v13, 8u, &pData);
  }
  TrackSystemEffectBehavior((__int64)v9, v8, 0, 1u, cData);
  CoTaskMemFree(pv[0]);
}
