/*
 * XREFs of PiProcessReenumeration @ 0x1403EEF7C
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400AFA3C (PnpDeviceActionWorker.c)
 * Callees:
 *     PnpLogActionQueueEvent @ 0x140007BFC (PnpLogActionQueueEvent.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PipClearDevNodeFlags @ 0x1403F3414 (PipClearDevNodeFlags.c)
 *     PipProcessDevNodeTree @ 0x1403F41E0 (PipProcessDevNodeTree.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x14051D8EC (PiMarkDeviceTreeForReenumeration.c)
 */

__int64 __fastcall PiProcessReenumeration(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // rdx
  int v7; // [rsp+50h] [rbp+8h] BYREF
  char v8; // [rsp+54h] [rbp+Ch]

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
        PipClearDevNodeFlags(v3, 0x80000000LL);
      v4 = 1;
    }
    else
    {
      v4 = 2;
    }
    PnpLogActionQueueEvent(v3, *(_DWORD *)(a1 + 24), 1LL);
    LOBYTE(v5) = v4 != 1;
    PiMarkDeviceTreeForReenumeration(v3, v5);
    v8 = PnPBootDriversInitialized;
    v7 = 3;
    PipProcessDevNodeTree(v3, a1, (unsigned int)&v7, v4, 0, 0, 0);
    PnpLogActionQueueEvent(v3, *(_DWORD *)(a1 + 24), 2LL);
    ObfDereferenceObject(*(PVOID *)(a1 + 16));
    return 0LL;
  }
}
