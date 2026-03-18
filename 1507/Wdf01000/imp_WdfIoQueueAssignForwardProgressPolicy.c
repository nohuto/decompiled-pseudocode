/*
 * XREFs of imp_WdfIoQueueAssignForwardProgressPolicy @ 0x1C000A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C000CA34 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfIoQueueAssignForwardProgressPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY *ForwardProgressPolicy)
{
  FxIoQueue *v4; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int Size; // edx
  unsigned __int8 CurrentIrql; // al
  int v10; // edi
  unsigned __int16 v11; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+58h] [rbp+10h] BYREF
  FxIoQueue *pQueue; // [rsp+68h] [rbp+20h] BYREF

  if ( !Queue )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1003uLL);
  v4 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v4->FxNonPagedObject::FxObject::__vftable);
    v4 = (FxIoQueue *)((char *)v4 - Offset);
  }
  if ( v4->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
    v4 = pQueue;
  }
  m_Globals = v4->m_Globals;
  if ( !ForwardProgressPolicy )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    v13 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v13,
      m_Globals->Public.DriverName,
      (const char *)&v13);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return -1073741808;
  }
  else
  {
    if ( v4->m_SupportForwardProgress )
    {
      v10 = -1073741811;
      WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0x12u, WPP_FxIoQueueApi_cpp_Traceguids, -1073741811);
      v13 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&v13,
        m_Globals->Public.DriverName,
        (const char *)&v13);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
    }
    else
    {
      Size = ForwardProgressPolicy->Size;
      if ( ForwardProgressPolicy->Size == 40 )
      {
        if ( ForwardProgressPolicy->ForwardProgressReservedPolicy != WdfIoForwardProgressReservedPolicyUseExamine
          || ForwardProgressPolicy->ForwardProgressReservePolicySettings.Policy.ExaminePolicy.EvtIoWdmIrpForForwardProgress )
        {
          if ( ForwardProgressPolicy->TotalForwardProgressRequests )
            return FxIoQueue::AssignForwardProgressPolicy(v4, ForwardProgressPolicy);
          v11 = 21;
        }
        else
        {
          v11 = 20;
        }
        v10 = -1073741811;
        WPP_IFR_SF_d(m_Globals, 2u, 0xDu, v11, WPP_FxIoQueueApi_cpp_Traceguids, -1073741811);
      }
      else
      {
        v10 = -1073741820;
        WPP_IFR_SF_DDd(v4->m_Globals, Size, 0xDu, 0x13u, WPP_FxIoQueueApi_cpp_Traceguids, Size, 40, -1073741820);
      }
    }
    return v10;
  }
}
