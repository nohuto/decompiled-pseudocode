/*
 * XREFs of PspAddAccountingValues @ 0x140468358
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x140467790 (PspEnforceLimitsJobPostCallback.c)
 *     PspEnforceLimitsProcessCallback @ 0x1404684A4 (PspEnforceLimitsProcessCallback.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140468A1C (PspQueryProcessAccountingInformationCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspAddAccountingValues(_QWORD *a1, char *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rdx
  signed __int64 v5; // r8
  __int64 v6; // rcx
  __int64 result; // rax

  *a1 += *(_QWORD *)a2;
  a1[1] += *((_QWORD *)a2 + 1);
  a1[3] += *((_QWORD *)a2 + 3);
  a1[2] += *((_QWORD *)a2 + 2);
  v3 = *((_QWORD *)a2 + 4);
  v4 = a1 + 5;
  a1[4] += v3;
  v5 = a2 - (char *)a1;
  v6 = 6LL;
  do
  {
    result = *(_QWORD *)((char *)v4 + v5);
    *v4++ += result;
    --v6;
  }
  while ( v6 );
  return result;
}
