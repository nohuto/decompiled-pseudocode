/*
 * XREFs of PiSwDeviceFree @ 0x140539E04
 * Callers:
 *     PiSwDeviceDereference @ 0x140539DD0 (PiSwDeviceDereference.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x14043E844 (PnpFreeDevPropertyArray.c)
 *     PiSwFreeInterfaceList @ 0x14045B83C (PiSwFreeInterfaceList.c)
 *     PiSwPnPInfoFree @ 0x140539EAC (PiSwPnPInfoFree.c)
 *     PiSwInstanceInfoFree @ 0x140539F10 (PiSwInstanceInfoFree.c)
 *     PiSwPdoAssociationFree @ 0x140539F9C (PiSwPdoAssociationFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406912C0 (PiSwQueuedCreateInfoFree.c)
 */

void __fastcall PiSwDeviceFree(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx
  char *v5; // rdx
  __int64 **v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax

  PiSwInstanceInfoFree(a1 + 8);
  PiSwPnPInfoFree(a1 + 24);
  v2 = *(void **)(a1 + 80);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
  {
    PiSwQueuedCreateInfoFree(v3);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  v4 = *(void **)(a1 + 152);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x57706E50u);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v5 = *(char **)(a1 + 168);
  if ( v5 )
  {
    PnpFreeDevPropertyArray(*(_DWORD *)(a1 + 176), v5, 0x57706E50u);
    *(_QWORD *)(a1 + 168) = 0LL;
    *(_DWORD *)(a1 + 176) = 0;
  }
  PiSwFreeInterfaceList((__int64 **)(a1 + 184));
  v6 = (__int64 **)(a1 + 128);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (__int64 *)v6 )
      break;
    v8 = *v7;
    if ( (__int64 **)v7[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
      __fastfail(3u);
    *v6 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v6;
    PiSwPdoAssociationFree();
  }
}
