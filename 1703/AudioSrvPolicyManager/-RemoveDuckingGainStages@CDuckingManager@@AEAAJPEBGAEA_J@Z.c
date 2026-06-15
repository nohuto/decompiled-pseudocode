/*
 * XREFs of ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z @ 0x180008AB8
 * Callers:
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000851C (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x180005B6C (WPP_SF_S.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x180008C00 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x180009750 (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x180009B5C (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::RemoveDuckingGainStages(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        __int64 *a3)
{
  int DuckableSessionsList; // ebx
  __int64 v5; // rbx
  const wchar_t *v6; // rax
  int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h]
  __int128 v11; // [rsp+48h] [rbp-18h]
  int v12; // [rsp+58h] [rbp-8h]
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  v10 = 0LL;
  v12 = 10;
  v9 = 0LL;
  v11 = 0LL;
  DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(this, a2, &v9);
  if ( DuckableSessionsList < 0 )
    goto LABEL_15;
  while ( v10 )
  {
    v5 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v9);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v6);
    }
    v13 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v5)(
           v5,
           &GUID_08460157_7ba0_4775_a5a3_97302f08c239,
           &v13);
    if ( v7 >= 0 )
      v7 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v13 + 48LL))(
             v13,
             &DuckingPolicyGuid,
             0LL,
             0LL,
             a3);
    DuckableSessionsList = 0;
    if ( v7 != -2147024894 )
      DuckableSessionsList = v7;
    if ( v13 )
      (*(void (**)(void))(*(_QWORD *)v13 + 16LL))();
  }
  if ( DuckableSessionsList < 0 )
LABEL_15:
    AudPolicyLogError("CDuckingManager::RemoveDuckingGainStages", 1674, DuckableSessionsList);
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(&v9);
  return (unsigned int)DuckableSessionsList;
}
