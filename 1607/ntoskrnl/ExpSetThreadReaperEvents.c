/*
 * XREFs of ExpSetThreadReaperEvents @ 0x1400B0E50
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 */

int ExpSetThreadReaperEvents()
{
  unsigned __int16 i; // bx
  __int64 v1; // rdx
  void *v2; // rax

  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v1 = KeNodeBlock[i];
    v2 = &KiNodeInit;
    if ( (_UNKNOWN *)v1 != (_UNKNOWN *)((char *)&KiNodeInit + 320 * i) )
    {
      if ( v1 )
      {
        LODWORD(v2) = *(_DWORD *)(v1 + 2092);
        if ( ((unsigned __int8)v2 & 1) != 0 )
          LODWORD(v2) = KeSetEvent((PRKEVENT)(v1 + 1912), 0, 0);
      }
    }
  }
  return (int)v2;
}
