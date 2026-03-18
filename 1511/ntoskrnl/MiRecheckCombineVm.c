/*
 * XREFs of MiRecheckCombineVm @ 0x1401282E0
 * Callers:
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiGetTopLevelPfn @ 0x1400D56E0 (MiGetTopLevelPfn.c)
 *     MiCombineCandidate @ 0x14012A1D0 (MiCombineCandidate.c)
 */

bool __fastcall MiRecheckCombineVm(__int64 a1, __int64 a2, LONG *a3)
{
  int v5; // edi
  bool result; // al
  __int64 TopLevelPfn; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  LONG *v10; // rax

  v5 = MiCombineCandidate();
  result = 0;
  if ( v5 )
  {
    if ( v5 == 2 )
      return a3 == &dword_1402FF980;
    TopLevelPfn = MiGetTopLevelPfn(a2, 0LL);
    v8 = *(_QWORD *)TopLevelPfn;
    v9 = (*(_QWORD *)(TopLevelPfn + 24) >> 62) & 1LL;
    if ( TopLevelPfn != a2 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v5 == 1 )
    {
      v10 = (LONG *)(v8 + 1280);
    }
    else
    {
      if ( (_DWORD)v9 == 1 )
        return 0;
      v10 = (LONG *)(v8 + 2968);
    }
    return a3 == v10;
  }
  return result;
}
