/*
 * XREFs of ObpDecrementHandleCount @ 0x1404D3564
 * Callers:
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D0FD4 (ObpInsertOrLocateNamedObject.c)
 *     AlpcHandleDataDestroyProcedure @ 0x1404D4248 (AlpcHandleDataDestroyProcedure.c)
 *     ObCompleteObjectDuplication @ 0x14053E31C (ObCompleteObjectDuplication.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObpDeleteNameCheck @ 0x1404D3780 (ObpDeleteNameCheck.c)
 *     ObpReleaseHandleInfo @ 0x140521FA0 (ObpReleaseHandleInfo.c)
 */

void __fastcall ObpDecrementHandleCount(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  signed __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rdi
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  unsigned __int64 v16; // rtt
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  char v19; // si
  unsigned int v20; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v21[48]; // [rsp+28h] [rbp-70h] BYREF

  v20 = 0;
  v6 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2)];
  if ( (*(_BYTE *)(v6 + 66) & 0x10) != 0 || (*(_BYTE *)(a2 + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (unsigned __int64 *)(a2 + 16);
    v10 = KeAbPreAcquire(a2 + 16, 0LL, 0LL, a4);
    v13 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9, v12);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    v7 = *(_QWORD *)(a2 + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(a2 + 27) & 8) != 0 )
    {
      *(_QWORD *)(a2 - ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v6 + 66) & 0x10) != 0 )
      ObpReleaseHandleInfo(a2, BugCheckParameter1, &v20);
    _m_prefetchw(v9);
    v14 = *v9;
    v15 = *v9 - 16;
    if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v15 = 0LL;
    if ( (v14 & 2) != 0 || (v16 = *v9, v16 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v15, v14)) )
      ExfReleasePushLock(v9, v11);
    KeAbPostRelease((ULONG_PTR)v9);
    v17 = KeGetCurrentThread();
    v18 = v17->KernelApcDisable + 1;
    v17->KernelApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
      && !v17->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  }
  if ( *(_QWORD *)(v6 + 128) )
  {
    v19 = 0;
    if ( KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
    {
      v19 = 1;
      KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v21);
    }
    (*(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v6 + 128))(
      BugCheckParameter1,
      a2 + 48,
      v20,
      v7);
    if ( v19 )
      KiUnstackDetachProcess((struct _KTHREAD *)v21, 0);
  }
  if ( v7 == 1 )
    ObpDeleteNameCheck(a2);
  _InterlockedAdd((volatile signed __int32 *)(v6 + 48), 0xFFFFFFFF);
}
