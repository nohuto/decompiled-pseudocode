/*
 * XREFs of imp_WdfStringCreate @ 0x1C002D430
 * Callers:
 *     <none>
 * Callees:
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C000FED4 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000FEE4 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfStringCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        const _UNICODE_STRING *UnicodeString,
        _WDF_OBJECT_ATTRIBUTES *StringAttributes,
        WDFSTRING__ **String)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  void **v5; // r15
  __int64 result; // rax
  int v9; // ebx
  FxString *v10; // rax
  FxString *v11; // rax
  FxString *v12; // rbp
  unsigned __int64 ParentObject; // r8
  FxObject *v14; // rdi
  __int64 v15; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 Length; // dx
  int v18; // eax
  unsigned __int16 v19; // r9
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v21; // [rsp+80h] [rbp+8h] BYREF
  FxObject *pParent; // [rsp+90h] [rbp+18h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  v5 = (void **)String;
  if ( StringAttributes )
  {
    if ( StringAttributes->Size == 56 )
    {
      ParentObject = (unsigned __int64)StringAttributes->ParentObject;
      if ( ParentObject )
      {
        v14 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        LOWORD(v15) = 0;
        if ( (ParentObject & 1) != 0 )
        {
          v15 = LOWORD(v14->__vftable);
          v14 = (FxObject *)((char *)v14 - v15);
        }
        LOWORD(String) = 4096;
        if ( v14->m_Type == 4096 )
        {
          pParent = v14;
        }
        else
        {
          FxObjectHandleGetPtrQI(v14, (void **)&pParent, (void *)ParentObject, 0x1000u, v15);
          v14 = pParent;
        }
        m_Globals = v14->m_Globals;
      }
    }
    else
    {
      WPP_IFR_SF_qddd(
        m_Globals,
        (unsigned __int8)UnicodeString,
        6u,
        0xBu,
        WPP_FxValidateFunctions_hpp_Traceguids,
        StringAttributes,
        56,
        StringAttributes->Size,
        -1073741820);
    }
  }
  if ( !v5 )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *v5 = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v21 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&v21,
        m_Globals->Public.DriverName,
        (const char *)&v21);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  result = FxValidateObjectAttributes(m_Globals, StringAttributes, 0, (unsigned __int16)String);
  v9 = result;
  if ( (int)result < 0 )
    return result;
  if ( UnicodeString )
  {
    Length = UnicodeString->Length;
    if ( (UnicodeString->Length & 1) != 0 )
    {
      v18 = Length;
      v19 = 13;
    }
    else
    {
      LOWORD(v18) = UnicodeString->MaximumLength;
      if ( (v18 & 1) != 0 )
      {
        v18 = (unsigned __int16)v18;
        v19 = 14;
      }
      else
      {
        if ( !(_WORD)v18 || UnicodeString->Buffer )
        {
          if ( Length <= (unsigned __int16)v18 )
          {
            v9 = 0;
            goto LABEL_6;
          }
          WPP_IFR_SF_qddd(
            m_Globals,
            Length,
            6u,
            0x10u,
            WPP_FxValidateFunctions_hpp_Traceguids_0,
            UnicodeString,
            Length,
            (unsigned __int16)v18,
            -1073741811);
          return 3221225485LL;
        }
        v18 = (unsigned __int16)v18;
        v19 = 15;
      }
    }
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v19, WPP_FxValidateFunctions_hpp_Traceguids_0, UnicodeString, v18, -1073741811);
    return 3221225485LL;
  }
LABEL_6:
  v10 = (FxString *)FxObjectHandleAlloc(
                      m_Globals,
                      ExDefaultNonPagedPoolType,
                      0x78uLL,
                      0,
                      StringAttributes,
                      0,
                      FxObjectTypeExternal);
  if ( v10 )
  {
    FxString::FxString(v10, m_Globals);
    v12 = v11;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    if ( UnicodeString )
      v9 = FxString::Assign(v12, UnicodeString);
    if ( v9 < 0 || (v9 = FxObject::Commit(v12, StringAttributes, v5, 0LL, 1u), v9 < 0) )
      FxObject::DeleteFromFailedCreate(v12);
  }
  else
  {
    v9 = -1073741670;
    WPP_IFR_SF_d(m_Globals, 2u, 2u, 0xAu, WPP_FxStringAPI_cpp_Traceguids, -1073741670);
  }
  return (unsigned int)v9;
}
