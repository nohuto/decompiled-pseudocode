/*
 * XREFs of IoDisconnectInterrupt @ 0x140532A34
 * Callers:
 *     IoDisconnectInterruptEx @ 0x1405329BC (IoDisconnectInterruptEx.c)
 *     IopConnectLineBasedInterrupt @ 0x140539828 (IopConnectLineBasedInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x140539D14 (IopConnectMessageBasedInterrupt.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeRemoveQueueDpc @ 0x140087610 (KeRemoveQueueDpc.c)
 *     KeFreeInterrupt @ 0x1401243B4 (KeFreeInterrupt.c)
 *     KeDisconnectInterrupt @ 0x1401243CC (KeDisconnectInterrupt.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopDestroyActiveConnectBlock @ 0x14053A4D8 (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x14053A5C0 (IopInitializeActiveConnectBlock.c)
 *     IopReleaseActiveConnectLock @ 0x14053A6EC (IopReleaseActiveConnectLock.c)
 *     IopAcquireActiveConnectLock @ 0x14053A708 (IopAcquireActiveConnectLock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x14062D244 (IopDestroyPassiveInterruptBlock.c)
 */

void __stdcall IoDisconnectInterrupt(PKINTERRUPT InterruptObject)
{
  void **p_DisconnectData; // rsi
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdi
  _SLIST_ENTRY **v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 *v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v10; // rbx
  struct _KTHREAD *v11; // r10
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
    v11 = KeGetCurrentThread();
    LOBYTE(v6) = 0;
    if ( (char)v3 <= 0 )
      goto LABEL_14;
    v7 = (__int64 *)(p_DisconnectData + 58);
    v8 = v3;
    do
    {
      v12 = *v7++;
      v6 = (unsigned __int8)v6;
      if ( *(struct _KTHREAD **)(v12 + 152) == v11 )
        v6 = 1LL;
      --v8;
    }
    while ( v8 );
    if ( !(_BYTE)v6 )
LABEL_14:
      KeWaitForSingleObject(p_DisconnectData + 47, Executive, 0, 0, 0LL);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, (__int64)v7, v8);
  if ( (char)v3 > 0 )
  {
    v10 = v3;
    do
    {
      KeFreeInterrupt(*v4++);
      --v10;
    }
    while ( v10 );
  }
  IopDestroyActiveConnectBlock(v13);
  ExFreePoolWithTag(p_DisconnectData, 0);
}
