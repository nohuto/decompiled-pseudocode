/*
 * XREFs of ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x180008DD4
 * Callers:
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18000751C (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000879C (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x180008A54 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z @ 0x180008C10 (-RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x180009EDC (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::GetDuckableSessionsList(__int64 a1, const wchar_t *a2, __int64 *a3)
{
  __int64 *v3; // rsi
  const wchar_t *v4; // r12
  __int64 v5; // r14
  const GUID *v6; // r8
  unsigned __int64 i; // rdi
  __int64 v8; // r15
  const wchar_t *v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rcx
  _UNKNOWN **v12; // rcx
  const GUID *v13; // r9
  unsigned int v14; // edi
  int *v16; // rbx
  UINT32 v17; // [rsp+20h] [rbp-E8h]
  int v18; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-C8h] BYREF
  char v21; // [rsp+48h] [rbp-C0h]
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h]
  const wchar_t *v24; // [rsp+60h] [rbp-A8h]
  __int64 *v25; // [rsp+68h] [rbp-A0h]
  __int64 v26; // [rsp+70h] [rbp-98h]
  ATL::CAtlException *v27; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-88h] BYREF
  const char *v29; // [rsp+A0h] [rbp-68h]
  __int64 v30; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v31; // [rsp+B0h] [rbp-58h]
  __int64 v32; // [rsp+B8h] [rbp-50h]
  int *v33; // [rsp+C0h] [rbp-48h]
  __int64 v34; // [rsp+C8h] [rbp-40h]

  v26 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = a1;
  v23 = a1;
  v24 = a2;
  v25 = a3;
  v18 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v21 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  for ( i = 0LL; ; ++i )
  {
    v19 = i;
    if ( i >= *(_QWORD *)(v5 + 80) )
      goto LABEL_17;
    v8 = **(_QWORD **)(*(_QWORD *)(v5 + 72) + 8 * i);
    v22 = v8;
    if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8)
      && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8) )
    {
      v9 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 72LL))(v8);
      if ( !_wcsicmp(v4, v9) )
      {
        v18 = 0;
        try
        {
          v10 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(v3, &v22, v3[1], 0LL);
          v11 = (__int64 *)v3[1];
          if ( v11 )
            *v11 = v10;
          else
            *v3 = v10;
          v3[1] = v10;
        }
        catch ( ATL::CAtlException *v27 )
        {
          v16 = (int *)v27;
          if ( *(_DWORD *)v27 == -1073741571 )
            _resetstkoflw();
          v18 = *v16;
          i = v19;
          v5 = v23;
          v4 = v24;
          v3 = v25;
        }
        if ( v18 < 0 )
          break;
      }
    }
  }
  v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x39u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v18);
LABEL_17:
    v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v13 = (const GUID *)(unsigned int)v18;
  if ( v18 < 0 )
  {
    if ( v12 != &WPP_GLOBAL_Control && (*((_DWORD *)v12 + 7) & 0x8000000) != 0 && *((_BYTE *)v12 + 25) >= 2u )
      WPP_SF_D((TRACEHANDLE)v12[2], 0x3Au, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v18);
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v29 = "__FUNC__";
      v30 = 9LL;
      LODWORD(v19) = 1727;
      v31 = &v19;
      v32 = 4LL;
      v33 = &v18;
      v34 = 4LL;
      TlgWrite((TraceLoggingHProvider)v12, &unk_18002D869, v6, v13, v17, &pData);
    }
  }
  v14 = v18;
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
  return v14;
}
