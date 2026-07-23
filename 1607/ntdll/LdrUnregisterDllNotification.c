/*
 * XREFs of LdrUnregisterDllNotification @ 0x1800D0CB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl LdrUnregisterDllNotification(PVOID Cookie)
{
  void *v2; // rdi
  NTSTATUS v3; // ebx
  _QWORD *i; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx

  v2 = 0LL;
  v3 = -1073741515;
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  for ( i = LdrpDllNotificationList; i != &LdrpDllNotificationList; i = (_QWORD *)*i )
  {
    v2 = i;
    if ( i == Cookie )
    {
      v6 = (_QWORD *)*i;
      v7 = (_QWORD *)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v7 != i )
        __fastfail(3u);
      *v7 = v6;
      v3 = 0;
      v6[1] = v7;
      break;
    }
  }
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  if ( v3 >= 0 )
    RtlFreeHeap(LdrpHeap, 0, v2);
  return v3;
}
