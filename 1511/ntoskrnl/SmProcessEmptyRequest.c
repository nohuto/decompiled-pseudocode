/*
 * XREFs of SmProcessEmptyRequest @ 0x140657174
 * Callers:
 *     SmSetStoreInformation @ 0x1404ACFC0 (SmSetStoreInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ?SmEmptyStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z @ 0x140202784 (-SmEmptyStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessEmptyRequest(__int64 a1, __int64 a2, int a3, char a4)
{
  unsigned int v5; // ebx
  unsigned int *v6; // r14
  __int64 v7; // r15
  unsigned int v8; // esi
  __int64 v9; // rdi
  _DWORD *v10; // rdi
  _OWORD v12[8]; // [rsp+20h] [rbp-C8h] BYREF
  int v13; // [rsp+A0h] [rbp-48h]

  if ( a3 != 132 )
    return (unsigned int)-1073741306;
  v5 = 0;
  if ( a4 && (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v12[0] = *(_OWORD *)a2;
  v12[1] = *(_OWORD *)(a2 + 16);
  v12[2] = *(_OWORD *)(a2 + 32);
  v12[3] = *(_OWORD *)(a2 + 48);
  v12[4] = *(_OWORD *)(a2 + 64);
  v12[5] = *(_OWORD *)(a2 + 80);
  v12[6] = *(_OWORD *)(a2 + 96);
  v12[7] = *(_OWORD *)(a2 + 112);
  v13 = *(_DWORD *)(a2 + 128);
  if ( LOBYTE(v12[0]) != 2 || (unsigned int)BYTE1(v12[0]) - 1 > 0x1F || (v12[0] & 0xFFFF0000) != 0 )
    return (unsigned int)-1073741811;
  if ( BYTE1(v12[0]) )
  {
    v6 = (unsigned int *)v12 + 1;
    v7 = BYTE1(v12[0]);
    while ( 1 )
    {
      v8 = *v6;
      v9 = a1 + 176LL * (*v6 & 0x1F);
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v9 + 8)) )
        goto LABEL_15;
      if ( (*(_WORD *)(v9 + 24) & 0x7FF) != v8 >> 5 )
        break;
      v10 = *(_DWORD **)v9;
LABEL_16:
      if ( v10 )
      {
        if ( (*v10 & 0x40000) == 0 )
          SMKM_STORE_MGR<SM_TRAITS>::SmEmptyStore(a1, v10[1120] & 0x1F, 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(176LL * (v10[1120] & 0x1F) + a1 + 8));
      }
      ++v6;
      if ( !--v7 )
        return v5;
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v9 + 8));
LABEL_15:
    v10 = 0LL;
    goto LABEL_16;
  }
  return v5;
}
