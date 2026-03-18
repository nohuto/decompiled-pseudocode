/*
 * XREFs of PiProcessReenumeration @ 0x14045E274
 * Callers:
 *     PnpDeviceActionWorker @ 0x14002604C (PnpDeviceActionWorker.c)
 * Callees:
 *     PnpLogActionQueueEvent @ 0x140026BD0 (PnpLogActionQueueEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x14045C124 (PiMarkDeviceTreeForReenumeration.c)
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
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
    if ( *(_DWORD *)(a1 + 24) == 8 )
    {
      if ( *(_BYTE *)(a1 + 32) )
        PipClearDevNodeFlags(*(_QWORD *)(v2[39] + 40LL), 0x80000000LL);
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
    PipProcessDevNodeTree(v3, a1, (unsigned int)&v6, v4, 0, 0, 0);
    PnpLogActionQueueEvent(v3, *(_DWORD *)(a1 + 24), 2LL);
    return 0LL;
  }
}
