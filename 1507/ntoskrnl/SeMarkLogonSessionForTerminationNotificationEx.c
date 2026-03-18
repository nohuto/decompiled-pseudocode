/*
 * XREFs of SeMarkLogonSessionForTerminationNotificationEx @ 0x1405562D0
 * Callers:
 *     SeMarkLogonSessionForTerminationNotification @ 0x1405562C8 (SeMarkLogonSessionForTerminationNotification.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall SeMarkLogonSessionForTerminationNotificationEx(_DWORD *a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rbp
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax

  v3 = *a1 & 0xF;
  v5 = SepLogonSessions + 8 * v3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = &SepRmDbLock + (v3 & 3);
  ExAcquireResourceExclusiveLite(v7, 1u);
  while ( 1 )
  {
    v5 = *(_QWORD *)v5;
    if ( !v5 )
      break;
    if ( (*(_QWORD *)(v5 + 160) == a2 || !a2) && *a1 == *(_DWORD *)(v5 + 8) && a1[1] == *(_DWORD *)(v5 + 12) )
    {
      *(_DWORD *)(v5 + 32) |= 1u;
      break;
    }
  }
  ExReleaseResourceLite(v7);
  v8 = KeGetCurrentThread();
  v9 = v8->KernelApcDisable + 1;
  v8->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
    && !v8->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5 == 0 ? 0xC0000225 : 0;
}
