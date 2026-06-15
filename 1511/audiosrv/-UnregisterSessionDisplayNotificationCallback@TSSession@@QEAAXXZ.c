/*
 * XREFs of ?UnregisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x18003B22C
 * Callers:
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x18003B1C0 (-TsSessionIdLogoff@@YAJK@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18009B950 (--1TSSession@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall TSSession::UnregisterSessionDisplayNotificationCallback(TSSession *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 29);
  if ( v2 )
  {
    PowerSettingUnregisterNotification(v2);
    *((_QWORD *)this + 29) = 0LL;
  }
  *((_DWORD *)this + 57) = 1;
}
