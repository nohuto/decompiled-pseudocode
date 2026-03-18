/*
 * XREFs of PopPropogateCoolingChange @ 0x140236B60
 * Callers:
 *     PoSetThermalActiveCooling @ 0x1406B1D70 (PoSetThermalActiveCooling.c)
 *     PoSetThermalPassiveCooling @ 0x1406B1EC4 (PoSetThermalPassiveCooling.c)
 *     PopCoolingExtensionPnpNotification @ 0x1406B2064 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x1406B23F8 (PopDeactiveThermalRequest.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopDiagTraceCoolingExtensionActiveUpdate @ 0x1406B8960 (PopDiagTraceCoolingExtensionActiveUpdate.c)
 *     PopDiagTraceCoolingExtensionPassiveUpdate @ 0x1406B8A1C (PopDiagTraceCoolingExtensionPassiveUpdate.c)
 */

void __fastcall PopPropogateCoolingChange(__int64 a1, __int64 i)
{
  char v3; // bp
  unsigned __int8 v4; // si
  unsigned __int8 v5; // al
  signed __int64 *v6; // rdi
  signed __int64 v7; // rax
  signed __int64 v8; // rcx
  signed __int64 v9; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v11; // ax
  struct _KTHREAD *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rsi
  signed __int64 *v17; // rdi
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  signed __int64 v20; // rtt
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  __int64 v23; // rdx
  struct _KTHREAD *v24; // rax
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rsi
  struct _KEVENT *v29; // rcx
  struct _KEVENT *v30; // rcx

  if ( *(_BYTE *)(a1 + 67) )
  {
    *(_BYTE *)(a1 + 67) = 0;
    return;
  }
  do
  {
    while ( 1 )
    {
      v3 = 0;
      v4 = 100;
      if ( *(_BYTE *)(a1 + 64) )
      {
        for ( i = *(_QWORD *)(a1 + 16); i != a1 + 16; i = *(_QWORD *)i )
        {
          if ( *(_BYTE *)(i + 18) )
          {
            v5 = v4;
            if ( *(_BYTE *)(i + 16) < v4 )
              v5 = *(_BYTE *)(i + 16);
            v4 = v5;
            if ( *(_BYTE *)(i + 17) )
              v3 = 1;
          }
        }
      }
      if ( v4 == *(_BYTE *)(a1 + 66) )
        break;
      v6 = (signed __int64 *)(a1 + 32);
      *(_BYTE *)(a1 + 66) = v4;
      *(_BYTE *)(a1 + 67) = 1;
      if ( *(_QWORD *)(a1 + 40) )
        *(_QWORD *)(a1 + 40) = 0LL;
      _m_prefetchw(v6);
      v7 = *v6;
      v8 = *v6 - 16;
      if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v8 = 0LL;
      if ( (v7 & 2) != 0 || (v9 = *v6, v9 != _InterlockedCompareExchange64(v6, v8, v7)) )
        ExfReleasePushLock((_QWORD *)(a1 + 32), i);
      KeAbPostRelease(a1 + 32);
      CurrentThread = KeGetCurrentThread();
      v11 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v11;
      if ( !v11
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      PopDiagTraceCoolingExtensionPassiveUpdate(a1);
      (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 136))(*(_QWORD *)(a1 + 96), v4);
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      v14 = KeAbPreAcquire(a1 + 32, 0LL, 0LL, v13);
      v16 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 32), v14, a1 + 32, v15);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      *(_QWORD *)(a1 + 40) = KeGetCurrentThread();
      if ( *(_BYTE *)(a1 + 67) )
      {
        *(_BYTE *)(a1 + 67) = 0;
        break;
      }
    }
    if ( v3 == *(_BYTE *)(a1 + 65) )
      goto LABEL_48;
    v17 = (signed __int64 *)(a1 + 32);
    *(_BYTE *)(a1 + 65) = v3;
    *(_BYTE *)(a1 + 67) = 1;
    if ( *(_QWORD *)(a1 + 40) )
      *(_QWORD *)(a1 + 40) = 0LL;
    _m_prefetchw(v17);
    v18 = *v17;
    v19 = *v17 - 16;
    if ( (*v17 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v19 = 0LL;
    if ( (v18 & 2) != 0 || (v20 = *v17, v20 != _InterlockedCompareExchange64(v17, v19, v18)) )
      ExfReleasePushLock((_QWORD *)(a1 + 32), i);
    KeAbPostRelease(a1 + 32);
    v21 = KeGetCurrentThread();
    v22 = v21->KernelApcDisable + 1;
    v21->KernelApcDisable = v22;
    if ( !v22
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
      && !v21->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    PopDiagTraceCoolingExtensionActiveUpdate(a1);
    LOBYTE(v23) = v3;
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 128))(*(_QWORD *)(a1 + 96), v23);
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    v26 = KeAbPreAcquire(a1 + 32, 0LL, 0LL, v25);
    v28 = v26;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 32), v26, a1 + 32, v27);
    if ( v28 )
      *(_BYTE *)(v28 + 26) |= 1u;
    *(_QWORD *)(a1 + 40) = KeGetCurrentThread();
  }
  while ( !*(_BYTE *)(a1 + 67) );
  *(_BYTE *)(a1 + 67) = 0;
LABEL_48:
  v29 = *(struct _KEVENT **)(a1 + 80);
  if ( v29 )
    KeSetEvent(v29, 0, 0);
  v30 = *(struct _KEVENT **)(a1 + 72);
  if ( v30 )
    KeSetEvent(v30, 0, 0);
}
