/*
 * XREFs of AlpcpDeletePort @ 0x1404A30E4
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x14006BCD8 (AlpcpFreeCompletionPacketLookaside.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpDestroyPort @ 0x1404A3360 (AlpcpDestroyPort.c)
 *     AlpcpSendCloseMessage @ 0x1404A46BC (AlpcpSendCloseMessage.c)
 */

void __fastcall AlpcpDeletePort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbp
  unsigned __int64 *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  ULONG_PTR v14; // r8
  signed __int64 v15; // rax
  bool v16; // cc
  ULONG_PTR BugCheckParameter4; // rax
  void *v18; // rcx
  int v19; // ecx
  void *v20; // rcx
  void *v21; // rcx
  __int64 v22; // r8
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  void *v25; // rcx
  signed __int64 v26; // rdi
  ULONG_PTR v27; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
    AlpcpSendCloseMessage();
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    v7 = (unsigned __int64 *)(v6 - 16);
    v8 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
    switch ( v11 )
    {
      case 1:
        **(_QWORD **)(a1 + 16) = 0LL;
        break;
      case 2:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = 0LL;
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
LABEL_12:
        if ( v12 )
        {
          *(_QWORD *)(v12 + 424) = 0LL;
          *(_QWORD *)(v12 + 432) = 0LL;
        }
        break;
      case 3:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = 0LL;
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
        goto LABEL_12;
    }
    v13 = *(_QWORD *)(a1 + 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v13 - 16));
    KeAbPostRelease(v13 - 16);
    v14 = *(_QWORD *)(a1 + 16);
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v16 = v15 <= 1;
    BugCheckParameter4 = v15 - 1;
    if ( v16 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v14, 0x21uLL, BugCheckParameter4);
      AlpcpDestroyBlob(v14);
    }
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v18 = *(void **)(a1 + 32);
  if ( v18 )
  {
    ObfDereferenceObject(v18);
    AlpcpFreeCompletionPacketLookaside(*(_QWORD *)(a1 + 48));
  }
  v19 = *(_DWORD *)(a1 + 416);
  if ( (v19 & 6) == 4 && (v19 & 0x400) == 0 )
  {
    v25 = *(void **)(a1 + 80);
    if ( v25 )
      ObfDereferenceObject(v25);
  }
  v20 = *(void **)(a1 + 24);
  if ( ((unsigned __int8)v20 & 1) == 0 && v20 )
  {
    if ( ((unsigned __int8)v20 & 1) != 0 )
      v20 = 0LL;
    ObfDereferenceObjectWithTag(v20, 0x63706C41u);
  }
  v21 = *(void **)(a1 + 368);
  if ( v21 )
    ObfDereferenceObject(v21);
  v22 = _InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
  if ( v22 )
  {
    v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v16 = v26 <= 1;
    v27 = v26 - 1;
    if ( v16 )
    {
      if ( v27 )
        KeBugCheckEx(0x18u, 0LL, v22, 0x21uLL, v27);
      AlpcpDestroyBlob(v22);
    }
  }
  AlpcpDestroyPort(a1);
  v23 = KeGetCurrentThread();
  v24 = v23->KernelApcDisable + 1;
  v23->KernelApcDisable = v24;
  if ( !v24
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
    && !v23->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
