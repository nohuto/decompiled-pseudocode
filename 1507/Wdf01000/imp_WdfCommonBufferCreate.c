/*
 * XREFs of imp_WdfCommonBufferCreate @ 0x1C00600C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C00090AC (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ??0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z @ 0x1C005CB30 (--0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfCommonBufferCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaEnabler,
        unsigned __int64 Length,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBufferHandle)
{
  FxDmaEnabler *v7; // rcx
  __int64 Offset; // r8
  WDFCOMMONBUFFER__ **v9; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  __int64 result; // rax
  unsigned int _a1; // edi
  unsigned __int16 v14; // r9
  FxCommonBuffer *v15; // rax
  FxCommonBuffer *v16; // rax
  FxCommonBuffer *v17; // rdi
  int CommonBuffer; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  FxDmaEnabler *pDmaEnabler; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  void *handle; // [rsp+78h] [rbp+10h] BYREF

  if ( !DmaEnabler )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1400uLL);
  v7 = (FxDmaEnabler *)(~DmaEnabler & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (DmaEnabler & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxDmaEnabler *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 5120 )
  {
    pDmaEnabler = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pDmaEnabler, (void *)DmaEnabler, 0x1400u, Offset);
    v7 = pDmaEnabler;
  }
  v9 = CommonBufferHandle;
  m_Globals = v7->m_Globals;
  if ( !CommonBufferHandle )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *CommonBufferHandle = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      LODWORD(handle) = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  if ( !Length )
  {
    _a1 = -1073741811;
    v14 = 10;
LABEL_17:
    WPP_IFR_SF_d(m_Globals, 2u, 0xFu, v14, WPP_FxCommonBufferAPI_cpp_Traceguids, _a1);
    return _a1;
  }
  result = FxValidateObjectAttributes(m_Globals, Attributes, 1, (unsigned __int16)Attributes);
  if ( (int)result < 0 )
    return result;
  v15 = (FxCommonBuffer *)FxObjectHandleAlloc(
                            m_Globals,
                            ExDefaultNonPagedPoolType,
                            0xB8uLL,
                            0,
                            Attributes,
                            0,
                            FxObjectTypeExternal);
  if ( v15 )
  {
    FxCommonBuffer::FxCommonBuffer(v15, m_Globals, pDmaEnabler);
    v17 = v16;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
  {
    _a1 = -1073741670;
    v14 = 11;
    goto LABEL_17;
  }
  CommonBuffer = FxObject::Commit(v17, Attributes, &handle, pDmaEnabler, 1u);
  if ( CommonBuffer < 0
    || (CommonBuffer = FxCommonBuffer::AllocateCommonBuffer(v17, Length, v19, v20), CommonBuffer < 0) )
  {
    FxObject::DeleteFromFailedCreate(v17);
  }
  else
  {
    *v9 = (WDFCOMMONBUFFER__ *)handle;
  }
  return (unsigned int)CommonBuffer;
}
