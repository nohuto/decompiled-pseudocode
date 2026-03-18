/*
 * XREFs of ?Start@FxUsbDevice@@MEAAJXZ @ 0x1C008D730
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?Start@FxIoTarget@@UEAAJXZ @ 0x1C00844C0 (-Start@FxIoTarget@@UEAAJXZ.c)
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0084648 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxUsbDevice::Start(FxUsbDevice *this, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // r8
  int v5; // r14d
  __int64 v6; // r8
  __int64 i; // rbx
  __int64 v8; // r15
  FxUsbInterface *v9; // rsi
  FxUsbPipe *v10; // rcx
  FxVerifierLock *m_OwningThread; // rcx
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *Blink; // rdx
  unsigned int RefCount; // ecx
  FxTagTracker *v15; // rax
  _LIST_ENTRY *v16; // rax
  FxRequestBase *p_Blink; // rdx
  FxIoTarget *v18; // rbx
  _LIST_ENTRY head; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+68h] [rbp+28h] BYREF

  v5 = FxIoTarget::Start(this, a2, a3);
  if ( v5 >= 0 )
  {
    head.Blink = &head;
    head.Flink = &head;
    FxNonPagedObject::Lock(this, &irql, v4);
    for ( i = 0LL; (unsigned int)i < this->m_NumInterfaces; i = (unsigned int)(i + 1) )
    {
      v8 = 0LL;
      v9 = this->m_Interfaces[i];
      if ( v9->m_NumberOfConfiguredPipes )
      {
        do
        {
          LOBYTE(v6) = 1;
          v10 = v9->m_ConfiguredPipes[v8];
          v10->GotoStartState(v10, &head, v6);
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < v9->m_NumberOfConfiguredPipes );
      }
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (m_OwningThread = (FxVerifierLock *)this[-1].m_InterfaceIterationLock.m_OwningThread) != 0LL )
    {
      FxVerifierLock::Unlock(m_OwningThread, irql, v6);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    }
    Flink = head.Flink;
    if ( head.Flink == &head )
      goto LABEL_18;
    do
    {
      Blink = Flink[2].Blink;
      RefCount = _InterlockedIncrement((volatile signed __int32 *)&Blink->Blink + 1);
      if ( SLOBYTE(Blink[1].Blink) >= 0 )
        v15 = 0LL;
      else
        v15 = (FxTagTracker *)Blink[-2].Flink;
      if ( v15 )
        FxTagTracker::UpdateTagHistory(
          v15,
          this,
          571,
          "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp",
          TagAddRef,
          RefCount);
      Flink = Flink->Flink;
    }
    while ( Flink != &head );
    while ( 1 )
    {
      Flink = head.Flink;
LABEL_18:
      if ( Flink == &head )
        break;
      v16 = Flink->Flink;
      if ( Flink->Blink != &head || v16->Blink != Flink )
        __fastfail(3u);
      head.Flink = Flink->Flink;
      v16->Blink = &head;
      p_Blink = (FxRequestBase *)&Flink[-8].Blink;
      v18 = (FxIoTarget *)Flink[2].Blink;
      FxIoTarget::SubmitPendedRequest(v18, p_Blink);
      v18->Release(v18, this, 591, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
    }
  }
  return (unsigned int)v5;
}
