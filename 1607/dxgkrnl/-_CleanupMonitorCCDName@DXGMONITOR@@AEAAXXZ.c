/*
 * XREFs of ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1C01B330C
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C01B3260 (--1DXGMONITOR@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGMONITOR::_CleanupMonitorCCDName(DXGMONITOR *this)
{
  __int64 v2; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  void *v8; // rcx

  if ( *((_QWORD *)this + 63) )
  {
    KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
    v2 = *((_QWORD *)this + 63);
    if ( (*(_DWORD *)(v2 + 16))-- == 1 )
    {
      v4 = (_QWORD *)*((_QWORD *)this + 63);
      v5 = *v4;
      v6 = (_QWORD *)v4[1];
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v6 != v4 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      operator delete(*((void **)this + 63));
    }
    *((_QWORD *)this + 63) = 0LL;
    KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  }
  if ( *((_BYTE *)this + 452) )
  {
    if ( !*((_QWORD *)this + 58) )
    {
      v7 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v7);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)((char *)this + 456));
    *((_QWORD *)this + 58) = 0LL;
    *((_BYTE *)this + 452) = 0;
  }
  *((_QWORD *)this + 60) = 0LL;
  v8 = (void *)*((_QWORD *)this + 62);
  if ( v8 )
  {
    operator delete(v8);
    *((_QWORD *)this + 62) = 0LL;
  }
}
