/*
 * XREFs of LdrpFatalExceptionFilter @ 0x1800CB54C
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x180076C10 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x1800788F0 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReportSilentProcessExit @ 0x18005B560 (RtlReportSilentProcessExit.c)
 *     RtlDecodePointer @ 0x18005C980 (RtlDecodePointer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800E8AF0 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall LdrpFatalExceptionFilter(_DWORD **a1)
{
  struct _TEB *v2; // rcx
  void (__fastcall *v3)(_DWORD **); // rax

  v2 = NtCurrentTeb();
  if ( **a1 == -1073741571 && v2->NtTib.StackLimit > v2->DeallocationStack )
  {
    RtlReportSilentProcessExit(-1LL, -1073741571);
  }
  else
  {
    v3 = (void (__fastcall *)(_DWORD **))RtlDecodePointer(RtlpUnhandledExceptionFilter);
    if ( v3 )
      v3(a1);
    else
      RtlUnhandledExceptionFilter2(a1, &unk_180101832);
  }
  ZwTerminateProcess();
  return 0LL;
}
