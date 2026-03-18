/*
 * XREFs of scl_ConvertToFixedFUnits @ 0x1C02DC284
 * Callers:
 *     scl_OriginalCharPointsToCurrentFixedFUnits @ 0x1C02DC2A4 (scl_OriginalCharPointsToCurrentFixedFUnits.c)
 *     scl_OriginalPhantomPointsToCurrentFixedFUnits @ 0x1C02DC2F8 (scl_OriginalPhantomPointsToCurrentFixedFUnits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_ConvertToFixedFUnits(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 result; // rax

  v3 = a3;
  if ( a3 > 0 )
  {
    v4 = a1 - (_QWORD)a2;
    do
    {
      result = (unsigned int)(*(_DWORD *)((char *)a2 + v4) << 6);
      *a2++ = result;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
