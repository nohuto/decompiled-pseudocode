/*
 * XREFs of ?GetValue@CExpressionValue@@QEBAPEBXXZ @ 0x1801213DC
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18010E508 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall CExpressionValue::GetValue(CExpressionValue *this)
{
  __int128 *result; // rax

  if ( *(_DWORD *)this == 101 )
  {
    result = (__int128 *)*((_QWORD *)this + 1);
    if ( !result )
    {
      if ( (dword_180196650 & 1) == 0 )
      {
        dword_180196670 = 0;
        dword_180196674 = 0;
        dword_180196650 |= 1u;
        xmmword_180196660 = _xmm;
      }
      return &xmmword_180196660;
    }
  }
  else if ( *(_DWORD *)this == 262 )
  {
    result = (__int128 *)*((_QWORD *)this + 1);
    if ( !result )
    {
      if ( (dword_180196650 & 2) == 0 )
        dword_180196650 |= 2u;
      return (__int128 *)&unk_180196680;
    }
  }
  else
  {
    return (__int128 *)((char *)this + 8);
  }
  return result;
}
