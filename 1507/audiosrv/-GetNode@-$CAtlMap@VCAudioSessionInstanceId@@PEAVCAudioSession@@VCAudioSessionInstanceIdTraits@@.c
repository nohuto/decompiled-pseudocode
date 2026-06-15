/*
 * XREFs of ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x18000B7E0
 * Callers:
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x18000BA58 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18000BAA4 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A040 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@H@Z @ 0x18001A544 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18000BB70 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017740 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  struct ATL::CStringData *(__fastcall *v9)(ATL::CAtlStringMgr *__hidden); // rbx
  __int64 *v10; // rax
  int v11; // eax
  wchar_t *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  wchar_t v15; // ax
  unsigned int v16; // edi
  wchar_t *i; // rcx
  unsigned int v18; // edi
  __int64 v19; // rbx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  wchar_t *v24; // rbx
  HANDLE *v25; // rdi
  void (*v26)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rsi
  wchar_t *String[5]; // [rsp+20h] [rbp-28h] BYREF

  v9 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v9 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(dword_1800E84A8);
    v10 = &qword_1800E8498;
  }
  else
  {
    v10 = (__int64 *)v9((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  }
  String[0] = (wchar_t *)(v10 + 3);
  v11 = CAudioSessionInstanceId::ToString(a2, String);
  v12 = String[0];
  if ( v11 < 0 )
  {
    v24 = String[0] - 12;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)String[0] - 2, 0xFFFFFFFF) <= 1 )
    {
      v25 = *(HANDLE **)v24;
      v26 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)v24 + 8LL);
      if ( v26 == ATL::CAtlStringMgr::Free
        && (v25 = (HANDLE *)v25[1],
            v26 = (void (*)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))*((_QWORD *)*v25 + 1),
            (char *)v26 == (char *)ATL::CWin32Heap::Free) )
      {
        HeapFree(v25[1], 0, v24);
      }
      else
      {
        ((void (__fastcall *)(HANDLE *, wchar_t *))v26)(v25, v24);
      }
    }
    v14 = 0LL;
    v16 = 0;
  }
  else
  {
    v13 = *((int *)String[0] - 4);
    if ( (int)((*((_DWORD *)String[0] - 3) - v13) | (1 - *((_DWORD *)String[0] - 2))) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(String, (unsigned int)v13);
      v12 = String[0];
    }
    _wcsupr_s(v12, (int)v13 + 1);
    if ( (int)v13 < 0 || (int)v13 > *((_DWORD *)v12 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    v14 = 0LL;
    *((_DWORD *)v12 - 4) = v13;
    v12[v13] = 0;
    v15 = *v12;
    v16 = 0;
    for ( i = v12; *i; v15 = *i )
    {
      ++i;
      v16 = v15 + 33 * v16;
    }
    ATL::CStringData::Release((ATL::CStringData *)(v12 - 12));
  }
  *a4 = v16;
  if ( *(_DWORD *)(a1 + 16) == 17 )
    v18 = v16 % 0x11;
  else
    v18 = v16 % *(_DWORD *)(a1 + 16);
  *a3 = v18;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  *a5 = 0LL;
  v19 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * *a3);
  if ( !v19 )
    return 0LL;
  while ( 1 )
  {
    if ( *(_DWORD *)(v19 + 96) == *a4 && !_wcsicmp(*(const wchar_t **)v19, *(const wchar_t **)a2) )
    {
      v20 = *(_DWORD *)(v19 + 64);
      if ( v20 == *(_DWORD *)(a2 + 64) && (v20 || *(_DWORD *)(v19 + 56) == *(_DWORD *)(a2 + 56)) )
      {
        v21 = *(_DWORD *)(v19 + 48);
        if ( v21 == *(_DWORD *)(a2 + 48)
          && (v21 || !_wcsicmp(*(const wchar_t **)(v19 + 8), *(const wchar_t **)(a2 + 8))) )
        {
          v22 = *(_QWORD *)(v19 + 24) - *(_QWORD *)(a2 + 24);
          if ( !v22 )
            v22 = *(_QWORD *)(v19 + 32) - *(_QWORD *)(a2 + 32);
          if ( !v22 )
            break;
        }
      }
    }
    v14 = v19;
    v19 = *(_QWORD *)(v19 + 88);
    if ( !v19 )
      return 0LL;
  }
  *a5 = v14;
  return v19;
}
