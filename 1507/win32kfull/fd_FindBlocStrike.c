/*
 * XREFs of fd_FindBlocStrike @ 0x1C0123784
 * Callers:
 *     vSetClearTypeState__FONTCONTEXT @ 0x1C00AAAA0 (vSetClearTypeState__FONTCONTEXT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fd_FindBlocStrike(__int64 a1, __int16 a2, unsigned int a3)
{
  unsigned int v4; // r9d
  unsigned int i; // edx

  if ( a3 < 8 )
    return 0LL;
  v4 = _byteswap_ulong(*(_DWORD *)(a1 + 4));
  if ( v4 > (a3 - 8) / 0x30 || !v4 )
    return 0LL;
  for ( i = 53; a2 != *(unsigned __int8 *)(i - 1 + a1) || a2 != *(unsigned __int8 *)(i + a1); i += 48 )
  {
    if ( !--v4 )
      return 0LL;
  }
  return 1LL;
}
