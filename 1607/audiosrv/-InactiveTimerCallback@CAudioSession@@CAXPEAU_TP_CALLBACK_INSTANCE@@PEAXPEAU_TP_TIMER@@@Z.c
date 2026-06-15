/*
 * XREFs of ?InactiveTimerCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180029C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSession::InactiveTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        _QWORD *a2,
        struct _TP_TIMER *a3)
{
  struct _TP_WORK *v4; // rdx
  void (__fastcall *v5)(CAudioThreadPool *, struct _TP_WORK *); // rax

  (*(void (__fastcall **)(_QWORD *, _QWORD *, struct _TP_TIMER *))(*a2 + 8LL))(a2, a2, a3);
  v4 = (struct _TP_WORK *)a2[97];
  v5 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_WORK *))(*(_QWORD *)ThreadPool + 72LL);
  if ( v5 == CAudioThreadPool::SubmitWork )
    CAudioThreadPool::SubmitWork(ThreadPool, v4);
  else
    v5(ThreadPool, v4);
}
