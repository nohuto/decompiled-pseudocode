/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1400C1BEC
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1404E4280 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     RealSuccessor @ 0x1400C1CEC (RealSuccessor.c)
 *     FindNodeOrParent @ 0x1400C20A0 (FindNodeOrParent.c)
 */

PVOID __stdcall RtlEnumerateGenericTableLikeADirectory(
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
  int v15; // ecx
  int NodeOrParent; // eax

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
    v10 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))xHalTimerWatchdogStop;
  if ( *DeleteCount != Table->DeleteCount )
    v12 = 0LL;
  RestartKey = v12;
  if ( v12 )
    goto LABEL_9;
  NodeOrParent = FindNodeOrParent(Table, Buffer, &RestartKey);
  if ( NodeOrParent == 1 )
  {
    v12 = RestartKey;
    goto LABEL_9;
  }
  NextFlag = 0;
  if ( NodeOrParent == 3 )
  {
    v12 = (PVOID *)RealSuccessor(RestartKey);
LABEL_9:
    if ( NextFlag )
      v12 = (PVOID *)RealSuccessor(v12);
    goto LABEL_11;
  }
  v12 = RestartKey;
LABEL_11:
  if ( !v12 )
    return 0LL;
  while ( 1 )
  {
    v15 = v10(Table, v12 + 4, MatchData);
    if ( v15 != -1073741198 )
      break;
    v12 = (PVOID *)RealSuccessor(v12);
    if ( !v12 )
      return 0LL;
  }
  *v7 = v12;
  *v14 = Table->DeleteCount;
  if ( v15 )
    return 0LL;
  return v12 + 4;
}
