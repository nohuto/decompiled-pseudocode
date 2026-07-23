/*
 * XREFs of PiProcessReenumeration @ 0x140488E80
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400865A0 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PnpLogActionQueueEvent @ 0x14008610C (PnpLogActionQueueEvent.c)
 *     PipClearDevNodeFlags @ 0x1403F22D8 (PipClearDevNodeFlags.c)
 *     PipProcessDevNodeTree @ 0x1403F30A4 (PipProcessDevNodeTree.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1404887B0 (PiMarkDeviceTreeForReenumeration.c)
 */

__int64 __fastcall PiProcessReenumeration(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  int v4; // esi
  int v6; // [rsp+50h] [rbp+8h] BYREF
  char v7; // [rsp+54h] [rbp+Ch]

  v2 = *(_QWORD **)(a1 + 16);
  v3 = *(_QWORD *)(v2[39] + 40LL);
  if ( (unsigned int)(*(_DWORD *)(v3 + 300) - 787) <= 1 )
  {
    ObfDereferenceObject(v2);
    return 3221225558LL;
  }
  else
  {
    ObfReferenceObject(v2);
    if ( *(_DWORD *)(a1 + 24) == 8 )
    {
      if ( *(_BYTE *)(a1 + 32) )
        PipClearDevNodeFlags(v3, 0x80000000);
      v4 = 1;
    }
    else
    {
      v4 = 2;
    }
    PnpLogActionQueueEvent(v3, *(_DWORD *)(a1 + 24), 1LL);
    PiMarkDeviceTreeForReenumeration(v3, v4 != 1);
    v7 = PnPBootDriversInitialized;
    v6 = 3;
    PipProcessDevNodeTree(v3, a1, (__int64)&v6, v4, 0, 0, 0);
    PnpLogActionQueueEvent(v3, *(_DWORD *)(a1 + 24), 2LL);
    ObfDereferenceObject(*(PVOID *)(a1 + 16));
    return 0LL;
  }
}
