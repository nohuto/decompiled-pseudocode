/*
 * XREFs of pfns @ 0x180009230
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009508 @ 0x180009508 (sub_180009508.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall pfns(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context)
{
  HMODULE v4; // rdi

  CallbackMayRunLong(Instance);
  sub_180009508(Context);
  v4 = (HMODULE)Context[9];
  Context[9] = 0LL;
  (*(void (__fastcall **)(_QWORD *))(*Context + 16LL))(Context);
  FreeLibraryWhenCallbackReturns(Instance, v4);
}
