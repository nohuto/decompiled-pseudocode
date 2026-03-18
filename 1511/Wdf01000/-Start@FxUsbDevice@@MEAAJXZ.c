/*
 * XREFs of ?Start@FxUsbDevice@@MEAAJXZ @ 0x1C007CAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?Start@FxIoTarget@@UEAAJXZ @ 0x1C0076180 (-Start@FxIoTarget@@UEAAJXZ.c)
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00762E8 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxUsbDevice::Start(FxUsbDevice *this, __int64 a2, __int64 a3)
{
  int v4; // esi
  unsigned __int8 v5; // r8
  __int64 v6; // r8
  __int64 i; // rbx
  __int64 v8; // r15
  FxUsbInterface *v9; // r14
  FxUsbPipe *v10; // rcx
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *v12; // rax
  FxRequestBase *p_Blink; // rdx
  FxIoTarget *Blink; // rbx
  _LIST_ENTRY head; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+68h] [rbp+28h] BYREF

  v4 = FxIoTarget::Start(this, a2, a3);
  if ( v4 >= 0 )
  {
    head.Blink = &head;
    head.Flink = &head;
    FxNonPagedObject::Lock(this, &irql, v5);
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
    FxNonPagedObject::Unlock(this, irql, v6);
    Flink = head.Flink;
    if ( head.Flink == &head )
      goto LABEL_9;
    do
    {
      FxObject::AddRef(
        (FxObject *)Flink[2].Blink,
        this,
        571,
        "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
      Flink = Flink->Flink;
    }
    while ( Flink != &head );
    while ( 1 )
    {
      Flink = head.Flink;
LABEL_9:
      if ( Flink == &head )
        break;
      v12 = Flink->Flink;
      if ( Flink->Blink != &head || v12->Blink != Flink )
        __fastfail(3u);
      head.Flink = Flink->Flink;
      v12->Blink = &head;
      p_Blink = (FxRequestBase *)&Flink[-8].Blink;
      Blink = (FxIoTarget *)Flink[2].Blink;
      FxIoTarget::SubmitPendedRequest(Blink, p_Blink);
      Blink->Release(Blink, this, 591, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
    }
  }
  return (unsigned int)v4;
}
