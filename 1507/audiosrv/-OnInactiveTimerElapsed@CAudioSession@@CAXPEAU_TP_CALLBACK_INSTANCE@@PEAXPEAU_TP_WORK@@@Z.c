/*
 * XREFs of ?OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800320C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x18000EDE0 (-DeleteInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x18000F1F8 (-StateCheckExpired@CAudioSession@@AEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

void __fastcall CAudioSession::OnInactiveTimerElapsed(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 (__fastcall *v5)(CAudioSession *); // rdi

  v3 = (struct _RTL_CRITICAL_SECTION *)(a2 + 576);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 576));
  if ( *((_QWORD *)a2 + 77) )
  {
    CAudioSession::DeleteInactiveTimer((CAudioSession *)a2);
    LeaveCriticalSection(v3);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        135LL,
        &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        a2);
    }
    CAudioSession::StateCheckExpired((CAudioSession *)a2);
  }
  else
  {
    LeaveCriticalSection(v3);
  }
  v5 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)a2 + 16LL);
  if ( v5 == CAudioSession::Release )
    CAudioSession::Release((CAudioSession *)a2);
  else
    v5((CAudioSession *)a2);
}
