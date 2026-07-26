/*
 * XREFs of ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0041AF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D2AC (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C000D2C0 (ndisGetNsiClientInfo.c)
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C000D73C (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ndisIfFindCompartmentBlock @ 0x1C000D750 (ndisIfFindCompartmentBlock.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0012AA4 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C0014FE8 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C001D40C (-ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_R.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ?ndisIfReleaseSiteId@@YAXK@Z @ 0x1C0040784 (-ndisIfReleaseSiteId@@YAXK@Z.c)
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C00407B0 (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ?ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@@Z @ 0x1C00C42B4 (-ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_.c)
 */

__int64 __fastcall ndisNsiSetAllNetworkInfo(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  unsigned int v1; // r14d
  int v3; // ebx
  int v4; // edi
  struct _NDIS_IF_COMPARTMENT_BLOCK *v5; // r12
  _OWORD *v6; // rcx
  struct _NDIS_NSI_NETWORK_RW *v7; // rax
  __int64 v8; // rdx
  __int128 v9; // xmm1
  struct _GUID *v10; // r13
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v12; // rsi
  int v13; // r11d
  _LIST_ENTRY *CompartmentBlock; // rax
  int v15; // r11d
  int v16; // r11d
  unsigned int Flags; // eax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  __int64 v20; // r8
  _LIST_ENTRY *v21; // rcx
  _LIST_ENTRY *v22; // rax
  KIRQL v23; // bl
  char v24; // r13
  char v25; // r12
  int v26; // eax
  _QWORD *v27; // r8
  KIRQL NewIrql[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct _NDIS_IF_NETWORK_BLOCK *v30; // [rsp+40h] [rbp-C8h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_NSI_NETWORK_RW v32; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v33[2]; // [rsp+278h] [rbp+170h] BYREF
  __int64 v34; // [rsp+288h] [rbp+180h]

  v1 = 0;
  v3 = 0;
  v4 = 0;
  *(_DWORD *)&NewIrql[4] = 0;
  v5 = 0LL;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(0x72u, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (__int64)a1);
  ndisGetNsiClientInfo((__int64)v33);
  KeEnterCriticalRegion();
  NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  memset(&v32, 0, sizeof(v32));
  if ( *((_DWORD *)a1 + 6) != 16 || *((_DWORD *)a1 + 10) != 528 )
    goto LABEL_4;
  v6 = (_OWORD *)*((_QWORD *)a1 + 4);
  v7 = &v32;
  v8 = 4LL;
  do
  {
    *(_OWORD *)&v7->Header.Type = *v6;
    *(_OWORD *)&v7->NetworkName.String[1] = v6[1];
    *(_OWORD *)&v7->NetworkName.String[9] = v6[2];
    *(_OWORD *)&v7->NetworkName.String[17] = v6[3];
    *(_OWORD *)&v7->NetworkName.String[25] = v6[4];
    *(_OWORD *)&v7->NetworkName.String[33] = v6[5];
    *(_OWORD *)&v7->NetworkName.String[41] = v6[6];
    v7 = (struct _NDIS_NSI_NETWORK_RW *)((char *)v7 + 128);
    v9 = v6[7];
    v6 += 8;
    *(_OWORD *)&v7[-1].NetworkName.String[249] = v9;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)&v7->Header.Type = *v6;
  if ( v32.Header.Type != 0xAC || v32.Header.Revision != 1 || v32.Header.Size != 528 )
    v32.Header = (_NDIS_OBJECT_HEADER)34603436;
  v10 = (struct _GUID *)*((_QWORD *)a1 + 2);
  NetworkBlock = ndisIfFindNetworkBlock(v10);
  v30 = NetworkBlock;
  v12 = NetworkBlock;
  if ( NetworkBlock && !ndisIsCompartmentAccessibleByClient((__int64)NetworkBlock->Compartment, (__int64)v33, 1) )
    goto LABEL_14;
  v13 = *((_DWORD *)a1 + 12);
  if ( v13 != 3 )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(v32.CompartmentId);
    v5 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)CompartmentBlock;
    if ( !CompartmentBlock || !ndisIsCompartmentAccessibleByClient((__int64)CompartmentBlock, (__int64)v33, 1) )
      goto LABEL_14;
  }
  if ( !v13 )
  {
    if ( !v12 )
      goto LABEL_14;
    goto LABEL_38;
  }
  v15 = v13 - 1;
  if ( !v15 )
  {
    if ( v12 )
    {
      v4 = -1073741270;
      goto LABEL_45;
    }
    goto LABEL_33;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( !v12 )
    {
LABEL_33:
      v4 = ndisIfCreateNetworkBlock(v5, v10, &v32, (_LIST_ENTRY ***)&v30);
      if ( v4 < 0 )
        goto LABEL_45;
      v12 = v30;
      v24 = 1;
      v25 = 0;
LABEL_40:
      ++v12->Ref;
      if ( v25 )
      {
        v34 = 0LL;
        v33[0] = 0LL;
        v33[1] = *((_QWORD *)a1 + 4);
        LODWORD(v34) = v3;
      }
      KeReleaseSpinLock(&ndisIfListLock, NewIrql[0]);
      v27 = v33;
      if ( v25 != 1 )
        v27 = 0LL;
      LOBYTE(v1) = v24 != 0;
      ndisNsiNotifyClientNetworkChange(v12, v1, v27);
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      NETWORKBLOCK_DECREMENT_REF((__int64)v12);
      goto LABEL_45;
    }
LABEL_38:
    v26 = ndisNsiChangeNetworkInfo(v12, &v32, *((_DWORD *)a1 + 10), 0, (unsigned int *)&NewIrql[4]);
    v3 = *(_DWORD *)&NewIrql[4];
    v4 = v26;
    if ( !*(_DWORD *)&NewIrql[4] )
      goto LABEL_45;
    v24 = 0;
    v25 = 1;
    goto LABEL_40;
  }
  if ( v16 != 1 )
  {
LABEL_4:
    v4 = -1073741811;
LABEL_45:
    KeReleaseSpinLock(&ndisIfListLock, NewIrql[0]);
    goto LABEL_46;
  }
  if ( !v12 )
  {
LABEL_14:
    v4 = -1073741072;
    goto LABEL_45;
  }
  if ( v12->InterfaceLink.Flink != &v12->InterfaceLink )
    goto LABEL_4;
  Flags = v12->Flags;
  if ( (Flags & 1) != 0 )
    goto LABEL_4;
  v12->Flags = Flags | 1;
  Flink = v12->CompartmentLink.Flink;
  Blink = v12->CompartmentLink.Blink;
  if ( Flink->Blink != &v12->CompartmentLink || Blink->Flink != &v12->CompartmentLink )
    __fastfail(3u);
  --ndisIfNetworkCount;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  ndisIfReleaseSiteId(v12->NetworkInfo.SiteId);
  COMPARTMENTBLOCK_DECREMENT_REF(v20);
  v21 = v12->Link.Flink;
  v22 = v12->Link.Blink;
  if ( (struct _NDIS_IF_NETWORK_BLOCK *)v12->Link.Flink->Blink != v12
    || (struct _NDIS_IF_NETWORK_BLOCK *)v22->Flink != v12 )
  {
    __fastfail(3u);
  }
  v22->Flink = v21;
  v21->Blink = v22;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v12->AsyncEvent = &Event;
  KeReleaseSpinLock(&ndisIfListLock, NewIrql[0]);
  ndisNsiNotifyClientNetworkChange(v12, 2LL, 0LL);
  v23 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NETWORKBLOCK_DECREMENT_REF((__int64)v12);
  KeReleaseSpinLock(&ndisIfListLock, v23);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v12->AsyncEvent = 0LL;
  ExFreePoolWithTag(v12, 0);
LABEL_46:
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qD(115LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, (unsigned int)v4);
  return (unsigned int)v4;
}
