/*
 * XREFs of ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18000DD80
 * Callers:
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18000DBC0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 * Callees:
 *     ?SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z @ 0x18000F964 (-SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x18000FA94 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180017B24 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Add@?$CAtlArray@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAA_KPEBG@Z @ 0x1800294B0 (-Add@-$CAtlArray@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTrait.c)
 *     ?Add@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioSessionManager@@@Z @ 0x18002982C (-Add@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@AT.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180050484 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180059DDC (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManagerProvider::GetAudioSessionManagerInternal(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct IUnknown **a3)
{
  struct IUnknown **v3; // r15
  const unsigned __int16 *v4; // r12
  CAudioSessionManagerProvider *v5; // rsi
  __int64 v6; // rbx
  int v7; // r14d
  char v8; // r13
  unsigned int v10; // edi
  unsigned __int64 v11; // rcx
  struct IUnknown *v12; // r9
  CAudioSession *v13; // rcx
  HANDLE ProcessHeap; // rax
  CAudioSessionManager *v15; // rax
  CAudioSessionManager *v16; // rdi
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rdx
  ATL::CAtlException *v19; // rbx
  ATL::CAtlException *v20; // rbx
  CAudioSessionManager *v21; // [rsp+20h] [rbp-78h] BYREF
  CAudioSessionManager *v22; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+30h] [rbp-68h]
  ATL::CAtlException *v24; // [rsp+38h] [rbp-60h] BYREF
  ATL::CAtlException *v25; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-50h] BYREF
  char v27; // [rsp+50h] [rbp-48h]
  char v31; // [rsp+B8h] [rbp+20h]

  v23 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  v31 = 0;
  *a3 = 0LL;
  if ( !a2 )
  {
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerProvider::GetAudioSessionManagerInternal", 0x126u, -2147024809);
    return 2147942487LL;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_b9a93b86104e3ab68bd14cf374b2c987_Traceguids, a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 64);
  v27 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v10 = 0;
  if ( !*((_QWORD *)v5 + 14) )
    goto LABEL_20;
  v11 = 0LL;
  while ( 1 )
  {
    if ( v11 >= *((_QWORD *)v5 + 18) )
      ATL::AtlThrowImpl(-2147024809);
    if ( !(unsigned int)_o__wcsicmp(*(_QWORD *)(*((_QWORD *)v5 + 17) + 8 * v11), v4) )
      break;
    v11 = ++v10;
    if ( (unsigned __int64)v10 >= *((_QWORD *)v5 + 14) )
      goto LABEL_20;
  }
  if ( (unsigned __int64)v10 >= *((_QWORD *)v5 + 14) )
    ATL::AtlThrowImpl(-2147024809);
  v12 = *(struct IUnknown **)(*((_QWORD *)v5 + 13) + 8LL * v10);
  *v3 = v12;
  v13 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_b9a93b86104e3ab68bd14cf374b2c987_Traceguids, v12);
LABEL_20:
    v13 = WPP_GLOBAL_Control;
  }
  if ( *v3 )
    goto LABEL_53;
  if ( v13 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v13 + 28) & 0x40) != 0 && *((_BYTE *)v13 + 25) >= 4u )
    WPP_SF_(*((_QWORD *)v13 + 2), 15LL, &WPP_b9a93b86104e3ab68bd14cf374b2c987_Traceguids);
  ProcessHeap = GetProcessHeap();
  v15 = (CAudioSessionManager *)HeapAlloc(ProcessHeap, 0, 0x108uLL);
  v22 = v15;
  if ( v15 )
    v16 = CAudioSessionManager::CAudioSessionManager(v15);
  else
    v16 = 0LL;
  v22 = v16;
  v21 = v16;
  if ( !v16 )
  {
    v7 = -2147024882;
    goto LABEL_56;
  }
  v7 = CAudioSessionManager::SetEndpointId(v16, v4);
  if ( v7 < 0 )
  {
LABEL_43:
    if ( v16 )
    {
      if ( v8 && *((_QWORD *)v5 + 14) )
      {
        v17 = (_QWORD *)((char *)v5 + 104);
        v18 = *((_QWORD *)v5 + 14);
        if ( !v18 )
          ATL::AtlThrowImpl(-2147024809);
        while ( *(CAudioSessionManager **)(*v17 + 8 * v6) != v16 )
        {
          if ( ++v6 >= v18 )
            goto LABEL_52;
        }
        ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(v17, v6);
      }
LABEL_52:
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v16 + 1) + 24LL))((__int64)v16 + 8, 1LL);
    }
    goto LABEL_56;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_b9a93b86104e3ab68bd14cf374b2c987_Traceguids, v16);
  }
  try
  {
    ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::Add((char *)v5 + 104, &v21);
  }
  catch ( ATL::CAtlException *v24 )
  {
    v19 = v24;
    if ( *(_DWORD *)v24 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v21) = *(_DWORD *)v19;
    v7 = (int)v21;
    if ( (int)v21 < 0 )
    {
LABEL_42:
      v6 = 0LL;
      v5 = this;
      v8 = v31;
      v16 = v22;
      goto LABEL_43;
    }
    v5 = this;
    v3 = a3;
    v4 = a2;
    v16 = v22;
  }
  v31 = 1;
  v7 = 0;
  try
  {
    ATL::CAtlArray<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::Add(
      (char *)v5 + 136,
      v4);
  }
  catch ( ATL::CAtlException *v25 )
  {
    v20 = v25;
    if ( *(_DWORD *)v25 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v21) = *(_DWORD *)v20;
    v7 = (int)v21;
    if ( (int)v21 >= 0 )
    {
      v3 = a3;
      v16 = v22;
      goto LABEL_41;
    }
    goto LABEL_42;
  }
LABEL_41:
  *v3 = (struct IUnknown *)v16;
LABEL_53:
  if ( HasTooManyReferences(*v3 + 1) )
    v7 = -2147024882;
  else
    ((void (__fastcall *)(struct IUnknown *))(*v3)->lpVtbl->AddRef)(*v3);
LABEL_56:
  LeaveCriticalSection(lpCriticalSection);
  v27 = 0;
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerProvider::GetAudioSessionManagerInternal", 0x176u, v7);
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
  return (unsigned int)v7;
}
