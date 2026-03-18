/*
 * XREFs of MiRecheckCombineVm @ 0x14022AF38
 * Callers:
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 * Callees:
 *     MiGetTopLevelPfn @ 0x1400FD760 (MiGetTopLevelPfn.c)
 *     MiCombineCandidate @ 0x140227894 (MiCombineCandidate.c)
 */

bool __fastcall MiRecheckCombineVm(__int64 a1, __int64 a2, signed __int32 *a3)
{
  int v5; // edi
  bool result; // al
  __int64 TopLevelPfn; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  signed __int32 *v10; // rax

  v5 = MiCombineCandidate(a1, a2);
  result = 0;
  if ( v5 )
  {
    if ( v5 == 2 )
      return a3 == dword_14034FE40;
    TopLevelPfn = MiGetTopLevelPfn(a2, 0LL);
    v8 = *(_QWORD *)TopLevelPfn;
    v9 = (*(_QWORD *)(TopLevelPfn + 24) >> 62) & 1LL;
    if ( TopLevelPfn != a2 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v5 == 1 )
    {
      v10 = (signed __int32 *)(v8 + 1272);
    }
    else
    {
      if ( (_DWORD)v9 == 1 )
        return 0;
      v10 = (signed __int32 *)(v8 + 2968);
    }
    return a3 == v10;
  }
  return result;
}
