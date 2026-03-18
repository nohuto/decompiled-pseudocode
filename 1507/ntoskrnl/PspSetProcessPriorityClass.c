/*
 * XREFs of PspSetProcessPriorityClass @ 0x14041BFC8
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1405573CC (PspApplyIFEOPerfOptions.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SeCheckPrivilegedObject @ 0x140583928 (SeCheckPrivilegedObject.c)
 */

__int64 __fastcall PspSetProcessPriorityClass(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // di
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int16 v9; // ax

  v4 = a2;
  if ( a2 > 6u )
    return 3221225485LL;
  if ( a2 != *(_BYTE *)(a1 + 1111)
    && a2 == 4
    && !(a3
       ? ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
           SeIncreaseBasePriorityPrivilege,
           a3,
           512LL,
           a4)
       : SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a4)) )
  {
    return 3221225569LL;
  }
  v6 = *(_QWORD *)(a1 + 944);
  CurrentThread = KeGetCurrentThread();
  if ( v6 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 56), 1u);
    if ( (*(_DWORD *)(v6 + 856) & 0x20) != 0 )
      v4 = *(_BYTE *)(v6 + 880);
    ExReleaseResourceLite((PERESOURCE)(v6 + 56));
    v9 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v9;
    if ( !v9
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  *(_BYTE *)(a1 + 1111) = v4;
  return 0LL;
}
