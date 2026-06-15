/*
 * XREFs of ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000879C
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x180008118 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x180008DD4 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x1800099F0 (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x180009E60 (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x18000A294 (--0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::ApplyDuckingGainStages(CDuckingManager *this, const unsigned __int16 *a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // ebx
  __int64 v7; // rbx
  const wchar_t *v8; // rax
  HANDLE ProcessHeap; // rax
  CVolumeGainStage *v10; // rax
  const struct _GUID *v11; // rdx
  CVolumeGainStage *v12; // rax
  int v13; // ecx
  int v14; // ecx
  float v15; // xmm6_4
  HANDLE v16; // rax
  CVolumeGainStage *v17; // rax
  const struct _GUID *v18; // rdx
  volatile signed __int32 *v19; // rbx
  UINT32 v21; // [rsp+28h] [rbp-79h]
  int DuckableSessionsList; // [rsp+38h] [rbp-69h] BYREF
  const struct _TlgProvider_t *v23; // [rsp+40h] [rbp-61h] BYREF
  int v24; // [rsp+48h] [rbp-59h] BYREF
  __int128 v25; // [rsp+50h] [rbp-51h] BYREF
  __int64 v26; // [rsp+60h] [rbp-41h]
  __int128 v27; // [rsp+68h] [rbp-39h]
  int v28; // [rsp+78h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-19h] BYREF
  const char *v30; // [rsp+A8h] [rbp+7h]
  int v31; // [rsp+B0h] [rbp+Fh]
  int v32; // [rsp+B4h] [rbp+13h]
  int *v33; // [rsp+B8h] [rbp+17h]
  int v34; // [rsp+C0h] [rbp+1Fh]
  int v35; // [rsp+C4h] [rbp+23h]
  int *p_DuckableSessionsList; // [rsp+C8h] [rbp+27h]
  int v37; // [rsp+D0h] [rbp+2Fh]
  int v38; // [rsp+D4h] [rbp+33h]

  v26 = 0LL;
  v25 = 0LL;
  v28 = 10;
  v27 = 0LL;
  DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(this, a2, &v25);
  v6 = DuckableSessionsList;
  if ( DuckableSessionsList < 0 )
    goto LABEL_31;
  while ( v26 )
  {
    v7 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v25);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v8 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v8);
    }
    v23 = 0LL;
    DuckableSessionsList = (**(__int64 (__fastcall ***)(__int64, GUID *, const struct _TlgProvider_t **))v7)(
                             v7,
                             &GUID_08460157_7ba0_4775_a5a3_97302f08c239,
                             &v23);
    v6 = DuckableSessionsList;
    if ( DuckableSessionsList >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(const struct _TlgProvider_t *))(*(_QWORD *)v23 + 32LL))(v23) )
      {
        ProcessHeap = GetProcessHeap();
        v10 = (CVolumeGainStage *)HeapAlloc(ProcessHeap, 0, 0x38uLL);
        if ( v10 )
        {
          v12 = CVolumeGainStage::CVolumeGainStage(v10, v11, 0.0, 10000000LL, 1);
          goto LABEL_20;
        }
LABEL_21:
        v19 = 0LL;
      }
      else
      {
        v13 = *((_DWORD *)this + 77);
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 == 1 )
              v15 = FLOAT_N6_0;
            else
              v15 = 0.0;
          }
          else
          {
            v15 = FLOAT_N18_0;
          }
        }
        else
        {
          v15 = FLOAT_N96_0;
        }
        v16 = GetProcessHeap();
        v17 = (CVolumeGainStage *)HeapAlloc(v16, 0, 0x38uLL);
        if ( !v17 )
          goto LABEL_21;
        v12 = CVolumeGainStage::CVolumeGainStage(v17, v18, v15, 10000000LL, 0);
LABEL_20:
        v19 = (volatile signed __int32 *)v12;
      }
      if ( v19 )
      {
        DuckableSessionsList = (*(__int64 (__fastcall **)(const struct _TlgProvider_t *, volatile signed __int32 *, __int128 *))(*(_QWORD *)v23 + 40LL))(
                                 v23,
                                 v19,
                                 &DuckingPolicyGuid);
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v19 + 8LL))(v19, 1LL);
        }
        v6 = DuckableSessionsList;
      }
      else
      {
        v6 = -2147024882;
        DuckableSessionsList = -2147024882;
      }
    }
    v3 = v23;
    if ( v23 )
    {
      (*(void (__fastcall **)(const struct _TlgProvider_t *))(*(_QWORD *)v23 + 16LL))(v23);
      v6 = DuckableSessionsList;
    }
  }
  if ( v6 < 0 )
  {
LABEL_31:
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v30 = "__FUNC__";
      v33 = &v24;
      p_DuckableSessionsList = &DuckableSessionsList;
      v31 = 9;
      v24 = 1512;
      v34 = 4;
      v37 = 4;
      TlgWrite(v3, &unk_18002D869, v4, v5, v21, &pData);
      v6 = DuckableSessionsList;
    }
  }
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(&v25);
  return (unsigned int)v6;
}
