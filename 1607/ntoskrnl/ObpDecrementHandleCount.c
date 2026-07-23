/*
 * XREFs of ObpDecrementHandleCount @ 0x1404052E0
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140404DA0 (ObpInsertOrLocateNamedObject.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x1404B1680 (ObCompleteObjectDuplication.c)
 *     AlpcHandleDataDestroyProcedure @ 0x1404B7B98 (AlpcHandleDataDestroyProcedure.c)
 *     ObDuplicateObject @ 0x1404EFB40 (ObDuplicateObject.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1400098A0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400098C0 (PsAttachSiloToCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140013220 (PsGetProcessServerSilo.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ObpDeleteNameCheck @ 0x1404054E0 (ObpDeleteNameCheck.c)
 *     ObpReleaseHandleInfo @ 0x1404A5780 (ObpReleaseHandleInfo.c)
 */

void __fastcall ObpDecrementHandleCount(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  char v3; // r15
  __int64 v5; // r14
  signed __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rsi
  _BYTE *v9; // rax
  _BYTE *v10; // rdi
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  unsigned __int64 v13; // rtt
  __int64 v14; // rsi
  __int64 ProcessServerSilo; // rax
  unsigned int v16; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v17[48]; // [rsp+28h] [rbp-70h] BYREF

  v3 = 0;
  v16 = 0;
  v5 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2)];
  if ( (*(_BYTE *)(v5 + 66) & 0x10) != 0 || (*(_BYTE *)(a2 + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (unsigned __int64 *)(a2 + 16);
    v9 = (_BYTE *)KeAbPreAcquire(a2 + 16, 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
    if ( v10 )
      v10[26] |= 1u;
    v6 = *(_QWORD *)(a2 + 8);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) && (*(_BYTE *)(a2 + 27) & 8) != 0 )
      *(_QWORD *)(a2 - ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 0x1F]) = 0LL;
    if ( (*(_BYTE *)(v5 + 66) & 0x10) != 0 )
      ObpReleaseHandleInfo(a2, BugCheckParameter1, &v16);
    _m_prefetchw(v8);
    v11 = *v8;
    v12 = *v8 - 16;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v12 = 0LL;
    if ( (v11 & 2) != 0 || (v13 = *v8, v13 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v12, v11)) )
      ExfReleasePushLock(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    KeLeaveCriticalRegion();
  }
  else
  {
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  }
  if ( *(_QWORD *)(v5 + 128) )
  {
    v14 = 0LL;
    if ( KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
    {
      v3 = 1;
      ProcessServerSilo = PsGetProcessServerSilo((__int64)BugCheckParameter1);
      v14 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v17);
    }
    (*(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v5 + 128))(
      BugCheckParameter1,
      a2 + 48,
      v16,
      v6);
    if ( v3 )
    {
      KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
      PsDetachSiloFromCurrentThread(v14);
    }
  }
  if ( v6 == 1 )
    ObpDeleteNameCheck(a2);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 48), 0xFFFFFFFF);
}
