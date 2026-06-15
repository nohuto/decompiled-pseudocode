/*
 * XREFs of ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x180013EA0
 * Callers:
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x1800140E0 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18001412C (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800171B0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@H@Z @ 0x1800178A0 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 * Callees:
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180014BB0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800186F0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
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
  __int64 v13; // rbp
  __int64 v14; // rsi
  wchar_t *v15; // rcx
  wchar_t v16; // ax
  unsigned int i; // esi
  wchar_t *v18; // rbx
  HANDLE *v19; // rsi
  void (*v20)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // r14
  _QWORD *v21; // rsi
  __int64 v22; // rbx
  int v23; // eax
  int v24; // eax
  wchar_t *String; // [rsp+50h] [rbp+8h] BYREF

  v9 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v9 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(dword_1800E64A8);
    v10 = &qword_1800E6498;
  }
  else
  {
    v10 = (__int64 *)v9((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  }
  String = (wchar_t *)(v10 + 3);
  v11 = CAudioSessionInstanceId::ToString(a2, &String);
  v12 = String;
  v13 = 0LL;
  if ( v11 < 0 )
  {
    v18 = String - 12;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)String - 2, 0xFFFFFFFF) <= 1 )
    {
      v19 = *(HANDLE **)v18;
      v20 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)v18 + 8LL);
      if ( v20 == ATL::CAtlStringMgr::Free
        && (v19 = (HANDLE *)v19[1],
            v20 = (void (*)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))*((_QWORD *)*v19 + 1),
            (char *)v20 == (char *)ATL::CWin32Heap::Free) )
      {
        HeapFree(v19[1], 0, v18);
      }
      else
      {
        ((void (__fastcall *)(HANDLE *, wchar_t *))v20)(v19, v18);
      }
    }
    i = 0;
  }
  else
  {
    v14 = *((int *)String - 4);
    if ( (int)((*((_DWORD *)String - 3) - v14) | (1 - *((_DWORD *)String - 2))) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&String, (unsigned int)v14);
      v12 = String;
    }
    _wcsupr_s(v12, (int)v14 + 1);
    if ( (int)v14 < 0 || (int)v14 > *((_DWORD *)v12 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v12 - 4) = v14;
    v12[v14] = 0;
    v15 = v12;
    v16 = *v12;
    for ( i = 0; *v15; v16 = *v15 )
    {
      ++v15;
      i = v16 + 33 * i;
    }
    ATL::CStringData::Release((ATL::CStringData *)(v12 - 12));
  }
  *a4 = i;
  *a3 = i % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v21 = a5;
  *a5 = 0LL;
  v22 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * *a3);
  if ( !v22 )
    return 0LL;
  while ( 1 )
  {
    if ( *(_DWORD *)(v22 + 96) == *a4 && !_wcsicmp(*(const wchar_t **)v22, *(const wchar_t **)a2) )
    {
      v23 = *(_DWORD *)(v22 + 64);
      if ( v23 == *(_DWORD *)(a2 + 64) && (v23 || *(_DWORD *)(v22 + 56) == *(_DWORD *)(a2 + 56)) )
      {
        v24 = *(_DWORD *)(v22 + 48);
        if ( v24 == *(_DWORD *)(a2 + 48)
          && (v24 || !_wcsicmp(*(const wchar_t **)(v22 + 8), *(const wchar_t **)(a2 + 8)))
          && *(_QWORD *)(v22 + 24) == *(_QWORD *)(a2 + 24)
          && *(_QWORD *)(v22 + 32) == *(_QWORD *)(a2 + 32) )
        {
          break;
        }
      }
    }
    v13 = v22;
    v22 = *(_QWORD *)(v22 + 88);
    if ( !v22 )
      return 0LL;
  }
  *v21 = v13;
  return v22;
}
