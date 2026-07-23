/*
 * XREFs of LdrpSendDllNotifications @ 0x1800419B0
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x180041840 (LdrpSendPostSnapNotifications.c)
 *     LdrpUnloadNode @ 0x180043080 (LdrpUnloadNode.c)
 *     LdrpCorProcessImports @ 0x1800781A8 (LdrpCorProcessImports.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

NTSTATUS __fastcall LdrpSendDllNotifications(__int64 a1, unsigned int a2)
{
  _UNKNOWN **i; // rdi
  int v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]

  v5 = 0;
  v6 = a1 + 72;
  v7 = a1 + 88;
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_DWORD *)(a1 + 64);
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  for ( i = (_UNKNOWN **)LdrpDllNotificationList; i != &LdrpDllNotificationList; i = (_UNKNOWN **)*i )
    ((void (__fastcall *)(_QWORD, int *, void *))i[2])(a2, &v5, i[3]);
  return RtlLeaveCriticalSection(&LdrpDllNotificationLock);
}
