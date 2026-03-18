/*
 * XREFs of PiSwCloseDescendants @ 0x140496720
 * Callers:
 *     PiSwIrpCleanup @ 0x1404946BC (PiSwIrpCleanup.c)
 *     PiSwCloseDescendants @ 0x140496720 (PiSwCloseDescendants.c)
 *     PiSwProcessParentRemoveIrp @ 0x140496838 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     PiSwCloseDevice @ 0x1404957E8 (PiSwCloseDevice.c)
 *     PiSwCloseDescendants @ 0x140496720 (PiSwCloseDescendants.c)
 *     PiSwFindBusRelations @ 0x140496770 (PiSwFindBusRelations.c)
 */

void PiSwCloseDescendants()
{
  __int64 BusRelations; // rax
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi

  BusRelations = PiSwFindBusRelations();
  if ( BusRelations )
  {
    v1 = (_QWORD *)(BusRelations + 16);
    v2 = *(_QWORD **)(BusRelations + 16);
    while ( v2 != v1 )
    {
      v3 = v2 - 12;
      v2 = (_QWORD *)*v2;
      if ( (*((_DWORD *)v3 + 1) & 1) == 0 )
      {
        PiSwCloseDescendants(v3 + 9);
        PiSwCloseDevice(v3);
      }
    }
  }
}
