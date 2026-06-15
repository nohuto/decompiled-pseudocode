/*
 * XREFs of ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000EB20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcess::InactivityTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        volatile signed __int32 *a2,
        struct _TP_TIMER *a3)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rbx
  int v6; // edi

  _InterlockedIncrement(a2 + 2);
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
  if ( v5 )
  {
    v5[1] = a2;
    *v5 = &CProcessCategoryDowngradedWorkItem::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    if ( v6 >= 0 )
      v5 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 8LL))(v5, 1LL);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, v6);
    }
    AudPolicyLogError("CProcessCategoryDowngradedWorkItem::CreateInstance", 635, v6);
  }
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Du, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids, v6);
    }
    AudPolicyLogError("CProcess::InactivityTimerCallback", 3307, v6);
  }
}
