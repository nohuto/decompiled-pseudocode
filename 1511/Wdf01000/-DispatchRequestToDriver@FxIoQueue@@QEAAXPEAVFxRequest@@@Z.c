/*
 * XREFs of ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000AC10
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0055834 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0055B38 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0069D34 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_Lqd @ 0x1C0081EEC (WPP_IFR_SF_Lqd.c)
 *     ?Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C008246C (-Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA1A8 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::DispatchRequestToDriver(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  WDFQUEUE__ *v6; // r15
  int m_CompletionState; // eax
  unsigned int v8; // edx
  unsigned int v9; // r8d
  unsigned __int16 m_ObjectSize; // cx
  WDFREQUEST__ *_a1; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 MajorFunction; // si
  _IO_STACK_LOCATION *v14; // rcx
  unsigned int LowPart; // esi
  unsigned __int64 Options; // r12
  unsigned __int64 v17; // r13
  FxCallbackLock *m_CallbackLock; // rcx
  FxCallbackLock *v19; // rcx
  _IO_STACK_LOCATION *v20; // rcx
  unsigned int v21; // esi
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r13
  FxCallbackLock *v24; // rcx
  __int64 v25; // rdx
  FxCallbackLock *v26; // rcx
  unsigned __int8 v27; // r8
  _FX_DRIVER_GLOBALS *v28; // rdx
  const void *v29; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned int Length; // esi
  const void *_a2; // rdi
  __int64 v33; // r8
  unsigned int v34; // esi
  const void *v35; // rdi
  const void *v36; // rax
  const void *v37; // rdi
  const void *v38; // rdi
  __int16 m_VerifierFlags; // di
  unsigned __int8 v40; // r8
  unsigned __int8 v41[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int8 v42; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int8 v43; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int8 v44; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+B8h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  if ( pRequest->m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(pRequest, &PreviousIrql, a3);
    v28 = pRequest->m_Globals;
    if ( v28->FxVerifierOn )
      FxRequest::Vf_VerifyRequestIsNotCompleted(pRequest, v28);
    FxNonPagedObject::Unlock(pRequest, PreviousIrql, v27);
  }
  v6 = 0LL;
  if ( pRequest->m_Completed )
  {
    if ( pRequest->m_ObjectSize )
      v29 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v29 = 0LL;
    WPP_IFR_SF_q(pRequest->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v29);
    FxVerifierDbgBreakPoint(pRequest->m_Globals);
  }
  else
  {
    m_CompletionState = pRequest->m_CompletionState;
    pRequest->m_CompletionState = 1;
    if ( !m_CompletionState )
    {
      v8 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        Blink = pRequest[-1].m_ForwardProgressList.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x74617453,
            1812,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v8);
      }
    }
  }
  if ( m_Globals->FxVerifierOn )
    FxRequestBase::SetVerifierFlags(pRequest, 9);
  else
    pRequest->Release(
      pRequest,
      (void *)1952543827,
      3194,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  m_ObjectSize = pRequest->m_ObjectSize;
  if ( m_ObjectSize )
    _a1 = (WDFREQUEST__ *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  CurrentStackLocation = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction == 3 )
  {
    if ( !this->m_IoRead.Method )
      goto LABEL_34;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length || this->m_AllowZeroLengthRequests )
    {
      pRequest->m_Presented = 1;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x31u, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1);
      if ( this->m_ObjectSize )
        v6 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      FxIoQueueIoWrite::Invoke((FxIoQueueIoWrite *)&this->m_IoRead, v6, _a1, Length);
      goto LABEL_21;
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x30u, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1, _a2);
    }
    FxRequest::Complete(pRequest, 0);
    if ( m_Globals->FxVerifierOn )
    {
      v33 = 3236LL;
      goto LABEL_114;
    }
  }
  else
  {
    if ( MajorFunction != 4 )
    {
      if ( MajorFunction == 14 )
      {
        if ( this->m_IoDeviceControl.Method )
        {
          pRequest->m_Presented = 1;
          if ( m_Globals->FxVerboseOn )
            WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x34u, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1);
          v14 = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
          LowPart = v14->Parameters.Read.ByteOffset.LowPart;
          Options = v14->Parameters.Create.Options;
          v17 = v14->Parameters.Read.Length;
          if ( this->m_ObjectSize )
            v6 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_IoDeviceControl.Method )
            goto LABEL_21;
          m_CallbackLock = this->m_IoDeviceControl.m_CallbackLock;
          v42 = 0;
          if ( m_CallbackLock )
            m_CallbackLock->Lock(m_CallbackLock, &v42);
          this->m_IoDeviceControl.Method(v6, _a1, v17, Options, LowPart);
          v19 = this->m_IoDeviceControl.m_CallbackLock;
          if ( !v19 )
            goto LABEL_21;
          v25 = v42;
LABEL_46:
          v19->Unlock(v19, v25);
LABEL_21:
          if ( !m_Globals->FxVerifierOn )
            return;
          FxNonPagedObject::Lock(pRequest, v41, v9);
          m_VerifierFlags = pRequest->m_VerifierFlags;
          FxNonPagedObject::Unlock(pRequest, v41[0], v40);
          if ( (m_VerifierFlags & 4) == 0 )
            FxRequestBase::ClearVerifierFlags(pRequest, 8);
          v33 = 3440LL;
LABEL_114:
          pRequest->Release(
            pRequest,
            (void *)1952543827,
            v33,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          return;
        }
      }
      else if ( MajorFunction == 15 && this->m_IoInternalDeviceControl.Method )
      {
        pRequest->m_Presented = 1;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x35u, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1);
        v20 = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
        v21 = v20->Parameters.Read.ByteOffset.LowPart;
        v22 = v20->Parameters.Create.Options;
        v23 = v20->Parameters.Read.Length;
        if ( this->m_ObjectSize )
          v6 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_IoInternalDeviceControl.Method )
          goto LABEL_21;
        v24 = this->m_IoInternalDeviceControl.m_CallbackLock;
        v43 = 0;
        if ( v24 )
          v24->Lock(v24, &v43);
        this->m_IoInternalDeviceControl.Method(v6, _a1, v23, v22, v21);
        v19 = this->m_IoInternalDeviceControl.m_CallbackLock;
        if ( !v19 )
          goto LABEL_21;
        v25 = v43;
        goto LABEL_46;
      }
LABEL_34:
      if ( !this->m_IoDefault.Method )
      {
        WPP_IFR_SF_Lqd(
          m_Globals,
          (unsigned __int8)CurrentStackLocation,
          v9,
          0x39u,
          (const _GUID *)&FxObject::`vftable'.DebugExtension,
          MajorFunction,
          pRequest,
          -1073741808);
        FxRequest::Complete(pRequest, -1073741808);
        if ( m_Globals->FxVerifierOn )
        {
          v33 = 3411LL;
          goto LABEL_114;
        }
        return;
      }
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x36u, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1);
      if ( this->m_AllowZeroLengthRequests )
        goto LABEL_38;
      if ( MajorFunction == 3 )
      {
        if ( !pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
        {
          if ( m_Globals->FxVerboseOn )
          {
            if ( this->m_ObjectSize )
              v37 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v37 = 0LL;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x37u, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1, v37);
          }
          FxRequest::Complete(pRequest, 0);
          if ( m_Globals->FxVerifierOn )
          {
            v33 = 3359LL;
            goto LABEL_114;
          }
          return;
        }
      }
      else if ( MajorFunction == 4 && !pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
      {
        FxRequest::Complete(pRequest, 0);
        if ( m_Globals->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v38 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v38 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x38u, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1, v38);
        }
        if ( m_Globals->FxVerifierOn )
        {
          v33 = 3380LL;
          goto LABEL_114;
        }
        return;
      }
LABEL_38:
      pRequest->m_Presented = 1;
      if ( this->m_ObjectSize )
        v6 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_IoDefault.Method )
        goto LABEL_21;
      v26 = this->m_IoDefault.m_CallbackLock;
      v44 = 0;
      if ( v26 )
        v26->Lock(v26, &v44);
      this->m_IoDefault.Method(v6, _a1);
      v19 = this->m_IoDefault.m_CallbackLock;
      if ( !v19 )
        goto LABEL_21;
      v25 = v44;
      goto LABEL_46;
    }
    if ( !this->m_IoWrite.Method )
      goto LABEL_34;
    v34 = CurrentStackLocation->Parameters.Read.Length;
    if ( v34 || this->m_AllowZeroLengthRequests )
    {
      pRequest->m_Presented = 1;
      if ( m_Globals->FxVerboseOn )
      {
        if ( m_ObjectSize )
          v36 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v36 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x33u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v36);
      }
      if ( this->m_ObjectSize )
        v6 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      FxIoQueueIoWrite::Invoke(&this->m_IoWrite, v6, _a1, v34);
      goto LABEL_21;
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v35 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v35 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x32u, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1, v35);
    }
    FxRequest::Complete(pRequest, 0);
    if ( m_Globals->FxVerifierOn )
    {
      v33 = 3275LL;
      goto LABEL_114;
    }
  }
}
