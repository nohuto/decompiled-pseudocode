/*
 * XREFs of ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035148
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180013FE0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z @ 0x180013660 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180035B30 (-GetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 *     WPP_SF_Sdg @ 0x1800710E4 (WPP_SF_Sdg.c)
 *     ?CopyFrom@?$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z @ 0x180077328 (-CopyFrom@-$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x180077444 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?GetCount@?$CComSafeArray@M$03@ATL@@QEBAKI@Z @ 0x1800785AC (-GetCount@-$CComSafeArray@M$03@ATL@@QEBAKI@Z.c)
 *     ?GetLowerBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x180078C30 (-GetLowerBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     ?GetUpperBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x180079304 (-GetUpperBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     WPP_SF_DD @ 0x18007C040 (WPP_SF_DD.c)
 *     WPP_SF_Sq @ 0x18007C2E0 (WPP_SF_Sq.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::LoadSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r12
  CAudioSessionStore *v3; // rdi
  int (*v4)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *); // rsi
  int Value; // eax
  CAudioSessionStore *v6; // rdi
  int (*v7)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *); // r14
  int v8; // eax
  CAudioSessionStore *v9; // rdi
  int (*v10)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *); // r14
  int v11; // eax
  int v12; // edi
  int v14; // eax
  int v15; // edi
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int Count; // ecx
  void *v20; // rax
  int v21; // edi
  __int64 v22; // r15
  int LowerBound; // eax
  __int64 v24; // r14
  int v25; // eax
  __int64 v26; // r14
  LPCRITICAL_SECTION v27; // [rsp+30h] [rbp-29h] BYREF
  char v28; // [rsp+38h] [rbp-21h]
  struct tagPROPVARIANT v29; // [rsp+40h] [rbp-19h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+58h] [rbp-1h] BYREF
  struct tagPROPVARIANT v31; // [rsp+70h] [rbp+17h] BYREF
  SAFEARRAY *ppsaOut; // [rsp+C0h] [rbp+67h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 792);
  memset(&v29, 0, sizeof(v29));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 792));
  v3 = (CAudioSessionStore *)*((_QWORD *)this + 104);
  v4 = *(int (**)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v3 + 40LL);
  if ( v4 == CAudioSessionStore::GetValue )
    Value = CAudioSessionStore::GetValue(v3, &PKEY_AudioSession_MasterVolume, &v29);
  else
    Value = ((__int64 (__fastcall *)(_QWORD, const struct _tagpropertykey *, struct tagPROPVARIANT *))v4)(
              *((_QWORD *)this + 104),
              &PKEY_AudioSession_MasterVolume,
              &v29);
  if ( Value )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_SD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        168,
        (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        *((_QWORD *)this + 88),
        Value);
    }
  }
  else
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v27, (struct _RTL_CRITICAL_SECTION *)this + 18);
    if ( v29.vt == 4 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_Sq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          166,
          (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          *((_QWORD *)this + 88),
          *(_OWORD *)&_mm_cvtps_pd((__m128)v29.ulVal));
      }
      *((_DWORD *)this + 190) = v29.lVal;
    }
    else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
           && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xA7u,
        (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        v29.vt);
    }
    if ( v28 )
      ATL::CCritSecLock::Unlock(&v27);
  }
  v6 = (CAudioSessionStore *)*((_QWORD *)this + 104);
  memset(&v31, 0, sizeof(v31));
  v7 = *(int (**)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v6 + 40LL);
  if ( v7 == CAudioSessionStore::GetValue )
    v8 = CAudioSessionStore::GetValue(v6, &PKEY_AudioSession_ChannelVolume, &v31);
  else
    v8 = ((__int64 (__fastcall *)(CAudioSessionStore *, const struct _tagpropertykey *, struct tagPROPVARIANT *))v7)(
           v6,
           &PKEY_AudioSession_ChannelVolume,
           &v31);
  if ( !v8 )
  {
    if ( v31.vt == 8196 )
    {
      ppsaOut = 0LL;
      v14 = ATL::CComSafeArray<float,4>::CopyFrom(&ppsaOut, v31.parray);
      if ( v14 < 0 )
        ATL::AtlThrowImpl(v14);
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v27, (struct _RTL_CRITICAL_SECTION *)this + 18);
      if ( !*((_DWORD *)this + 193)
        || (v15 = *((_DWORD *)this + 193), v15 == (unsigned int)ATL::CComSafeArray<float,4>::GetCount(&ppsaOut)) )
      {
        if ( *((_QWORD *)this + 97) )
          goto LABEL_55;
        Count = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut);
        *((_DWORD *)this + 193) = Count;
        v20 = operator new(saturated_mul(Count, 4uLL));
        *((_QWORD *)this + 97) = v20;
        if ( v20 )
          memset_0(v20, 0, 4LL * *((unsigned int *)this + 193));
        if ( *((_QWORD *)this + 97) )
        {
LABEL_55:
          v21 = 0;
          if ( *((int *)this + 193) > 0 )
          {
            v22 = 0LL;
            do
            {
              if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
                && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
              {
                if ( !ppsaOut )
                  ATL::AtlThrowImpl(-2147467259);
                LowerBound = ATL::CComSafeArray<float,4>::GetLowerBound(&ppsaOut);
                v24 = LowerBound;
                if ( v21 < LowerBound || v21 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(&ppsaOut) )
                  ATL::AtlThrowImpl(-2147024809);
                WPP_SF_Sdg(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                  169,
                  (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
                  *((_QWORD *)this + 88),
                  v21,
                  *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)ppsaOut->pvData + v22 - v24)));
              }
              if ( !ppsaOut )
                ATL::AtlThrowImpl(-2147467259);
              v25 = ATL::CComSafeArray<float,4>::GetLowerBound(&ppsaOut);
              v26 = v25;
              if ( v21 < v25 || v21 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(&ppsaOut) )
                ATL::AtlThrowImpl(-2147024809);
              ++v21;
              *(_DWORD *)(*((_QWORD *)this + 97) + 4 * v22) = *((_DWORD *)ppsaOut->pvData + v22 - v26);
              ++v22;
            }
            while ( v21 < *((_DWORD *)this + 193) );
          }
        }
      }
      else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
             && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        v16 = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut);
        WPP_SF_DD(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), v17, v18, v16, v15);
      }
      if ( v28 )
        ATL::CCritSecLock::Unlock(&v27);
      ATL::CComSafeArray<float,4>::Destroy(&ppsaOut);
    }
    else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
           && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xABu,
        (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        v31.vt);
    }
  }
  v9 = (CAudioSessionStore *)*((_QWORD *)this + 104);
  memset(&pvar, 0, sizeof(pvar));
  v10 = *(int (**)(CAudioSessionStore *__hidden, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v9 + 40LL);
  if ( v10 == CAudioSessionStore::GetValue )
    v11 = CAudioSessionStore::GetValue(v9, &PKEY_AudioSession_Mute, &pvar);
  else
    v11 = ((__int64 (__fastcall *)(CAudioSessionStore *, const struct _tagpropertykey *, struct tagPROPVARIANT *))v10)(
            v9,
            &PKEY_AudioSession_Mute,
            &pvar);
  v12 = v11;
  if ( v11 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_SD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        174,
        (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        *((_QWORD *)this + 88),
        v11);
    }
    v12 = 0;
  }
  else if ( pvar.vt == 11 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xACu,
        (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        pvar.iVal);
    }
    v12 = CPerStreamVolumeAudioSession::SetMute(
            this,
            pvar.iVal == 0xFFFF,
            (struct _GUID *)&EVENTCONTEXT_AUDIOSUBSYSTEM,
            1);
  }
  else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
         && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xADu,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      v29.vt);
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  PropVariantClear((PROPVARIANT *)&v31);
  PropVariantClear((PROPVARIANT *)&v29);
  LeaveCriticalSection(v1);
  if ( v12 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xAFu,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      v12);
  }
  return (unsigned int)v12;
}
