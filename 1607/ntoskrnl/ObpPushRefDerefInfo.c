/*
 * XREFs of ObpPushRefDerefInfo @ 0x140668054
 * Callers:
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ObpPushStackInfoQueue @ 0x140668224 (ObpPushStackInfoQueue.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ObpGetObjectRefInfo @ 0x140667B6C (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x140667C84 (ObpGetTraceIndex.c)
 *     ObpRefillWorkItemFreeList @ 0x1406682A0 (ObpRefillWorkItemFreeList.c)
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
  _BYTE *v11; // rax
  signed __int8 v12; // cf
  _BYTE *v13; // rdi
  unsigned __int16 *v14; // rdi
  unsigned __int16 TraceIndex; // r9
  unsigned __int16 i; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int16 v19; // dx
  __int64 v20; // rcx
  unsigned __int16 *v22; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v11 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0);
  v12 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
  v13 = v11;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v11, (ULONG_PTR)&ObpStackTraceLock);
  if ( v13 )
    v13[26] |= 1u;
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    if ( (int)ObpGetObjectRefInfo(a1, &v22) >= 0 )
    {
      v14 = v22;
      if ( v22 )
      {
        TraceIndex = ObpGetTraceIndex(Source2);
        if ( TraceIndex >= 0x3FFDu )
        {
          DbgPrintEx(0, 1u, "ObpPushRefDerefInfo - ObpStackTable overflow\n");
        }
        else
        {
          for ( i = v14[16]; i; --i )
          {
            v17 = i - 1 + 3LL;
            if ( a4 >= *(_DWORD *)&v14[6 * v17] )
              break;
            v18 = 3 * (i + 3LL);
            *(_QWORD *)&v14[2 * v18] = *(_QWORD *)&v14[6 * v17];
            *(_DWORD *)&v14[2 * v18 + 4] = *(_DWORD *)&v14[6 * v17 + 4];
          }
          if ( a2 )
            v19 = 0x8000;
          else
            v19 = 0;
          v20 = 3LL * i;
          v14[2 * v20 + 20] = TraceIndex | v19;
          v14[2 * v20 + 21] = a3;
          *(_DWORD *)&v14[6 * i + 18] = a4;
          *(_DWORD *)&v14[2 * v20 + 22] = a6;
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
