/*
 * XREFs of PiSwDeviceFree @ 0x140494D34
 * Callers:
 *     PiSwDeviceDereference @ 0x140494688 (PiSwDeviceDereference.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140441B8C (PnpFreeDevPropertyArray.c)
 *     PiSwFreeInterfaceList @ 0x140494DDC (PiSwFreeInterfaceList.c)
 *     PiSwPnPInfoFree @ 0x140494DF8 (PiSwPnPInfoFree.c)
 *     PiSwInstanceInfoFree @ 0x140494E5C (PiSwInstanceInfoFree.c)
 *     PiSwPdoAssociationFree @ 0x140494EE8 (PiSwPdoAssociationFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406114FC (PiSwQueuedCreateInfoFree.c)
 */

__int64 __fastcall PiSwDeviceFree(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx
  char *v5; // rdx
  __int64 result; // rax
  __int64 **v7; // rbx
  __int64 *v8; // rcx
  __int64 v9; // rax

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
  result = PiSwFreeInterfaceList(a1 + 184);
  v7 = (__int64 **)(a1 + 128);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (__int64 *)v7 )
      break;
    v9 = *v8;
    if ( (__int64 **)v8[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *v7 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v7;
    result = PiSwPdoAssociationFree();
  }
  return result;
}
