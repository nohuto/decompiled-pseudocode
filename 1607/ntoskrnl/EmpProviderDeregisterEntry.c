/*
 * XREFs of EmpProviderDeregisterEntry @ 0x1401B8090
 * Callers:
 *     EmProviderDeregister @ 0x14061CE10 (EmProviderDeregister.c)
 *     EmProviderDeregisterEntry @ 0x14061CFDC (EmProviderDeregisterEntry.c)
 * Callees:
 *     EmpQueueRuleUpdateState @ 0x14013CC5C (EmpQueueRuleUpdateState.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall EmpProviderDeregisterEntry(char *P)
{
  char *v1; // rax
  __int64 v3; // rdx
  char **v4; // rcx
  _QWORD **v5; // rdx
  PVOID *v6; // rcx
  _QWORD *i; // rdi

  if ( P )
  {
    v1 = P + 24;
    v3 = *((_QWORD *)P + 3);
    v4 = (char **)*((_QWORD *)P + 4);
    if ( *(char **)(v3 + 8) != v1 || *v4 != v1 )
      __fastfail(3u);
    *v4 = (char *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    v5 = (_QWORD **)*((_QWORD *)P + 5);
    v6 = (PVOID *)*((_QWORD *)P + 6);
    if ( v5[1] != (_QWORD *)(P + 40) || *v6 != P + 40 )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    for ( i = *(_QWORD **)(*(_QWORD *)P + 72LL); i; i = (_QWORD *)*i )
      EmpQueueRuleUpdateState(*(i - 1), 0LL);
    ExFreePoolWithTag(P, 0x72704D45u);
  }
}
