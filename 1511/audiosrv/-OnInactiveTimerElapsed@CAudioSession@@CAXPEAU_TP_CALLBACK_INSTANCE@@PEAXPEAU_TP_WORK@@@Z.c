/*
 * XREFs of ?OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180039F50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800257E0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x180026030 (-DeleteInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180026448 (-StateCheckExpired@CAudioSession@@AEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

void __fastcall CAudioSession::OnInactiveTimerElapsed(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 (__fastcall *v5)(CAudioSession *); // rdi

  v3 = (struct _RTL_CRITICAL_SECTION *)(a2 + 728);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 728));
  if ( *((_QWORD *)a2 + 96) )
  {
    CAudioSession::DeleteInactiveTimer((CAudioSession *)a2);
    LeaveCriticalSection(v3);
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 135LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, a2);
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
