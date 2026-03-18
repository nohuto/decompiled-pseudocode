/*
 * XREFs of ScsiStartStopUnitRequest @ 0x1C000C264
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiStartStopUnitRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 SrbExtension; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  unsigned __int8 v9; // di
  int v10; // eax

  SrbExtension = GetSrbExtension(a2);
  if ( (*(_BYTE *)(v4 + 1) & 1) != 0 )
  {
    LOBYTE(v5) = 36;
    LOBYTE(v2) = 6;
    NVMeSetSenseData(v6, v2, v4, v5);
    return 3238002694LL;
  }
  else
  {
    if ( *(_DWORD *)(v7 + 148) <= 1u )
    {
      if ( (*(_BYTE *)(v4 + 4) & 1) != 0 )
        v9 = 0;
      else
        v9 = *(_BYTE *)(*(_QWORD *)(v7 + 1080) + 263LL);
      *(_BYTE *)(SrbExtension + 4245) = *(_BYTE *)(SrbExtension + 4245) & 0xFC | 1;
      SrbAssignQueueId(v7, v2);
      v10 = (*(_DWORD *)(SrbExtension + 4140) ^ v9) & 0x1F;
      *(_BYTE *)(SrbExtension + 4096) = 9;
      *(_DWORD *)(SrbExtension + 4140) ^= v10;
      *(_BYTE *)(SrbExtension + 4136) = 2;
    }
    else
    {
      *(_BYTE *)(v2 + 3) = 1;
    }
    return 0LL;
  }
}
