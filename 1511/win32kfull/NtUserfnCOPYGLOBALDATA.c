/*
 * XREFs of NtUserfnCOPYGLOBALDATA @ 0x1C0222090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnCOPYGLOBALDATA(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned __int64 v7; // r9

  if ( a3 )
  {
    v7 = a3 + a4;
    if ( v7 > W32UserProbeAddress || v7 < a4 )
      *W32UserProbeAddress = 0;
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           a4,
           a5);
}
