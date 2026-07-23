/*
 * XREFs of MiRecheckCombineVm @ 0x1401FA06C
 * Callers:
 *     MiConvertStandbyToProto @ 0x1401F8EE8 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiGetTopLevelPfn @ 0x1401086F0 (MiGetTopLevelPfn.c)
 *     MiCombineCandidate @ 0x1401F7CA4 (MiCombineCandidate.c)
 */

__int64 __fastcall MiRecheckCombineVm(__int64 a1, __int64 a2, char *a3)
{
  int v5; // eax
  int v6; // edi
  unsigned int v8; // r8d
  __int64 TopLevelPfn; // rax
  __int64 v10; // rdx
  BOOL v11; // r8d
  char *v12; // rax

  v5 = MiCombineCandidate(a1, a2);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  if ( v5 == 2 )
  {
    LOBYTE(v8) = a3 == MiGetAnyMultiplexedVm(2);
    return v8;
  }
  TopLevelPfn = MiGetTopLevelPfn(a2, 0LL);
  v10 = *(_QWORD *)TopLevelPfn;
  v11 = (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0;
  if ( TopLevelPfn != a2 )
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 == 1 )
  {
    v12 = (char *)(v10 + 1280);
  }
  else
  {
    if ( v11 )
      return 0LL;
    v12 = (char *)(v10 + 3008);
  }
  return a3 == v12;
}
