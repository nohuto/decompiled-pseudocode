/*
 * XREFs of AlpcpDeletePort @ 0x14047E7D8
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1400C4EF8 (AlpcpFreeCompletionPacketLookaside.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpSendCloseMessage @ 0x14047E6B8 (AlpcpSendCloseMessage.c)
 *     AlpcpDestroyPort @ 0x14047EA48 (AlpcpDestroyPort.c)
 */

void __fastcall AlpcpDeletePort(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbp
  unsigned __int64 *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi
  void *v10; // rcx
  int v11; // ecx
  void *v12; // rcx
  void *v13; // rcx
  ULONG_PTR v14; // rcx
  void *v15; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
    AlpcpSendCloseMessage(a1);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = (unsigned __int64 *)(v3 - 16);
    v5 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v5, (ULONG_PTR)v4);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    v7 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
    switch ( v7 )
    {
      case 1:
        **(_QWORD **)(a1 + 16) = 0LL;
        break;
      case 2:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = 0LL;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
        goto LABEL_11;
      case 3:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = 0LL;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
LABEL_11:
        if ( v8 )
        {
          *(_QWORD *)(v8 + 424) = 0LL;
          *(_QWORD *)(v8 + 432) = 0LL;
        }
        break;
    }
    v9 = *(_QWORD *)(a1 + 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v9 - 16));
    KeAbPostRelease(v9 - 16);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16), 1);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v10 = *(void **)(a1 + 32);
  if ( v10 )
  {
    ObfDereferenceObject(v10);
    AlpcpFreeCompletionPacketLookaside(*(_QWORD *)(a1 + 48));
  }
  v11 = *(_DWORD *)(a1 + 416);
  if ( (v11 & 6) == 4 && (v11 & 0x400) == 0 )
  {
    v15 = *(void **)(a1 + 80);
    if ( v15 )
      ObfDereferenceObject(v15);
  }
  v12 = *(void **)(a1 + 24);
  if ( ((unsigned __int8)v12 & 1) == 0 && v12 )
  {
    if ( ((unsigned __int8)v12 & 1) != 0 )
      v12 = 0LL;
    ObfDereferenceObjectWithTag(v12, 0x63706C41u);
  }
  v13 = *(void **)(a1 + 368);
  if ( v13 )
    ObfDereferenceObject(v13);
  v14 = _InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
  if ( v14 )
    AlpcpDereferenceBlobEx(v14, 1);
  AlpcpDestroyPort(a1);
  KeLeaveCriticalRegion();
}
