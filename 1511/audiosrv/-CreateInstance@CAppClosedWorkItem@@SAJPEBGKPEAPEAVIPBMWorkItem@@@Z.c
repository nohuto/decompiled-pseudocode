/*
 * XREFs of ?CreateInstance@CAppClosedWorkItem@@SAJPEBGKPEAPEAVIPBMWorkItem@@@Z @ 0x1800026C8
 * Callers:
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z @ 0x180002638 (-OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z.c)
 * Callees:
 *     ?Initialize@CAppClosedWorkItem@@QEAAJPEBG@Z @ 0x18000281C (-Initialize@CAppClosedWorkItem@@QEAAJPEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAppClosedWorkItem::CreateInstance(const unsigned __int16 *a1, int a2, struct IPBMWorkItem **a3)
{
  CAppClosedWorkItem *v6; // rax
  CAppClosedWorkItem *v7; // rdi
  int v8; // esi

  v6 = (CAppClosedWorkItem *)operator new(0x18uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 1) = 0LL;
    *(_QWORD *)v6 = &CAppClosedWorkItem::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    *((_DWORD *)v7 + 4) = a2;
    v8 = CAppClosedWorkItem::Initialize(v7, a1);
    if ( v8 >= 0 )
    {
      *a3 = v7;
      v7 = 0LL;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  if ( v7 )
    (*(void (__fastcall **)(CAppClosedWorkItem *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1LL);
  if ( v8 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      32LL,
      &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      (unsigned int)v8);
  }
  return (unsigned int)v8;
}
