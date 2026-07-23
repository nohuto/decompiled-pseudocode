/*
 * XREFs of ObpRegisterPrivateNamespace @ 0x140476998
 * Callers:
 *     NtCreatePrivateNamespace @ 0x1404765A4 (NtCreatePrivateNamespace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ObpLookupNamespaceEntry @ 0x1404775CC (ObpLookupNamespaceEntry.c)
 */

__int64 __fastcall ObpRegisterPrivateNamespace(__int64 a1)
{
  unsigned int v2; // r14d
  char *CurrentServerSiloGlobals; // r15
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rdi
  _BYTE *v6; // rax
  _BYTE *v7; // rbp
  signed __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  v2 = -1073741771;
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
  if ( !ObpLookupNamespaceEntry(CurrentServerSiloGlobals + 128, a1) )
  {
    v9 = (__int64)&CurrentServerSiloGlobals[16 * *(unsigned __int8 *)(a1 + 40) + 128];
    v10 = *(_QWORD **)(v9 + 8);
    if ( *v10 != v9 )
      __fastfail(3u);
    *(_QWORD *)a1 = v9;
    v2 = 0;
    *(_QWORD *)(a1 + 8) = v10;
    *v10 = a1;
    *(_QWORD *)(v9 + 8) = a1;
    ++*((_DWORD *)CurrentServerSiloGlobals + 182);
  }
  _m_prefetchw(v5);
  v11 = *v5;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v8 = v11 - 16;
  if ( (v11 & 2) != 0 || (v12 = *v5, v12 != _InterlockedCompareExchange64(v5, v8, v11)) )
    ExfReleasePushLock((_QWORD *)CurrentServerSiloGlobals + 90);
  KeAbPostRelease((ULONG_PTR)(CurrentServerSiloGlobals + 720));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  return v2;
}
