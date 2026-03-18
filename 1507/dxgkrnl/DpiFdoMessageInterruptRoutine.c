/*
 * XREFs of DpiFdoMessageInterruptRoutine @ 0x1C0009120
 * Callers:
 *     DpiFdoLineInterruptRoutine @ 0x1C0023B70 (DpiFdoLineInterruptRoutine.c)
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiFdoMessageInterruptRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  unsigned __int8 v6; // bl
  __int64 v7; // r8

  v3 = a3;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 4014LL);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 40LL) + 184LL))(
         *(_QWORD *)(*(_QWORD *)(a2 + 64) + 48LL),
         v3);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v5, &EventProfilerExit, v7, 4014LL);
  return v6;
}
