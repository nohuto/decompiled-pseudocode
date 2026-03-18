/*
 * XREFs of IopRemoveLegacyDeviceNode @ 0x14067F5C8
 * Callers:
 *     IopLegacyResourceAllocation @ 0x14067F1F4 (IopLegacyResourceAllocation.c)
 * Callees:
 *     IoDeleteDevice @ 0x140007508 (IoDeleteDevice.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
 *     IopDestroyDeviceNode @ 0x140534C48 (IopDestroyDeviceNode.c)
 */

void __fastcall IopRemoveLegacyDeviceNode(__int64 a1, char *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  char *v6; // rax
  struct _DEVICE_OBJECT *v7; // rdi

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x1000) != 0 )
      return;
  }
  else
  {
    if ( !*((_QWORD *)a2 + 54) )
      return;
    *((_QWORD *)a2 + 54) = 0LL;
    v4 = (_QWORD *)*((_QWORD *)a2 + 1);
    if ( v4 )
      *v4 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
      *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *((_QWORD *)a2 + 1);
    if ( (char *)IopLegacyDeviceNode == a2 )
      IopLegacyDeviceNode = *(_QWORD *)a2;
  }
  v5 = *((_QWORD *)a2 + 66);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *(char **)(v5 + 536);
      if ( v6 == a2 )
        break;
      v5 = *(_QWORD *)(v5 + 536);
      if ( !v6 )
        goto LABEL_15;
    }
    *(_QWORD *)(v5 + 536) = *((_QWORD *)a2 + 67);
  }
LABEL_15:
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  v7 = (struct _DEVICE_OBJECT *)*((_QWORD *)a2 + 4);
  PipClearDevNodeFlags((__int64)a2, 0x20000);
  IopDestroyDeviceNode(a2);
  if ( !a1 )
  {
    v7->DriverObject = PnpDriverObject;
    IoDeleteDevice(v7);
  }
}
