/*
 * XREFs of ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180013AE0
 * Callers:
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800138F0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x1800162C0 (-AddRef@CAudioSessionManager@@UEAAKXZ.c)
 *     ?SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z @ 0x180016658 (-SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x1800167C4 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?Add@?$CAtlArray@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAA_KPEBG@Z @ 0x180039B74 (-Add@-$CAtlArray@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTrait.c)
 *     ?Add@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioSessionManager@@@Z @ 0x180039C7C (-Add@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@AT.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180065DF8 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManagerProvider::GetAudioSessionManagerInternal(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct CAudioSessionManager **a3)
{
  struct CAudioSessionManager **v3; // rdi
  const wchar_t *v4; // r15
  CAudioSessionManagerProvider *v5; // rbx
  __int64 v6; // rsi
  int v7; // r14d
  unsigned int v8; // r13d
  unsigned __int64 v9; // rcx
  struct CAudioSessionManager *v10; // r9
  TraceLoggingHProvider v11; // rcx
  CAudioSessionManager *v12; // rdi
  unsigned int (__fastcall *v13)(CAudioSessionManager *__hidden); // rsi
  CAudioSessionManager *v15; // rax
  CAudioSessionManager *v16; // r13
  ATL::CAtlException *v17; // rbx
  ATL::CAtlException *v18; // rbx
  _QWORD *v19; // rcx
  CAudioSessionManager *v20; // [rsp+20h] [rbp-68h] BYREF
  CAudioSessionManager *v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  ATL::CAtlException *v23; // [rsp+38h] [rbp-50h] BYREF
  ATL::CAtlException *v24; // [rsp+40h] [rbp-48h] BYREF
  char v28; // [rsp+A8h] [rbp+20h]

  v22 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = 0LL;
  v7 = 0;
  v28 = 0;
  *a3 = 0LL;
  if ( a2 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_f5a98effc09751b25bbbf82349451d2d_Traceguids, a2);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 64));
    v8 = 0;
    if ( *((_QWORD *)v5 + 14) )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( v9 >= *((_QWORD *)v5 + 18) )
          ATL::AtlThrowImpl(-2147024809);
        if ( !_wcsicmp(*(const wchar_t **)(*((_QWORD *)v5 + 17) + 8 * v9), v4) )
          break;
        v9 = ++v8;
        if ( (unsigned __int64)v8 >= *((_QWORD *)v5 + 14) )
          goto LABEL_19;
      }
      if ( (unsigned __int64)v8 >= *((_QWORD *)v5 + 14) )
        ATL::AtlThrowImpl(-2147024809);
      v10 = *(struct CAudioSessionManager **)(*((_QWORD *)v5 + 13) + 8LL * v8);
      *v3 = v10;
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
        || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
LABEL_14:
        if ( *v3 )
          goto LABEL_15;
        if ( v11 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)v11 + 28) & 0x40) != 0
          && *((_BYTE *)v11 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v11 + 2), 0x10u, (__int64)&WPP_f5a98effc09751b25bbbf82349451d2d_Traceguids);
        }
        v15 = (CAudioSessionManager *)operator new(0x108uLL);
        v21 = v15;
        if ( v15 )
          v16 = CAudioSessionManager::CAudioSessionManager(v15);
        else
          v16 = 0LL;
        v21 = v16;
        v20 = v16;
        if ( !v16 )
        {
          v7 = -2147024882;
          goto LABEL_17;
        }
        v7 = CAudioSessionManager::SetEndpointId(v16, v4);
        if ( v7 < 0 )
        {
LABEL_48:
          if ( v16 )
          {
            if ( v28 && *((_QWORD *)v5 + 14) )
            {
              v19 = (_QWORD *)((char *)v5 + 104);
              while ( *(CAudioSessionManager **)(*v19 + 8 * v6) != v16 )
              {
                if ( (unsigned __int64)++v6 >= *((_QWORD *)v5 + 14) )
                  goto LABEL_56;
              }
              ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(v19, v6);
            }
LABEL_56:
            (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v16 + 1) + 24LL))((__int64)v16 + 8, 1LL);
          }
LABEL_17:
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 64));
          if ( v7 >= 0 )
            return (unsigned int)v7;
          goto LABEL_58;
        }
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_f5a98effc09751b25bbbf82349451d2d_Traceguids, v16);
        }
        try
        {
          ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::Add(
            (char *)v5 + 104,
            &v20);
        }
        catch ( ATL::CAtlException *v23 )
        {
          v17 = v23;
          if ( *(_DWORD *)v23 == -1073741571 )
            _resetstkoflw();
          LODWORD(v20) = *(_DWORD *)v17;
          v7 = (int)v20;
          if ( (int)v20 < 0 )
          {
LABEL_47:
            v6 = 0LL;
            v5 = this;
            v16 = v21;
            goto LABEL_48;
          }
          v5 = this;
          v3 = a3;
          v4 = a2;
          v16 = v21;
        }
        v28 = 1;
        v7 = 0;
        try
        {
          ATL::CAtlArray<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::Add(
            (char *)v5 + 136,
            v4);
        }
        catch ( ATL::CAtlException *v24 )
        {
          v18 = v24;
          if ( *(_DWORD *)v24 == -1073741571 )
            _resetstkoflw();
          LODWORD(v20) = *(_DWORD *)v18;
          v7 = (int)v20;
          if ( (int)v20 >= 0 )
          {
            v5 = this;
            v3 = a3;
            v16 = v21;
            goto LABEL_33;
          }
          goto LABEL_47;
        }
LABEL_33:
        *v3 = v16;
LABEL_15:
        v12 = *v3;
        v13 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v12 + 8LL);
        if ( v13 == CAudioSessionManager::AddRef )
          CAudioSessionManager::AddRef(v12);
        else
          v13(v12);
        goto LABEL_17;
      }
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_f5a98effc09751b25bbbf82349451d2d_Traceguids, v10);
    }
LABEL_19:
    v11 = WPP_GLOBAL_Control;
    goto LABEL_14;
  }
  v7 = -2147024809;
LABEL_58:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18LL,
      &WPP_f5a98effc09751b25bbbf82349451d2d_Traceguids,
      (unsigned int)v7);
  }
  return (unsigned int)v7;
}
