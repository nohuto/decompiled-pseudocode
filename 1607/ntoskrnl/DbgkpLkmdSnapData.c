/*
 * XREFs of DbgkpLkmdSnapData @ 0x1401B74D8
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14061AEA0 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapPendingIrps @ 0x14061B5C0 (DbgkpLkmdSnapPendingIrps.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgkpLkmdSnapData(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(a1 + 5184))(
           a1 + 5120,
           a2,
           a3,
           0LL,
           0LL,
           0LL);
}
