/*
 * XREFs of ObpPushRefDerefInfo @ 0x14062FE84
 * Callers:
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ObpPushStackInfoQueue @ 0x140630044 (ObpPushStackInfoQueue.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     ObpGetObjectRefInfo @ 0x14062F99C (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x14062FAB4 (ObpGetTraceIndex.c)
 *     ObpRefillWorkItemFreeList @ 0x1406300C0 (ObpRefillWorkItemFreeList.c)
 */

__int64 __fastcall ObpPushRefDerefInfo(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int16 *Source2,
        int a6)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  signed __int8 v12; // cf
  __int64 v13; // rdi
  unsigned __int16 *v14; // rdi
  unsigned __int16 TraceIndex; // r9
  unsigned __int16 i; // r8
  __int64 v17; // rcx
  __int16 v18; // dx
  __int64 v19; // rcx
  unsigned __int16 *v21; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v11 = KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0LL);
  v12 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
  v13 = v11;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v11, (ULONG_PTR)&ObpStackTraceLock);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    if ( (int)ObpGetObjectRefInfo(a1, &v21) >= 0 )
    {
      v14 = v21;
      if ( v21 )
      {
        TraceIndex = ObpGetTraceIndex(Source2);
        if ( TraceIndex >= 0x3FFDu )
        {
          DbgPrintEx(0, 1u, "ObpPushRefDerefInfo - ObpStackTable overflow\n");
        }
        else
        {
          for ( i = v14[16]; i; *(_DWORD *)&v14[2 * v17 + 22] = *(_DWORD *)&v14[6 * i-- + 16] )
          {
            if ( a4 >= *(_DWORD *)&v14[6 * i + 12] )
              break;
            v17 = 3LL * i;
            *(_QWORD *)&v14[2 * v17 + 18] = *(_QWORD *)&v14[6 * i + 12];
          }
          if ( a2 )
            v18 = 0x8000;
          else
            v18 = 0;
          v19 = 3LL * i;
          v14[2 * v19 + 20] = TraceIndex | v18;
          v14[2 * v19 + 21] = a3;
          *(_DWORD *)&v14[6 * i + 18] = a4;
          *(_DWORD *)&v14[2 * v19 + 22] = a6;
          ++v14[16];
        }
      }
    }
    if ( LOWORD(ObpWorkItemFreeList.Alignment) < 0x64u )
      ObpRefillWorkItemFreeList();
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
