/*
 * XREFs of ?BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800033D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$QueueApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@YAJP8CApplicationManager@@EAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z0@Z @ 0x180003448 (--$QueueApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@YAJP8CApplicationMana.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

void __fastcall CApplication::BCMStartupGracePeriodExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        void *a2,
        struct _TP_TIMER *a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  void *v6; // rbx
  int v7; // edi

  v4 = operator new(8uLL);
  v6 = v4;
  if ( v4 )
    *v4 = a2;
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = QueueApplicationManagerWorkItem<BCMStartupGracePeriodExpiredContext>(v5, v6);
    if ( v7 >= 0 )
      v6 = 0LL;
  }
  else
  {
    v7 = -2147024882;
  }
  operator delete(v6);
  if ( v7 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      33LL,
      &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
      (unsigned int)v7);
  }
}
