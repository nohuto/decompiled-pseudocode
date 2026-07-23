/*
 * XREFs of IoDisconnectInterrupt @ 0x1404F405C
 * Callers:
 *     IoDisconnectInterruptEx @ 0x1404F3FE4 (IoDisconnectInterruptEx.c)
 *     IopConnectLineBasedInterrupt @ 0x140502B18 (IopConnectLineBasedInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x140503004 (IopConnectMessageBasedInterrupt.c)
 *     VerifierIoDisconnectInterrupt @ 0x1406B9500 (VerifierIoDisconnectInterrupt.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeRemoveQueueDpc @ 0x1400D9484 (KeRemoveQueueDpc.c)
 *     KeFreeInterrupt @ 0x140115A8C (KeFreeInterrupt.c)
 *     KeDisconnectInterrupt @ 0x140115AA4 (KeDisconnectInterrupt.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopDestroyActiveConnectBlock @ 0x1405036E8 (IopDestroyActiveConnectBlock.c)
 *     IopReleaseActiveConnectLock @ 0x1405037D4 (IopReleaseActiveConnectLock.c)
 *     IopAcquireActiveConnectLock @ 0x1405037E8 (IopAcquireActiveConnectLock.c)
 *     IopInitializeActiveConnectBlock @ 0x1405037FC (IopInitializeActiveConnectBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x140602DF8 (IopDestroyPassiveInterruptBlock.c)
 */

void __stdcall IoDisconnectInterrupt(PKINTERRUPT InterruptObject)
{
  void **p_DisconnectData; // rsi
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdi
  _SLIST_ENTRY **v4; // r14
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // rbx
  struct _KTHREAD *v8; // r10
  char v9; // dl
  __int64 *v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  _BYTE v13[80]; // [rsp+30h] [rbp-58h] BYREF

  p_DisconnectData = &InterruptObject[-1].DisconnectData;
  KeRemoveQueueDpc((PRKDPC)&InterruptObject[1].MessageServiceRoutine);
  IopInitializeActiveConnectBlock(p_DisconnectData + 2, v13);
  v2 = (unsigned __int64)p_DisconnectData[1] - (((unsigned __int64)p_DisconnectData[1] >> 1) & 0x5555555555555555LL);
  v3 = (0x101010101010101LL
      * (((v2 & 0x3333333333333333LL)
        + ((v2 >> 2) & 0x3333333333333333LL)
        + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  IopAcquireActiveConnectLock(v13);
  v4 = (_SLIST_ENTRY **)(p_DisconnectData + 58);
  LOBYTE(v5) = v3;
  KeDisconnectInterrupt((__int64 *)p_DisconnectData + 58, v5, (__int64)(p_DisconnectData + 2));
  IopReleaseActiveConnectLock(v13);
  if ( *((_BYTE *)p_DisconnectData + 368) )
    IopDestroyPassiveInterruptBlock(*((unsigned int *)p_DisconnectData + 7));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( *((_BYTE *)p_DisconnectData + 368) )
  {
    v8 = KeGetCurrentThread();
    v9 = 0;
    if ( (char)v3 <= 0 )
      goto LABEL_14;
    v10 = (__int64 *)(p_DisconnectData + 58);
    v11 = v3;
    do
    {
      v12 = *v10++;
      if ( *(struct _KTHREAD **)(v12 + 152) == v8 )
        v9 = 1;
      --v11;
    }
    while ( v11 );
    if ( !v9 )
LABEL_14:
      KeWaitForSingleObject(p_DisconnectData + 47, Executive, 0, 0, 0LL);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (char)v3 > 0 )
  {
    v7 = v3;
    do
    {
      KeFreeInterrupt(*v4++);
      --v7;
    }
    while ( v7 );
  }
  IopDestroyActiveConnectBlock(v13);
  ExFreePoolWithTag(p_DisconnectData, 0);
}
