/*
 * XREFs of SmProcessEmptyRequest @ 0x1406D9400
 * Callers:
 *     SmSetStoreInformation @ 0x140546F94 (SmSetStoreInformation.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ?SmEmptyStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z @ 0x140251834 (-SmEmptyStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessEmptyRequest(__int64 a1, __int64 a2, int a3, char a4)
{
  unsigned int v5; // ebx
  unsigned int *v6; // r15
  __int64 v7; // r12
  unsigned int v8; // esi
  __int64 v9; // r14
  struct _EX_RUNDOWN_REF *v10; // rdi
  unsigned __int64 v11; // rtt
  _DWORD *v12; // rdi
  unsigned __int64 v13; // rtt
  struct _EX_RUNDOWN_REF *v14; // rcx
  unsigned __int64 v15; // rtt
  _OWORD v17[8]; // [rsp+30h] [rbp-C8h] BYREF
  int v18; // [rsp+B0h] [rbp-48h]

  if ( a3 != 132 )
    return (unsigned int)-1073741306;
  v5 = 0;
  if ( a4 && (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v17[0] = *(_OWORD *)a2;
  v17[1] = *(_OWORD *)(a2 + 16);
  v17[2] = *(_OWORD *)(a2 + 32);
  v17[3] = *(_OWORD *)(a2 + 48);
  v17[4] = *(_OWORD *)(a2 + 64);
  v17[5] = *(_OWORD *)(a2 + 80);
  v17[6] = *(_OWORD *)(a2 + 96);
  v17[7] = *(_OWORD *)(a2 + 112);
  v18 = *(_DWORD *)(a2 + 128);
  if ( LOBYTE(v17[0]) != 2 || (unsigned int)BYTE1(v17[0]) - 1 > 0x1F || (v17[0] & 0xFFFF0000) != 0 )
    return (unsigned int)-1073741811;
  if ( BYTE1(v17[0]) )
  {
    v6 = (unsigned int *)v17 + 1;
    v7 = BYTE1(v17[0]);
    while ( 1 )
    {
      v8 = *v6;
      v9 = 176LL * (*v6 & 0x1F);
      v10 = (struct _EX_RUNDOWN_REF *)(v9 + a1);
      _m_prefetchw((const void *)(v9 + a1 + 8));
      v11 = *(_QWORD *)(v9 + a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + a1 + 8), v11 + 2, v11)
        && !ExfAcquireRundownProtection(v10 + 1) )
      {
        goto LABEL_17;
      }
      if ( (*(_WORD *)(v9 + a1 + 24) & 0x7FF) != v8 >> 5 )
        break;
      v12 = *(_DWORD **)(v9 + a1);
LABEL_18:
      if ( v12 )
      {
        if ( (*v12 & 0x40000) == 0 )
          SMKM_STORE_MGR<SM_TRAITS>::SmEmptyStore(a1, v12[1120] & 0x1F, 0);
        v14 = (struct _EX_RUNDOWN_REF *)(176LL * (v12[1120] & 0x1F) + a1 + 8);
        _m_prefetchw(v14);
        v15 = v14->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v15 != _InterlockedCompareExchange64((volatile signed __int64 *)v14, v15 - 2, v15) )
          ExfReleaseRundownProtection(v14);
      }
      ++v6;
      if ( !--v7 )
        return v5;
    }
    _m_prefetchw(&v10[1]);
    v13 = v10[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)&v10[1], v13 - 2, v13) )
      ExfReleaseRundownProtection(v10 + 1);
LABEL_17:
    v12 = 0LL;
    goto LABEL_18;
  }
  return v5;
}
