/*
 * XREFs of ?DxgkCddTerminateThread@@YAXPEAU_KEVENT@@@Z @ 0x1C00C6670
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 */

void __fastcall DxgkCddTerminateThread(PRKEVENT Event, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)Event, &EventProfilerEnter, a3, 3013);
  retaddr = 0LL;
  if ( KeGetCurrentIrql() )
  {
    v6 = WdLogNewEntry5_WdAssertion(Event);
    *(_QWORD *)(v6 + 24) = 2563LL;
    WdLogEvent5_WdAssertion(v6);
  }
  KeSetEvent(Event, 0, 0);
  PsTerminateSystemThread(0);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v4, &EventProfilerExit, v5, 3013);
}
