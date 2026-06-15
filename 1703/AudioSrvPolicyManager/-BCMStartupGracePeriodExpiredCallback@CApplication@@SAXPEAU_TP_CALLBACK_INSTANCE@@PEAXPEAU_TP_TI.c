/*
 * XREFs of ?BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000CE00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ??$QueueApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@YAJP8CApplicationManager@@EAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z0@Z @ 0x18000FEF8 (--$QueueApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@YAJP8CApplicationMana.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CApplication::BCMStartupGracePeriodExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        void *a2,
        struct _TP_TIMER *a3)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  void *v7; // rbx
  int v8; // edi

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 8uLL);
  v7 = v5;
  if ( v5 )
    *v5 = a2;
  else
    v7 = 0LL;
  if ( v7 )
  {
    v8 = QueueApplicationManagerWorkItem<BCMStartupGracePeriodExpiredContext>(v6, v7);
    if ( v8 >= 0 )
      v7 = 0LL;
  }
  else
  {
    v8 = -2147024882;
  }
  operator delete(v7, 8uLL);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids, v8);
    }
    AudPolicyLogError("CApplication::BCMStartupGracePeriodExpiredCallback", 2255, v8);
  }
}
