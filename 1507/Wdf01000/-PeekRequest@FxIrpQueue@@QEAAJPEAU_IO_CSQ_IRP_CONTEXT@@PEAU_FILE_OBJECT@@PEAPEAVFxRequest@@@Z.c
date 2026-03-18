/*
 * XREFs of ?PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z @ 0x1C0078B9C
 * Callers:
 *     ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C0075088 (-PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxIrpQueue::PeekRequest(
        FxIrpQueue *this,
        _IO_CSQ_IRP_CONTEXT *TagContext,
        _FILE_OBJECT *FileObject,
        _IO_CSQ_IRP_CONTEXT **ppOutRequest)
{
  FxIrpQueue *Flink; // r10
  bool v6; // r11
  _IO_CSQ_IRP_CONTEXT *m_LockObject; // rbx
  _IO_CSQ_IRP_CONTEXT *v8; // rbx
  unsigned int RefCount; // edx
  FxTagTracker *Csq; // rcx
  __int64 result; // rax
  int v12; // r8d

  Flink = (FxIrpQueue *)this->m_Queue.Flink;
  v6 = TagContext == 0LL;
  if ( (FxIrpQueue *)this->m_Queue.Flink == this )
  {
LABEL_10:
    if ( !TagContext )
      return 2147483674LL;
    result = 3221226021LL;
    if ( v6 )
      return 2147483674LL;
    return result;
  }
  while ( 1 )
  {
    if ( BYTE4(Flink[-3].m_LockObject) )
      goto LABEL_9;
    m_LockObject = (_IO_CSQ_IRP_CONTEXT *)Flink[-1].m_LockObject;
    if ( !v6 )
    {
      v6 = m_LockObject == TagContext;
      goto LABEL_9;
    }
    if ( !FileObject )
      break;
    if ( *(_FILE_OBJECT **)&Flink->m_LockObject->m_SpinLock.m_DbgFlagIsInitialized == FileObject )
    {
      v8 = m_LockObject - 5;
      RefCount = _InterlockedIncrement((volatile signed __int32 *)&v8->Irp + 1);
      if ( SLOBYTE(v8[1].Type) >= 0 )
        Csq = 0LL;
      else
        Csq = (FxTagTracker *)v8[-2].Csq;
      if ( Csq )
      {
        v12 = 432;
LABEL_17:
        FxTagTracker::UpdateTagHistory(
          Csq,
          0LL,
          v12,
          "minkernel\\wdf\\framework\\shared\\core\\fxirpqueue.cpp",
          TagAddRef,
          RefCount);
        goto LABEL_18;
      }
      goto LABEL_18;
    }
LABEL_9:
    Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
    if ( Flink == this )
      goto LABEL_10;
  }
  v8 = m_LockObject - 5;
  RefCount = _InterlockedIncrement((volatile signed __int32 *)&v8->Irp + 1);
  if ( SLOBYTE(v8[1].Type) >= 0 )
    Csq = 0LL;
  else
    Csq = (FxTagTracker *)v8[-2].Csq;
  if ( Csq )
  {
    v12 = 447;
    goto LABEL_17;
  }
LABEL_18:
  *ppOutRequest = v8;
  return 0LL;
}
