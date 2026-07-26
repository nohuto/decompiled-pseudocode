/*
 * XREFs of ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0015E40
 * Callers:
 *     <none>
 * Callees:
 *     NdisGetThreadObjectCompartmentScope @ 0x1C000F240 (NdisGetThreadObjectCompartmentScope.c)
 *     ?ndisIsCompartmentEnumerableByCaller@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@II@Z @ 0x1C001600C (-ndisIsCompartmentEnumerableByCaller@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@II@Z.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiEnumerateAllNetworks(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // r9
  unsigned int v4; // r8d
  unsigned int v5; // r10d
  KIRQL v6; // r14
  _LIST_ENTRY **v7; // r9
  unsigned int v8; // esi
  __int64 v9; // rbp
  __int128 *v10; // rbx
  _LIST_ENTRY *v11; // r9
  unsigned int v12; // r11d
  __int64 v13; // r9
  __int128 *v14; // rax
  __int128 *v15; // rcx
  __int64 v16; // rdx
  __int128 v17; // xmm0
  bool v18; // cf
  unsigned int v19; // ebx
  unsigned int v21; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+58h] [rbp+10h] BYREF

  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(120LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1);
  NdisGetThreadObjectCompartmentScope(KeGetCurrentThread(), &v21, &v22);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Flink = ndisIfNetworkList.Flink;
  v4 = v22;
  v5 = 0;
  v6 = v2;
  while ( Flink != &ndisIfNetworkList )
  {
    if ( ndisIsCompartmentEnumerableByCaller((struct _NDIS_IF_COMPARTMENT_BLOCK *)Flink[3].Flink, v21, v4) )
      ++v5;
    Flink = *v7;
  }
  v8 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = v5;
  if ( !v8 )
  {
    v18 = v5 != 0;
LABEL_26:
    v19 = v18 ? 0x105 : 0;
    goto LABEL_27;
  }
  v9 = *((_QWORD *)a1 + 2);
  v10 = (__int128 *)*((_QWORD *)a1 + 5);
  if ( (!v9 || *((_DWORD *)a1 + 6) == 16) && (!v10 || *((_DWORD *)a1 + 12) >= 0x210u) )
  {
    v11 = ndisIfNetworkList.Flink;
    v12 = 0;
    do
    {
      if ( v11 == &ndisIfNetworkList )
        break;
      if ( ndisIsCompartmentEnumerableByCaller((struct _NDIS_IF_COMPARTMENT_BLOCK *)v11[3].Flink, v21, v4) )
      {
        if ( *((_QWORD *)a1 + 2) )
          *(_OWORD *)(v9 + 16LL * v12) = *(_OWORD *)(v13 + 32);
        if ( *((_QWORD *)a1 + 5) )
        {
          v14 = v10;
          v15 = (__int128 *)(v13 + 80);
          v16 = 4LL;
          do
          {
            v17 = *v15;
            v15 += 8;
            *v14 = v17;
            v14 += 8;
            *(v14 - 7) = *(v15 - 7);
            *(v14 - 6) = *(v15 - 6);
            *(v14 - 5) = *(v15 - 5);
            *(v14 - 4) = *(v15 - 4);
            *(v14 - 3) = *(v15 - 3);
            *(v14 - 2) = *(v15 - 2);
            *(v14 - 1) = *(v15 - 1);
            --v16;
          }
          while ( v16 );
          *v14 = *v15;
          v10 = (__int128 *)((char *)v10 + *((unsigned int *)a1 + 12));
        }
        ++v12;
      }
      v11 = *(_LIST_ENTRY **)v13;
    }
    while ( v12 < v8 );
    v18 = v12 < v5;
    goto LABEL_26;
  }
  v19 = -1073741306;
LABEL_27:
  KeReleaseSpinLock(&ndisIfListLock, v6);
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qD(121LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1, v19);
  return v19;
}
