/*
 * XREFs of InitAnsiOem @ 0x1402A2A04
 * Callers:
 *     NtUserInitAnsiOem @ 0x1402B65C0 (NtUserInitAnsiOem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitAnsiOem(volatile void *a1, volatile void *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  _OWORD *v5; // rax
  _OWORD *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _OWORD *v10; // rax
  _OWORD *v11; // rcx

  ProbeForRead(a1, 1uLL, 1u);
  ProbeForRead(a2, 1uLL, 1u);
  v4 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19904);
  v5 = a1;
  v6 = (_OWORD *)(v4 + 1380);
  v7 = 2LL;
  v8 = 2LL;
  do
  {
    *v6 = *v5;
    v6[1] = v5[1];
    v6[2] = v5[2];
    v6[3] = v5[3];
    v6[4] = v5[4];
    v6[5] = v5[5];
    v6[6] = v5[6];
    v6 += 8;
    *(v6 - 1) = v5[7];
    v5 += 8;
    --v8;
  }
  while ( v8 );
  v9 = *(_QWORD *)(W32GetUserSessionState(v6, 0LL) + 19904);
  v10 = a2;
  v11 = (_OWORD *)(v9 + 1636);
  do
  {
    *v11 = *v10;
    v11[1] = v10[1];
    v11[2] = v10[2];
    v11[3] = v10[3];
    v11[4] = v10[4];
    v11[5] = v10[5];
    v11[6] = v10[6];
    v11 += 8;
    *(v11 - 1) = v10[7];
    v10 += 8;
    --v7;
  }
  while ( v7 );
  return 1LL;
}
