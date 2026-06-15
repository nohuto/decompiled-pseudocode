/*
 * XREFs of Template_dsdp @ 0x180022E10
 * Callers:
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180022C40 (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 *     ??1CDriverListener@@UEAA@XZ @ 0x1800231B4 (--1CDriverListener@@UEAA@XZ.c)
 *     ?SubscribeWnfNotification@CDriverListener@@AEAAJU_WNF_STATE_NAME@@PEAPEAU_WNF_USER_SUBSCRIPTION@@P6AJ0KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z@Z @ 0x18002325C (-SubscribeWnfNotification@CDriverListener@@AEAAJU_WNF_STATE_NAME@@PEAPEAU_WNF_USER_SUBSCRIPTION@.c)
 *     ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x1800232E0 (-HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

ULONG Template_dsdp(_DWORD a1, const EVENT_DESCRIPTOR *a2, int a3, const char *a4, ...)
{
  __int64 v4; // rcx
  int v5; // ecx
  const char *v6; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-50h] BYREF
  const char *v9; // [rsp+30h] [rbp-40h]
  int v10; // [rsp+38h] [rbp-38h]
  int v11; // [rsp+3Ch] [rbp-34h]
  va_list v12; // [rsp+40h] [rbp-30h]
  __int64 v13; // [rsp+48h] [rbp-28h]
  va_list v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+90h] [rbp+20h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+30h] BYREF
  va_list va; // [rsp+A0h] [rbp+30h]
  va_list va1; // [rsp+A8h] [rbp+38h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v17 = va_arg(va1, _QWORD);
  v16 = a3;
  UserData.Ptr = (ULONGLONG)&v16;
  *(_QWORD *)&UserData.Size = 4LL;
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5;
  }
  v10 = v5;
  v11 = 0;
  v6 = "NULL";
  if ( a4 )
    v6 = a4;
  v13 = 4LL;
  v9 = v6;
  v15 = 8LL;
  va_copy(v12, va);
  va_copy(v14, va1);
  return EventWrite(0LL, a2, 4u, &UserData);
}
