/*
 * XREFs of ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C006347C
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004C90 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003C1C8 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C00629A4 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000BAF8 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C00124FC (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C001B86C (-GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C00912B4 (WPP_IFR_SF_qLsqd.c)
 */

__int64 __fastcall FxIoQueue::QueueRequest(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  FxRequest *v3; // rdi
  unsigned __int8 v5; // r8
  _FX_IO_QUEUE_STATE _a4; // edx
  _FX_DRIVER_GLOBALS *v7; // r10
  const char *_a5; // r8
  const void *globals; // rcx
  const void *_a3; // rax
  __int64 v11; // r8
  unsigned __int16 v12; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *v15; // rcx
  const void *v16; // rax
  unsigned int *v17; // r8
  unsigned __int16 v18; // r9
  unsigned __int8 v19; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF
  FxRequest *Request; // [rsp+78h] [rbp+10h] BYREF
  _IRP *pIrp; // [rsp+80h] [rbp+18h] BYREF

  Request = pRequest;
  v3 = pRequest;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( v3->m_Reserved )
    FxObject::AddRef(v3, (void *)0x50647746, 2308, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  _a4 = this->m_QueueState;
  if ( (_a4 & 1) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v15 = 0LL;
      if ( v3->m_ObjectSize )
        v16 = (const void *)((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v16 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v16, v15);
    }
    FxRequest::GetIrp(v3, &pIrp, v5);
    v3->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( v3->m_Reserved )
    {
      if ( this->m_Dispatching )
      {
        LOBYTE(v17) = irql;
        FxIoQueue::InsertNewRequestLocked(this, &Request, v17);
        FxNonPagedObject::Unlock(this, irql, v19);
        return 259LL;
      }
      v3 = Request;
    }
    FxIoQueue::DispatchEvents(this, irql, v3, v18);
    return 259LL;
  }
  v7 = this->m_Globals;
  if ( v7->FxVerboseOn )
  {
    _a5 = "power stopping (Drain) in progress,";
    if ( (_a4 & 0x10000) == 0 )
      _a5 = &a5;
    if ( v3->m_ObjectSize )
      globals = (const void *)((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      globals = 0LL;
    if ( this->m_ObjectSize )
      _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a3 = 0LL;
    WPP_IFR_SF_qLsqd(v7, 5u, (unsigned int)_a5, 0x29u, traceGuid, _a3, _a4, _a5, globals, -1073741436);
  }
  FxNonPagedObject::Unlock(this, irql, v5);
  v3->m_Irp.m_Irp->IoStatus.Information = 0LL;
  FxRequest::Complete(v3, 0xC0000184, v11, v12);
  v3->Release(v3, (void *)1886220099, 2335, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  return 3221225860LL;
}
