/*
 * XREFs of ?CreateThread@FxSystemThread@@AEAAJXZ @ 0x1C00A6414
 * Callers:
 *     ?Initialize@FxSystemThread@@AEAAEXZ @ 0x1C00A6658 (-Initialize@FxSystemThread@@AEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxSystemThread::CreateThread(FxSystemThread *this)
{
  unsigned int RefCount; // ecx
  _LIST_ENTRY *Blink; // rax
  NTSTATUS v4; // eax
  unsigned int v5; // edi
  void *threadHandle; // [rsp+50h] [rbp+8h] BYREF

  RefCount = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
    Blink = 0LL;
  else
    Blink = this[-1].m_Reaper.List.Blink;
  if ( Blink )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)Blink,
      FxSystemThread::StaticThreadThunk,
      154,
      "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxsystemthread.cpp",
      TagAddRef,
      RefCount);
  v4 = PsCreateSystemThread(&threadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, FxSystemThread::StaticThreadThunk, this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = ObReferenceObjectByHandle(threadHandle, 0x1FFFFFu, 0LL, 0, &this->m_ThreadPtr, 0LL);
    ZwClose(threadHandle);
  }
  else
  {
    this->m_Initialized = 0;
    WPP_IFR_SF_d(this->m_Globals, 2u, 0x12u, 0xCu, WPP_FxSystemThread_cpp_Traceguids, v4);
    this->Release(
      this,
      FxSystemThread::StaticThreadThunk,
      174,
      "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxsystemthread.cpp");
  }
  return v5;
}
