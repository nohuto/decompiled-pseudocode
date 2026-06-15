/*
 * XREFs of ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800A06B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?CreateInstance@CProcessCategoryDowngradedWorkItem@@SAJPEAVCProcess@@PEAPEAVIPBMWorkItem@@@Z @ 0x1800A3F78 (-CreateInstance@CProcessCategoryDowngradedWorkItem@@SAJPEAVCProcess@@PEAPEAVIPBMWorkItem@@@Z.c)
 */

void __fastcall CProcess::InactivityTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        volatile signed __int32 *a2,
        struct _TP_TIMER *a3)
{
  int v3; // eax
  struct IPBMWorkItem *v4; // rdi
  int v5; // esi
  struct IPBMWorkItem *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  _InterlockedIncrement(a2 + 2);
  v3 = CProcessCategoryDowngradedWorkItem::CreateInstance((struct CProcess *)a2, &v6);
  v4 = v6;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IPBMWorkItem *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 >= 0 )
      v4 = 0LL;
  }
  if ( v4 )
    (*(void (__fastcall **)(struct IPBMWorkItem *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
  if ( v5 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, (__int64)&WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids, v5);
  }
}
