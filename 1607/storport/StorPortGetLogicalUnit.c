/*
 * XREFs of StorPortGetLogicalUnit @ 0x1C00017B0
 * Callers:
 *     RaidAdapterWmiDeferredRoutine @ 0x1C0039420 (RaidAdapterWmiDeferredRoutine.c)
 *     StorPortGetLogicalUnitVrfy @ 0x1C00621E0 (StorPortGetLogicalUnitVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 */

__int64 __fastcall StorPortGetLogicalUnit(__int64 a1, char a2, char a3, char a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 Unit; // rax
  unsigned int v8; // [rsp+30h] [rbp+8h]

  v4 = 0LL;
  v5 = **(_QWORD **)(a1 - 16);
  if ( !v5 )
    return 0LL;
  LOBYTE(v8) = a2;
  BYTE1(v8) = a3;
  BYTE2(v8) = a4;
  Unit = RaidAdapterFindUnit(v5, v8);
  if ( Unit )
    return *(_QWORD *)(Unit + 16);
  return v4;
}
