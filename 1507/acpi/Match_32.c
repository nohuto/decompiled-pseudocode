/*
 * XREFs of Match_32 @ 0x1C00484EC
 * Callers:
 *     Match @ 0x1C0048430 (Match.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x1C001875C (IsCompatableDSDTRevision.c)
 *     EvalPackageElement @ 0x1C001AE64 (EvalPackageElement.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     MatchData_32 @ 0x1C004845C (MatchData_32.c)
 */

__int64 __fastcall Match_32(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rbx
  unsigned int *v5; // rbp
  unsigned int v6; // esi
  unsigned int v7; // ecx
  __int64 v8; // r9
  unsigned int v10[14]; // [rsp+20h] [rbp-38h] BYREF

  v3 = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"PIIIII");
  if ( !v3 )
  {
    v4 = *(_QWORD *)(a2 + 80);
    v5 = *(unsigned int **)(v4 + 32);
    memset(v10, 0, 0x28uLL);
    v6 = *(_DWORD *)(v4 + 216);
    do
    {
      FreeDataBuffs((__int64)v10, 1u);
      v3 = EvalPackageElement(v5, v6, (__int64)v10);
      if ( !v3
        && HIWORD(v10[0]) == 1
        && MatchData_32(v10[4], *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL), *(_DWORD *)(*(_QWORD *)(a2 + 80) + 96LL))
        && MatchData_32(v7, *(_DWORD *)(v8 + 136), *(_DWORD *)(v8 + 176)) )
      {
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = v6;
        goto LABEL_10;
      }
      ++v6;
    }
    while ( !v3 );
    if ( v3 == -1072431100 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
      IsCompatableDSDTRevision();
      v3 = 0;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = -1;
    }
LABEL_10:
    FreeDataBuffs((__int64)v10, 1u);
  }
  return v3;
}
