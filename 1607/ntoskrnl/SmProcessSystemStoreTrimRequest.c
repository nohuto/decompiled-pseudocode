/*
 * XREFs of SmProcessSystemStoreTrimRequest @ 0x140696FD0
 * Callers:
 *     SmSetStoreInformation @ 0x1403E472C (SmSetStoreInformation.c)
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x140003390 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14021CDC0 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessSystemStoreTrimRequest(unsigned __int64 a1, int a2, char a3)
{
  __int128 *v3; // r9
  __int64 *v5; // rax
  __int128 v6; // [rsp+20h] [rbp-18h]

  v3 = (__int128 *)a1;
  if ( a2 != 16 )
    return 3221225990LL;
  if ( a3 )
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_BYTE *)a1 = *(_BYTE *)a1;
    *(_BYTE *)(a1 + 15) = *(_BYTE *)(a1 + 15);
  }
  v6 = *v3;
  if ( (unsigned __int8)*v3 != 1 )
    return 3221225561LL;
  if ( (v6 & 0xFFFFFF00) != 0 || !*((_QWORD *)&v6 + 1) )
    return 3221225485LL;
  if ( dword_1403BF178 == -1 )
    return 3221226021LL;
  v5 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, dword_1403BF178 & 0x3FF);
  if ( (*(_DWORD *)*v5 & 0x40000) != 0 )
    return SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(*v5, *((__int64 *)&v6 + 1));
  else
    return 3221225659LL;
}
