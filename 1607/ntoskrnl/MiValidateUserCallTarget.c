/*
 * XREFs of MiValidateUserCallTarget @ 0x140661868
 * Callers:
 *     MmValidateUserCallTarget @ 0x1406618B0 (MmValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateUserCallTarget(unsigned __int64 a1, const signed __int64 **a2)
{
  unsigned __int64 v2; // r9
  __int64 result; // rax

  v2 = 2 * (a1 >> 4);
  result = _bittest64(*a2, v2);
  if ( (_DWORD)result )
  {
    if ( (a1 & 0xF) != 0 )
      return _bittest64(*a2, v2 + 1);
  }
  return result;
}
