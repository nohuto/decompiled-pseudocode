/*
 * XREFs of RaidBusEnumeratorGetUnit @ 0x1C000CC40
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x1C000BDD8 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C000BFC4 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C000C160 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0005768 (RaidAdapterFindUnit.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C000CD3C (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidAdapterInsertUnit @ 0x1C000CEDC (RaidAdapterInsertUnit.c)
 *     RaidAdapterFindZombieUnit @ 0x1C000D060 (RaidAdapterFindZombieUnit.c)
 *     RaidCreateUnit @ 0x1C000DEF0 (RaidCreateUnit.c)
 *     RaUnitSetQueueDepth @ 0x1C001134C (RaUnitSetQueueDepth.c)
 */

__int64 __fastcall RaidBusEnumeratorGetUnit(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 result; // rax
  __int64 Unit; // rbx
  __int64 ZombieUnit; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+48h] [rbp+10h]

  v13 = a2;
  v3 = a1 + 1;
  result = RaidBusEnumeratorAllocateUnitResources(a1, a1 + 1, 0LL);
  if ( (int)result >= 0 )
  {
    Unit = RaidAdapterFindUnit(*a1, v13);
    if ( Unit )
      goto LABEL_7;
    ZombieUnit = RaidAdapterFindZombieUnit(*a1, v13);
    v12 = ZombieUnit;
    if ( ZombieUnit )
    {
      Unit = ZombieUnit & -(__int64)((*(_BYTE *)(ZombieUnit + 144) & 4) != 0);
      v12 = Unit;
      if ( Unit )
        goto LABEL_7;
    }
    Unit = v3[6];
    v9 = *a1;
    if ( Unit )
    {
      RaUnitSetQueueDepth(
        v3[6],
        *(unsigned int *)(*(_QWORD *)(Unit + 24) + 516LL),
        *(unsigned int *)(*(_QWORD *)(Unit + 24) + 512LL));
LABEL_6:
      *(_DWORD *)(Unit + 88) = v13;
      v10 = *(_QWORD *)(Unit + 24);
      *(_WORD *)(Unit + 80) = 1;
      *(_DWORD *)(Unit + 84) = 4;
      *(_WORD *)(Unit + 82) = *(_WORD *)(v10 + 56);
      RaidAdapterInsertUnit(v9, Unit);
      *(_BYTE *)(a3 + 84) = 1;
LABEL_7:
      *(_QWORD *)(a3 + 8) = Unit;
      v11 = *(_DWORD *)(Unit + 88);
      *(_DWORD *)(a3 + 80) = 0;
      *(_DWORD *)(a3 + 1) = v11;
      return 0LL;
    }
    result = RaidCreateUnit(v9, &v12);
    if ( (int)result >= 0 )
    {
      Unit = v12;
      v3[6] = v12;
      *(_BYTE *)(Unit + 144) |= 8u;
      *(_BYTE *)(Unit + 437) = 0;
      goto LABEL_6;
    }
  }
  return result;
}
