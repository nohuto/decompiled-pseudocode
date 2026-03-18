/*
 * XREFs of ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00053C0
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0031C94 (WPP_IFR_SF_qqxd.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_Lqd @ 0x1C0095214 (WPP_IFR_SF_Lqd.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C0095EBC (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 *     ?Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C0095F34 (-Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::DispatchRequestToDriver(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  WDFQUEUE__ *v6; // r15
  int m_CompletionState; // eax
  unsigned int v8; // edx
  __int64 v9; // r8
  unsigned __int16 v10; // r9
  unsigned __int16 m_ObjectSize; // cx
  WDFREQUEST__ *_a1; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 MajorFunction; // si
  _IO_STACK_LOCATION *v15; // rcx
  unsigned int LowPart; // esi
  unsigned __int64 Options; // r12
  unsigned __int64 v18; // r13
  FxCallbackLock *m_CallbackLock; // rcx
  FxCallbackLock *v20; // rcx
  _IO_STACK_LOCATION *v21; // rcx
  unsigned int v22; // esi
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r13
  FxCallbackLock *v25; // rcx
  FxCallbackLock *v26; // rcx
  unsigned __int8 v27; // r8
  _FX_DRIVER_GLOBALS *v28; // rdx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  const void *v30; // rax
  _FX_DRIVER_GLOBALS *v31; // rax
  __int64 v32; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v34; // r8
  char m_ObjectFlags; // al
  FxVerifierLock *v36; // rcx
  unsigned int Length; // esi
  const void *_a2; // rdi
  FxDeviceBase *m_DeviceBase; // rdi
  _FX_DRIVER_GLOBALS *v40; // rcx
  const void *v41; // rax
  __int64 v42; // r8
  unsigned int v43; // esi
  const void *v44; // rdi
  FxDeviceBase *v45; // rdi
  _FX_DRIVER_GLOBALS *v46; // rcx
  const void *v47; // rax
  const void *v48; // rax
  const void *v49; // rdi
  FxDeviceBase *v50; // rdi
  _FX_DRIVER_GLOBALS *v51; // rcx
  const void *v52; // rax
  _IRP *m_Irp; // rax
  FxDeviceBase *v54; // rsi
  _FX_DRIVER_GLOBALS *v55; // rcx
  __int64 level; // r8
  const void *v57; // rax
  const void *v58; // rdi
  unsigned __int8 v59; // r8
  __int16 m_VerifierFlags; // di
  FxVerifierLock *v61; // rcx
  unsigned __int8 v62; // r8
  unsigned __int8 v63; // r8
  char v64; // al
  FxVerifierLock *v65; // rcx
  __int64 v66; // r8
  unsigned __int16 v67; // r9
  FxDeviceBase *v68; // rdi
  _FX_DRIVER_GLOBALS *v69; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-88h]
  const _GUID *traceGuida; // [rsp+20h] [rbp-88h]
  unsigned __int8 v72; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int8 v73[3]; // [rsp+51h] [rbp-57h] BYREF
  char v74[20]; // [rsp+54h] [rbp-54h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int8 v76; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int8 v77; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int8 v78; // [rsp+C8h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  if ( pRequest->m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(pRequest, &PreviousIrql, a3);
    v28 = pRequest->m_Globals;
    if ( v28->FxVerifierOn )
      FxRequest::Vf_VerifyRequestIsNotCompleted(pRequest, v28);
    if ( SLOBYTE(pRequest->m_ObjectFlags) < 0
      && (m_ForwardProgressQueue = (FxVerifierLock *)pRequest[-1].m_ForwardProgressQueue) != 0LL )
    {
      FxVerifierLock::Unlock(m_ForwardProgressQueue, PreviousIrql, v27);
    }
    else
    {
      KeReleaseSpinLock(&pRequest->m_NPLock.m_Lock, PreviousIrql);
    }
  }
  v6 = 0LL;
  if ( pRequest->m_Completed )
  {
    if ( pRequest->m_ObjectSize )
      v30 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v30 = 0LL;
    WPP_IFR_SF_q(pRequest->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v30);
    v31 = pRequest->m_Globals;
    *(_DWORD *)v74 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      v31->Public.DriverName,
      v74,
      v31->Public.DriverName,
      v74);
    if ( *(_BYTE *)(v32 + 318) )
      DbgBreakPoint();
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
  {
    FxNonPagedObject::Lock(pRequest, &v76, a3);
    m_ObjectFlags = pRequest->m_ObjectFlags;
    pRequest->m_VerifierFlags |= 9u;
    if ( m_ObjectFlags < 0 && (v36 = (FxVerifierLock *)pRequest[-1].m_ForwardProgressQueue) != 0LL )
      FxVerifierLock::Unlock(v36, v76, v34);
    else
      KeReleaseSpinLock(&pRequest->m_NPLock.m_Lock, v76);
  }
  else
  {
    pRequest->Release(
      pRequest,
      (void *)1952543827,
      3194,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  }
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
      goto LABEL_102;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length || this->m_AllowZeroLengthRequests )
    {
      pRequest->m_Presented = 1;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_q(
          m_Globals,
          5u,
          0xDu,
          0x31u,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          _a1);
      if ( this->m_ObjectSize )
        v6 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      FxIoQueueIoWrite::Invoke((FxIoQueueIoWrite *)&this->m_IoRead, v6, _a1, Length);
      goto LABEL_22;
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qq(
        m_Globals,
        5u,
        0xDu,
        0x30u,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        _a1,
        _a2);
    }
    m_DeviceBase = pRequest->m_DeviceBase;
    v40 = pRequest->m_Globals;
    if ( v40->FxVerboseOn )
    {
      if ( pRequest->m_ObjectSize )
        v41 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v41 = 0LL;
      WPP_IFR_SF_qqxd(
        v40,
        (unsigned __int8)pRequest->m_Irp.m_Irp,
        pRequest->m_Irp.m_Irp->IoStatus.Information,
        0xBu,
        traceGuid,
        v41,
        pRequest->m_Irp.m_Irp,
        pRequest->m_Irp.m_Irp->IoStatus.Information,
        0);
    }
    if ( m_DeviceBase )
      pRequest->m_PriorityBoost = HIBYTE(m_DeviceBase[1].m_Globals);
    else
      pRequest->m_PriorityBoost = 0;
    FxRequest::CompleteInternal(pRequest, 0LL, v9, v10);
    if ( m_Globals->FxVerifierOn )
    {
      v42 = 3236LL;
      goto LABEL_162;
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
            WPP_IFR_SF_q(
              m_Globals,
              5u,
              0xDu,
              0x34u,
              (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
              _a1);
          v15 = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
          LowPart = v15->Parameters.Read.ByteOffset.LowPart;
          Options = v15->Parameters.Create.Options;
          v18 = v15->Parameters.Read.Length;
          if ( this->m_ObjectSize )
            v6 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( this->m_IoDeviceControl.Method )
          {
            m_CallbackLock = this->m_IoDeviceControl.m_CallbackLock;
            v77 = 0;
            if ( m_CallbackLock )
              m_CallbackLock->Lock(m_CallbackLock, &v77);
            this->m_IoDeviceControl.Method(v6, _a1, v18, Options, LowPart);
            v20 = this->m_IoDeviceControl.m_CallbackLock;
            if ( v20 )
              v20->Unlock(v20, v77);
          }
LABEL_22:
          if ( !m_Globals->FxVerifierOn )
            return;
          FxNonPagedObject::Lock(pRequest, &v72, v9);
          m_VerifierFlags = pRequest->m_VerifierFlags;
          if ( SLOBYTE(pRequest->m_ObjectFlags) < 0
            && (v61 = (FxVerifierLock *)pRequest[-1].m_ForwardProgressQueue) != 0LL )
          {
            FxVerifierLock::Unlock(v61, v72, v59);
          }
          else
          {
            KeReleaseSpinLock(&pRequest->m_NPLock.m_Lock, v72);
          }
          if ( (m_VerifierFlags & 4) == 0 )
          {
            FxNonPagedObject::Lock(pRequest, v73, v62);
            v64 = pRequest->m_ObjectFlags;
            pRequest->m_VerifierFlags &= ~8u;
            if ( v64 < 0 && (v65 = (FxVerifierLock *)pRequest[-1].m_ForwardProgressQueue) != 0LL )
              FxVerifierLock::Unlock(v65, v73[0], v63);
            else
              KeReleaseSpinLock(&pRequest->m_NPLock.m_Lock, v73[0]);
          }
          v42 = 3440LL;
LABEL_162:
          pRequest->Release(
            pRequest,
            (void *)1952543827,
            v42,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          return;
        }
      }
      else if ( MajorFunction == 15 && this->m_IoInternalDeviceControl.Method )
      {
        pRequest->m_Presented = 1;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_q(
            m_Globals,
            5u,
            0xDu,
            0x35u,
            (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
            _a1);
        v21 = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
        v22 = v21->Parameters.Read.ByteOffset.LowPart;
        v23 = v21->Parameters.Create.Options;
        v24 = v21->Parameters.Read.Length;
        if ( this->m_ObjectSize )
          v6 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( this->m_IoInternalDeviceControl.Method )
        {
          v25 = this->m_IoInternalDeviceControl.m_CallbackLock;
          v78 = 0;
          if ( v25 )
            v25->Lock(v25, &v78);
          this->m_IoInternalDeviceControl.Method(v6, _a1, v24, v23, v22);
          v26 = this->m_IoInternalDeviceControl.m_CallbackLock;
          if ( v26 )
            v26->Unlock(v26, v78);
        }
        goto LABEL_22;
      }
LABEL_102:
      if ( !this->m_IoDefault.Method )
      {
        WPP_IFR_SF_Lqd(
          m_Globals,
          (unsigned __int8)CurrentStackLocation,
          v9,
          0x39u,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          MajorFunction,
          pRequest,
          -1073741808);
        v68 = pRequest->m_DeviceBase;
        v69 = pRequest->m_Globals;
        if ( v69->FxVerboseOn )
        {
          if ( pRequest->m_ObjectSize )
            v6 = (WDFQUEUE__ *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
          WPP_IFR_SF_qqxd(
            v69,
            pRequest->m_Irp.m_Irp->IoStatus.Information,
            v66,
            0xBu,
            traceGuida,
            v6,
            pRequest->m_Irp.m_Irp,
            pRequest->m_Irp.m_Irp->IoStatus.Information,
            -1073741808);
        }
        if ( v68 )
          pRequest->m_PriorityBoost = HIBYTE(v68[1].m_Globals);
        else
          pRequest->m_PriorityBoost = 0;
        FxRequest::CompleteInternal(pRequest, (_FX_DRIVER_GLOBALS *)0xC0000010LL, v66, v67);
        if ( m_Globals->FxVerifierOn )
        {
          v42 = 3411LL;
          goto LABEL_162;
        }
        return;
      }
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_q(
          m_Globals,
          5u,
          0xDu,
          0x36u,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          _a1);
      if ( !this->m_AllowZeroLengthRequests )
      {
        if ( MajorFunction == 3 )
        {
          if ( !pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
          {
            if ( m_Globals->FxVerboseOn )
            {
              if ( this->m_ObjectSize )
                v49 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v49 = 0LL;
              WPP_IFR_SF_qq(
                m_Globals,
                5u,
                0xDu,
                0x37u,
                (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
                _a1,
                v49);
            }
            v50 = pRequest->m_DeviceBase;
            v51 = pRequest->m_Globals;
            if ( v51->FxVerboseOn )
            {
              if ( pRequest->m_ObjectSize )
                v52 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v52 = 0LL;
              WPP_IFR_SF_qqxd(
                v51,
                (unsigned __int8)pRequest->m_Irp.m_Irp,
                pRequest->m_Irp.m_Irp->IoStatus.Information,
                0xBu,
                traceGuid,
                v52,
                pRequest->m_Irp.m_Irp,
                pRequest->m_Irp.m_Irp->IoStatus.Information,
                0);
            }
            if ( v50 )
              pRequest->m_PriorityBoost = HIBYTE(v50[1].m_Globals);
            else
              pRequest->m_PriorityBoost = 0;
            FxRequest::CompleteInternal(pRequest, 0LL, v9, v10);
            if ( m_Globals->FxVerifierOn )
            {
              v42 = 3359LL;
              goto LABEL_162;
            }
            return;
          }
        }
        else if ( MajorFunction == 4 )
        {
          m_Irp = pRequest->m_Irp.m_Irp;
          if ( !m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
          {
            v54 = pRequest->m_DeviceBase;
            v55 = pRequest->m_Globals;
            if ( v55->FxVerboseOn )
            {
              level = m_Irp->IoStatus.Information;
              if ( pRequest->m_ObjectSize )
                v57 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v57 = 0LL;
              WPP_IFR_SF_qqxd(
                v55,
                (unsigned __int8)pRequest->m_Irp.m_Irp,
                level,
                0xBu,
                traceGuid,
                v57,
                pRequest->m_Irp.m_Irp,
                level,
                0);
            }
            if ( v54 )
              pRequest->m_PriorityBoost = HIBYTE(v54[1].m_Globals);
            else
              pRequest->m_PriorityBoost = 0;
            FxRequest::CompleteInternal(pRequest, 0LL, v9, v10);
            if ( m_Globals->FxVerboseOn )
            {
              if ( this->m_ObjectSize )
                v58 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v58 = 0LL;
              WPP_IFR_SF_qq(
                m_Globals,
                5u,
                0xDu,
                0x38u,
                (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
                _a1,
                v58);
            }
            if ( m_Globals->FxVerifierOn )
            {
              v42 = 3380LL;
              goto LABEL_162;
            }
            return;
          }
        }
      }
      pRequest->m_Presented = 1;
      if ( this->m_ObjectSize )
        v6 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      FxIoQueueIoResume::Invoke((FxIoQueueIoState *)&this->m_IoDefault, v6, _a1);
      goto LABEL_22;
    }
    if ( !this->m_IoWrite.Method )
      goto LABEL_102;
    v43 = CurrentStackLocation->Parameters.Read.Length;
    if ( v43 || this->m_AllowZeroLengthRequests )
    {
      pRequest->m_Presented = 1;
      if ( m_Globals->FxVerboseOn )
      {
        if ( m_ObjectSize )
          v48 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v48 = 0LL;
        WPP_IFR_SF_q(
          m_Globals,
          5u,
          0xDu,
          0x33u,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          v48);
      }
      if ( this->m_ObjectSize )
        v6 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      FxIoQueueIoWrite::Invoke(&this->m_IoWrite, v6, _a1, v43);
      goto LABEL_22;
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v44 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v44 = 0LL;
      WPP_IFR_SF_qq(
        m_Globals,
        5u,
        0xDu,
        0x32u,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        _a1,
        v44);
    }
    v45 = pRequest->m_DeviceBase;
    v46 = pRequest->m_Globals;
    if ( v46->FxVerboseOn )
    {
      if ( pRequest->m_ObjectSize )
        v47 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v47 = 0LL;
      WPP_IFR_SF_qqxd(
        v46,
        (unsigned __int8)pRequest->m_Irp.m_Irp,
        pRequest->m_Irp.m_Irp->IoStatus.Information,
        0xBu,
        traceGuid,
        v47,
        pRequest->m_Irp.m_Irp,
        pRequest->m_Irp.m_Irp->IoStatus.Information,
        0);
    }
    if ( v45 )
      pRequest->m_PriorityBoost = HIBYTE(v45[1].m_Globals);
    else
      pRequest->m_PriorityBoost = 0;
    FxRequest::CompleteInternal(pRequest, 0LL, v9, v10);
    if ( m_Globals->FxVerifierOn )
    {
      v42 = 3275LL;
      goto LABEL_162;
    }
  }
}
