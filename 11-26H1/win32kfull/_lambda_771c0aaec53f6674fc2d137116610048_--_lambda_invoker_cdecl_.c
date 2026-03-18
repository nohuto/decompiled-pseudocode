/*
 * XREFs of _lambda_771c0aaec53f6674fc2d137116610048_::_lambda_invoker_cdecl_ @ 0x14024AA70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1401A36FC (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_771c0aaec53f6674fc2d137116610048_::_lambda_invoker_cdecl_(__int64 a1, _OWORD *a2)
{
  char v4; // dl
  __int128 v6; // [rsp+20h] [rbp-18h]

  *a2 = 0LL;
  v4 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0;
  if ( (v4 == (char)0x80 || v4 == -64) && IsWindowActivateable(*(const struct tagWND **)(a1 + 120)) )
  {
    *(_QWORD *)&v6 = *(_QWORD *)(a1 + 120);
    *((_QWORD *)&v6 + 1) = 2LL;
    *a2 = v6;
  }
  return *(_QWORD *)a2 != 0LL;
}
