/*
 * XREFs of AuthzBasepUnicodeStringFromOperandValue @ 0x14009EB60
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140234484 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14023495C (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x14000EE20 (AuthzBasepMemAlloc.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall AuthzBasepUnicodeStringFromOperandValue(__int64 a1, __int64 a2, unsigned __int16 *a3, _BYTE *a4)
{
  unsigned int v4; // esi
  char v7; // di
  __int64 v9; // rax
  int v10; // ecx
  PVOID v11; // rax
  size_t v12; // r8
  const void *v13; // rdx
  unsigned __int16 *v15; // rdx
  unsigned int v16; // ebp
  __int64 v17; // rbx

  v4 = 0;
  *a4 = 0;
  v7 = a2;
  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    a3[1] = *(_WORD *)(a1 + 24);
    *a3 = *(_WORD *)(a1 + 24);
    v9 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    a3[1] = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL) + 2LL);
    *a3 = **(_WORD **)(*(_QWORD *)(a1 + 16) + 40LL);
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL) + 8LL);
  }
  *((_QWORD *)a3 + 1) = v9;
  if ( !*a3 || !v9 )
    return (unsigned int)-1073741406;
  v10 = *(_DWORD *)(a1 + 12);
  if ( v10 != 1 || (*(_BYTE *)(a1 + 32) & 1) == 0 )
  {
    if ( v10 != 2 )
    {
LABEL_11:
      if ( v7 )
      {
        v16 = 0;
        if ( (*a3 & 0xFFFE) != 0 )
        {
          do
          {
            v17 = *((_QWORD *)a3 + 1);
            *(_WORD *)(v17 + 2LL * v16) = RtlUpcaseUnicodeChar(*(_WORD *)(v17 + 2LL * v16));
            ++v16;
          }
          while ( v16 < *a3 >> 1 );
        }
      }
      return v4;
    }
    if ( !(_BYTE)a2 )
      return v4;
  }
  v11 = AuthzBasepMemAlloc(a3[1], a2, 0x61476553u);
  *((_QWORD *)a3 + 1) = v11;
  if ( v11 )
  {
    if ( *(_DWORD *)(a1 + 12) == 1 )
    {
      v12 = *(unsigned int *)(a1 + 24);
      v13 = *(const void **)(a1 + 32);
    }
    else
    {
      v15 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 16) + 40LL);
      v12 = *v15;
      v13 = (const void *)*((_QWORD *)v15 + 1);
    }
    memmove(v11, v13, v12);
    *a4 = 1;
    goto LABEL_11;
  }
  return 3221225495LL;
}
