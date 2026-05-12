/*
 * XREFs of RaidpAdapterContinueScatterGather @ 0x1C0004350
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00043C0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidXrbSetDataBufferAddress @ 0x1C0004930 (RaidXrbSetDataBufferAddress.c)
 *     RaidAdapterRequestComplete @ 0x1C00221D8 (RaidAdapterRequestComplete.c)
 */

void __fastcall RaidpAdapterContinueScatterGather(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  int v6; // esi
  __int64 v7; // rax
  struct _DEVICE_OBJECT *v8; // rcx

  v4 = *(_QWORD *)(a1 + 64);
  a4[13] = a3;
  a4[26] = v4;
  if ( (int)RaidXrbSetDataBufferAddress(a4, v4, 0LL) < 0 )
  {
    *(_BYTE *)(a4[20] + 3LL) = 48;
    v7 = a4[20];
    if ( *(_BYTE *)(v7 + 2) == 40 )
      *(_DWORD *)(v7 + 44) = -1073741670;
    else
      *(_DWORD *)(v7 + 64) = -1073741670;
    goto LABEL_10;
  }
  v6 = RaidAdapterPostScatterGatherExecute(v4, a4);
  if ( *(_BYTE *)(v4 + 105) )
  {
    v8 = *(struct _DEVICE_OBJECT **)(v4 + 32);
    *(_BYTE *)(v4 + 105) = 0;
    IoInvalidateDeviceRelations(v8, BusRelations);
  }
  if ( v6 < 0 )
  {
    *(_BYTE *)(a4[20] + 3LL) = 4;
LABEL_10:
    RaidAdapterRequestComplete(v4, a4);
  }
}
