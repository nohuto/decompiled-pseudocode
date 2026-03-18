/*
 * XREFs of PiSwBusRelationRemove @ 0x140539D58
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14045BC94 (PiSwIrpStartCreateWorker.c)
 *     PiSwCloseDevice @ 0x1405391A8 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x140539C30 (PiSwProcessRemove.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140018004 (RtlDeleteElementGenericTableAvl.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwBusRelationRemove(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  void *v6; // rdi

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
    v6 = (void *)v5[1];
    RtlDeleteElementGenericTableAvl(&PiSwBusRelationsTable, v5);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x57706E50u);
  }
  a1[14] = 0LL;
  return PiSwDeviceDereference(a1);
}
