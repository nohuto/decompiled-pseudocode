/*
 * XREFs of imp_WdfStringCreate @ 0x1C0030FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000307C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C001C98C (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030620 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00306B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00348B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfStringCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        const _UNICODE_STRING *UnicodeString,
        _WDF_OBJECT_ATTRIBUTES *StringAttributes,
        WDFSTRING__ **String)
{
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  __int64 result; // rax
  unsigned __int16 v9; // r9
  int v10; // ebx
  FxString *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxObject *pParent; // [rsp+70h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( (int)FxValidateObjectAttributesForParentHandle(
              (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
              StringAttributes,
              0) >= 0 )
  {
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)StringAttributes->ParentObject, 0x1000u, (void **)&pParent);
    DriverName = pParent->m_Globals;
  }
  if ( !String )
    FxVerifierNullBugCheck(DriverName, retaddr);
  *String = 0LL;
  result = FxVerifierCheckIrqlLevel(DriverName, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(DriverName, StringAttributes, 0, v9);
    v10 = result;
    if ( (int)result >= 0 )
    {
      if ( !UnicodeString
        || (result = FxValidateUnicodeString(DriverName, UnicodeString), v10 = result, (int)result >= 0) )
      {
        v11 = (FxString *)FxObjectHandleAlloc(
                            DriverName,
                            ExDefaultNonPagedPoolType,
                            0x78uLL,
                            0,
                            StringAttributes,
                            0,
                            FxObjectTypeExternal);
        if ( v11 )
        {
          FxString::FxString(v11, DriverName);
          v13 = v12;
        }
        else
        {
          v13 = 0LL;
        }
        if ( v13 )
        {
          if ( UnicodeString )
            v10 = FxDuplicateUnicodeString(
                    *(_FX_DRIVER_GLOBALS **)(v13 + 16),
                    UnicodeString,
                    (_UNICODE_STRING *)(v13 + 104));
          if ( v10 < 0
            || (v10 = FxObject::Commit(
                        (FxObject *)v13,
                        (_FX_DRIVER_GLOBALS *)StringAttributes,
                        (void **)String,
                        0LL,
                        1u),
                v10 < 0) )
          {
            FxObject::DeleteFromFailedCreate((FxObject *)v13);
          }
        }
        else
        {
          v10 = -1073741670;
          WPP_IFR_SF_d(DriverName, 2u, 2u, 0xAu, WPP_FxStringAPI_cpp_Traceguids, -1073741670);
        }
        return (unsigned int)v10;
      }
    }
  }
  return result;
}
