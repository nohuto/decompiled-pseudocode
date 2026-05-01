/*
 * XREFs of wcsistr @ 0x180054A8C
 * Callers:
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x18001C610 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 *     ?MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@PEA_NPEAU_GUID@@2@Z @ 0x180049F50 (-MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@.c)
 * Callees:
 *     <none>
 */

wint_t *__fastcall wcsistr(wint_t *a1, __int64 a2)
{
  wint_t *v3; // rbx
  __int64 v4; // r15
  wint_t v5; // si
  _WORD *v6; // r14
  wint_t v7; // di

  v3 = a1;
  if ( !*a1 )
    return 0LL;
  v4 = -a2;
  while ( 1 )
  {
    v5 = *v3;
    v6 = (_WORD *)a2;
    v7 = *(_WORD *)a2;
    if ( iswupper(*v3) )
      v5 = towlower(v5);
    if ( iswupper(v7) )
      v7 = towlower(v7);
    if ( *v3 )
      break;
LABEL_15:
    if ( !*v6 )
      return v3;
    if ( !*++v3 )
      return 0LL;
  }
  while ( *v6 )
  {
    if ( v5 == v7 )
    {
      v7 = *++v6;
      v5 = *(wint_t *)((char *)v3 + (_QWORD)v6 + v4);
      if ( iswupper(v5) )
        v5 = towlower(v5);
      if ( iswupper(v7) )
        v7 = towlower(v7);
      if ( *(wint_t *)((char *)v3 + (_QWORD)v6 + v4) )
        continue;
    }
    goto LABEL_15;
  }
  return v3;
}
