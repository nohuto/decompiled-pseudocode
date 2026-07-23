/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1800ECEB0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x1800742BC (FindNodeOrParent_0.c)
 *     RealSuccessor @ 0x1800744D0 (RealSuccessor.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

PVOID __cdecl RtlEnumerateGenericTableLikeADirectory(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_MATCH_FUNCTION MatchFunction,
        PVOID MatchData,
        ULONG NextFlag,
        PVOID *RestartKey,
        PULONG DeleteCount,
        PVOID Buffer)
{
  PVOID *v7; // rsi
  __int64 (__fastcall *v10)(PRTL_AVL_TABLE, PVOID *, PVOID); // r14
  PVOID *v12; // rbx
  PULONG v14; // r15
  int NodeOrParent_0; // eax
  int v16; // ecx

  v7 = RestartKey;
  v10 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))MatchFunction;
  v12 = (PVOID *)*RestartKey;
  if ( !Table->NumberGenericTableElements )
  {
    *RestartKey = 0LL;
    return 0LL;
  }
  v14 = DeleteCount;
  if ( !MatchFunction )
    v10 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))WinSqmCheckEscalationSetString;
  if ( *DeleteCount != Table->DeleteCount )
    v12 = 0LL;
  RestartKey = v12;
  if ( v12 )
    goto LABEL_14;
  NodeOrParent_0 = FindNodeOrParent_0((__int64)Table, (__int64)Buffer, &RestartKey);
  if ( NodeOrParent_0 == 1 )
  {
    v12 = RestartKey;
LABEL_14:
    if ( NextFlag )
      v12 = (PVOID *)RealSuccessor(v12);
    goto LABEL_16;
  }
  NextFlag = 0;
  if ( NodeOrParent_0 == 3 )
  {
    v12 = (PVOID *)RealSuccessor(RestartKey);
    goto LABEL_14;
  }
  v12 = RestartKey;
LABEL_16:
  if ( !v12 )
    return 0LL;
  while ( 1 )
  {
    v16 = v10(Table, v12 + 4, MatchData);
    if ( v16 != -1073741198 )
      break;
    v12 = (PVOID *)RealSuccessor(v12);
    if ( !v12 )
      return 0LL;
  }
  *v7 = v12;
  *v14 = Table->DeleteCount;
  if ( v16 )
    return 0LL;
  return v12 + 4;
}
