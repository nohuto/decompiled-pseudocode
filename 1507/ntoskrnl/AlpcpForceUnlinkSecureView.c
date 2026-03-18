/*
 * XREFs of AlpcpForceUnlinkSecureView @ 0x14069F1C4
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x1405045B0 (AlpcpCleanupProcessViews.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     MmUnsecureVirtualMemory @ 0x1404B5984 (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpForceUnlinkSecureView(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  ULONG_PTR v5; // rdi
  _KPROCESS *v6; // r14
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rsi
  signed __int64 BugCheckParameter4; // rax
  char v11; // cl
  int v12; // ebp
  signed __int64 v13; // rcx
  signed __int64 v14; // rsi
  bool v15; // cc
  ULONG_PTR v16; // rsi
  _BYTE v17[48]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v5 = a1;
  v6 = *(_KPROCESS **)(a1 + 32);
  v7 = KeAbPreAcquire(v4 - 16, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 - 16), v7, v4 - 16, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  *(_BYTE *)(v4 - 32) |= 1u;
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), 0x10000uLL) + 0x10000;
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v4, 0x26uLL, BugCheckParameter4);
  if ( v5 == *(_QWORD *)(v4 + 72) )
  {
    KiStackAttachProcess(v6, 0, (__int64)v17);
    MmUnsecureVirtualMemory(*(HANDLE *)(v5 + 64));
    KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
    *(_DWORD *)(v5 + 72) |= 1u;
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_QWORD *)(v4 + 72) = 0LL;
    *(_DWORD *)(v5 + 72) |= 4u;
  }
  else
  {
    v5 = 0LL;
  }
  v11 = *(_BYTE *)(v4 - 32);
  v12 = 0;
  if ( (v11 & 1) != 0 )
  {
    v12 = 0x10000 - *(__int16 *)(v4 - 30);
    *(_WORD *)(v4 - 30) = 0;
    *(_BYTE *)(v4 - 32) = v11 & 0xFE;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v4 - 16));
  KeAbPostRelease(v4 - 16);
  if ( v12 > 0 )
  {
    v13 = -v12 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), -v12);
    if ( v13 <= 0 )
    {
      if ( v13 )
        KeBugCheckEx(0x18u, 0LL, v4, 0x28uLL, v13);
      AlpcpDestroyBlob(v4);
    }
  }
  if ( v5 )
  {
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v15 = v14 <= 1;
    v16 = v14 - 1;
    if ( v15 )
    {
      if ( v16 )
        KeBugCheckEx(0x18u, 0LL, v5, 0x21uLL, v16);
      AlpcpDestroyBlob(v5);
    }
  }
}
