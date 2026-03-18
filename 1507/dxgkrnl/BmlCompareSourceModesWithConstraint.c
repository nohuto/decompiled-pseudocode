/*
 * XREFs of BmlCompareSourceModesWithConstraint @ 0x1C009946C
 * Callers:
 *     BmlCompareSourceModes @ 0x1C0099310 (BmlCompareSourceModes.c)
 * Callees:
 *     BmlDoesSourceModeObeyConstraint @ 0x1C0099510 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlCompareRegionsWithPivot @ 0x1C0099798 (BmlCompareRegionsWithPivot.c)
 */

__int64 __fastcall BmlCompareSourceModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 result; // rax
  int v18; // eax
  bool v19; // dl
  __int64 v20; // rax
  __int64 v21; // rax

  v8 = *(_QWORD *)(104LL * a2 + a1 + 16);
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a2, a3) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a2, a4) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( (*(_DWORD *)v8 & 0x100) == 0 )
    return 0LL;
  v18 = *(_DWORD *)(v8 + 104);
  v19 = *(_DWORD *)(a3 + 96) == v18;
  if ( v19 == (*(_DWORD *)(a4 + 96) == v18) )
    return BmlCompareRegionsWithPivot(
             (struct _D3DKMDT_2DREGION *)(a3 + 76),
             (struct _D3DKMDT_2DREGION *)(a4 + 76),
             (struct _D3DKMDT_2DREGION *)(v8 + 84));
  result = 0xFFFFFFFFLL;
  if ( v19 )
    return 1LL;
  return result;
}
