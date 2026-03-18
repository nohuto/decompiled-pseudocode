/*
 * XREFs of NtUserfnPOPTINLPUINT @ 0x1C02232A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnPOPTINLPUINT(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // rax

  if ( a4 )
  {
    if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
      ExRaiseAccessViolation();
    v6 = 8 * a3;
    if ( 8 * a3 )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v6 + a4 > W32UserProbeAddress || v6 + a4 < a4 )
        *W32UserProbeAddress = 0;
    }
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2);
}
