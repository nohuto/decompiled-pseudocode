/*
 * XREFs of ?_HasBlurBehind@CAccent@@IEAA_NXZ @ 0x18000233C
 * Callers:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180035600 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAccent::_HasBlurBehind(CAccent *this)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax

  v1 = *((_QWORD *)this + 40);
  result = 0LL;
  if ( v1 )
    return *(_DWORD *)(v1 + 296) != 0;
  return result;
}
