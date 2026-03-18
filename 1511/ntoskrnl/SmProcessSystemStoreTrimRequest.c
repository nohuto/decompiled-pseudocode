/*
 * XREFs of SmProcessSystemStoreTrimRequest @ 0x140657C4C
 * Callers:
 *     SmSetStoreInformation @ 0x1404ACFC0 (SmSetStoreInformation.c)
 * Callees:
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14020326C (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessSystemStoreTrimRequest(ULONG64 a1, int a2, char a3)
{
  __int128 *v3; // r9
  _DWORD *v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h]

  v3 = (__int128 *)a1;
  if ( a2 != 16 )
    return 3221225990LL;
  if ( a3 )
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_BYTE *)a1 = *(_BYTE *)a1;
    *(_BYTE *)(a1 + 15) = *(_BYTE *)(a1 + 15);
  }
  v6 = *v3;
  if ( (unsigned __int8)*v3 != 1 )
    return 3221225561LL;
  if ( (v6 & 0xFFFFFF00) != 0 || !*((_QWORD *)&v6 + 1) )
    return 3221225485LL;
  if ( dword_140304FE8 == -1 )
    return 3221226021LL;
  v5 = (_DWORD *)*((_QWORD *)&SmGlobals + 22 * (dword_140304FE8 & 0x1F));
  if ( (*v5 & 0x40000) != 0 )
    return SMKM_STORE<SM_TRAITS>::SmStTrimWsStore((__int64)v5, *((__int64 *)&v6 + 1));
  else
    return 3221225659LL;
}
