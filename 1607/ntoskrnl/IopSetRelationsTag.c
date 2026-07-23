/*
 * XREFs of IopSetRelationsTag @ 0x14048421C
 * Callers:
 *     PnpChainDereferenceComplete @ 0x140483FD4 (PnpChainDereferenceComplete.c)
 *     PnpInvalidateRelationsInList @ 0x140485900 (PnpInvalidateRelationsInList.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x1404860FC (PipIsDeviceInDeviceObjectList.c)
 */

__int64 __fastcall IopSetRelationsTag(_QWORD *a1, __int64 a2)
{
  char IsDeviceInDeviceObjectList; // al
  __int64 v3; // r11
  unsigned int v4; // edx
  __int64 v5; // r8
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  IsDeviceInDeviceObjectList = PipIsDeviceInDeviceObjectList(*a1, a2, &v7);
  v4 = 0;
  if ( IsDeviceInDeviceObjectList )
  {
    v5 = v7;
    if ( (*(_DWORD *)(v7 + 16) & 1) != 0 )
      --*(_DWORD *)(*(_QWORD *)v3 + 8LL);
    *(_DWORD *)(v5 + 16) |= 1u;
    ++*(_DWORD *)(*(_QWORD *)v3 + 8LL);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return v4;
}
