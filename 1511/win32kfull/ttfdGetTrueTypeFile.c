/*
 * XREFs of ttfdGetTrueTypeFile @ 0x1C02475C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ttfdGetTrueTypeFile(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = 0;
  if ( *(_DWORD *)a1 )
  {
    result = *(_QWORD *)(a1 + 16);
    *a2 = *(_DWORD *)(a1 + 24);
  }
  return result;
}
