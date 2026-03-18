/*
 * XREFs of PiProcessResourceRequirementsChanged @ 0x1406498B8
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400AFA3C (PnpDeviceActionWorker.c)
 * Callees:
 *     PoFxActivateDevice @ 0x140008080 (PoFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x14000842C (PoFxIdleDevice.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PipSetDevNodeFlags @ 0x1403F33A0 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1403F3414 (PipClearDevNodeFlags.c)
 *     PipProcessDevNodeTree @ 0x1403F41E0 (PipProcessDevNodeTree.c)
 *     PipClearDevNodeProblem @ 0x1404C5E0C (PipClearDevNodeProblem.c)
 *     PnpReallocateResources @ 0x14064BC7C (PnpReallocateResources.c)
 */

__int64 __fastcall PiProcessResourceRequirementsChanged(__int64 *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  bool v4; // zf
  unsigned int v5; // ebx
  int v6; // ebx
  int v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+54h] [rbp+Ch]

  v2 = (_QWORD *)a1[2];
  if ( v2 )
    v3 = *(_QWORD *)(v2[39] + 40LL);
  else
    v3 = 0LL;
  ObfReferenceObject(v2);
  if ( (unsigned int)(*(_DWORD *)(v3 + 300) - 787) <= 1 )
  {
    v6 = -1073741738;
  }
  else
  {
    PoFxActivateDevice(a1[2]);
    *(_DWORD *)(v3 + 704) |= 0x40u;
    PipClearDevNodeFlags(v3, 256);
    PipSetDevNodeFlags(v3, 1024);
    PipClearDevNodeProblem(v3);
    if ( *(_DWORD *)(v3 + 300) == 776 )
    {
      if ( a1[4] )
        PipClearDevNodeFlags(v3, 2048);
      else
        PipSetDevNodeFlags(v3, 2048);
      PnpReallocateResources(v3);
      v4 = a1[5] == 0;
      v8 = 3;
      v9 = PnPBootDriversInitialized;
      v5 = !v4;
      ObfReferenceObject(*(PVOID *)(IopRootDeviceNode + 32));
      v6 = PipProcessDevNodeTree(IopRootDeviceNode, (__int64)a1, (__int64)&v8, 0, 0, v5, 0);
      if ( v6 < 0 )
        v6 = 0;
    }
    else
    {
      v6 = -1073741823;
    }
  }
  if ( (*(_DWORD *)(v3 + 704) & 0x40) != 0 )
  {
    PoFxIdleDevice(*(_QWORD *)(v3 + 32));
    *(_DWORD *)(v3 + 704) &= ~0x40u;
  }
  ObfDereferenceObject((PVOID)a1[2]);
  return (unsigned int)v6;
}
