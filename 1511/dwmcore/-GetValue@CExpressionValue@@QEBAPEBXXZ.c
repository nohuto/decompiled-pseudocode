/*
 * XREFs of ?GetValue@CExpressionValue@@QEBAPEBXXZ @ 0x180136BF4
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18012965C (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall CExpressionValue::GetValue(CExpressionValue *this)
{
  __int128 *result; // rax

  if ( *(_DWORD *)this == 104 )
  {
    result = (__int128 *)*((_QWORD *)this + 1);
    if ( !result )
    {
      if ( (dword_1801A42B0 & 1) == 0 )
      {
        dword_1801A42C8 = 0;
        dword_1801A42CC = 0;
        dword_1801A42B0 |= 1u;
        xmmword_1801A42B8 = _xmm;
      }
      return &xmmword_1801A42B8;
    }
  }
  else if ( *(_DWORD *)this == 265 )
  {
    result = (__int128 *)*((_QWORD *)this + 1);
    if ( !result )
    {
      if ( (dword_1801A42B0 & 2) == 0 )
        dword_1801A42B0 |= 2u;
      return (__int128 *)&unk_1801A42D0;
    }
  }
  else
  {
    return (__int128 *)((char *)this + 8);
  }
  return result;
}
