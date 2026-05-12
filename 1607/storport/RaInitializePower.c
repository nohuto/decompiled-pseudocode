/*
 * XREFs of RaInitializePower @ 0x1C0015458
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C000AA40 (RaidPowerPassToMiniPort.c)
 *     RaidAdapterCompleteInitialization @ 0x1C0015260 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaInitializePower(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 4392);
  v3 = *(_QWORD *)(a1 + 4400);
  v4 = *(_QWORD *)(a1 + 4384);
  *(_BYTE *)(a1 + 4640) = 0;
  result = MmAllocateContiguousNodeMemory(((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1056, v1, v3, v4, 4, 0x80000000);
  *(_QWORD *)(a1 + 4632) = result;
  return result;
}
