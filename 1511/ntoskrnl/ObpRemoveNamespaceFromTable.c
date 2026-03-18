/*
 * XREFs of ObpRemoveNamespaceFromTable @ 0x1404AE154
 * Callers:
 *     ObpCloseDirectoryObject @ 0x1404AE138 (ObpCloseDirectoryObject.c)
 *     NtDeletePrivateNamespace @ 0x140630994 (NtDeletePrivateNamespace.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 */

__int64 __fastcall ObpRemoveNamespaceFromTable(_DWORD *Object)
{
  unsigned int v2; // r14d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  signed __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  signed __int64 v12; // rax
  unsigned __int64 v13; // rtt
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = -1072103391;
  PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v15);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (unsigned __int64 *)(v15 + 720);
  v5 = KeAbPreAcquire(v15 + 720, 0LL, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (ULONG_PTR)v4);
  v7 = 0LL;
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  Object[86] |= 2u;
  v8 = (_QWORD *)*((_QWORD *)Object + 41);
  if ( v8 )
  {
    v9 = v15;
    *((_QWORD *)Object + 41) = 0LL;
    v8[2] = 0LL;
    v10 = *v8;
    v11 = (_QWORD *)v8[1];
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v11 != v8 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    --*(_DWORD *)(v9 + 728);
    ObfDereferenceObject(Object);
    v2 = 0;
  }
  _m_prefetchw(v4);
  v12 = *v4;
  if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v7 = v12 - 16;
  if ( (v12 & 2) != 0 || (v13 = *v4, v13 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v7, v12)) )
    ExfReleasePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  PsDereferenceMonitorContextServerSilo(v15);
  return v2;
}
