/*
 * XREFs of ?FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C002E464
 * Callers:
 *     imp_WdfPdoInitAddDeviceText @ 0x1C002E2F0 (imp_WdfPdoInitAddDeviceText.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 */

wchar_t *__fastcall FxDuplicateUnicodeStringToString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Source)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _LIST_ENTRY *Caller; // [rsp+38h] [rbp+0h]

  v3 = FxPoolAllocator(
         FxDriverGlobals,
         (_LIST_ENTRY *)&FxDriverGlobals->FxPoolFrameworks,
         1u,
         Source->Length + 2LL,
         FxDriverGlobals->Tag,
         Caller);
  v4 = v3;
  if ( v3 )
  {
    memmove(v3, Source->Buffer, Source->Length);
    *((_WORD *)v4 + ((unsigned __int64)Source->Length >> 1)) = 0;
  }
  return (wchar_t *)v4;
}
