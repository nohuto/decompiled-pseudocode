/*
 * XREFs of ViKeWaitForMultipleObjectsCommon @ 0x1406C7230
 * Callers:
 *     VerifierKeWaitForMultipleObjects @ 0x1406C6824 (VerifierKeWaitForMultipleObjects.c)
 *     VerifierKeWaitForMultipleObjectsNoReboot @ 0x1406C68CC (VerifierKeWaitForMultipleObjectsNoReboot.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     ViKeInjectStatusAlerted @ 0x1406C6EB8 (ViKeInjectStatusAlerted.c)
 *     ViKeWaitSanityChecks @ 0x1406C73B4 (ViKeWaitSanityChecks.c)
 */

NTSTATUS __fastcall ViKeWaitForMultipleObjectsCommon(
        __int64 Count,
        PVOID Object[],
        __int64 WaitType,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN a6,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray)
{
  struct _KTHREAD *CurrentThread; // r10
  WAIT_TYPE v10; // ebp
  ULONG v12; // edi
  unsigned __int8 WaitIrql; // r11
  BOOLEAN Alertable; // [rsp+28h] [rbp-30h]

  CurrentThread = KeGetCurrentThread();
  v10 = (int)WaitType;
  v12 = Count;
  if ( (CurrentThread->MiscFlags & 4) != 0 )
    WaitIrql = CurrentThread->WaitIrql;
  else
    WaitIrql = KeGetCurrentIrql();
  LOBYTE(WaitType) = WaitMode;
  Alertable = WaitIrql;
  ViKeWaitSanityChecks(Count, Object, WaitType, Timeout, (*((_DWORD *)&CurrentThread->0 + 1) >> 5) & 1, Alertable);
  if ( ViKeInjectStatusAlerted(a6) )
    return 257;
  else
    return pXdvKeWaitForMultipleObjects(v12, Object, v10, WaitReason, WaitMode, a6, Timeout, WaitBlockArray);
}
