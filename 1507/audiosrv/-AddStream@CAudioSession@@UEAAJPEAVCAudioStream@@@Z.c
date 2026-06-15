/*
 * XREFs of ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F940
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180013A50 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180076FF0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x180007648 (-GrowBuffer@-$CAtlArray@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CEleme.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?IsPackagedApp@CProcess@@UEAAHXZ @ 0x180010E80 (-IsPackagedApp@CProcess@@UEAAHXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180017B00 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x18001DE50 (-AddClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001E410 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?GetCommunicationsCategory@CWindowsPolicyManager@@UEAAKXZ @ 0x180021880 (-GetCommunicationsCategory@CWindowsPolicyManager@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::AddStream(CAudioSession *this, struct CAudioStream *a2)
{
  struct CAudioStream *v2; // rsi
  CAudioSession *v3; // rbx
  unsigned __int64 v4; // r14
  struct CAudioStream **v5; // rcx
  unsigned int (__fastcall *v6)(CAudioStream *__hidden); // rdi
  unsigned int (__fastcall *v7)(CWindowsPolicyManager *__hidden); // r14
  unsigned int CommunicationsCategory; // eax
  unsigned int v9; // r14d
  __int64 (__fastcall *v10)(CProcess *__hidden); // r15
  int IsPackagedApp; // eax
  __int64 (__fastcall *v12)(CProcess *__hidden); // r15
  int v13; // eax
  int updated; // r14d
  __int64 (__fastcall *v15)(CAudioSession *); // rdi
  ATL::CAtlException *v17; // rbx
  ATL::CAtlException *v18[12]; // [rsp+38h] [rbp-60h] BYREF

  v2 = a2;
  v3 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      100LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      v3,
      v2);
  }
  try
  {
    v4 = *((_QWORD *)v3 + 13);
    if ( v4 >= *((_QWORD *)v3 + 14)
      && !ATL::CAtlArray<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::GrowBuffer(
            (__int64)v3 + 96,
            v4 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    v5 = (struct CAudioStream **)(*((_QWORD *)v3 + 12) + 8 * v4);
    if ( v5 )
      *v5 = v2;
    ++*((_QWORD *)v3 + 13);
  }
  catch ( ATL::CAtlException *v18 )
  {
    v17 = v18[0];
    if ( *(_DWORD *)v18[0] == -1073741571 )
      _resetstkoflw();
    updated = *(_DWORD *)v17;
    if ( *(int *)v17 < 0 )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
      goto LABEL_30;
    }
    v3 = this;
    v2 = a2;
  }
  v6 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v2 + 64LL);
  if ( v6 == CAudioStream::AddClientReference )
    CAudioStream::AddClientReference(v2);
  else
    v6(v2);
  v7 = *(unsigned int (__fastcall **)(CWindowsPolicyManager *__hidden))(*(_QWORD *)g_PolicyManager + 112LL);
  if ( v7 == CWindowsPolicyManager::GetCommunicationsCategory )
    CommunicationsCategory = CWindowsPolicyManager::GetCommunicationsCategory(g_PolicyManager);
  else
    CommunicationsCategory = v7(g_PolicyManager);
  v9 = CommunicationsCategory;
  v10 = *(__int64 (__fastcall **)(CProcess *__hidden))(**((_QWORD **)v3 + 89) + 88LL);
  if ( v10 == CProcess::IsPackagedApp )
    IsPackagedApp = CProcess::IsPackagedApp(*((CProcess **)v3 + 89));
  else
    IsPackagedApp = v10(*((CProcess **)v3 + 89));
  if ( !IsPackagedApp && *((_DWORD *)v2 + 76) == v9 )
    *((_DWORD *)v3 + 114) = 1;
  if ( g_DuckingManager )
  {
    v12 = *(__int64 (__fastcall **)(CProcess *__hidden))(**((_QWORD **)v3 + 89) + 88LL);
    v13 = v12 == CProcess::IsPackagedApp
        ? CProcess::IsPackagedApp(*((CProcess **)v3 + 89))
        : v12(*((CProcess **)v3 + 89));
    if ( !v13 && *((_DWORD *)v3 + 114) )
      *((_DWORD *)v2 + 76) = v9;
  }
  ++*((_DWORD *)v3 + 22);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      101LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      *((unsigned int *)v3 + 22));
  }
  updated = CAudioStream::UpdateStreamPriority(v2);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 48));
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v3 + 8LL))(v3);
  v18[1] = (ATL::CAtlException *)&CAudioStreamCreate::`vftable';
  v18[2] = v3;
  v18[3] = v2;
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v3 + 472));
  v15 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v3 + 16LL);
  if ( v15 == CAudioSession::Release )
    CAudioSession::Release(v3);
  else
    v15(v3);
LABEL_30:
  if ( updated < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      102LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      (unsigned int)updated);
  }
  return (unsigned int)updated;
}
