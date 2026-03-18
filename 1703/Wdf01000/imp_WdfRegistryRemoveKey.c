/*
 * XREFs of imp_WdfRegistryRemoveKey @ 0x1C0084820
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall imp_WdfRegistryRemoveKey(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFKEY__ *Key)
{
  __int64 result; // rax
  NTSTATUS v3; // ebx
  FxRegKey *pKey; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  result = FxVerifierCheckIrqlLevel(pKey->FxPagedObject::FxObject::m_Globals, 0);
  if ( (int)result >= 0 )
  {
    v3 = ZwDeleteKey(pKey->m_Key);
    if ( v3 >= 0 )
      pKey->DeleteObject(pKey);
    return (unsigned int)v3;
  }
  return result;
}
