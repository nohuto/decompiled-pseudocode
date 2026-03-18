/*
 * XREFs of PopFxAcpiUnregisterDevice @ 0x140243104
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140242B78 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x14002782C (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401FA0BC (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxDestroyDeviceCommon @ 0x1402379C8 (PopFxDestroyDeviceCommon.c)
 *     PopFxRemoveAcpiDevice @ 0x140238CF0 (PopFxRemoveAcpiDevice.c)
 *     PopPluginAcpiNotificationStrict @ 0x140243428 (PopPluginAcpiNotificationStrict.c)
 *     PoFxAbandonDevice @ 0x140538568 (PoFxAbandonDevice.c)
 */

__int64 __fastcall PopFxAcpiUnregisterDevice(__int64 a1, ULONG_PTR a2)
{
  struct _IO_REMOVE_LOCK *v2; // rdi
  NTSTATUS v5; // eax
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int v8; // ebp
  _QWORD *v9; // r9

  v2 = (struct _IO_REMOVE_LOCK *)(a1 + 240);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 240), (PVOID)0x72466F50, &File, 1u, 0x20u);
  v7 = *(_QWORD *)(a1 + 48);
  v8 = v5;
  if ( v7 )
    PoFxAbandonDevice();
  v9 = (_QWORD *)(a1 + 176);
  if ( (_QWORD *)*v9 != v9 )
    PopFxRemoveAcpiDevice(v7, a1, v6, (__int64)v9);
  IoReleaseRemoveLockAndWaitEx(v2, (PVOID)0x72466F50, 0x20u);
  PopPluginAcpiNotificationStrict(*(_QWORD *)(a1 + 80), 4uLL, a2);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 616), 0xFFFFFFFB);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  PopFxDestroyDeviceCommon((PVOID *)a1);
  return v8;
}
