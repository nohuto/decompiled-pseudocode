/*
 * XREFs of ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1C0185148
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C01850A4 (--1DXGMONITOR@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGMONITOR::_CleanupMonitorCCDName(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  void *v11; // rcx

  if ( *((_QWORD *)this + 60) )
  {
    KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
    v5 = *((_QWORD *)this + 60);
    if ( (*(_DWORD *)(v5 + 16))-- == 1 )
    {
      v7 = (_QWORD *)*((_QWORD *)this + 60);
      v8 = *v7;
      v9 = (_QWORD *)v7[1];
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v9 != v7 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      operator delete(*((void **)this + 60));
    }
    *((_QWORD *)this + 60) = 0LL;
    KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  }
  if ( *((_BYTE *)this + 428) )
  {
    if ( !*((_QWORD *)this + 55) )
    {
      v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v10);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)this + 27);
    *((_QWORD *)this + 55) = 0LL;
    *((_BYTE *)this + 428) = 0;
  }
  *((_QWORD *)this + 57) = 0LL;
  v11 = (void *)*((_QWORD *)this + 59);
  if ( v11 )
  {
    operator delete(v11);
    *((_QWORD *)this + 59) = 0LL;
  }
}
