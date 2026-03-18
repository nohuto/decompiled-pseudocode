/*
 * XREFs of PopFxAcpiPrepareDevice @ 0x140242EA8
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140242B78 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1401671BC (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopPluginAcpiNotificationStrict @ 0x140243428 (PopPluginAcpiNotificationStrict.c)
 */

__int64 __fastcall PopFxAcpiPrepareDevice(const UNICODE_STRING *a1, ULONG_PTR a2, ULONG_PTR *a3, _BYTE *a4)
{
  int AcpiDeviceByUniqueId; // edi
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r9
  ULONG_PTR i; // rbx
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax

  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a1, 0LL, (__int64)a3, (__int64)a4);
  if ( AcpiDeviceByUniqueId < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = 0LL;
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire((ULONG_PTR)&PopFxPluginLock, 0LL, 0LL, v8);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxPluginLock, v11, (ULONG_PTR)&PopFxPluginLock, v12);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    for ( i = PopFxPluginList; (ULONG_PTR *)i != &PopFxPluginList; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 16) >= 3u
        && *(_QWORD *)(i + 112)
        && (unsigned __int8)PopPluginAcpiNotificationStrict(i, 1uLL, a2)
        && *(_BYTE *)(a2 + 12) )
      {
        v10 = i;
        break;
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    v14 = KeGetCurrentThread();
    v15 = v14->KernelApcDisable + 1;
    v14->KernelApcDisable = v15;
    if ( !v15
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
      && !v14->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v10 )
    {
      *a3 = v10;
      AcpiDeviceByUniqueId = 0;
      *a4 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)AcpiDeviceByUniqueId;
}
