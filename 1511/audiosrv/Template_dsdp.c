/*
 * XREFs of Template_dsdp @ 0x1800A8880
 * Callers:
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x18003F478 (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 *     ?SubscribeWnfNotification@CDriverListener@@AEAAJU_WNF_STATE_NAME@@PEAPEAU_WNF_USER_SUBSCRIPTION@@P6AJ0KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z@Z @ 0x180044864 (-SubscribeWnfNotification@CDriverListener@@AEAAJU_WNF_STATE_NAME@@PEAPEAU_WNF_USER_SUBSCRIPTION@.c)
 *     ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x1800A8B80 (-HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z.c)
 *     ?UnsubscribeWnfNotifications@CDriverListener@@AEAAJXZ @ 0x1800A8DE8 (-UnsubscribeWnfNotifications@CDriverListener@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 */

ULONG __fastcall Template_dsdp(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, const char *a4, char a5, char a6)
{
  __int64 v6; // rcx
  int v7; // ecx
  const char *v8; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-50h] BYREF
  const char *v11; // [rsp+30h] [rbp-40h]
  int v12; // [rsp+38h] [rbp-38h]
  int v13; // [rsp+3Ch] [rbp-34h]
  char *v14; // [rsp+40h] [rbp-30h]
  __int64 v15; // [rsp+48h] [rbp-28h]
  char *v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+58h] [rbp-18h]
  int v18; // [rsp+90h] [rbp+20h] BYREF

  v18 = a3;
  UserData.Ptr = (ULONGLONG)&v18;
  *(_QWORD *)&UserData.Size = 4LL;
  if ( a4 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a4[v6] );
    v7 = v6 + 1;
  }
  else
  {
    v7 = 5;
  }
  v12 = v7;
  v13 = 0;
  v8 = "NULL";
  if ( a4 )
    v8 = a4;
  v15 = 4LL;
  v11 = v8;
  v17 = 8LL;
  v14 = &a5;
  v16 = &a6;
  return EventWrite(0LL, a2, 4u, &UserData);
}
