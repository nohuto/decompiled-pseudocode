/*
 * XREFs of ObpDecrementHandleCount @ 0x140470084
 * Callers:
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     ObDuplicateObject @ 0x1404246E0 (ObDuplicateObject.c)
 *     ObpInsertOrLocateNamedObject @ 0x14046FBC0 (ObpInsertOrLocateNamedObject.c)
 *     ObCompleteObjectDuplication @ 0x140480070 (ObCompleteObjectDuplication.c)
 *     ExSweepHandleTable @ 0x140488230 (ExSweepHandleTable.c)
 *     AlpcHandleDataDestroyProcedure @ 0x1404B0400 (AlpcHandleDataDestroyProcedure.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObpDeleteNameCheck @ 0x1404701A0 (ObpDeleteNameCheck.c)
 *     ObpReleaseHandleInfo @ 0x14062E160 (ObpReleaseHandleInfo.c)
 */

__int64 __fastcall ObpDecrementHandleCount(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  __int64 v4; // r14
  signed __int64 v5; // rdi
  __int64 result; // rax
  char v7; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  unsigned __int64 v14; // rtt
  unsigned int v15; // [rsp+20h] [rbp-68h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v16; // [rsp+28h] [rbp-60h] BYREF

  v15 = 0;
  v4 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2)];
  if ( (*(_BYTE *)(v4 + 66) & 0x10) != 0 || (*(_BYTE *)(a2 + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (unsigned __int64 *)(a2 + 16);
    v10 = KeAbPreAcquire(a2 + 16, 0LL, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    v5 = *(_QWORD *)(a2 + 8);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) && (*(_BYTE *)(a2 + 27) & 8) != 0 )
      *(_QWORD *)(a2 - ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 0x1F]) = 0LL;
    if ( (*(_BYTE *)(v4 + 66) & 0x10) != 0 )
      ObpReleaseHandleInfo(a2, BugCheckParameter1, &v15);
    _m_prefetchw(v9);
    v12 = *v9;
    if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v13 = 0LL;
    else
      v13 = v12 - 16;
    if ( (v12 & 2) != 0 || (v14 = *v9, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v13, v12)) )
      ExfReleasePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegion();
  }
  else
  {
    v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  }
  if ( *(_QWORD *)(v4 + 128) )
  {
    v7 = 0;
    if ( KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
    {
      v7 = 1;
      KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)&v16);
    }
    (*(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v4 + 128))(
      BugCheckParameter1,
      a2 + 48,
      v15,
      v5);
    if ( v7 )
      KiUnstackDetachProcess(&v16, 0LL);
  }
  result = ObpDeleteNameCheck(a2);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 48), 0xFFFFFFFF);
  return result;
}
