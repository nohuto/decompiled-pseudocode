/*
 * XREFs of EtwpGetProviderGroupFromTraits @ 0x14040879C
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x14040851C (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x140549074 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     strnlen @ 0x14014F1C4 (strnlen.c)
 */

char *__fastcall EtwpGetProviderGroupFromTraits(const char *a1)
{
  __int64 v1; // rax
  unsigned __int16 *v2; // rbx
  const char *v3; // rdi
  size_t v4; // rax
  const char *v5; // rcx

  v1 = *(unsigned __int16 *)a1;
  v2 = (unsigned __int16 *)(a1 + 2);
  v3 = &a1[v1];
  v4 = strnlen(a1 + 2, (int)v1 - 3);
  v5 = (char *)v2 + 1;
  while ( 1 )
  {
    v5 += v4;
    if ( v5 >= v3 )
      break;
    LOWORD(v4) = *(_WORD *)v5;
    if ( *(_WORD *)v5 == 19 && v5[2] == 1 )
      return (char *)(v5 + 3);
    v4 = (unsigned __int16)v4;
  }
  return 0LL;
}
