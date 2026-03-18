/*
 * XREFs of imp_WdfIoQueueFindRequest @ 0x1C0004A90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C003527C (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003F608 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00664E8 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0067DA0 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D54BC (-Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall imp_WdfIoQueueFindRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        WDFREQUEST__ *TagRequest,
        WDFFILEOBJECT__ *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        WDFREQUEST__ **OutRequest)
{
  unsigned __int8 v8; // r8
  FxRequest *v9; // rsi
  _FILE_OBJECT *m_FileObject; // r13
  FxIoQueue *Offset; // rcx
  unsigned __int64 v12; // rbx
  WDFREQUEST__ **v13; // r14
  _FX_DRIVER_GLOBALS *v14; // r12
  _WDF_REQUEST_PARAMETERS *v15; // r15
  bool v16; // zf
  FxRequest *v17; // r12
  _FX_DRIVER_GLOBALS *v18; // rbp
  unsigned __int8 v19; // bp
  $4F60D2EEAF443BADC51864A01D9AEC36 *v20; // rdx
  _QWORD *v21; // rcx
  bool v22; // r9
  _QWORD *v23; // r8
  int v24; // edi
  $4F60D2EEAF443BADC51864A01D9AEC36 *v26; // r12
  int v27; // r8d
  unsigned __int64 v28; // r12
  __int16 v29; // ax
  const void *_a1; // rbx
  FxVerifierLock *v31; // rcx
  FxVerifierLock *v32; // rcx
  FxRequest *pTagRequest; // [rsp+48h] [rbp-50h] BYREF
  FxIoQueue *pQueue; // [rsp+50h] [rbp-48h] BYREF
  FxFileObject *pFO; // [rsp+58h] [rbp-40h] BYREF
  FxRequest *v36; // [rsp+60h] [rbp-38h]
  _FX_DRIVER_GLOBALS *v37; // [rsp+68h] [rbp-30h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int8 PreviousIrql; // [rsp+A8h] [rbp+10h] BYREF

  v8 = 0;
  pTagRequest = 0LL;
  v9 = 0LL;
  v36 = 0LL;
  m_FileObject = 0LL;
  pFO = 0LL;
  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  Offset = 0LL;
  v12 = ~Queue & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Queue & 1) != 0 )
  {
    Offset = (FxIoQueue *)*(unsigned __int16 *)v12;
    v12 -= (unsigned __int64)Offset;
  }
  if ( *(_WORD *)(v12 + 8) == 4099 )
  {
    pQueue = (FxIoQueue *)v12;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v12, (void **)&pQueue, (void *)Queue, 0x1003u, (unsigned __int16)Offset);
    v9 = pTagRequest;
    v8 = 0;
    v12 = (unsigned __int64)pQueue;
  }
  v13 = OutRequest;
  v14 = *(_FX_DRIVER_GLOBALS **)(v12 + 16);
  if ( !OutRequest )
    FxVerifierNullBugCheck(v14, retaddr);
  if ( TagRequest )
  {
    FxObjectHandleGetPtr(v14, (unsigned __int64)TagRequest, 0x1008u, (void **)&pTagRequest);
    v9 = pTagRequest;
    v8 = 0;
    v12 = (unsigned __int64)pQueue;
  }
  if ( FileObject )
  {
    FxObjectHandleGetPtr(v14, (unsigned __int64)FileObject, 0x1018u, (void **)&pFO);
    v8 = 0;
    v9 = pTagRequest;
    v12 = (unsigned __int64)pQueue;
    m_FileObject = pFO->m_FileObject.m_FileObject;
  }
  v15 = Parameters;
  if ( Parameters && Parameters->Size < 0x28u )
  {
    WPP_IFR_SF_dd(v14, 2u, 0xDu, 0x11u, WPP_FxIoQueueApi_cpp_Traceguids, Parameters->Size, -1073741582);
    return 3221225714LL;
  }
  v16 = *(_DWORD *)(v12 + 180) == 3;
  v17 = 0LL;
  v18 = *(_FX_DRIVER_GLOBALS **)(v12 + 16);
  v37 = v18;
  if ( !v16 )
  {
    v29 = *(_WORD *)(v12 + 10);
    _a1 = (const void *)(v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v24 = -1073741808;
    if ( !v29 )
      _a1 = 0LL;
    WPP_IFR_SF_qd(v18, 2u, 0xDu, 0x1Fu, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(v18);
    goto LABEL_30;
  }
  if ( v9 )
  {
    if ( v18->FxVerifierOn )
    {
      v24 = FxIoQueue::Vf_VerifyPeekRequest(Offset, v18, v9);
      if ( v24 < 0 )
      {
        v17 = v36;
        goto LABEL_29;
      }
    }
  }
  if ( *(char *)(v12 + 24) < 0 && (v31 = *(FxVerifierLock **)(v12 - 40)) != 0LL )
  {
    FxVerifierLock::Lock(v31, &PreviousIrql, v8);
    v19 = PreviousIrql;
  }
  else
  {
    v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 112));
    PreviousIrql = v19;
  }
  v20 = 0LL;
  v21 = (_QWORD *)(v12 + 192);
  v22 = 1;
  if ( v9 )
  {
    v20 = &v9->120;
    if ( v9 != (FxRequest *)-120LL )
      v22 = 0;
  }
  v23 = (_QWORD *)*v21;
  if ( (_QWORD *)*v21 == v21 )
  {
LABEL_19:
    if ( !v20 || v22 )
    {
      v24 = -2147483622;
      goto LABEL_21;
    }
    v24 = -1073741275;
    goto LABEL_25;
  }
  while ( 1 )
  {
    if ( !*((_BYTE *)v23 - 100) )
    {
      v26 = ($4F60D2EEAF443BADC51864A01D9AEC36 *)*(v23 - 3);
      if ( !v22 )
      {
        v22 = v26 == v20;
        goto LABEL_64;
      }
      if ( !m_FileObject )
      {
        v27 = 447;
        goto LABEL_38;
      }
      if ( *(_FILE_OBJECT **)(v23[2] + 48LL) == m_FileObject )
        break;
    }
LABEL_64:
    v23 = (_QWORD *)*v23;
    if ( v23 == v21 )
    {
      v17 = 0LL;
      goto LABEL_19;
    }
  }
  v27 = 432;
LABEL_38:
  v17 = (FxRequest *)&v26[-5];
  FxObject::AddRef(v17, 0LL, v27, "minkernel\\wdf\\framework\\shared\\core\\fxirpqueue.cpp");
  v24 = 0;
  if ( v15 )
  {
    v24 = FxRequest::GetParameters(v17, v15);
    if ( v24 == -2147483622 )
    {
LABEL_21:
      if ( !m_FileObject && !v9 && *(int *)(v12 + 224) > 0 )
        *(_BYTE *)(v12 + 373) = 1;
    }
  }
LABEL_25:
  if ( *(char *)(v12 + 24) < 0 && (v32 = *(FxVerifierLock **)(v12 - 40)) != 0LL )
    FxVerifierLock::Unlock(v32, v19, (unsigned __int8)v23);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)(v12 + 112), v19);
  if ( v24 >= 0 )
  {
    if ( v37->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v17, 2);
  }
  else
  {
    v17 = v36;
  }
LABEL_29:
  if ( v24 >= 0 )
  {
    if ( v17->m_ObjectSize )
      v28 = (unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v28 = 0LL;
    *v13 = (WDFREQUEST__ *)v28;
  }
  else
  {
LABEL_30:
    *v13 = 0LL;
  }
  return (unsigned int)v24;
}
