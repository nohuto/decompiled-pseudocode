/*
 * XREFs of ObpRemoveNamespaceFromTable @ 0x1404B91E4
 * Callers:
 *     ObpCloseDirectoryObject @ 0x1404B91C8 (ObpCloseDirectoryObject.c)
 *     NtDeletePrivateNamespace @ 0x140668B70 (NtDeletePrivateNamespace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

__int64 __fastcall ObpRemoveNamespaceFromTable(_DWORD *Object)
{
  unsigned int v2; // r14d
  char *CurrentServerSiloGlobals; // r15
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rdi
  _BYTE *v6; // rax
  _BYTE *v7; // rsi
  signed __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9

  v2 = -1072103391;
  CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(CurrentServerSiloGlobals + 720);
  v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(CurrentServerSiloGlobals + 720), 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)CurrentServerSiloGlobals + 180, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)CurrentServerSiloGlobals + 90,
      v6,
      (ULONG_PTR)(CurrentServerSiloGlobals + 720));
  v8 = 0LL;
  if ( v7 )
    v7[26] |= 1u;
  Object[86] |= 2u;
  v9 = (_QWORD *)*((_QWORD *)Object + 41);
  if ( v9 )
  {
    *((_QWORD *)Object + 41) = 0LL;
    v9[2] = 0LL;
    v10 = *v9;
    v11 = (_QWORD *)v9[1];
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    --*((_DWORD *)CurrentServerSiloGlobals + 182);
    ObfDereferenceObject(Object);
    v2 = 0;
  }
  _m_prefetchw(v5);
  v12 = *v5;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v8 = v12 - 16;
  if ( (v12 & 2) != 0 || (v13 = *v5, v13 != _InterlockedCompareExchange64(v5, v8, v12)) )
    ExfReleasePushLock((_QWORD *)CurrentServerSiloGlobals + 90);
  KeAbPostRelease((ULONG_PTR)(CurrentServerSiloGlobals + 720));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
  return v2;
}
