/*
 * XREFs of ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x180008A54
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x180008118 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
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

__int64 __fastcall CDuckingManager::RecalculateSessionVolumes(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        __int64 *a3)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // ebx
  __int64 v7; // rbx
  const wchar_t *v8; // rax
  UINT32 cData; // [rsp+20h] [rbp-79h]
  int DuckableSessionsList; // [rsp+40h] [rbp-59h] BYREF
  const struct _TlgProvider_t *v12; // [rsp+48h] [rbp-51h] BYREF
  __int128 v13; // [rsp+50h] [rbp-49h] BYREF
  __int64 v14; // [rsp+60h] [rbp-39h]
  __int128 v15; // [rsp+68h] [rbp-31h]
  int v16; // [rsp+78h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-19h] BYREF
  const char *v18; // [rsp+A0h] [rbp+7h]
  int v19; // [rsp+A8h] [rbp+Fh]
  int v20; // [rsp+ACh] [rbp+13h]
  const struct _TlgProvider_t **v21; // [rsp+B0h] [rbp+17h]
  int v22; // [rsp+B8h] [rbp+1Fh]
  int v23; // [rsp+BCh] [rbp+23h]
  int *p_DuckableSessionsList; // [rsp+C0h] [rbp+27h]
  int v25; // [rsp+C8h] [rbp+2Fh]
  int v26; // [rsp+CCh] [rbp+33h]

  v14 = 0LL;
  v16 = 10;
  v13 = 0LL;
  v15 = 0LL;
  DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(this, a2, &v13);
  v6 = DuckableSessionsList;
  if ( DuckableSessionsList < 0 )
    goto LABEL_13;
  while ( v14 )
  {
    v7 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v13);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v8 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x37u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v8);
    }
    v12 = 0LL;
    DuckableSessionsList = (**(__int64 (__fastcall ***)(__int64, GUID *, const struct _TlgProvider_t **))v7)(
                             v7,
                             &GUID_ec081b02_27c6_4867_9203_959f1731a3e5,
                             &v12);
    v6 = DuckableSessionsList;
    if ( DuckableSessionsList >= 0 )
    {
      LOBYTE(cData) = 0;
      (*(void (__fastcall **)(const struct _TlgProvider_t *, __int64, _QWORD, __int64))(*(_QWORD *)v12 + 24LL))(
        v12,
        2LL,
        0LL,
        0xFFFFFFFFLL);
      v6 = DuckableSessionsList;
    }
    v3 = v12;
    if ( v12 )
    {
      (*(void (__fastcall **)(const struct _TlgProvider_t *))(*(_QWORD *)v12 + 16LL))(v12);
      v6 = DuckableSessionsList;
    }
  }
  if ( v6 < 0 )
  {
LABEL_13:
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v18 = "__FUNC__";
      v21 = &v12;
      p_DuckableSessionsList = &DuckableSessionsList;
      v19 = 9;
      LODWORD(v12) = 1606;
      v22 = 4;
      v25 = 4;
      TlgWrite(v3, &unk_18002D869, v4, v5, cData, &pData);
      v6 = DuckableSessionsList;
    }
  }
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(&v13);
  return (unsigned int)v6;
}
