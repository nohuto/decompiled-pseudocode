/*
 * XREFs of ?UnregisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x180038694
 * Callers:
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x180038628 (-TsSessionIdLogoff@@YAJK@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18009EAD4 (--1TSSession@@QEAA@XZ.c)
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
