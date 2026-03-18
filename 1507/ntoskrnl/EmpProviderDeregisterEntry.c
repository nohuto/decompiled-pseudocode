/*
 * XREFs of EmpProviderDeregisterEntry @ 0x1401E1D24
 * Callers:
 *     EmProviderDeregister @ 0x14066B8DC (EmProviderDeregister.c)
 *     EmProviderDeregisterEntry @ 0x14066BAA8 (EmProviderDeregisterEntry.c)
 * Callees:
 *     EmpQueueRuleUpdateState @ 0x14016183C (EmpQueueRuleUpdateState.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall EmpProviderDeregisterEntry(char *P, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rax
  __int64 v6; // rdx
  char **v7; // rcx
  _QWORD **v8; // rdx
  PVOID *v9; // rcx
  _QWORD *i; // rdi

  if ( P )
  {
    v4 = P + 24;
    v6 = *((_QWORD *)P + 3);
    v7 = (char **)*((_QWORD *)P + 4);
    if ( *(char **)(v6 + 8) != v4 || *v7 != v4 )
      __fastfail(3u);
    *v7 = (char *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    v8 = (_QWORD **)*((_QWORD *)P + 5);
    v9 = (PVOID *)*((_QWORD *)P + 6);
    if ( v8[1] != (_QWORD *)(P + 40) || *v9 != P + 40 )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
    for ( i = *(_QWORD **)(*(_QWORD *)P + 72LL); i; i = (_QWORD *)*i )
      EmpQueueRuleUpdateState(*(i - 1), 0LL, a3, a4);
    ExFreePoolWithTag(P, 0x72704D45u);
  }
}
