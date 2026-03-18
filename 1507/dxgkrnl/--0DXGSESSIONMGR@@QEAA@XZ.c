/*
 * XREFs of ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C00D81F8
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00C33D4 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 */

DXGSESSIONMGR *__fastcall DXGSESSIONMGR::DXGSESSIONMGR(DXGSESSIONMGR *this)
{
  char *v2; // rcx
  __int64 v3; // r8
  struct _KEVENT *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  void *EventHandle; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 7) = 44;
  *((_DWORD *)this + 8) = 32;
  v2 = (char *)this + 48;
  *((_DWORD *)this + 18) = 3;
  *((_QWORD *)this + 5) = v2;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 27) = 45;
  *((_DWORD *)this + 28) = 1;
  v3 = *((unsigned int *)this + 18);
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  memset(v2, 0, 8 * v3);
  *((_DWORD *)this + 30) = 0;
  v4 = IoCreateNotificationEvent(0LL, &EventHandle);
  *((_QWORD *)this + 16) = v4;
  if ( v4 )
  {
    KeSetEvent(v4, 0, 0);
    ObfReferenceObject(*((PVOID *)this + 16));
    ZwClose(EventHandle);
  }
  else
  {
    v6 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v6 + 24) = 2935LL;
    WdLogEvent5_WdLowResource(v6);
  }
  return this;
}
