/*
 * XREFs of CmSetTraceNotifyRoutines @ 0x1405FB9AC
 * Callers:
 *     EtwpDisableKernelTrace @ 0x140496B74 (EtwpDisableKernelTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmSetTraceNotifyRoutines(
        __int64 (__fastcall *a1)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD),
        char a3)
{
  if ( a3 )
  {
    CmpTraceRoutine = 0LL;
    CmpTraceTxrRoutine = 0LL;
  }
  else
  {
    CmpTraceRoutine = a1;
    CmpTraceTxrRoutine = a2;
  }
  return 0LL;
}
