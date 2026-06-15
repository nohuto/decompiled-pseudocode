/*
 * XREFs of ??1CAppAudioSessionId@@QEAA@XZ @ 0x180011CA0
 * Callers:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180014328 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180016310 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     _CAudioSessionInstanceId::CAudioSessionInstanceId_::_1_::dtor$1 @ 0x18004A6B1 (_CAudioSessionInstanceId--CAudioSessionInstanceId_--_1_--dtor$1.c)
 *     _CAudioSessionManager::OnStateChanged_::_1_::dtor$3 @ 0x18004A8B4 (_CAudioSessionManager--OnStateChanged_--_1_--dtor$3.c)
 * Callees:
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x1800188F0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CAppAudioSessionId::~CAppAudioSessionId(CAppAudioSessionId *this)
{
  __int64 v1; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx
  void (*v5)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rbp
  ATL::CAtlStringMgr *v6; // rdi
  void (*v7)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rsi
  void (*v8)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rbp

  v1 = *((_QWORD *)this + 4);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 - 8), 0xFFFFFFFF) <= 1 )
  {
    v5 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)(v1 - 24) + 8LL);
    if ( v5 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*(ATL::CAtlStringMgr **)(v1 - 24), (struct ATL::CStringData *)(v1 - 24));
    else
      ((void (__fastcall *)(_QWORD, __int64))v5)(*(_QWORD *)(v1 - 24), v1 - 24);
  }
  v3 = *((_QWORD *)this + 1);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 - 8), 0xFFFFFFFF) <= 1 )
  {
    v8 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)(v3 - 24) + 8LL);
    if ( v8 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*(ATL::CAtlStringMgr **)(v3 - 24), (struct ATL::CStringData *)(v3 - 24));
    else
      ((void (__fastcall *)(_QWORD, __int64))v8)(*(_QWORD *)(v3 - 24), v3 - 24);
  }
  v4 = *(_QWORD *)this;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)this - 8LL), 0xFFFFFFFF) <= 1 )
  {
    v6 = *(ATL::CAtlStringMgr **)(v4 - 24);
    v7 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(*(_QWORD *)v6 + 8LL);
    if ( v7 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(v6, (struct ATL::CStringData *)(v4 - 24));
    else
      ((void (__fastcall *)(_QWORD, __int64))v7)(*(_QWORD *)(v4 - 24), v4 - 24);
  }
}
