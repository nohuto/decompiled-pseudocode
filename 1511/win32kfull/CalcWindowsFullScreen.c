/*
 * XREFs of CalcWindowsFullScreen @ 0x1C01024A0
 * Callers:
 *     <none>
 * Callees:
 *     CalcWindowFullScreen @ 0x1C0055DBC (CalcWindowFullScreen.c)
 */

__int64 __fastcall CalcWindowsFullScreen(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rbx

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 96LL);
  if ( result )
  {
    while ( 1 )
    {
      v2 = (__int64 *)(result + 72);
      if ( !*(_QWORD *)(result + 72) )
        break;
      CalcWindowFullScreen(result);
      result = *v2;
    }
  }
  return result;
}
