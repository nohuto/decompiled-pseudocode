/*
 * XREFs of ??0CActiveAudioSession@@QEAA@PEBGH@Z @ 0x180038534
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002AF60 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800186F0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018814 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800188B0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180018960 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
CActiveAudioSession *__fastcall CActiveAudioSession::CActiveAudioSession(
        CActiveAudioSession *this,
        const unsigned __int16 *a2,
        int a3)
{
  CActiveAudioSession *v5; // rbx
  struct ATL::CStringData *(__fastcall *v6)(ATL::CAtlStringMgr *); // rdi
  struct ATL::CStringData *NilString; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r14
  char *v13; // rcx
  rsize_t v14; // rdx
  ATL::CAtlException *v16; // [rsp+28h] [rbp-20h] BYREF

  v5 = this;
  v6 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v6 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v6((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *(_QWORD *)v5 = (char *)NilString + 24;
  *((_DWORD *)v5 + 2) = a3;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 72LL, &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, a2);
  }
  try
  {
    if ( !a2 )
      goto LABEL_20;
    v10 = -1LL;
    do
      ++v10;
    while ( a2[v10] );
    if ( (_DWORD)v10 )
    {
      v11 = *(unsigned int *)(*(_QWORD *)v5 - 16LL);
      v12 = ((__int64)a2 - *(_QWORD *)v5) >> 1;
      if ( ((1 - *(_DWORD *)(*(_QWORD *)v5 - 8LL)) | (*(_DWORD *)(*(_QWORD *)v5 - 12LL) - (int)v10)) < 0 )
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)v5, v10, v8, v9);
      v13 = *(char **)v5;
      v14 = 2LL * (int)v10;
      if ( v12 <= v11 )
        memmove_s(v13, v14, &v13[2 * v12], v14);
      else
        memcpy_s(v13, v14, a2, v14);
      ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)v5, v10);
    }
    else
    {
LABEL_20:
      ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)v5);
    }
  }
  catch ( ATL::CAtlException *v16 )
  {
    if ( *(_DWORD *)v16 == -1073741571 )
      _resetstkoflw();
    return this;
  }
  return v5;
}
