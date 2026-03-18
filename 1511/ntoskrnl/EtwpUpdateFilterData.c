/*
 * XREFs of EtwpUpdateFilterData @ 0x1404CEC94
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404CCFEC (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1404CE9C4 (EtwpUpdateGuidEnableInfo.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400E2FD8 (KeGenericCallDpc.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpUpdatePerfectHashFunction @ 0x1406672F4 (EtwpUpdatePerfectHashFunction.c)
 *     EtwpUpdatePidFilterData @ 0x140667314 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1406673B0 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x140667470 (EtwpUpdateStringFilterData.c)
 */

__int64 __fastcall EtwpUpdateFilterData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r10d
  char v7; // bp
  __int64 v9; // rcx
  __int64 v11; // r14
  __int32 v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // r14
  PVOID PoolWithTag; // rax
  PVOID v17; // rsi
  __int32 v18; // esi
  __int64 v19; // rbp
  __int32 v20; // r14d
  unsigned int v21; // eax
  int v22; // edx
  __int64 v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-68h]
  PVOID updated; // [rsp+28h] [rbp-60h]
  PVOID P; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-48h] BYREF
  int v29; // [rsp+48h] [rbp-40h]
  int v30; // [rsp+4Ch] [rbp-3Ch]
  __int64 v32; // [rsp+A0h] [rbp+18h]
  char v33; // [rsp+A8h] [rbp+20h]

  v32 = a3;
  v5 = 0;
  v6 = a2;
  v33 = 0;
  v7 = a4;
  P = 0LL;
  updated = 0LL;
  LOBYTE(a4) = 0;
  v27 = 0LL;
  if ( !a3 || !*(_DWORD *)(a3 + 116) )
    v7 = 1;
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 368);
    if ( v9 )
    {
      v11 = 9LL * a2;
      v12 = _InterlockedExchange((volatile __int32 *)(v9 + 72LL * a2), 0);
      LOBYTE(a4) = v7;
      EtwpUpdateSchematizedFilterData(*(_QWORD *)(a1 + 368) + 72LL * a2, 0LL, 0LL, a4);
      if ( (v12 & 0x80000004) == 0x80000004 )
      {
        LOBYTE(v13) = v7;
        EtwpUpdatePidFilterData(*(_QWORD *)(a1 + 368) + 8 * v11, 0LL, v13, v14);
      }
      if ( (v12 & 0x80000008) == 0x80000008 )
      {
        LOBYTE(v13) = v7;
        EtwpUpdateStringFilterData(*(_QWORD *)(a1 + 368) + 16LL + 8 * v11, 0LL, v13, v14);
      }
      if ( (v12 & 0x80000010) == 0x80000010 )
      {
        LOBYTE(v13) = v7;
        EtwpUpdateStringFilterData(*(_QWORD *)(a1 + 368) + 24LL + 8 * v11, 0LL, v13, v14);
      }
      if ( (v12 & 0x80000020) == 0x80000020 )
      {
        LOBYTE(v13) = v7;
        EtwpUpdateStringFilterData(*(_QWORD *)(a1 + 368) + 32LL + 8 * v11, 0LL, v13, v14);
      }
      if ( (v12 & 0x80001000) == 0x80001000 )
      {
        LOBYTE(v13) = v7;
        P = (PVOID)EtwpUpdatePerfectHashFunction(*(_QWORD *)(a1 + 368) + 40LL + 8 * v11, 0LL, v13, v14);
      }
      if ( (v12 & 0x80000200) == 0x80000200 )
      {
        LOBYTE(v13) = v7;
        updated = (PVOID)EtwpUpdatePerfectHashFunction(*(_QWORD *)(a1 + 368) + 48LL + 8 * v11, 0LL, v13, v14);
      }
      if ( (v12 & 0x80000100) == 0x80000100 )
      {
        LOBYTE(v13) = v7;
        v15 = (void *)EtwpUpdatePerfectHashFunction(*(_QWORD *)(a1 + 368) + 56LL + 8 * v11, 0LL, v13, v14);
      }
      else
      {
        v15 = 0LL;
      }
      goto LABEL_72;
    }
    return v5;
  }
  if ( !*(_QWORD *)(a1 + 368) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x240uLL, 0x46777445u);
    v17 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    memset(PoolWithTag, 0, 0x240uLL);
    a3 = v32;
    LOBYTE(a4) = 0;
    v6 = a2;
    *(_QWORD *)(a1 + 368) = v17;
  }
  v18 = 0;
  v24 = 0;
  v19 = 9LL * v6;
  v20 = _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 368) + 72LL * v6), 0);
  v21 = 0;
  if ( !*(_DWORD *)(a3 + 116) )
    goto LABEL_47;
  do
  {
    v22 = *(_DWORD *)(v32 + 16LL * v21 + 132);
    v23 = v32 + *(_QWORD *)(v32 + 16LL * v21 + 120);
    v29 = *(_DWORD *)(v32 + 16LL * v21 + 128);
    v30 = v22;
    v28 = v23;
    switch ( v22 )
    {
      case -2147483648:
        EtwpUpdateSchematizedFilterData(*(_QWORD *)(a1 + 368) + 8 * v19, v6, &v28, 0LL);
        LOBYTE(a4) = 1;
        v33 = 1;
        goto LABEL_44;
      case -2147483644:
        EtwpUpdatePidFilterData(*(_QWORD *)(a1 + 368) + 8 * v19, &v28, 0LL, a4);
        v18 |= 0x80000004;
        goto LABEL_40;
      case -2147483640:
        EtwpUpdateStringFilterData(*(_QWORD *)(a1 + 368) + 16LL + 8 * v19, a5, 0LL, a4);
        v18 |= 0x80000008;
        goto LABEL_40;
      case -2147483632:
        EtwpUpdateStringFilterData(*(_QWORD *)(a1 + 368) + 24LL + 8 * v19, a5 + 8, 0LL, a4);
        v18 |= 0x80000010;
        goto LABEL_40;
      case -2147483616:
        EtwpUpdateStringFilterData(*(_QWORD *)(a1 + 368) + 32LL + 8 * v19, a5 + 16, 0LL, a4);
        v18 |= 0x80000020;
LABEL_40:
        LOBYTE(a4) = v33;
LABEL_44:
        v6 = a2;
        goto LABEL_45;
      case -2147483392:
        v27 = EtwpUpdatePerfectHashFunction(*(_QWORD *)(a1 + 368) + 56LL + 8 * v19, a5 + 40, 0LL, a4);
        v18 |= 0x80000100;
        break;
      case -2147483136:
        updated = (PVOID)EtwpUpdatePerfectHashFunction(*(_QWORD *)(a1 + 368) + 48LL + 8 * v19, a5 + 24, 0LL, a4);
        v18 |= 0x80000200;
        break;
      case -2147479552:
        P = (PVOID)EtwpUpdatePerfectHashFunction(*(_QWORD *)(a1 + 368) + 40LL + 8 * v19, a5 + 32, 0LL, a4);
        v18 |= 0x80001000;
        break;
      default:
        goto LABEL_45;
    }
    LOBYTE(a4) = v33;
LABEL_45:
    v21 = v24 + 1;
    v24 = v21;
  }
  while ( v21 < *(_DWORD *)(v32 + 116) );
  v5 = 0;
  if ( !(_BYTE)a4 )
  {
LABEL_47:
    LOBYTE(a4) = 1;
    EtwpUpdateSchematizedFilterData(*(_QWORD *)(a1 + 368) + 8 * v19, 0LL, 0LL, a4);
  }
  if ( (v20 & 0x80000004) == 0x80000004 && (v18 & 0x80000004) != 0x80000004 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdatePidFilterData(*(_QWORD *)(a1 + 368) + 8 * v19, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000008) == 0x80000008 && (v18 & 0x80000008) != 0x80000008 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(*(_QWORD *)(a1 + 368) + 16LL + 8 * v19, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000010) == 0x80000010 && (v18 & 0x80000010) != 0x80000010 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(*(_QWORD *)(a1 + 368) + 24LL + 8 * v19, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000020) == 0x80000020 && (v18 & 0x80000020) != 0x80000020 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(*(_QWORD *)(a1 + 368) + 32LL + 8 * v19, 0LL, a3, a4);
  }
  if ( (v20 & 0x80001000) == 0x80001000 && (v18 & 0x80001000) != 0x80001000 )
  {
    LOBYTE(a3) = 1;
    P = (PVOID)EtwpUpdatePerfectHashFunction(*(_QWORD *)(a1 + 368) + 40LL + 8 * v19, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000200) == 0x80000200 && (v18 & 0x80000200) != 0x80000200 )
  {
    LOBYTE(a3) = 1;
    updated = (PVOID)EtwpUpdatePerfectHashFunction(*(_QWORD *)(a1 + 368) + 48LL + 8 * v19, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000100) != 0x80000100 || (v18 & 0x80000100) == 0x80000100 )
  {
    v15 = (void *)v27;
  }
  else
  {
    LOBYTE(a3) = 1;
    v15 = (void *)EtwpUpdatePerfectHashFunction(*(_QWORD *)(a1 + 368) + 56LL + 8 * v19, 0LL, a3, a4);
  }
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 368) + 8 * v19), v18);
LABEL_72:
  if ( P || updated || v15 )
  {
    KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( updated )
      ExFreePoolWithTag(updated, 0);
    if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)v15, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(v15, 0);
  }
  return v5;
}
