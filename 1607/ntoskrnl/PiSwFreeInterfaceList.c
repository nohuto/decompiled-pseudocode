/*
 * XREFs of PiSwFreeInterfaceList @ 0x1404878CC
 * Callers:
 *     PiSwProcessRemove @ 0x140483A18 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140483DD0 (PiSwDeviceFree.c)
 *     PiSwCompleteCreate @ 0x140487650 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PiSwInterfaceFree @ 0x1406457FC (PiSwInterfaceFree.c)
 */

void __fastcall PiSwFreeInterfaceList(__int64 **a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == (__int64 *)a1 )
      break;
    v3 = *v2;
    if ( (__int64 **)v2[1] != a1 || *(__int64 **)(v3 + 8) != v2 )
      __fastfail(3u);
    *a1 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = a1;
    PiSwInterfaceFree(v2);
  }
}
