/*
 * XREFs of PerfInitiateLegacyPcc @ 0x1C00053B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfInitiateLegacyPcc(__int64 (*a1)(void))
{
  __int64 result; // rax

  result = ((__int64 (__fastcall *)(__int64, __int64 (__fastcall *)(), __int64 (*)(void)))qword_1C0009828)(
             qword_1C0009800,
             PccInitiateAcquireCallback,
             a1);
  if ( (int)result < 0 )
  {
    if ( a1 )
      return a1();
  }
  return result;
}
