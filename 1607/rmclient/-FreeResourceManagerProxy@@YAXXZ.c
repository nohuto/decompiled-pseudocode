/*
 * XREFs of ?FreeResourceManagerProxy@@YAXXZ @ 0x1800019DC
 * Callers:
 *     DllMain @ 0x180008398 (DllMain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 */

void FreeResourceManagerProxy(void)
{
  if ( qword_180016708 )
    (**(void (__fastcall ***)(__int64, __int64))qword_180016708)(qword_180016708, 1LL);
  qword_180016708 = 0LL;
  RtlDeleteCriticalSection(&s_csProxy);
}
