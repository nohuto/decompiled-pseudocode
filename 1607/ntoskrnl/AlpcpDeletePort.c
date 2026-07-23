/*
 * XREFs of AlpcpDeletePort @ 0x14040A488
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1400F59F4 (AlpcpFreeCompletionPacketLookaside.c)
 *     AlpcpSendCloseMessage @ 0x140408D90 (AlpcpSendCloseMessage.c)
 *     AlpcpDestroyPort @ 0x140409C54 (AlpcpDestroyPort.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 */

void __fastcall AlpcpDeletePort(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbp
  unsigned __int64 *v4; // rbp
  _BYTE *v5; // rax
  _BYTE *v6; // rsi
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
    v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v5, (ULONG_PTR)v4);
    if ( v6 )
      v6[26] |= 1u;
    v7 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
    switch ( v7 )
    {
      case 1:
        **(_QWORD **)(a1 + 16) = 0LL;
        break;
      case 2:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = 0LL;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
LABEL_12:
        if ( v8 )
        {
          *(_QWORD *)(v8 + 424) = 0LL;
          *(_QWORD *)(v8 + 432) = 0LL;
        }
        break;
      case 3:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = 0LL;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
        goto LABEL_12;
    }
    v9 = *(_QWORD *)(a1 + 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v9 - 16));
    KeAbPostRelease(v9 - 16);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16));
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
    AlpcpDereferenceBlobEx(v14);
  AlpcpDestroyPort((__int64 *)a1);
  KeLeaveCriticalRegion();
}
