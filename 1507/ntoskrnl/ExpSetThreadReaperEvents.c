/*
 * XREFs of ExpSetThreadReaperEvents @ 0x14012F394
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 */

int ExpSetThreadReaperEvents()
{
  unsigned __int16 i; // bx
  __int64 v1; // rcx
  char *v2; // rax

  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v1 = KeNodeBlock[i];
    v2 = (char *)&KiNodeInit + 256 * (unsigned __int64)i;
    if ( (char *)v1 != v2 )
    {
      if ( v1 )
      {
        LODWORD(v2) = *(_DWORD *)(v1 + 1308);
        if ( ((unsigned __int8)v2 & 1) != 0 )
          LODWORD(v2) = KeSetEvent((PRKEVENT)(v1 + 1128), 0, 0);
      }
    }
  }
  return (int)v2;
}
