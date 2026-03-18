/*
 * XREFs of ?Thread@FxSystemThread@@AEAAXXZ @ 0x1C00A6768
 * Callers:
 *     ?StaticThreadThunk@FxSystemThread@@CAXPEAX@Z @ 0x1C00A6760 (-StaticThreadThunk@FxSystemThread@@CAXPEAX@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxSystemThread::Thread(FxSystemThread *this)
{
  unsigned __int8 v2; // r8
  _LIST_ENTRY *p_m_WorkList; // rdi
  unsigned __int8 v4; // r8
  _LIST_ENTRY *Flink; // rcx
  void (__fastcall *WorkerRoutine)(void *); // rcx
  _LIST_ENTRY *v7; // rcx
  _LIST_ENTRY *v8; // rax
  unsigned __int8 v9; // r8
  void (__fastcall *v10)(void *); // rcx
  void (__fastcall *v11)(void *); // rcx
  _LIST_ENTRY head; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+50h] [rbp+10h] BYREF

  head.Blink = &head;
  head.Flink = &head;
  this->m_PEThread = KeGetCurrentThread();
  KeSetEvent(&this->m_InitEvent.m_Event, 0, 0);
  p_m_WorkList = &this->m_WorkList;
  while ( 1 )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v2);
      if ( p_m_WorkList->Flink == p_m_WorkList )
        break;
      Flink = p_m_WorkList->Flink;
      head.Blink = this->m_WorkList.Blink;
      head.Flink = Flink;
      Flink->Blink = &head;
      this->m_WorkList.Blink->Flink = &head;
      this->m_WorkList.Blink = &this->m_WorkList;
      p_m_WorkList->Flink = p_m_WorkList;
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && (WorkerRoutine = this[-1].m_Reaper.WorkerRoutine) != 0LL )
        FxVerifierLock::Unlock((FxVerifierLock *)WorkerRoutine, irql, v4);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      while ( 1 )
      {
        v7 = head.Flink;
        if ( head.Flink == &head )
          break;
        v8 = head.Flink->Flink;
        if ( head.Flink->Blink != &head || v8->Blink != head.Flink )
          __fastfail(3u);
        head.Flink = head.Flink->Flink;
        v8->Blink = &head;
        ((void (__fastcall *)(_LIST_ENTRY *))v7[1].Flink)(v7[1].Blink);
      }
    }
    if ( this->m_Exit )
      break;
    KeClearEvent(&this->m_WorkEvent.m_Event);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v10 = this[-1].m_Reaper.WorkerRoutine) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v10, irql, v9);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    KeWaitForSingleObject(&this->m_WorkEvent, Executive, 0, 0, 0LL);
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v11 = this[-1].m_Reaper.WorkerRoutine) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v11, irql, v4);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  this->Release(
    this,
    FxSystemThread::StaticThreadThunk,
    527,
    "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxsystemthread.cpp");
  PsTerminateSystemThread(0);
}
