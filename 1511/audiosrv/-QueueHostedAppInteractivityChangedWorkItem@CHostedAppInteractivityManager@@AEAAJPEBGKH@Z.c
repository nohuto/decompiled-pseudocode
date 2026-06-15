/*
 * XREFs of ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x180066E58
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x180066F64 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 * Callees:
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x1800349F8 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z @ 0x1800A4100 (-CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z.c)
 *     ??$QueueApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAVHostedAppStateChangedContext@@@Z0@Z @ 0x1800A4460 (--$QueueApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@YAJP8CApplicationManager@@EA.c)
 */

__int64 __fastcall CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4)
{
  int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  void **v7; // rbx
  CHostedAppInteractivity *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v4 = 0;
  if ( g_ApplicationManager )
  {
    v5 = HostedAppStateChangedContext::CreateInstance(a2, a3, a4, &v9);
    v7 = (void **)v9;
    v4 = v5;
    if ( v5 >= 0 )
    {
      v4 = QueueApplicationManagerWorkItem<HostedAppStateChangedContext>(v6, v9);
      if ( v4 >= 0 )
        v7 = 0LL;
    }
    if ( v7 )
      CHostedAppInteractivity::`scalar deleting destructor'(v7);
    if ( v4 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x12u,
        (__int64)&WPP_ec06d0f298c71c199f72f747d2c93494_Traceguids,
        v4);
    }
  }
  return (unsigned int)v4;
}
