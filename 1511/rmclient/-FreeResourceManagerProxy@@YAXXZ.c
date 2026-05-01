/*
 * XREFs of ?FreeResourceManagerProxy@@YAXXZ @ 0x180007288
 * Callers:
 *     DllMain @ 0x18000C8A8 (DllMain.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

void FreeResourceManagerProxy(void)
{
  if ( qword_1800247C0 )
    (**(void (__fastcall ***)(__int64, __int64))qword_1800247C0)(qword_1800247C0, 1LL);
  qword_1800247C0 = 0LL;
  RtlDeleteCriticalSection(&s_csProxy);
}
