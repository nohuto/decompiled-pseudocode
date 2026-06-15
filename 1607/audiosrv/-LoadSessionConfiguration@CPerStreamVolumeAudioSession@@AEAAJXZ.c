/*
 * XREFs of ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005CECC
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800090E0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z @ 0x180008A60 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x180036D30 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_Sdg @ 0x180058EC0 (WPP_SF_Sdg.c)
 *     WPP_SF_SD @ 0x180059B60 (WPP_SF_SD.c)
 *     ?CopyFrom@?$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z @ 0x18005A8E4 (-CopyFrom@-$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x18005AA00 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?GetCount@?$CComSafeArray@M$03@ATL@@QEBAKI@Z @ 0x18005BE38 (-GetCount@-$CComSafeArray@M$03@ATL@@QEBAKI@Z.c)
 *     ?GetLowerBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x18005C400 (-GetLowerBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     ?GetUpperBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x18005C9B0 (-GetUpperBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     WPP_SF_DD @ 0x18005F9C4 (WPP_SF_DD.c)
 *     WPP_SF_Sg @ 0x18005FBC8 (WPP_SF_Sg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::LoadSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  int v2; // eax
  int v3; // r8d
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  int v7; // edi
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int Count; // ecx
  void *v12; // rax
  int v13; // edi
  __int64 v14; // r15
  LONG v15; // edx
  int LowerBound; // r14d
  LONG v17; // edx
  int v18; // r14d
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  int v22; // edi
  __int64 v24; // [rsp+20h] [rbp-49h]
  LPCRITICAL_SECTION v25; // [rsp+30h] [rbp-39h] BYREF
  char v26; // [rsp+38h] [rbp-31h]
  LPCRITICAL_SECTION v27; // [rsp+40h] [rbp-29h] BYREF
  char v28; // [rsp+48h] [rbp-21h]
  PROPVARIANT v29; // [rsp+50h] [rbp-19h] BYREF
  __int64 v30; // [rsp+58h] [rbp-11h]
  __int64 v31; // [rsp+60h] [rbp-9h]
  PROPVARIANT pvar; // [rsp+68h] [rbp-1h] BYREF
  __int64 v33; // [rsp+70h] [rbp+7h]
  __int64 v34; // [rsp+78h] [rbp+Fh]
  PROPVARIANT v35; // [rsp+80h] [rbp+17h] BYREF
  SAFEARRAY *psa; // [rsp+88h] [rbp+1Fh]
  __int64 v37; // [rsp+90h] [rbp+27h]
  SAFEARRAY *ppsaOut; // [rsp+D0h] [rbp+67h] BYREF

  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v27, (struct _RTL_CRITICAL_SECTION *)((char *)this + 1016));
  v2 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 132) + 40LL))(
         *((_QWORD *)this + 132),
         &PKEY_AudioSession_MasterVolume,
         &v29);
  if ( v2 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x7Eu,
        (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        *((const wchar_t **)this + 107),
        v2);
    }
  }
  else
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v25, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
    if ( (_WORD)v29 == 4 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sg(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          124,
          v3,
          *((_QWORD *)this + 107),
          *(_OWORD *)&_mm_cvtps_pd((__m128)(unsigned int)v30));
      }
      *((_DWORD *)this + 228) = v30;
    }
    else if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x7Du,
        (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        (unsigned __int16)v29);
    }
    if ( v26 )
      ATL::CCritSecLock::Unlock(&v25);
  }
  v4 = *((_QWORD *)this + 132);
  v35 = 0LL;
  psa = 0LL;
  v37 = 0LL;
  if ( !(*(unsigned int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v4 + 40LL))(
          v4,
          &PKEY_AudioSession_ChannelVolume,
          &v35) )
  {
    if ( (_WORD)v35 == 8196 )
    {
      ppsaOut = 0LL;
      v5 = ATL::CComSafeArray<float,4>::CopyFrom(&ppsaOut, psa);
      if ( v5 < 0 )
        ATL::AtlThrowImpl(v5);
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v25, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
      if ( !*((_DWORD *)this + 246)
        || (v7 = *((_DWORD *)this + 246), v7 == (unsigned int)ATL::CComSafeArray<float,4>::GetCount(&ppsaOut, v6)) )
      {
        if ( *((_QWORD *)this + 124) )
          goto LABEL_32;
        Count = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut, v6);
        *((_DWORD *)this + 246) = Count;
        v12 = operator new(saturated_mul(Count, 4uLL));
        *((_QWORD *)this + 124) = v12;
        if ( v12 )
          memset(v12, 0, 4LL * *((unsigned int *)this + 246));
        if ( *((_QWORD *)this + 124) )
        {
LABEL_32:
          v13 = 0;
          if ( *((int *)this + 246) > 0 )
          {
            v14 = 0LL;
            do
            {
              if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                if ( !ppsaOut )
                  ATL::AtlThrowImpl(-2147467259);
                LowerBound = ATL::CComSafeArray<float,4>::GetLowerBound(&ppsaOut, v6);
                if ( v13 < LowerBound || v13 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(&ppsaOut, v15) )
                  ATL::AtlThrowImpl(-2147024809);
                LODWORD(v24) = v13;
                WPP_SF_Sdg(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x7Fu,
                  (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
                  *((const wchar_t **)this + 107),
                  v24,
                  *((float *)ppsaOut->pvData + v13 - LowerBound));
              }
              if ( !ppsaOut )
                ATL::AtlThrowImpl(-2147467259);
              v18 = ATL::CComSafeArray<float,4>::GetLowerBound(&ppsaOut, v6);
              if ( v13 < v18 || v13 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(&ppsaOut, v17) )
                ATL::AtlThrowImpl(-2147024809);
              v6 = *((_QWORD *)this + 124);
              v19 = v13 - v18;
              ++v13;
              *(_DWORD *)(v14 + v6) = *((_DWORD *)ppsaOut->pvData + v19);
              v14 += 4LL;
            }
            while ( v13 < *((_DWORD *)this + 246) );
          }
        }
      }
      else if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
             && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v8 = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut, v6);
        WPP_SF_DD(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v10, v8, v7);
      }
      if ( v26 )
        ATL::CCritSecLock::Unlock(&v25);
      ATL::CComSafeArray<float,4>::Destroy(&ppsaOut);
    }
    else if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x81u,
        (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        (unsigned __int16)v35);
    }
  }
  v20 = *((_QWORD *)this + 132);
  pvar = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v21 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v20 + 40LL))(
          v20,
          &PKEY_AudioSession_Mute,
          &pvar);
  v22 = v21;
  if ( v21 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v24) = v21;
      WPP_SF_SD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x84u,
        (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        *((const wchar_t **)this + 107),
        v24);
    }
    v22 = 0;
  }
  else if ( (_WORD)pvar == 11 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x82u,
        (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        (__int16)v33);
    }
    v22 = CPerStreamVolumeAudioSession::SetMute(this, (_WORD)v33 == 0xFFFF, &EVENTCONTEXT_AUDIOSUBSYSTEM, 1);
  }
  else if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
         && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x83u,
      (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      (unsigned __int16)v29);
  }
  PropVariantClear(&pvar);
  PropVariantClear(&v35);
  PropVariantClear(&v29);
  if ( v22 < 0 )
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::LoadSessionConfiguration", 5224, v22);
  if ( v28 )
    ATL::CCritSecLock::Unlock(&v27);
  return (unsigned int)v22;
}
