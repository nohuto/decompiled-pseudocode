/*
 * XREFs of KiUserCallbackDispatcher @ 0x1800A9FB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwCallbackReturn @ 0x1800A64C0 (ZwCallbackReturn.c)
 *     KiUserCallForwarder @ 0x1800A9E60 (KiUserCallForwarder.c)
 */

void __fastcall __noreturn KiUserCallbackDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  __int64 v6; // [rsp+20h] [rbp+20h]

  KiUserCallForwarder(v6, (unsigned int)a5, HIDWORD(a5), (__int64)NtCurrentPeb()->KernelCallbackTable);
  v5 = ZwCallbackReturn();
  RtlRaiseStatus(v5);
}
