/*
 * XREFs of ?CreateInstance@CProcessCategoryDowngradedWorkItem@@SAJPEAVCProcess@@PEAPEAVIPBMWorkItem@@@Z @ 0x1800A3F78
 * Callers:
 *     ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800A06B0 (-InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall CProcessCategoryDowngradedWorkItem::CreateInstance(struct CProcess *a1, struct IPBMWorkItem **a2)
{
  unsigned int v3; // ebx
  struct IPBMWorkItem *v5; // rax

  v3 = 0;
  v5 = (struct IPBMWorkItem *)operator new(0x10uLL);
  if ( v5 )
  {
    *((_QWORD *)v5 + 1) = a1;
    *(_QWORD *)v5 = &CProcessCategoryDowngradedWorkItem::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    *a2 = v5;
  }
  else
  {
    v3 = -2147024882;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x16u,
        (__int64)&WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
        -2147024882);
    }
  }
  return v3;
}
