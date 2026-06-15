/*
 * XREFs of ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x18002D790
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x18002D818 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 * Callees:
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x180007F94 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     ??$QueueApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAVHostedAppStateChangedContext@@@Z0@Z @ 0x18002D20C (--$QueueApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@YAJP8CApplicationManager@@EA.c)
 *     ?CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z @ 0x18002D2A8 (-CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
        CHostedAppInteractivityManager *this,
        unsigned __int16 *a2,
        int a3,
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
      v4 = QueueApplicationManagerWorkItem<HostedAppStateChangedContext>(v6, (__int64)v9);
      if ( v4 >= 0 )
        v7 = 0LL;
    }
    if ( v7 )
      CHostedAppInteractivity::`scalar deleting destructor'(v7);
    if ( v4 < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        18LL,
        &WPP_2446938fd9ab7f1a8cd6a05396c644b3_Traceguids,
        (unsigned int)v4);
    }
  }
  return (unsigned int)v4;
}
