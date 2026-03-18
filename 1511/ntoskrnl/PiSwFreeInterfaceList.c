/*
 * XREFs of PiSwFreeInterfaceList @ 0x140494DDC
 * Callers:
 *     PiSwProcessRemove @ 0x140494C74 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140494D34 (PiSwDeviceFree.c)
 *     PiSwCompleteCreate @ 0x1404E4050 (PiSwCompleteCreate.c)
 * Callees:
 *     PiSwInterfaceFree @ 0x14061130C (PiSwInterfaceFree.c)
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
    PiSwInterfaceFree();
  }
}
