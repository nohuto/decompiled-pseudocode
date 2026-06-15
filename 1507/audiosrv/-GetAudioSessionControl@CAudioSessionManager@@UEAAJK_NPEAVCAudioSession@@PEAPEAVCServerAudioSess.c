/*
 * XREFs of ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180019DB0
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800190D0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180019EA0 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x18006D1E0 (WPP_SF_qS.c)
 */

__int64 __fastcall CAudioSessionManager::GetAudioSessionControl(
        CAudioSessionManager *this,
        unsigned int a2,
        bool a3,
        struct CAudioSession *a4,
        struct CServerAudioSessionControl **a5)
{
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // esi
  struct CServerAudioSessionControl *v11; // rdi
  struct CServerAudioSessionControl *v12; // rbx
  struct CServerAudioSessionControl *v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = 0LL;
  v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control )
  {
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        19LL,
        &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        a2);
      v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( (struct _GUID *)v8 != &WPP_GLOBAL_Control && (*(_BYTE *)(v8 + 28) & 0x40) != 0 && *(_BYTE *)(v8 + 25) >= 4u )
      WPP_SF_S(*(_QWORD *)(v8 + 16), 20LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, 0LL);
  }
  v9 = CAudioSessionManager::CreateAudioSessionControl((CAudioSessionManager *)v8, a4, a2, a3, &v14);
  v10 = v9;
  if ( v9 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        21LL,
        &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        v9);
    }
    v12 = v14;
    *a5 = 0LL;
  }
  else
  {
    v11 = v14;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qS(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        22,
        (unsigned int)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        (_DWORD)v14,
        0LL);
    }
    v12 = 0LL;
    *a5 = v11;
  }
  if ( v10 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      23LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      (unsigned int)v10);
  }
  if ( v12 )
    (*(void (__fastcall **)(struct CServerAudioSessionControl *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v10;
}
