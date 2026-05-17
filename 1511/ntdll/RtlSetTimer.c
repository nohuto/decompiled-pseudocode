/*
 * XREFs of RtlSetTimer @ 0x1800F5960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlSetTimer(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  return RtlCreateTimer(a1, a2, a3, a4, a5, a6, a7);
}
