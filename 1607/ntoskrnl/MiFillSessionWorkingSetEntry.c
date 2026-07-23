/*
 * XREFs of MiFillSessionWorkingSetEntry @ 0x1400AF390
 * Callers:
 *     PfpPrivSourceEnum @ 0x1404EB998 (PfpPrivSourceEnum.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFillSessionWorkingSetEntry(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r10
  unsigned __int64 result; // rax

  *(_DWORD *)a1 = *(_DWORD *)(a2 + 8);
  v2 = *(_QWORD *)(a2 + 3128);
  *(_QWORD *)(a1 + 32) = v2;
  v3 = *(_QWORD *)(a2 + 3120);
  *(_QWORD *)(a1 + 8) = v3;
  v4 = *(_QWORD *)(a2 + 2960);
  *(_QWORD *)(a1 + 24) = v4;
  v5 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 16) = v5;
  result = v5;
  if ( v4 < v5 )
    result = v4;
  *(_QWORD *)(a1 + 24) = result;
  if ( v2 < v3 )
    v3 = v2;
  if ( v3 < v5 )
    v5 = v3;
  *(_QWORD *)(a1 + 32) = v5;
  return result;
}
