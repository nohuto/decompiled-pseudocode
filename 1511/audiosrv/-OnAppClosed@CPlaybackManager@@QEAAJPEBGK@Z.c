/*
 * XREFs of ?OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z @ 0x180002638
 * Callers:
 *     s_pbmReportAppClosing @ 0x1800025F0 (s_pbmReportAppClosing.c)
 * Callees:
 *     ?CreateInstance@CAppClosedWorkItem@@SAJPEBGKPEAPEAVIPBMWorkItem@@@Z @ 0x1800026C8 (-CreateInstance@CAppClosedWorkItem@@SAJPEBGKPEAPEAVIPBMWorkItem@@@Z.c)
 *     ?QueueWorkItem@CSyncWorkItem@@UEAAJXZ @ 0x18002F330 (-QueueWorkItem@CSyncWorkItem@@UEAAJXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CPlaybackManager::OnAppClosed(CPlaybackManager *this, const unsigned __int16 *a2, unsigned int a3)
{
  int Instance; // eax
  ULONG_PTR v4; // rdi
  int v5; // esi
  __int64 (__fastcall *v6)(ULONG_PTR); // rbx
  int v7; // eax
  ULONG_PTR dwCompletionKey; // [rsp+30h] [rbp+8h] BYREF

  dwCompletionKey = 0LL;
  Instance = CAppClosedWorkItem::CreateInstance(a2, a3, (struct IPBMWorkItem **)&dwCompletionKey);
  v4 = dwCompletionKey;
  v5 = Instance;
  if ( Instance >= 0 )
  {
    v6 = *(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)dwCompletionKey + 16LL);
    v7 = v6 == CSyncWorkItem::QueueWorkItem ? CSyncWorkItem::QueueWorkItem(dwCompletionKey) : v6(dwCompletionKey);
    v5 = v7;
    if ( v7 >= 0 )
      v4 = 0LL;
  }
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
  if ( v5 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_6fe1b6e008144161c17a6b56291d1e1c_Traceguids,
      (unsigned int)v5);
  }
  return (unsigned int)v5;
}
