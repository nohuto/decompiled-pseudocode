/*
 * XREFs of EtwpUpdateFilterData @ 0x140492728
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140409D90 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1404924A0 (EtwpUpdateGuidEnableInfo.c)
 * Callees:
 *     KeGenericCallDpc @ 0x14009EDE4 (KeGenericCallDpc.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpFreeEventNameFilter @ 0x1406A9370 (EtwpFreeEventNameFilter.c)
 *     EtwpUpdatePerfectHashFunction @ 0x1406A9398 (EtwpUpdatePerfectHashFunction.c)
 *     EtwpUpdatePidFilterData @ 0x1406A93B8 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1406A9454 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x1406A9514 (EtwpUpdateStringFilterData.c)
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
  void *v15; // rbp
  PVOID PoolWithTag; // rax
  PVOID v17; // rsi
  __int32 v18; // esi
  __int64 v19; // r14
  __int32 v20; // ebp
  unsigned int v21; // eax
  int v22; // edx
  __int64 v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+28h] [rbp-70h]
  PVOID updated; // [rsp+30h] [rbp-68h]
  PVOID P; // [rsp+38h] [rbp-60h]
  __int64 v28; // [rsp+40h] [rbp-58h]
  __int64 v29; // [rsp+48h] [rbp-50h] BYREF
  int v30; // [rsp+50h] [rbp-48h]
  int v31; // [rsp+54h] [rbp-44h]
  __int64 v33; // [rsp+B0h] [rbp+18h]
  char v34; // [rsp+B8h] [rbp+20h]

  v33 = a3;
  v5 = 0;
  v6 = a2;
  v34 = 0;
  v7 = a4;
  P = 0LL;
  updated = 0LL;
  LOBYTE(a4) = 0;
  v25 = 0LL;
  v28 = 0LL;
  if ( !a3 || !*(_DWORD *)(a3 + 116) )
    v7 = 1;
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 368);
    if ( v9 )
    {
      v11 = 80LL * a2;
      LOBYTE(a4) = v7;
      v12 = _InterlockedExchange((volatile __int32 *)(v11 + v9), 0);
      EtwpUpdateSchematizedFilterData(v11 + *(_QWORD *)(a1 + 368), 0LL, 0LL, a4);
      if ( (v12 & 0x80000004) == 0x80000004 )
      {
        LOBYTE(v13) = v7;
        EtwpUpdatePidFilterData(v11 + *(_QWORD *)(a1 + 368), 0LL, v13, v14);
      }
      if ( (v12 & 0x80000008) == 0x80000008 )
      {
        LOBYTE(v13) = v7;
        EtwpUpdateStringFilterData(v11 + *(_QWORD *)(a1 + 368) + 16LL, 0LL, v13, v14);
      }
      if ( (v12 & 0x80000010) == 0x80000010 )
      {
        LOBYTE(v13) = v7;
        EtwpUpdateStringFilterData(v11 + *(_QWORD *)(a1 + 368) + 24LL, 0LL, v13, v14);
      }
      if ( (v12 & 0x80000020) == 0x80000020 )
      {
        LOBYTE(v13) = v7;
        EtwpUpdateStringFilterData(v11 + *(_QWORD *)(a1 + 368) + 32LL, 0LL, v13, v14);
      }
      if ( (v12 & 0x80001000) == 0x80001000 )
      {
        LOBYTE(v13) = v7;
        P = (PVOID)EtwpUpdatePerfectHashFunction(v11 + *(_QWORD *)(a1 + 368) + 40LL, 0LL, v13, v14);
      }
      if ( (v12 & 0x80000200) == 0x80000200 )
      {
        LOBYTE(v13) = v7;
        updated = (PVOID)EtwpUpdatePerfectHashFunction(v11 + *(_QWORD *)(a1 + 368) + 48LL, 0LL, v13, v14);
      }
      if ( (v12 & 0x80000400) == 0x80000400 )
      {
        LOBYTE(v13) = v7;
        v25 = EtwpUpdatePerfectHashFunction(v11 + *(_QWORD *)(a1 + 368) + 72LL, 0LL, v13, v14);
      }
      if ( (v12 & 0x80000100) == 0x80000100 )
      {
        LOBYTE(v13) = v7;
        v15 = (void *)EtwpUpdatePerfectHashFunction(v11 + *(_QWORD *)(a1 + 368) + 56LL, 0LL, v13, v14);
      }
      else
      {
        v15 = 0LL;
      }
      goto LABEL_79;
    }
    return v5;
  }
  if ( !*(_QWORD *)(a1 + 368) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x280uLL, 0x46777445u);
    v17 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    memset(PoolWithTag, 0, 0x280uLL);
    a3 = v33;
    LOBYTE(a4) = 0;
    v6 = a2;
    *(_QWORD *)(a1 + 368) = v17;
  }
  v18 = 0;
  v24 = 0;
  v19 = 80LL * v6;
  v20 = _InterlockedExchange((volatile __int32 *)(v19 + *(_QWORD *)(a1 + 368)), 0);
  v21 = 0;
  if ( !*(_DWORD *)(a3 + 116) )
    goto LABEL_51;
  do
  {
    v22 = *(_DWORD *)(v33 + 16LL * v21 + 132);
    v23 = v33 + *(_QWORD *)(v33 + 16LL * v21 + 120);
    v30 = *(_DWORD *)(v33 + 16LL * v21 + 128);
    v31 = v22;
    v29 = v23;
    switch ( v22 )
    {
      case -2147483648:
        EtwpUpdateSchematizedFilterData(v19 + *(_QWORD *)(a1 + 368), v6, &v29, 0LL);
        LOBYTE(a4) = 1;
        v34 = 1;
        goto LABEL_48;
      case -2147483644:
        EtwpUpdatePidFilterData(v19 + *(_QWORD *)(a1 + 368), &v29, 0LL, a4);
        v18 |= 0x80000004;
        goto LABEL_44;
      case -2147483640:
        EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 16LL, a5, 0LL, a4);
        v18 |= 0x80000008;
        goto LABEL_44;
      case -2147483632:
        EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 24LL, a5 + 8, 0LL, a4);
        v18 |= 0x80000010;
        goto LABEL_44;
      case -2147483616:
        EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 32LL, a5 + 16, 0LL, a4);
        v18 |= 0x80000020;
LABEL_44:
        LOBYTE(a4) = v34;
LABEL_48:
        v6 = a2;
        goto LABEL_49;
      case -2147483392:
        v28 = EtwpUpdatePerfectHashFunction(v19 + *(_QWORD *)(a1 + 368) + 56LL, a5 + 48, 0LL, a4);
        v18 |= 0x80000100;
        break;
      case -2147483136:
        updated = (PVOID)EtwpUpdatePerfectHashFunction(v19 + *(_QWORD *)(a1 + 368) + 48LL, a5 + 24, 0LL, a4);
        v18 |= 0x80000200;
        break;
      case -2147482624:
        v25 = EtwpUpdatePerfectHashFunction(v19 + *(_QWORD *)(a1 + 368) + 72LL, a5 + 40, 0LL, a4);
        v18 |= 0x80000400;
        break;
      case -2147479552:
        P = (PVOID)EtwpUpdatePerfectHashFunction(v19 + *(_QWORD *)(a1 + 368) + 40LL, a5 + 32, 0LL, a4);
        v18 |= 0x80001000;
        break;
      default:
        goto LABEL_49;
    }
    LOBYTE(a4) = v34;
LABEL_49:
    v21 = v24 + 1;
    v24 = v21;
  }
  while ( v21 < *(_DWORD *)(v33 + 116) );
  v5 = 0;
  if ( !(_BYTE)a4 )
  {
LABEL_51:
    LOBYTE(a4) = 1;
    EtwpUpdateSchematizedFilterData(v19 + *(_QWORD *)(a1 + 368), 0LL, 0LL, a4);
  }
  if ( (v20 & 0x80000004) == 0x80000004 && (v18 & 0x80000004) != 0x80000004 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdatePidFilterData(v19 + *(_QWORD *)(a1 + 368), 0LL, a3, a4);
  }
  if ( (v20 & 0x80000008) == 0x80000008 && (v18 & 0x80000008) != 0x80000008 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 16LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000010) == 0x80000010 && (v18 & 0x80000010) != 0x80000010 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 24LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000020) == 0x80000020 && (v18 & 0x80000020) != 0x80000020 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 32LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80001000) == 0x80001000 && (v18 & 0x80001000) != 0x80001000 )
  {
    LOBYTE(a3) = 1;
    P = (PVOID)EtwpUpdatePerfectHashFunction(v19 + *(_QWORD *)(a1 + 368) + 40LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000200) == 0x80000200 && (v18 & 0x80000200) != 0x80000200 )
  {
    LOBYTE(a3) = 1;
    updated = (PVOID)EtwpUpdatePerfectHashFunction(v19 + *(_QWORD *)(a1 + 368) + 48LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000400) == 0x80000400 && (v18 & 0x80000400) != 0x80000400 )
  {
    LOBYTE(a3) = 1;
    v25 = EtwpUpdatePerfectHashFunction(v19 + *(_QWORD *)(a1 + 368) + 72LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000100) != 0x80000100 || (v18 & 0x80000100) == 0x80000100 )
  {
    v15 = (void *)v28;
  }
  else
  {
    LOBYTE(a3) = 1;
    v15 = (void *)EtwpUpdatePerfectHashFunction(v19 + *(_QWORD *)(a1 + 368) + 56LL, 0LL, a3, a4);
  }
  _InterlockedExchange((volatile __int32 *)(v19 + *(_QWORD *)(a1 + 368)), v18);
LABEL_79:
  if ( P || updated || v25 || v15 )
  {
    KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( updated )
      ExFreePoolWithTag(updated, 0);
    if ( v25 )
      EtwpFreeEventNameFilter(v25);
    if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)v15, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(v15, 0);
  }
  return v5;
}
