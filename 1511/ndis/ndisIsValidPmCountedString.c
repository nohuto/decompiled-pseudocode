/*
 * XREFs of ndisIsValidPmCountedString @ 0x1C009749C
 * Callers:
 *     ndisOidPreAddPMProtocolOffload @ 0x1C0093000 (ndisOidPreAddPMProtocolOffload.c)
 *     ndisIsValidWoLPattern @ 0x1C00973E8 (ndisIsValidWoLPattern.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsValidPmCountedString(_WORD *a1)
{
  _WORD *v1; // rax
  __int64 v2; // rdx
  int v3; // eax

  if ( *a1 > 0x80u || (*a1 & 1) != 0 )
    return 0;
  v1 = a1 + 1;
  if ( a1 == (_WORD *)-2LL )
  {
    v3 = -1073741811;
  }
  else
  {
    v2 = 65LL;
    do
    {
      if ( !*v1 )
        break;
      ++v1;
      --v2;
    }
    while ( v2 );
    v3 = 0;
    if ( !v2 )
      v3 = -1073741811;
  }
  return v3 >= 0;
}
