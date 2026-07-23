/*
 * XREFs of PiSwBusRelationRemove @ 0x140483D54
 * Callers:
 *     PiSwProcessRemove @ 0x140483A18 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x140483C1C (PiSwCloseDevice.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1400C1E74 (RtlDeleteElementGenericTableAvl.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwBusRelationRemove(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  void *v7; // rdi

  v1 = a1 + 12;
  v3 = a1[12];
  v4 = (_QWORD *)a1[13];
  if ( *(_QWORD **)(v3 + 8) != v1 || (_QWORD *)*v4 != v1 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = (_QWORD *)a1[14];
  if ( (_QWORD *)v5[2] == v5 + 2 )
  {
    v7 = (void *)v5[1];
    RtlDeleteElementGenericTableAvl(&PiSwBusRelationsTable, v5);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x57706E50u);
  }
  a1[14] = 0LL;
  return PiSwDeviceDereference(a1);
}
