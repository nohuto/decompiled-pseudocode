/*
 * XREFs of imp_WdfRegistryAssignMultiString @ 0x1C007C6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z @ 0x1C002B6DC (-FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z.c)
 *     ?FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z @ 0x1C002B7A4 (-FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryAssignMultiString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        _UNICODE_STRING *ValueName,
        __int64 StringsCollection)
{
  FxRegKey *v7; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 Length; // dx
  int _a2; // eax
  unsigned __int16 v14; // r9
  FxCollection *v15; // rcx
  __int64 v16; // rdx
  FxCollectionInternal *v17; // rcx
  unsigned __int64 v18; // r15
  unsigned int v19; // edi
  wchar_t *v20; // r14
  FxCollectionInternal *v21; // rdx
  NTSTATUS v22; // eax
  FxCollection *pCollection; // [rsp+50h] [rbp-10h] BYREF
  FxRegKey *pKey; // [rsp+58h] [rbp-8h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+88h] [rbp+28h]
  int valid; // [rsp+98h] [rbp+38h] BYREF

  if ( !Key )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1006uLL);
  v7 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Key & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxRegKey *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4102 )
  {
    pKey = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pKey, (void *)Key, 0x1006u, Offset);
    v7 = pKey;
  }
  m_Globals = v7->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  if ( !StringsCollection )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  if ( !m_Globals->FxVerifierOn || (CurrentIrql = KeGetCurrentIrql()) == 0 )
  {
    Length = ValueName->Length;
    if ( (ValueName->Length & 1) != 0 )
    {
      _a2 = Length;
      v14 = 13;
    }
    else
    {
      LOWORD(_a2) = ValueName->MaximumLength;
      if ( (_a2 & 1) != 0 )
      {
        _a2 = (unsigned __int16)_a2;
        v14 = 14;
      }
      else
      {
        if ( !(_WORD)_a2 || ValueName->Buffer )
        {
          if ( Length <= (unsigned __int16)_a2 )
          {
            v15 = (FxCollection *)(~StringsCollection & 0xFFFFFFFFFFFFFFF8uLL);
            LOWORD(v16) = 0;
            if ( (StringsCollection & 1) != 0 )
            {
              v16 = LOWORD(v15->__vftable);
              v15 = (FxCollection *)((char *)v15 - v16);
            }
            if ( v15->m_Type == 4110 )
            {
              pCollection = v15;
            }
            else
            {
              FxObjectHandleGetPtrQI(v15, (void **)&pCollection, (void *)StringsCollection, 0x100Eu, v16);
              v15 = pCollection;
            }
            LOBYTE(valid) = 0;
            if ( v15 )
              v17 = &v15->FxCollectionInternal;
            else
              v17 = 0LL;
            v18 = FxCalculateTotalStringSize(v17, 1u, (unsigned __int8 *)&valid);
            if ( v18 <= 0xFFFFFFFF )
            {
              if ( !(_BYTE)valid )
              {
                WPP_IFR_SF_qid(
                  m_Globals,
                  2u,
                  2u,
                  0x25u,
                  WPP_FxRegistryAPI_cpp_Traceguids,
                  (const void *)Key,
                  StringsCollection,
                  -1073741811);
                return 3221225485LL;
              }
              v20 = (wchar_t *)FxPoolAllocator(
                                 m_Globals,
                                 (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                                 1u,
                                 (unsigned int)v18,
                                 m_Globals->Tag,
                                 retaddr);
              if ( v20 )
              {
                v21 = &pCollection->FxCollectionInternal;
                if ( !pCollection )
                  v21 = 0LL;
                FxCopyMultiSz(v20, v21);
                v22 = ZwSetValueKey(pKey->m_Key, ValueName, 0, 7u, v20, v18);
                v19 = v22;
                if ( v22 < 0 )
                  WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x27u, WPP_FxRegistryAPI_cpp_Traceguids, (const void *)Key, v22);
                FxPoolFree(v20);
              }
              else
              {
                v19 = -1073741670;
                WPP_IFR_SF_qd(
                  m_Globals,
                  2u,
                  2u,
                  0x26u,
                  WPP_FxRegistryAPI_cpp_Traceguids,
                  (const void *)Key,
                  -1073741670);
              }
            }
            else
            {
              v19 = -1073741675;
              WPP_IFR_SF_qd(
                m_Globals,
                2u,
                2u,
                0x24u,
                WPP_FxRegistryAPI_cpp_Traceguids,
                (const void *)StringsCollection,
                -1073741675);
            }
            return v19;
          }
          WPP_IFR_SF_qddd(
            m_Globals,
            Length,
            6u,
            0x10u,
            WPP_FxValidateFunctions_hpp_Traceguids_0,
            ValueName,
            Length,
            (unsigned __int16)_a2,
            -1073741811);
          return 3221225485LL;
        }
        _a2 = (unsigned __int16)_a2;
        v14 = 15;
      }
    }
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v14, WPP_FxValidateFunctions_hpp_Traceguids_0, ValueName, _a2, -1073741811);
    return 3221225485LL;
  }
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  valid = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 3221225488LL;
}
