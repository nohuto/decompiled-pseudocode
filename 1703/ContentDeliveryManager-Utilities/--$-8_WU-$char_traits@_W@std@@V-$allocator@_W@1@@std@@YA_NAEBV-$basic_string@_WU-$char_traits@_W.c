/*
 * XREFs of ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x18005C670
 * Callers:
 *     ?MakeLaunchUriService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18005B780 (-MakeLaunchUriService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Creat.c)
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x180060CD8 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 *     ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x180061224 (-LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x180065564 (-InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::operator==<wchar_t>(_QWORD *a1, _WORD *a2)
{
  _WORD *v2; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdx
  bool i; // zf
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax

  v2 = a2;
  if ( *a2 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a2[v3] );
  }
  else
  {
    v3 = 0LL;
  }
  v4 = a1[2];
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  v5 = v3;
  if ( v4 < v3 )
    v5 = v4;
  for ( i = v5 == 0; ; i = v5 == 0 )
  {
    if ( i )
    {
      v7 = 0;
      goto LABEL_14;
    }
    if ( *(_WORD *)a1 != *v2 )
      break;
    a1 = (_QWORD *)((char *)a1 + 2);
    ++v2;
    --v5;
  }
  v7 = *(_WORD *)a1 < *v2 ? -1 : 1;
LABEL_14:
  v8 = v7;
  v9 = v4 != v3;
  if ( v4 < v3 )
    v9 = -1;
  if ( v8 )
    v9 = v8;
  return v9 == 0;
}
