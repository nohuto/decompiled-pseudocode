/*
 * XREFs of PerfCommitLegacyPcc @ 0x1C00073C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfCommitLegacyPcc(__int64 (*a1)(void))
{
  __int64 result; // rax

  result = ((__int64 (__fastcall *)(__int64, __int64 (__fastcall *)(__int64, __int64 (*)(void)), __int64 (*)(void)))qword_1C000E188)(
             qword_1C000E160,
             PccCommitAcquireCallback,
             a1);
  if ( (int)result < 0 )
  {
    if ( a1 )
      return a1();
  }
  return result;
}
