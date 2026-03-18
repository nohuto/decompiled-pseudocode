/*
 * XREFs of PopPowerRequestCleanUp @ 0x1400D0F98
 * Callers:
 *     PoDeletePowerRequest @ 0x1404E6058 (PoDeletePowerRequest.c)
 *     PopDeletePowerRequestObject @ 0x1404E6074 (PopDeletePowerRequestObject.c)
 *     PopClosePowerRequestObject @ 0x14055CB38 (PopClosePowerRequestObject.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PoDestroyReasonContext @ 0x1400D10E8 (PoDestroyReasonContext.c)
 *     PopPowerRequestExecuteCallbacks @ 0x1400D1144 (PopPowerRequestExecuteCallbacks.c)
 *     PopDiagTracePowerRequestClose @ 0x1404E607C (PopDiagTracePowerRequestClose.c)
 *     PopReleasePowerRequestPushLock @ 0x1404E6108 (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestDeleteEntryById @ 0x1404E61A8 (PopPowerRequestDeleteEntryById.c)
 *     PopDisablePowerExecutionRequest @ 0x1404E61DC (PopDisablePowerExecutionRequest.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x1404E62B4 (PopUmpoSendPowerRequestOverrideCleanup.c)
 */

void __fastcall PopPowerRequestCleanUp(_BYTE *Object)
{
  _QWORD *v1; // rbx
  char v2; // di
  __int64 v3; // rax
  _QWORD *v4; // rcx
  char v5; // si
  unsigned int v6; // ecx
  int *v7; // r8
  __int64 v8; // rdx
  _DWORD *v9; // r9
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = Object;
  v2 = Object[104];
  if ( *(_QWORD *)Object )
  {
    LOBYTE(Object) = 1;
    PopAcquirePowerRequestPushLock(Object);
    v3 = *v1;
    if ( *v1 )
    {
      v4 = (_QWORD *)v1[1];
      if ( *(_QWORD **)(v3 + 8) != v1 || (_QWORD *)*v4 != v1 )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      *v1 = 0LL;
      if ( *((_DWORD *)v1 + 11) && (byte_14032E534 || v2) )
      {
        *((_DWORD *)v1 + 11) = 0;
        if ( !v2 && (v1[3] & 8) == 0 )
          --dword_1403163D0;
      }
      PopDisablePowerExecutionRequest(v1, 0LL);
      v1[12] = 0LL;
      if ( v2 )
        --PopSpecialPowerRequestObjectCount;
      else
        --PopPowerRequestObjectCount;
      PopPowerRequestDeleteEntryById(*((unsigned int *)v1 + 7));
      PopReleasePowerRequestPushLock();
      PopDiagTracePowerRequestClose(v1);
      KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
      v5 = *((_BYTE *)v1 + 77);
      if ( v5 )
      {
        v12 = v1[7];
        v13 = (_QWORD *)v1[8];
        if ( *(_QWORD **)(v12 + 8) != v1 + 7 || (_QWORD *)*v13 != v1 + 7 )
          __fastfail(3u);
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        *((_BYTE *)v1 + 77) = 0;
      }
      v6 = 0;
      v7 = PopPowerRequestAttributes;
      v8 = 0LL;
      v9 = v1 + 4;
      do
      {
        v10 = *((_DWORD *)v1 + 6);
        if ( !_bittest(&v10, v6) )
        {
          if ( *v9 )
          {
            v11 = *v7 - 1;
            *v7 = v11;
            if ( !v6 || v6 == 3 || !v11 )
              --*((_BYTE *)v1 + v8 + 72);
          }
        }
        ++v6;
        ++v8;
        ++v9;
        v7 += 4;
      }
      while ( v6 < 5 );
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      PopPowerRequestExecuteCallbacks(v1 + 9, *((unsigned int *)v1 + 7), *((unsigned int *)v1 + 4));
      if ( v5 )
        ObfDereferenceObjectWithTag(v1, 0x746C6644u);
      PoDestroyReasonContext(v1[10]);
      if ( !v2 )
        PopUmpoSendPowerRequestOverrideCleanup(v1);
    }
    else
    {
      PopReleasePowerRequestPushLock();
    }
  }
}
