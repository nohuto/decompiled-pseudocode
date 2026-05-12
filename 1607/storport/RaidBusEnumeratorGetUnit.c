/*
 * XREFs of RaidBusEnumeratorGetUnit @ 0x1C0013018
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x1C0011FD0 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C0012204 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C00123A0 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C0013114 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidAdapterInsertUnit @ 0x1C00132B4 (RaidAdapterInsertUnit.c)
 *     RaidAdapterFindZombieUnit @ 0x1C0013438 (RaidAdapterFindZombieUnit.c)
 *     RaidCreateUnit @ 0x1C0014634 (RaidCreateUnit.c)
 *     RaUnitSetQueueDepth @ 0x1C0016C4C (RaUnitSetQueueDepth.c)
 */

__int64 __fastcall RaidBusEnumeratorGetUnit(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 Unit; // rbx
  __int64 ZombieUnit; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+48h] [rbp+10h]

  v15 = a2;
  v3 = a1 + 1;
  result = RaidBusEnumeratorAllocateUnitResources(a1, a1 + 1, 0LL);
  if ( (int)result >= 0 )
  {
    Unit = RaidAdapterFindUnit(*a1, v15, v7, v8);
    if ( Unit )
      goto LABEL_7;
    ZombieUnit = RaidAdapterFindZombieUnit(*a1, v15);
    v14 = ZombieUnit;
    if ( ZombieUnit )
    {
      Unit = ZombieUnit & -(__int64)((*(_BYTE *)(ZombieUnit + 152) & 4) != 0);
      v14 = Unit;
      if ( Unit )
        goto LABEL_7;
    }
    Unit = v3[6];
    v11 = *a1;
    if ( Unit )
    {
      RaUnitSetQueueDepth(
        v3[6],
        *(unsigned int *)(*(_QWORD *)(Unit + 24) + 516LL),
        *(unsigned int *)(*(_QWORD *)(Unit + 24) + 512LL));
LABEL_6:
      *(_DWORD *)(Unit + 88) = v15;
      v12 = *(_QWORD *)(Unit + 24);
      *(_WORD *)(Unit + 80) = 1;
      *(_DWORD *)(Unit + 84) = 4;
      *(_WORD *)(Unit + 82) = *(_WORD *)(v12 + 56);
      RaidAdapterInsertUnit(v11, Unit);
      *(_BYTE *)(a3 + 92) = 1;
LABEL_7:
      *(_QWORD *)(a3 + 8) = Unit;
      v13 = *(_DWORD *)(Unit + 88);
      *(_DWORD *)(a3 + 88) = 0;
      *(_DWORD *)(a3 + 1) = v13;
      return 0LL;
    }
    result = RaidCreateUnit(v11, &v14);
    if ( (int)result >= 0 )
    {
      Unit = v14;
      v3[6] = v14;
      *(_BYTE *)(Unit + 152) |= 8u;
      *(_BYTE *)(Unit + 437) = 0;
      goto LABEL_6;
    }
  }
  return result;
}
