/*
 * XREFs of ??1CAppAudioSessionId@@QEAA@XZ @ 0x18000CB5C
 * Callers:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18000AE40 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18000BB2C (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800190D0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     _CAudioSessionInstanceId::CAudioSessionInstanceId_::_1_::dtor$1 @ 0x180045D4F (_CAudioSessionInstanceId--CAudioSessionInstanceId_--_1_--dtor$1.c)
 *     _CAudioSessionManager::OnStateChanged_::_1_::dtor$3 @ 0x180046A84 (_CAudioSessionManager--OnStateChanged_--_1_--dtor$3.c)
 * Callees:
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180017970 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CAppAudioSessionId::~CAppAudioSessionId(CAppAudioSessionId *this)
{
  __int64 v1; // rbx
  void (*v3)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rbp
  __int64 v4; // rbx
  __int64 v5; // rbx
  ATL::CAtlStringMgr *v6; // rdi
  void (*v7)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rsi
  void (*v8)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rbp

  v1 = *((_QWORD *)this + 4);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 - 8), 0xFFFFFFFF) <= 1 )
  {
    v3 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)(v1 - 24) + 8LL);
    if ( v3 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*(ATL::CAtlStringMgr **)(v1 - 24), (struct ATL::CStringData *)(v1 - 24));
    else
      ((void (__fastcall *)(_QWORD, __int64))v3)(*(_QWORD *)(v1 - 24), v1 - 24);
  }
  v4 = *((_QWORD *)this + 1);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 - 8), 0xFFFFFFFF) <= 1 )
  {
    v8 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)(v4 - 24) + 8LL);
    if ( v8 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*(ATL::CAtlStringMgr **)(v4 - 24), (struct ATL::CStringData *)(v4 - 24));
    else
      ((void (__fastcall *)(_QWORD, __int64))v8)(*(_QWORD *)(v4 - 24), v4 - 24);
  }
  v5 = *(_QWORD *)this;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)this - 8LL), 0xFFFFFFFF) <= 1 )
  {
    v6 = *(ATL::CAtlStringMgr **)(v5 - 24);
    v7 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(*(_QWORD *)v6 + 8LL);
    if ( v7 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(v6, (struct ATL::CStringData *)(v5 - 24));
    else
      ((void (__fastcall *)(_QWORD, __int64))v7)(*(_QWORD *)(v5 - 24), v5 - 24);
  }
}
