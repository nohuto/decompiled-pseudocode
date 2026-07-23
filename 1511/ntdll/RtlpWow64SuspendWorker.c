/*
 * XREFs of RtlpWow64SuspendWorker @ 0x1800D0700
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlpWow64SuspendWorker(unsigned __int64 a1, __int64 a2)
{
  if ( !Wow64SuspendLocalThread )
    return 3221225485LL;
  LOBYTE(a2) = a1 & 1;
  return ((__int64 (__fastcall *)(unsigned __int64, __int64))Wow64SuspendLocalThread)(a1 & 0xFFFFFFFFFFFFFFFEuLL, a2);
}
