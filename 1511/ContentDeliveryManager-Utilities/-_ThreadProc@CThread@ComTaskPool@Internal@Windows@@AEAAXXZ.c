/*
 * XREFs of ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180009128
 * Callers:
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x180008DE8 (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
 *     ?s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x180008E50 (-s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 * Callees:
 *     ?Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x180008878 (-Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ.c)
 *     ?SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoolTask@34@@Z @ 0x1800089BC (-SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoo.c)
 *     ?_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z @ 0x180008F70 (-_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z.c)
 *     ?_CreateThreadRef@CThread@ComTaskPool@Internal@Windows@@AEAAJPEAJPEAPEAUIUnknown@@@Z @ 0x180009018 (-_CreateThreadRef@CThread@ComTaskPool@Internal@Windows@@AEAAJPEAJPEAPEAUIUnknown@@@Z.c)
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x180009E60 (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 *     ?s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N@Z @ 0x180009F08 (-s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N@Z.c)
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x180009FDC (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Internal::ComTaskPool::CThread::_ThreadProc(Windows::Internal::ComTaskPool::CThread *this)
{
  DWORD v2; // r15d
  int TaskPoolTlsSlot; // r12d
  IUnknown *v4; // rbx
  struct IUnknown *v5; // rdi
  int *v6; // r13
  void *v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  void *v10; // rcx
  struct Windows::Internal::ComTaskPool::TaskData *v11; // r15
  struct Windows::Internal::ComTaskPool::TaskData *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  DWORD v15; // eax
  __int64 v16; // rsi
  bool v17; // zf
  DWORD TickCount; // eax
  DWORD v19; // ebx
  void *v20; // rcx
  struct Windows::Internal::ComTaskPool::TaskData *v21; // rcx
  DWORD dwTlsIndex; // [rsp+38h] [rbp-39h] BYREF
  __int64 v23; // [rsp+40h] [rbp-31h] BYREF
  __int64 TlsValue; // [rsp+48h] [rbp-29h] BYREF
  struct IUnknown *v25; // [rsp+50h] [rbp-21h]
  struct IUnknown *v26; // [rsp+58h] [rbp-19h] BYREF
  IUnknown *punk[2]; // [rsp+60h] [rbp-11h] BYREF
  MSG Msg; // [rsp+70h] [rbp-1h] BYREF

  punk[1] = (IUnknown *)-2LL;
  *((_DWORD *)this + 22) = GetCurrentThreadId();
  TlsValue = 0x7FFFFFFFLL;
  v25 = 0LL;
  dwTlsIndex = -1;
  v2 = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool;
  if ( `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool == -1 )
  {
    TaskPoolTlsSlot = Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot(&dwTlsIndex);
    v2 = dwTlsIndex;
  }
  else
  {
    dwTlsIndex = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool;
    TaskPoolTlsSlot = 0;
  }
  if ( TaskPoolTlsSlot < 0 )
    goto LABEL_62;
  TlsSetValue(v2, &TlsValue);
  TaskPoolTlsSlot = CoInitializeEx(0LL, *((_DWORD *)this + 20) != 0 ? 2 : 0);
  if ( TaskPoolTlsSlot < 0 )
    goto LABEL_62;
  v26 = 0LL;
  v4 = 0LL;
  punk[0] = 0LL;
  TaskPoolTlsSlot = Windows::Internal::ComTaskPool::CThread::_CreateThreadRef(this, (int *)&TlsValue + 1, &v26);
  v5 = v26;
  if ( TaskPoolTlsSlot >= 0 )
  {
    v25 = v26;
    v6 = (int *)((char *)this + 92);
    TaskPoolTlsSlot = Windows::Internal::ComTaskPool::CThread::_CreateThreadRef(this, (int *)this + 23, punk);
    v4 = punk[0];
    if ( TaskPoolTlsSlot >= 0 )
    {
      TaskPoolTlsSlot = SHSetThreadRef(punk[0]);
      if ( TaskPoolTlsSlot >= 0 )
      {
        LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (*((_DWORD *)this + 20) << 24)) + 1;
        *((_DWORD *)this + 12) = 0;
        v7 = (void *)*((_QWORD *)this + 7);
        if ( v7 )
          SetEvent(v7);
        v8 = (_QWORD *)*((_QWORD *)this + 8);
        if ( v8 )
        {
          v9 = v8[2];
          if ( v9 )
          {
            v8[2] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
          operator delete(v8);
        }
        *((_QWORD *)this + 8) = 0LL;
        *((_BYTE *)this + 96) = 0;
        _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
        while ( 1 )
        {
          while ( !*((_QWORD *)this + 18) )
          {
            v17 = *v6 == 1;
            if ( *v6 > 1 )
            {
              Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate((const HANDLE *)this, 0xFFFFFFFF);
              v17 = *v6 == 1;
            }
            if ( v17 && Windows::Internal::ComTaskPool::s_fWaitForMoreTasks )
            {
              TickCount = GetTickCount();
              v19 = TickCount + 30000;
              while ( !*((_QWORD *)this + 18) && TickCount < v19 )
              {
                Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate((const HANDLE *)this, v19 - TickCount);
                TickCount = GetTickCount();
              }
            }
            if ( *((_QWORD *)this + 18) )
              break;
            if ( *v6 <= 1 && SHIDWORD(TlsValue) <= 1 && Windows::Internal::ComTaskPool::s_TryRemoveThread(this, 0) )
            {
              SHSetThreadRef(0LL);
              v25 = 0LL;
              LODWORD(TlsValue) = 0x7FFFFFFF;
              v2 = dwTlsIndex;
              v5 = v26;
              v4 = punk[0];
              goto LABEL_57;
            }
          }
          while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
          {
            *((_BYTE *)this + 96) = 1;
            TranslateMessage(&Msg);
            DispatchMessageW(&Msg);
            *((_BYTE *)this + 96) = 0;
          }
          LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (*((_DWORD *)this + 20) << 24) | 0x800000) + 1;
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 24LL))(*((_QWORD *)this + 18));
          LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (*((_DWORD *)this + 20) << 24)) + 1;
          v10 = (void *)*((_QWORD *)this + 5);
          if ( v10 )
          {
            SetEvent(v10);
            *((_QWORD *)this + 5) = 0LL;
          }
          v11 = 0LL;
          v23 = 0LL;
          AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
          v12 = (struct Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)this + 3);
          if ( v12 )
          {
            *((_QWORD *)this + 3) = *((_QWORD *)v12 + 3);
            *((_QWORD *)v12 + 3) = 0LL;
            if ( *((struct Windows::Internal::ComTaskPool::TaskData **)this + 4) == v12 )
              *((_QWORD *)this + 4) = 0LL;
          }
          else
          {
            v12 = (struct Windows::Internal::ComTaskPool::TaskData *)Windows::Internal::ComTaskPool::s_taskFloodingList;
            if ( !Windows::Internal::ComTaskPool::s_taskFloodingList )
              goto LABEL_35;
            Windows::Internal::ComTaskPool::s_taskFloodingList = *(_QWORD *)(Windows::Internal::ComTaskPool::s_taskFloodingList
                                                                           + 24);
            *((_QWORD *)v12 + 3) = 0LL;
            v13 = qword_18003DDE0;
            if ( (struct Windows::Internal::ComTaskPool::TaskData *)qword_18003DDE0 == v12 )
              v13 = 0LL;
            qword_18003DDE0 = v13;
            if ( !v12 )
              goto LABEL_35;
            if ( *((_DWORD *)v12 + 2) != *((_DWORD *)this + 34)
              || *(_DWORD *)v12 != *((_DWORD *)this + 20) && *(_DWORD *)v12 != 3
              || ((*((_BYTE *)this + 84) ^ *((_BYTE *)v12 + 4)) & 9) != 0
              || *((int *)this + 12) < 0 )
            {
              v11 = v12;
              v12 = 0LL;
            }
            if ( !v12 )
            {
LABEL_35:
              *((_BYTE *)this + 97) = 0;
              v14 = *((_QWORD *)this + 18);
              *((_QWORD *)this + 18) = 0LL;
              v23 = v14;
              goto LABEL_39;
            }
          }
          v15 = GetTickCount();
          Windows::Internal::ComTaskPool::CThread::SetThreadTask((__int64)this, (__int64)v12, v15, 0LL, &v23);
          v16 = *((_QWORD *)v12 + 2);
          if ( v16 )
          {
            *((_QWORD *)v12 + 2) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          operator delete(v12);
          v14 = v23;
LABEL_39:
          ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
          if ( v14 )
          {
            v23 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          }
          if ( v11 )
            Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(v11);
        }
      }
    }
  }
LABEL_57:
  CoUninitialize();
  if ( v4 )
    ((void (__fastcall *)(IUnknown *))v4->lpVtbl->Release)(v4);
  if ( v5 )
    ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
  if ( TaskPoolTlsSlot < 0 )
  {
LABEL_62:
    *((_DWORD *)this + 12) = TaskPoolTlsSlot;
    v20 = (void *)*((_QWORD *)this + 7);
    if ( v20 )
      SetEvent(v20);
    v21 = (struct Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)this + 8);
    if ( v21 )
    {
      Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(v21);
      *((_QWORD *)this + 8) = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
    Windows::Internal::ComTaskPool::s_TryRemoveThread(this, 1);
    Windows::Internal::ComTaskPool::TaskList::Clear((Windows::Internal::ComTaskPool::CThread *)((char *)this + 24));
    v2 = dwTlsIndex;
  }
  if ( v2 != -1 )
    TlsSetValue(v2, 0LL);
}
