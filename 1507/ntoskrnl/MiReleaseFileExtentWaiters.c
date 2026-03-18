/*
 * XREFs of MiReleaseFileExtentWaiters @ 0x1406AA4D8
 * Callers:
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiInitializeFileExtents @ 0x140230AFC (MiInitializeFileExtents.c)
 * Callees:
 *     KeSignalGate @ 0x140127FF0 (KeSignalGate.c)
 */

__int64 __fastcall MiReleaseFileExtentWaiters(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v3 = (_QWORD *)*a1;
      result = KeSignalGate((__int64)(a1 + 1), 1u, a3);
      a1 = v3;
    }
    while ( v3 );
  }
  return result;
}
