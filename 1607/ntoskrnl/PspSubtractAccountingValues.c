/*
 * XREFs of PspSubtractAccountingValues @ 0x140680F98
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSubtractAccountingValues(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 result; // rax

  if ( *a2 > *a1 )
    *a1 = 0LL;
  else
    *a1 -= *a2;
  v2 = a2[1];
  v3 = a1[1];
  if ( v2 > v3 )
    a1[1] = 0LL;
  else
    a1[1] = v3 - v2;
  v4 = a2[3];
  v5 = a1[3];
  if ( v4 > v5 )
    a1[3] = 0LL;
  else
    a1[3] = v5 - v4;
  v6 = a2[5];
  v7 = a1[5];
  if ( v6 > v7 )
    a1[5] = 0LL;
  else
    a1[5] = v7 - v6;
  v8 = a2[6];
  v9 = a1[6];
  if ( v8 > v9 )
    a1[6] = 0LL;
  else
    a1[6] = v9 - v8;
  v10 = a2[7];
  v11 = a1[7];
  if ( v10 > v11 )
    a1[7] = 0LL;
  else
    a1[7] = v11 - v10;
  v12 = a2[8];
  v13 = a1[8];
  if ( v12 > v13 )
    a1[8] = 0LL;
  else
    a1[8] = v13 - v12;
  v14 = a2[9];
  v15 = a1[9];
  if ( v14 > v15 )
    a1[9] = 0LL;
  else
    a1[9] = v15 - v14;
  v16 = a2[10];
  result = a1[10];
  if ( v16 > result )
  {
    a1[10] = 0LL;
  }
  else
  {
    result -= v16;
    a1[10] = result;
  }
  return result;
}
