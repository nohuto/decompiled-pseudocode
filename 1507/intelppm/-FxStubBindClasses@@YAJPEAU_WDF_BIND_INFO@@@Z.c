/*
 * XREFs of ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0001DC0
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0001A48 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxStubBindClasses(struct _WDF_BIND_INFO *a1)
{
  __int64 result; // rax
  _QWORD *i; // rbx
  __int64 (__fastcall *v3)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, _QWORD *); // rax

  result = 0LL;
  if ( &__KMDF_CLASS_BIND_START > (_UNKNOWN *)&__KMDF_CLASS_BIND_END )
    return 3221225595LL;
  for ( i = &__KMDF_CLASS_BIND_END; i < &__KMDF_CLASS_BIND_END; i += 10 )
  {
    if ( *(_DWORD *)i != 80 )
      return 3221225476LL;
    v3 = (__int64 (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, _QWORD *))i[7];
    off_1C000B118 = i;
    if ( v3 )
      result = v3(WdfVersionBindClass, &unk_1C000B038, WdfDriverGlobals, i);
    else
      result = WdfVersionBindClass(&unk_1C000B038, WdfDriverGlobals, i);
    if ( (int)result < 0 )
      return result;
  }
  return result;
}
