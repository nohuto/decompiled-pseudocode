/*
 * XREFs of ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180006150
 * Callers:
 *     ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180004BA0 (-OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_ @ 0x18000537C (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     WPP_SF_dd @ 0x180005574 (WPP_SF_dd.c)
 *     WPP_SF_dddS @ 0x180005660 (WPP_SF_dddS.c)
 *     ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x180007CE8 (-QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z @ 0x1800094F4 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCActiveAudioSession@@V?$CElementTraits@PEAVCActiveAudioSession@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180009640 (-RemoveAt@-$CAtlArray@PEAVCActiveAudioSession@@V-$CElementTraits@PEAVCActiveAudioSession@@@ATL@@.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVCActiveAudioSession@@V?$CElementTraits@PEAVCActiveAudioSession@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x180009B60 (-GrowBuffer@-$CAtlArray@PEAVCActiveAudioSession@@V-$CElementTraits@PEAVCActiveAudioSession@@@ATL.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDuckingManager::OnStateChanged(
        CDuckingManager *this,
        struct IAudioSessionInfo *a2,
        __int64 a3,
        __int32 a4)
{
  struct IAudioSessionInfo *v5; // r15
  CDuckingManager *v6; // rsi
  _UNKNOWN **v7; // rcx
  const wchar_t *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  USHORT v11; // dx
  const GUID *v12; // r8
  const GUID *v13; // r9
  enum _AudioSessionState v14; // r13d
  HANDLE ProcessHeap; // rax
  _QWORD *v16; // rax
  void *v17; // rbx
  wchar_t *v18; // rax
  _QWORD *v19; // rdx
  HANDLE v20; // rax
  _UNKNOWN **v21; // rcx
  int v22; // eax
  unsigned __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rcx
  __int64 v30; // rdx
  _DWORD *v31; // rax
  __int64 v32; // rcx
  const wchar_t *v33; // rax
  void *v34; // rbx
  HANDLE v35; // rax
  int v36; // r14d
  wchar_t *v37; // rdx
  wchar_t *v38; // rdx
  wchar_t *v39; // rdx
  wchar_t *v40; // rdx
  int *v42; // rbx
  int *v43; // rbx
  int *v44; // rbx
  UINT32 cData; // [rsp+20h] [rbp-148h]
  unsigned int v46; // [rsp+40h] [rbp-128h] BYREF
  enum _AudioSessionState v47; // [rsp+48h] [rbp-120h]
  int v48; // [rsp+50h] [rbp-118h]
  int v49; // [rsp+54h] [rbp-114h]
  enum _AudioSessionState v50; // [rsp+58h] [rbp-110h]
  void *i; // [rsp+60h] [rbp-108h]
  wchar_t *String1; // [rsp+68h] [rbp-100h] BYREF
  wchar_t *String2; // [rsp+78h] [rbp-F0h] BYREF
  int v54; // [rsp+80h] [rbp-E8h] BYREF
  CDuckingManager *v55; // [rsp+88h] [rbp-E0h]
  struct IAudioSessionInfo *v56; // [rsp+90h] [rbp-D8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+98h] [rbp-D0h] BYREF
  char v58; // [rsp+A0h] [rbp-C8h]
  __int64 v59; // [rsp+A8h] [rbp-C0h]
  ATL::CAtlException *v60; // [rsp+B0h] [rbp-B8h] BYREF
  ATL::CAtlException *v61; // [rsp+B8h] [rbp-B0h] BYREF
  ATL::CAtlException *v62; // [rsp+C0h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-98h] BYREF
  const char *v64; // [rsp+F0h] [rbp-78h]
  __int64 v65; // [rsp+F8h] [rbp-70h]
  int *v66; // [rsp+100h] [rbp-68h]
  __int64 v67; // [rsp+108h] [rbp-60h]
  int *v68; // [rsp+110h] [rbp-58h]
  __int64 v69; // [rsp+118h] [rbp-50h]

  v59 = -2LL;
  v50 = a4;
  v5 = a2;
  v6 = this;
  v55 = this;
  v56 = a2;
  v47 = a4;
  v46 = 0;
  v7 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v8 = (const wchar_t *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a2 + 64LL))(a2);
    WPP_SF_dddS(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v10, a4, *((_DWORD *)v6 + 73), *((_DWORD *)v6 + 72), v8);
    v7 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)v6 + 74) )
  {
    if ( v7 != &WPP_GLOBAL_Control && (*((_DWORD *)v7 + 7) & 0x8000000) != 0 && *((_BYTE *)v7 + 25) >= 4u )
    {
      v11 = 22;
LABEL_10:
      WPP_SF_((TRACEHANDLE)v7[2], v11, &WPP_f0c26e893d54393037413041046a80ee_Traceguids);
      return v46;
    }
    return v46;
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioSessionInfo *, struct IAudioSessionInfo *, __int64))(*(_QWORD *)v5 + 40LL))(
          v5,
          a2,
          a3) )
  {
    if ( a4 == 1 )
    {
      v14 = (*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v5 + 48LL))(v5);
      v47 = v14;
      ProcessHeap = GetProcessHeap();
      v16 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
      v17 = v16;
      i = v16;
      if ( v16 )
      {
        *v16 = v5;
        *((_DWORD *)v16 + 2) = v14;
      }
      else
      {
        v17 = 0LL;
      }
      i = v17;
      if ( !v17 )
      {
        v46 = -2147024882;
        goto LABEL_39;
      }
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 16);
      v58 = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
      v46 = 0;
      try
      {
        v18 = (wchar_t *)*((_QWORD *)v6 + 8);
        String1 = v18;
        if ( (unsigned __int64)v18 >= *((_QWORD *)v6 + 9)
          && !(unsigned __int8)ATL::CAtlArray<CActiveAudioSession *,ATL::CElementTraits<CActiveAudioSession *>>::GrowBuffer(
                                 (char *)v6 + 56,
                                 (char *)v18 + 1) )
        {
          ATL::AtlThrowImpl(-2147024882);
        }
        v19 = (_QWORD *)(*((_QWORD *)v6 + 7) + 8LL * (_QWORD)String1);
        if ( v19 )
          *v19 = v17;
        ++*((_QWORD *)v6 + 8);
      }
      catch ( ATL::CAtlException *v60 )
      {
        v42 = (int *)v60;
        if ( *(_DWORD *)v60 == -1073741571 )
          _resetstkoflw();
        v46 = *v42;
        v14 = v47;
        v17 = i;
        v6 = v55;
        v5 = v56;
      }
      if ( (v46 & 0x80000000) == 0 )
      {
        if ( v14 )
        {
          v13 = (const GUID *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)v6 + 72);
          v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
          {
            goto LABEL_36;
          }
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x18u,
            &WPP_f0c26e893d54393037413041046a80ee_Traceguids,
            (int)v13);
        }
      }
      else
      {
        v20 = GetProcessHeap();
        HeapFree(v20, 0, v17);
      }
      v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_36:
      if ( !v58 )
        goto LABEL_40;
      LeaveCriticalSection(lpCriticalSection);
LABEL_39:
      v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_40:
      if ( *((_DWORD *)v6 + 73) == 3 || v14 == AudioSessionStateInactive && !*((_DWORD *)v6 + 72) )
      {
LABEL_93:
        if ( (v46 & 0x80000000) != 0 )
        {
          if ( v21 != &WPP_GLOBAL_Control && (*((_DWORD *)v21 + 7) & 0x8000000) != 0 && *((_BYTE *)v21 + 25) >= 2u )
            WPP_SF_D((TRACEHANDLE)v21[2], 0x1Cu, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v46);
          if ( (unsigned int)dword_180034030 > 2 )
          {
            v64 = "__FUNC__";
            v65 = 9LL;
            v54 = 426;
            v66 = &v54;
            v67 = 4LL;
            v68 = (int *)&v46;
            v69 = 4LL;
            TlgWrite((TraceLoggingHProvider)v21, &unk_18002D869, v12, v13, cData, &pData);
          }
        }
        return v46;
      }
      cData = 0;
      v22 = CDuckingManager::QueueDuckingWorkItem((char *)v6 - 16, v5, *((unsigned int *)v6 + 72), 1LL);
      goto LABEL_91;
    }
    if ( a4 )
    {
LABEL_92:
      v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
      goto LABEL_93;
    }
    v49 = 0;
    v48 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 16));
    v23 = 0LL;
    for ( i = 0LL; ; i = (void *)v23 )
    {
      if ( v23 >= *((_QWORD *)v6 + 8) )
      {
        v36 = v49;
        goto LABEL_83;
      }
      String1 = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
      String2 = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
      v46 = 0;
      try
      {
        if ( v23 >= *((_QWORD *)v6 + 8) )
          ATL::AtlThrowImpl(-2147024809);
        v24 = **(_QWORD **)(*((_QWORD *)v6 + 7) + 8 * v23);
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 64LL))(v24);
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
          &String1,
          v25);
      }
      catch ( ATL::CAtlException *v61 )
      {
        v43 = (int *)v61;
        if ( *(_DWORD *)v61 == -1073741571 )
          _resetstkoflw();
        v46 = *v43;
        v48 = 0;
        v23 = (unsigned __int64)i;
        v6 = v55;
        v5 = v56;
        v50 = v47;
      }
      if ( (v46 & 0x80000000) == 0 )
      {
        v46 = 0;
        try
        {
          v26 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v5 + 64LL))(v5);
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
            &String2,
            v26);
        }
        catch ( ATL::CAtlException *v62 )
        {
          v44 = (int *)v62;
          if ( *(_DWORD *)v62 == -1073741571 )
            _resetstkoflw();
          v46 = *v44;
          v48 = 0;
          v23 = (unsigned __int64)i;
          v6 = v55;
          v5 = v56;
          v50 = v47;
        }
        if ( (v46 & 0x80000000) == 0 && !_wcsicmp(String1, String2) )
          break;
      }
      v39 = String2 - 12;
      if ( _InterlockedDecrement((volatile signed __int32 *)String2 - 2) <= 0 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v39 + 8LL))(*(_QWORD *)v39);
      v40 = String1 - 12;
      if ( _InterlockedDecrement((volatile signed __int32 *)String1 - 2) <= 0 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v40 + 8LL))(*(_QWORD *)v40);
      ++v23;
    }
    v48 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v5 + 48LL))(v5);
    v29 = (_QWORD *)((char *)v6 + 56);
    if ( v23 >= *((_QWORD *)v6 + 8) )
      ATL::AtlThrowImpl(-2147024809);
    v30 = *(unsigned int *)(*(_QWORD *)(*v29 + 8 * v23) + 8LL);
    v47 = (int)v30;
    if ( (_DWORD)v30 )
    {
      v28 = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)v6 + 72);
      v31 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
LABEL_63:
        if ( v48
          && !(_DWORD)v30
          && v31 != (_DWORD *)&WPP_GLOBAL_Control
          && (v31[7] & 0x8000000) != 0
          && *((_BYTE *)v31 + 25) >= 4u )
        {
          if ( v23 >= v29[1] )
            ATL::AtlThrowImpl(-2147024809);
          v32 = **(_QWORD **)(*v29 + 8 * v23);
          v33 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v32 + 64LL))(
                                   v32,
                                   v30,
                                   v27,
                                   v28);
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v33);
        }
        if ( v23 >= *((_QWORD *)v6 + 8) )
          ATL::AtlThrowImpl(-2147024809);
        v34 = *(void **)(*((_QWORD *)v6 + 7) + 8 * v23);
        v35 = GetProcessHeap();
        HeapFree(v35, 0, v34);
        ATL::CAtlArray<CActiveAudioSession *,ATL::CElementTraits<CActiveAudioSession *>>::RemoveAt((char *)v6 + 56, v23);
        v36 = 1;
        v37 = String2 - 12;
        if ( _InterlockedDecrement((volatile signed __int32 *)String2 - 2) <= 0 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v37 + 8LL))(*(_QWORD *)v37);
        v38 = String1 - 12;
        if ( _InterlockedDecrement((volatile signed __int32 *)String1 - 2) <= 0 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v38 + 8LL))(*(_QWORD *)v38);
LABEL_83:
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 16));
        v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          cData = v36;
          WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v50);
          v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
        }
        if ( *((_DWORD *)v6 + 73) == 3 || !v48 && !*((_DWORD *)v6 + 72) )
          goto LABEL_93;
        cData = 0;
        v22 = CDuckingManager::QueueDuckingWorkItem((char *)v6 - 16, v5, 0LL, 2LL);
LABEL_91:
        v46 = v22;
        goto LABEL_92;
      }
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v28);
      v29 = (_QWORD *)((char *)v6 + 56);
      v30 = (unsigned int)v47;
    }
    v31 = WPP_GLOBAL_Control;
    goto LABEL_63;
  }
  v7 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v11 = 23;
    goto LABEL_10;
  }
  return v46;
}
