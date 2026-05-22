/*
 * XREFs of ?GetCursorPosition@MouseProcessor@@UEAAJPEAJ0@Z @ 0x180059C80
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseProcessor::GetCursorPosition(MouseProcessor *this, int *a2, int *a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v3 = (*(__int64 (__fastcall **)(_QWORD, int *, int *))(**((_QWORD **)this + 8) + 32LL))(*((_QWORD *)this + 8), a2, a3);
  v5 = v3;
  if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 839, v3);
  return v5;
}
