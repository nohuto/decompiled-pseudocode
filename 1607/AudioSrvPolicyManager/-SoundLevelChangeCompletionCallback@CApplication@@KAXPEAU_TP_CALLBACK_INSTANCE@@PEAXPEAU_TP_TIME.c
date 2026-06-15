/*
 * XREFs of ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000C240
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18000B818 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 */

void __fastcall CApplication::SoundLevelChangeCompletionCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_TIMER *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx

  v3 = (struct _RTL_CRITICAL_SECTION *)(a2 + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 128));
  *((_DWORD *)a2 + 44) = 0;
  LeaveCriticalSection(v3);
  CApplication::ProcessPendingSoundLevelNotification((CApplication *)a2);
  CApplication::ProcessPendingPLMExemptionChange((struct _RTL_CRITICAL_SECTION *)a2);
}
