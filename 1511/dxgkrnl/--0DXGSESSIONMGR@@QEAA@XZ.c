/*
 * XREFs of ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C00CE76C
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00D4630 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
 */

DXGSESSIONMGR *__fastcall DXGSESSIONMGR::DXGSESSIONMGR(DXGSESSIONMGR *this)
{
  __int64 v2; // r8
  struct _KEVENT *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // rax
  void *EventHandle; // [rsp+30h] [rbp+8h] BYREF

  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this, 44, 32);
  *((_DWORD *)this + 24) = 3;
  *((_QWORD *)this + 8) = (char *)this + 72;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 104, 45, 1);
  v2 = *((unsigned int *)this + 24);
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  memset((char *)this + 72, 0, 8 * v2);
  *((_DWORD *)this + 42) = 0;
  v3 = IoCreateNotificationEvent(0LL, &EventHandle);
  *((_QWORD *)this + 22) = v3;
  if ( v3 )
  {
    KeSetEvent(v3, 0, 0);
    ObfReferenceObject(*((PVOID *)this + 22));
    ZwClose(EventHandle);
  }
  else
  {
    v9 = WdLogNewEntry5_WdLowResource(v5, v4, v6, v7);
    *(_QWORD *)(v9 + 24) = 3007LL;
    WdLogEvent5_WdLowResource(v9);
  }
  return this;
}
