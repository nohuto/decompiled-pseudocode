/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x140019510
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x14043BDF4 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     FindNodeOrParent @ 0x140018070 (FindNodeOrParent.c)
 *     RealSuccessor @ 0x14001961C (RealSuccessor.c)
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
  PULONG v13; // r15
  int v14; // ecx
  int NodeOrParent; // eax

  v7 = RestartKey;
  v10 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))MatchFunction;
  v12 = (PVOID *)*RestartKey;
  if ( !Table->NumberGenericTableElements )
  {
    *RestartKey = 0LL;
    return 0LL;
  }
  v13 = DeleteCount;
  if ( !MatchFunction )
    v10 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))xHalTimerWatchdogStop;
  if ( *DeleteCount != Table->DeleteCount )
    v12 = 0LL;
  RestartKey = v12;
  if ( v12 )
    goto LABEL_7;
  NodeOrParent = FindNodeOrParent((__int64)Table, (__int64)Buffer, &RestartKey);
  if ( NodeOrParent == 1 )
  {
    v12 = RestartKey;
    goto LABEL_7;
  }
  NextFlag = 0;
  if ( NodeOrParent == 3 )
  {
    v12 = (PVOID *)RealSuccessor(RestartKey);
LABEL_7:
    if ( NextFlag )
      v12 = (PVOID *)RealSuccessor(v12);
    goto LABEL_9;
  }
  v12 = RestartKey;
LABEL_9:
  if ( v12 )
  {
    while ( 1 )
    {
      v14 = v10(Table, v12 + 4, MatchData);
      if ( v14 != -1073741198 )
        break;
      v12 = (PVOID *)RealSuccessor(v12);
      if ( !v12 )
        return 0LL;
    }
    *v7 = v12;
    *v13 = Table->DeleteCount;
    if ( !v14 )
      return v12 + 4;
  }
  return 0LL;
}
