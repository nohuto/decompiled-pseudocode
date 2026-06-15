/*
 * XREFs of ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001E410
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x18000E858 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F570 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F760 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F940 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x1800266A0 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     GetSAProvider @ 0x18002E018 (GetSAProvider.c)
 *     ?Release@?$CComObject@VCSaProvider@@@ATL@@UEAAKXZ @ 0x18002E1D0 (-Release@-$CComObject@VCSaProvider@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::UpdateStreamPriority(CAudioStream *this)
{
  unsigned int v2; // r8d
  __int64 v3; // r14
  __int64 v4; // rsi
  _QWORD *v5; // r14
  __int64 (__fastcall *v6)(CAudioStream *__hidden); // rsi
  unsigned int v7; // r13d
  _BOOL8 (__fastcall *v8)(CProcess *); // rbx
  BOOL v9; // ebx
  unsigned int v10; // esi
  __int64 (__fastcall *v11)(CWindowsPolicyManager *__hidden, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, unsigned int, int, int, unsigned int *); // r15
  int v12; // edx
  unsigned int v13; // ebx
  int SAProvider; // esi
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64, _QWORD, _QWORD); // rsi
  int updated; // eax
  int v19; // eax
  void (__fastcall *v20)(__int64); // rdi
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF
  int v22; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v23; // [rsp+90h] [rbp+18h]

  v23 = 0LL;
  v2 = *((_DWORD *)this + 49);
  LODWORD(v21) = v2;
  v22 = -1;
  v3 = *((_QWORD *)this + 9);
  v4 = *(_QWORD *)(v3 + 712);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)(v3 + 712));
    v2 = v21;
  }
  v5 = *(_QWORD **)(v3 + 712);
  v23 = v5;
  v6 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*((_QWORD *)this + 1) + 56LL);
  if ( v6 == CAudioStream::IsCaptureStream )
  {
    if ( (unsigned int)(*((_DWORD *)this + 77) - 1) > 1 )
    {
LABEL_5:
      v7 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    v19 = v6((CAudioStream *)((char *)this + 8));
    v2 = v21;
    if ( !v19 )
      goto LABEL_5;
  }
  v7 = 1;
LABEL_6:
  v8 = *(_BOOL8 (__fastcall **)(CProcess *))(*v5 + 112LL);
  if ( v8 == CProcess::IsMuted )
  {
    v9 = *(_DWORD *)(v5[26] + 120LL) == 0;
  }
  else
  {
    v9 = v8((CProcess *)v5);
    v2 = v21;
  }
  v10 = *((_DWORD *)this + 76);
  v11 = *(__int64 (__fastcall **)(CWindowsPolicyManager *__hidden, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, unsigned int, int, int, unsigned int *))(*(_QWORD *)g_PolicyManager + 56LL);
  if ( v11 == CWindowsPolicyManager::GetAudioResourcePriority )
  {
    if ( v10 )
    {
      switch ( v10 )
      {
        case 1u:
        case 0xAu:
        case 0xBu:
          v12 = 2;
          break;
        case 2u:
          v12 = 1;
          break;
        case 3u:
          v12 = 0;
          break;
        case 7u:
          v12 = 3;
          break;
        default:
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v12 = 4;
    }
    v13 = (*((_BYTE *)this + 192) == 0) + 2 * (v12 + 4 * v9);
    v22 = v13;
    SAProvider = 0;
  }
  else
  {
    SAProvider = ((__int64 (__fastcall *)(CWindowsPolicyManager *, _QWORD, _QWORD, _QWORD, BOOL, int *, __int64))v11)(
                   g_PolicyManager,
                   v7,
                   v10,
                   *((unsigned __int8 *)this + 192),
                   v9,
                   &v22,
                   -2LL);
    if ( SAProvider < 0 )
    {
LABEL_36:
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          48LL,
          &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
          (unsigned int)SAProvider);
      }
      goto LABEL_18;
    }
    v13 = v22;
    v2 = v21;
  }
  if ( v13 != *((_DWORD *)this + 49) )
  {
    *((_DWORD *)this + 49) = v13;
    if ( g_UseNewGraphBuilder )
    {
      v15 = *((_QWORD *)this + 8);
      v16 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 168LL);
      if ( v16 == CBaseStreamGroupProxy::UpdateStreamResourcePriority )
        updated = CBaseStreamGroupProxy::UpdateStreamResourcePriority(v15, 1LL, v13, v2);
      else
        updated = v16(v15, 1LL, v13, (unsigned int)v21);
      SAProvider = updated;
    }
    else
    {
      v21 = 0LL;
      SAProvider = GetSAProvider(&v21);
      if ( SAProvider >= 0 )
        SAProvider = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 72LL))(v21, *((_QWORD *)this + 6));
      if ( v21 )
      {
        v20 = *(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL);
        if ( (char *)v20 == (char *)ATL::CComObject<CSaProvider>::Release )
          ATL::CComObject<CSaProvider>::Release(v21);
        else
          v20(v21);
      }
    }
  }
  if ( SAProvider < 0 )
    goto LABEL_36;
LABEL_18:
  (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return (unsigned int)SAProvider;
}
