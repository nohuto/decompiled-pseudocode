/*
 * XREFs of DpiDxgkDdiUnload @ 0x1C002FF50
 * Callers:
 *     DpiCleanup @ 0x1C019A1BC (DpiCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     TemplateEventDescriptor @ 0x1C001E79C (TemplateEventDescriptor.c)
 */

_QWORD *__fastcall DpiDxgkDdiUnload(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *result; // rax

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    TemplateEventDescriptor(a1, &EventEnterDdiUnload);
  (*(void (**)(void))(a1 + 248))();
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    TemplateEventDescriptor(v3, &EventExitDdiUnload);
  result = (_QWORD *)WdLogNewEntry5_WdTrace(v3, v2, v4, v5);
  result[3] = a1;
  result[4] = 0LL;
  result[5] = 0LL;
  result[6] = 0LL;
  result[7] = 0LL;
  return result;
}
