/*
 * XREFs of ?InactiveTimerCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180006290
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x180006D00 (-SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CAudioSession::InactiveTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        _QWORD *a2,
        struct _TP_TIMER *a3)
{
  struct _TP_WORK *v4; // rdi
  void (__fastcall *v5)(CAudioThreadPool *__hidden, struct _TP_WORK *); // rsi

  (*(void (__fastcall **)(_QWORD *, _QWORD *, struct _TP_TIMER *))(*a2 + 8LL))(a2, a2, a3);
  v4 = (struct _TP_WORK *)a2[78];
  v5 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WORK *))(*(_QWORD *)ThreadPool + 72LL);
  if ( v5 == CAudioThreadPool::SubmitWork )
    CAudioThreadPool::SubmitWork(ThreadPool, v4);
  else
    v5(ThreadPool, v4);
}
