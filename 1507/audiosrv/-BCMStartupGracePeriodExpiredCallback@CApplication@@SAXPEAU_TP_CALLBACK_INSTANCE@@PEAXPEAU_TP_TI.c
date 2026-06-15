/*
 * XREFs of ?BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180005610
 * Callers:
 *     <none>
 * Callees:
 *     ??$QueueApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@YAJP8CApplicationManager@@EAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z0@Z @ 0x180005688 (--$QueueApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@YAJP8CApplicationMana.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
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
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      33LL,
      &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
      (unsigned int)v7);
  }
}
