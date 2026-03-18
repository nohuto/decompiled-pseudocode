/*
 * XREFs of AsyncCallBack @ 0x1C0046758
 * Callers:
 *     ParseNestedContext @ 0x1C0049C60 (ParseNestedContext.c)
 * Callees:
 *     RestartContext @ 0x1C0006440 (RestartContext.c)
 *     LogSchedEvent @ 0x1C001FB3C (LogSchedEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

int __fastcall AsyncCallBack(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rax
  __int64 (__fastcall *v5)(); // rsi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(); // rax

  v2 = *(_QWORD **)(a1 + 104);
  if ( v2 )
  {
    v5 = (__int64 (__fastcall *)())v2[11];
    v6 = v2[4];
    v7 = v2[12];
    v8 = v2[13];
  }
  else
  {
    v5 = *(__int64 (__fastcall **)())(a1 + 168);
    v6 = *(_QWORD *)(a1 + 72);
    v7 = *(_QWORD *)(a1 + 176);
    v8 = *(_QWORD *)(a1 + 184);
  }
  v9 = EvalMethodComplete;
  if ( v5 == EvalMethodComplete )
  {
    LogSchedEvent(1146048069, a1, v6, (int)a2, v8);
    *(_DWORD *)v8 = a2;
    *(_QWORD *)(v8 + 8) = a1;
    LODWORD(v9) = KeSetEvent((PRKEVENT)(v8 + 16), 0, 0);
  }
  else if ( a2 == 32771 )
  {
    LODWORD(v9) = RestartContext((PSLIST_ENTRY)a1, 0);
  }
  else if ( v5 )
  {
    LogSchedEvent(1095975746, a1, v6, (int)a2, v8);
    LODWORD(v9) = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))v5)(v6 + 112, a2, v7, v8);
  }
  return (int)v9;
}
