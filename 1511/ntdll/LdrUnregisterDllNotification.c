/*
 * XREFs of LdrUnregisterDllNotification @ 0x1800C9830
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrUnregisterDllNotification(_UNKNOWN **a1)
{
  unsigned __int64 v2; // rdi
  int v3; // ebx
  _UNKNOWN **i; // rax
  _UNKNOWN **v6; // rdx
  _QWORD *v7; // rcx

  v2 = 0LL;
  v3 = -1073741515;
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  for ( i = (_UNKNOWN **)LdrpDllNotificationList; i != &LdrpDllNotificationList; i = (_UNKNOWN **)*i )
  {
    v2 = (unsigned __int64)i;
    if ( i == a1 )
    {
      v6 = (_UNKNOWN **)*i;
      v7 = i[1];
      if ( *((_UNKNOWN ***)*i + 1) != i || (_UNKNOWN **)*v7 != i )
        __fastfail(3u);
      *v7 = v6;
      v3 = 0;
      v6[1] = v7;
      break;
    }
  }
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
  if ( v3 >= 0 )
    RtlFreeHeap(LdrpHeap, 0, v2);
  return (unsigned int)v3;
}
