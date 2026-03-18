/*
 * XREFs of ObpRegisterPrivateNamespace @ 0x1404AA07C
 * Callers:
 *     NtCreatePrivateNamespace @ 0x1404A9DC8 (NtCreatePrivateNamespace.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     ObpLookupNamespaceEntry @ 0x1404AA3F0 (ObpLookupNamespaceEntry.c)
 */

__int64 __fastcall ObpRegisterPrivateNamespace(__int64 a1)
{
  unsigned int v2; // ebp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  signed __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rcx
  signed __int64 v11; // rax
  unsigned __int64 v12; // rtt
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v2 = -1073741771;
  PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v14);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (unsigned __int64 *)(v14 + 720);
  v5 = KeAbPreAcquire(v14 + 720, 0LL, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (ULONG_PTR)v4);
  v7 = 0LL;
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v8 = v14 + 128;
  if ( !ObpLookupNamespaceEntry(v14 + 128, a1) )
  {
    v9 = v8 + 16LL * *(unsigned __int8 *)(a1 + 40);
    v10 = *(_QWORD **)(v9 + 8);
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v10;
    if ( *v10 != v9 )
      __fastfail(3u);
    *v10 = a1;
    v2 = 0;
    *(_QWORD *)(v9 + 8) = a1;
    ++*(_DWORD *)(v8 + 600);
  }
  _m_prefetchw(v4);
  v11 = *v4;
  if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v7 = v11 - 16;
  if ( (v11 & 2) != 0 || (v12 = *v4, v12 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v7, v11)) )
    ExfReleasePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  PsDereferenceMonitorContextServerSilo(v14);
  return v2;
}
