/*
 * XREFs of ScsiStartStopUnitRequest @ 0x1C0008030
 * Callers:
 *     ScsiToNVMe @ 0x1C00087C0 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0006344 (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C000D36C (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiStartStopUnitRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // rbx
  unsigned __int8 v7; // di
  int v8; // eax

  v4 = a2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (v5 & 0xFFF) + 4096;
  if ( (*(_BYTE *)(a3 + 1) & 1) != 0 )
  {
    LOBYTE(a4) = 36;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v4, a2, a3, a4);
    return 3238002694LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 140) <= 1u )
    {
      if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
        v7 = 0;
      else
        v7 = *(_BYTE *)(*(_QWORD *)(a1 + 1072) + 263LL);
      *(_WORD *)(v5 + 4166) = 1;
      SrbAssignQueueId(a1, a2);
      v8 = (*(_DWORD *)(v5 + 4140) ^ v7) & 0x1F;
      *(_BYTE *)(v5 + 4096) = 9;
      *(_DWORD *)(v5 + 4140) ^= v8;
      *(_BYTE *)(v5 + 4136) = 2;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 1;
    }
    return 0LL;
  }
}
