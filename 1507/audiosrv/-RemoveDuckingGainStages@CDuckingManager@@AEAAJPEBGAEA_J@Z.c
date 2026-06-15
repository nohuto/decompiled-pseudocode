/*
 * XREFs of ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z @ 0x1800A664C
 * Callers:
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A5DE0 (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x1800070AC (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x1800A4920 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x1800A6874 (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 */

__int64 __fastcall CDuckingManager::RemoveDuckingGainStages(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        __int64 *a3)
{
  int DuckableSessionsList; // esi
  __int64 v5; // rax
  __int64 v6; // r14
  const wchar_t *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h]
  __int128 v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+58h] [rbp-8h]
  __int64 v15; // [rsp+A8h] [rbp+48h] BYREF

  v14 = 10;
  v12 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(this, a2, (__int64 *)&v11);
  if ( DuckableSessionsList < 0 )
    goto LABEL_14;
  while ( v12 )
  {
    v5 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v11);
    v6 = v5;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      v7 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x40u,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        v7);
    }
    v15 = 0LL;
    DuckableSessionsList = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v6)(
                             v6,
                             &GUID_08460157_7ba0_4775_a5a3_97302f08c239,
                             &v15);
    if ( DuckableSessionsList >= 0 )
      DuckableSessionsList = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v15 + 48LL))(
                               v15,
                               &DuckingPolicyGuid,
                               0LL,
                               0LL,
                               a3);
    if ( DuckableSessionsList == -2147024894 )
      DuckableSessionsList = 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( DuckableSessionsList < 0 )
  {
LABEL_14:
    while ( v12 )
    {
      v8 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v11);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x41u,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        DuckableSessionsList);
      v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( (struct _GUID *)v9 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v9 + 28) & 0x8000000) != 0
      && *(_BYTE *)(v9 + 25) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(v9 + 16),
        0x42u,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        DuckableSessionsList);
    }
  }
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64 *)&v11);
  return (unsigned int)DuckableSessionsList;
}
