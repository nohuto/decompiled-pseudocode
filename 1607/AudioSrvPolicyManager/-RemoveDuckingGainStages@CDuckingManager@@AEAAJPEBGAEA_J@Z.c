/*
 * XREFs of ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z @ 0x180008C10
 * Callers:
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800084F0 (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x180008DD4 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x1800099F0 (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x180009E60 (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::RemoveDuckingGainStages(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        __int64 *a3)
{
  UINT32 v3; // edi
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // ebx
  __int64 v8; // rbx
  const wchar_t *v9; // rax
  UINT32 cData; // [rsp+20h] [rbp-69h]
  int DuckableSessionsList; // [rsp+30h] [rbp-59h] BYREF
  const struct _TlgProvider_t *v13; // [rsp+38h] [rbp-51h] BYREF
  __int128 v14; // [rsp+40h] [rbp-49h] BYREF
  __int64 v15; // [rsp+50h] [rbp-39h]
  __int128 v16; // [rsp+58h] [rbp-31h]
  int v17; // [rsp+68h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  const char *v19; // [rsp+90h] [rbp+7h]
  __int64 v20; // [rsp+98h] [rbp+Fh]
  const struct _TlgProvider_t **v21; // [rsp+A0h] [rbp+17h]
  __int64 v22; // [rsp+A8h] [rbp+1Fh]
  int *p_DuckableSessionsList; // [rsp+B0h] [rbp+27h]
  __int64 v24; // [rsp+B8h] [rbp+2Fh]

  v17 = 10;
  v3 = (unsigned int)a3;
  v15 = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(this, a2, &v14);
  v7 = DuckableSessionsList;
  if ( DuckableSessionsList < 0 )
    goto LABEL_15;
  while ( v15 )
  {
    v8 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v14);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v9 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v9);
    }
    v13 = 0LL;
    DuckableSessionsList = (**(__int64 (__fastcall ***)(__int64, GUID *, const struct _TlgProvider_t **))v8)(
                             v8,
                             &GUID_08460157_7ba0_4775_a5a3_97302f08c239,
                             &v13);
    v7 = DuckableSessionsList;
    if ( DuckableSessionsList >= 0 )
    {
      cData = v3;
      v7 = (*(__int64 (__fastcall **)(const struct _TlgProvider_t *, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v13 + 48LL))(
             v13,
             &DuckingPolicyGuid,
             0LL,
             0LL);
    }
    v4 = v13;
    if ( v7 == -2147024894 )
      v7 = 0;
    DuckableSessionsList = v7;
    if ( v13 )
    {
      (*(void (**)(void))(*(_QWORD *)v13 + 16LL))();
      v7 = DuckableSessionsList;
    }
  }
  if ( v7 < 0 )
  {
LABEL_15:
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v20 = 9LL;
      v19 = "__FUNC__";
      v21 = &v13;
      p_DuckableSessionsList = &DuckableSessionsList;
      LODWORD(v13) = 1674;
      v22 = 4LL;
      v24 = 4LL;
      TlgWrite(v4, &unk_18002D869, v5, v6, cData, &pData);
      v7 = DuckableSessionsList;
    }
  }
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(&v14);
  return (unsigned int)v7;
}
