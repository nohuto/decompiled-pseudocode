/*
 * XREFs of ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z @ 0x180008D10
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180008B24 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ?OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z @ 0x180007FC8 (-OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180008C44 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x18002D818 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CPickerHostContext::AddHostedAppInteractivityNotification(
        CPickerHostContext *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4)
{
  int HostedAppInteractivity; // ebx
  CHostedAppInteractivityManager *v8; // rcx
  int v9; // r8d
  int v10; // r9d
  int v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+24h] [rbp-14h] BYREF
  CHostedAppInteractivity *v14; // [rsp+28h] [rbp-10h] BYREF

  v14 = 0LL;
  v12 = 0;
  v13 = 0;
  HostedAppInteractivity = CPickerHostContext::GetHostedAppInteractivity(a1, a2, a3, &v14);
  if ( HostedAppInteractivity >= 0 )
  {
    if ( a4 == 1 )
    {
      v8 = (CHostedAppInteractivityManager *)*((unsigned int *)v14 + 3);
      *((_DWORD *)v14 + 3) = 0;
      v9 = (_DWORD)v8 != 0;
      v10 = 0;
    }
    else
    {
      if ( (unsigned int)(a4 - 2) > 1 )
        goto LABEL_7;
      CHostedAppInteractivity::OnInteractivityNotification(v14, a4 == 2, &v12, &v13);
      v9 = v12;
      v10 = v13;
    }
    if ( v9 )
      HostedAppInteractivity = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(v8, a2, a3, v10);
LABEL_7:
    if ( HostedAppInteractivity >= 0 )
      return (unsigned int)HostedAppInteractivity;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      12LL,
      &WPP_2446938fd9ab7f1a8cd6a05396c644b3_Traceguids,
      (unsigned int)HostedAppInteractivity);
  }
  return (unsigned int)HostedAppInteractivity;
}
