/*
 * XREFs of ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1C018995C
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C01898B8 (--1DXGMONITOR@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGMONITOR::_CleanupMonitorCCDName(DXGMONITOR *this)
{
  __int64 v2; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  void *v8; // rcx

  if ( *((_QWORD *)this + 62) )
  {
    KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
    v2 = *((_QWORD *)this + 62);
    if ( (*(_DWORD *)(v2 + 16))-- == 1 )
    {
      v4 = (_QWORD *)*((_QWORD *)this + 62);
      v5 = *v4;
      v6 = (_QWORD *)v4[1];
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v6 != v4 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      operator delete(*((void **)this + 62));
    }
    *((_QWORD *)this + 62) = 0LL;
    KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  }
  if ( *((_BYTE *)this + 444) )
  {
    if ( !*((_QWORD *)this + 57) )
    {
      v7 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v7);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)this + 28);
    *((_QWORD *)this + 57) = 0LL;
    *((_BYTE *)this + 444) = 0;
  }
  *((_QWORD *)this + 59) = 0LL;
  v8 = (void *)*((_QWORD *)this + 61);
  if ( v8 )
  {
    operator delete(v8);
    *((_QWORD *)this + 61) = 0LL;
  }
}
