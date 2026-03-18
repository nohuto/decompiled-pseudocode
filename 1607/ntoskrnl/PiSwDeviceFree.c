/*
 * XREFs of PiSwDeviceFree @ 0x1404C3B98
 * Callers:
 *     PiSwDeviceDereference @ 0x1404C3AB4 (PiSwDeviceDereference.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiSwPdoAssociationFree @ 0x1404C39D0 (PiSwPdoAssociationFree.c)
 *     PiSwInstanceInfoFree @ 0x1404C3AE8 (PiSwInstanceInfoFree.c)
 *     PiSwPnPInfoFree @ 0x1404C3B28 (PiSwPnPInfoFree.c)
 *     PiSwFreeInterfaceList @ 0x1404C6C98 (PiSwFreeInterfaceList.c)
 *     PnpFreeDevPropertyArray @ 0x140502730 (PnpFreeDevPropertyArray.c)
 *     PiSwQueuedCreateInfoFree @ 0x140645918 (PiSwQueuedCreateInfoFree.c)
 */

void __fastcall PiSwDeviceFree(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx
  __int64 v5; // rdx
  PVOID **v6; // rbx
  PVOID *v7; // rcx
  PVOID *v8; // rax

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
  v5 = *(_QWORD *)(a1 + 168);
  if ( v5 )
  {
    PnpFreeDevPropertyArray(*(unsigned int *)(a1 + 176), v5, 1466986064LL);
    *(_QWORD *)(a1 + 168) = 0LL;
    *(_DWORD *)(a1 + 176) = 0;
  }
  PiSwFreeInterfaceList(a1 + 184);
  v6 = (PVOID **)(a1 + 128);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (PVOID *)v6 )
      break;
    v8 = (PVOID *)*v7;
    if ( v7[1] != v6 || v8[1] != v7 )
      __fastfail(3u);
    *v6 = v8;
    v8[1] = v6;
    PiSwPdoAssociationFree(v7);
  }
}
