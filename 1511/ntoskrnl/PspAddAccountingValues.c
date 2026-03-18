/*
 * XREFs of PspAddAccountingValues @ 0x1403EBE98
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x1403EB244 (PspEnforceLimitsJobPostCallback.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1403EBDD8 (PspQueryProcessAccountingInformationCallback.c)
 *     PspEnforceLimitsProcessCallback @ 0x1403EC768 (PspEnforceLimitsProcessCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspAddAccountingValues(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax

  v2 = a1;
  v3 = a2 - (_QWORD)a1;
  v4 = 4LL;
  do
  {
    *v2 += *(_QWORD *)((char *)v2 + v3);
    ++v2;
    --v4;
  }
  while ( v4 );
  v5 = a1 + 4;
  v6 = 6LL;
  do
  {
    result = *(_QWORD *)((char *)v5 + v3);
    *v5++ += result;
    --v6;
  }
  while ( v6 );
  return result;
}
