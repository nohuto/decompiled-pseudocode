/*
 * XREFs of KiUserCallbackDispatcher @ 0x1800A8B70
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     ZwCallbackReturn @ 0x1800A5160 (ZwCallbackReturn.c)
 *     KiUserCallForwarder @ 0x1800A8A20 (KiUserCallForwarder.c)
 */

void __fastcall __noreturn KiUserCallbackDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  __int64 v7; // [rsp+20h] [rbp+20h]

  v5 = KiUserCallForwarder(v7, (unsigned int)a5, HIDWORD(a5), (__int64)NtCurrentPeb()->KernelCallbackTable);
  v6 = ZwCallbackReturn(0LL, 0, v5);
  RtlRaiseStatus(v6);
}
