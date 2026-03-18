/*
 * XREFs of ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0010910
 * Callers:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0010610 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 * Callees:
 *     WdfVersionUnbindClass_0 @ 0x1C00109D0 (WdfVersionUnbindClass_0.c)
 */

void __fastcall FxStubUnbindClasses(struct _WDF_BIND_INFO *a1)
{
  _QWORD *v1; // rbx
  void (__fastcall *v3)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), struct _WDF_BIND_INFO *, PWDF_DRIVER_GLOBALS, _QWORD *); // rax

  v1 = &Ucx_BIND_INFO;
  if ( off_1C0046498 != &__KMDF_CLASS_BIND_START && &Ucx_BIND_INFO <= off_1C0046498 )
  {
    do
    {
      v3 = (void (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), struct _WDF_BIND_INFO *, PWDF_DRIVER_GLOBALS, _QWORD *))v1[8];
      if ( v3 )
        v3(WdfVersionUnbindClass_0, a1, WdfDriverGlobals, v1);
      else
        WdfVersionUnbindClass_0(a1, WdfDriverGlobals, v1);
      v1 += 10;
    }
    while ( v1 <= (_QWORD *)off_1C0046498 );
  }
}
