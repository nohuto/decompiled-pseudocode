/*
 * XREFs of ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C01E11A8
 * Callers:
 *     SpbCheckRect @ 0x1C000C984 (SpbCheckRect.c)
 *     SpbCheckPwnd @ 0x1C000DD28 (SpbCheckPwnd.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsSpbPresentOrNull(struct tagSPB *a1)
{
  struct tagSPB *i; // rax

  if ( a1 )
  {
    for ( i = *(struct tagSPB **)(gpDispInfo + 72LL); i; i = *(struct tagSPB **)i )
    {
      if ( i == a1 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    LOBYTE(i) = 1;
  }
  return (char)i;
}
