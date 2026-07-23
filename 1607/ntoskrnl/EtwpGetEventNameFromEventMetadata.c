/*
 * XREFs of EtwpGetEventNameFromEventMetadata @ 0x140229DC0
 * Callers:
 *     EtwpApplyEventNameFilter @ 0x140229810 (EtwpApplyEventNameFilter.c)
 * Callees:
 *     strnlen @ 0x14014F1C4 (strnlen.c)
 */

const char *__fastcall EtwpGetEventNameFromEventMetadata(__int64 a1, unsigned int a2, _WORD *a3)
{
  const char *v4; // rbx
  const char *v5; // rdi
  char v6; // al
  unsigned __int16 v7; // di
  __int16 v8; // ax

  if ( a2 >= 3 )
  {
    v4 = (const char *)(a1 + 2);
    v5 = (const char *)(a1 + a2);
    while ( v4 != v5 )
    {
      v6 = *v4++;
      if ( v6 >= 0 )
      {
        if ( v4 == v5 )
          return 0LL;
        v7 = (_WORD)v5 - (_WORD)v4;
        v8 = strnlen(v4, v7);
        *a3 = v8;
        if ( v8 == v7 )
          return 0LL;
        return v4;
      }
    }
  }
  return 0LL;
}
