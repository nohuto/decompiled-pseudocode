/*
 * XREFs of DbgkpLkmdSnapData @ 0x1401AB748
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1405F0B8C (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapPendingIrps @ 0x1405F12B4 (DbgkpLkmdSnapPendingIrps.c)
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
