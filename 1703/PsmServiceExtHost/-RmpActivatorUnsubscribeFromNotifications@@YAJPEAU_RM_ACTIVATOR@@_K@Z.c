/*
 * XREFs of ?RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x180003CE8
 * Callers:
 *     ?RmSrvHostNotificationUnsubscribe@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x180002DD4 (-RmSrvHostNotificationUnsubscribe@@YAJPEAU_RM_ACTIVATOR@@_K@Z.c)
 * Callees:
 *     ?RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z @ 0x1800022E8 (-RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z.c)
 *     ?RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180003E90 (-RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall RmpActivatorUnsubscribeFromNotifications(struct _RM_ACTIVATOR *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // rbx
  int v4; // esi
  int v5; // eax
  unsigned __int64 v6; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 5);
  v4 = *((_BYTE *)a1 + 48) & 1;
  if ( !v3 )
    return (unsigned int)-1073741275;
  do
  {
    v5 = RmpHostSubscriptionCompareForRtlTree(&v8, (struct _RTL_BALANCED_NODE *)v3);
    if ( v5 < 0 )
    {
      v6 = *(_QWORD *)v3;
    }
    else
    {
      if ( v5 <= 0 )
        break;
      v6 = *(_QWORD *)(v3 + 8);
    }
    if ( v4 && v6 )
      v3 ^= v6;
    else
      v3 = v6;
  }
  while ( v3 );
  if ( v3 )
  {
    RmpHostSubscriptionCleanup((struct _RM_HOST_SUBSCRIPTION *)(v3 - 24), 0);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)(v3 - 24));
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v2;
}
