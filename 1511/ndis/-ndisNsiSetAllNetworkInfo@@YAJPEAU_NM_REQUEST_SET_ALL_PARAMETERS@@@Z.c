/*
 * XREFs of ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C003DED0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001B2F4 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C0020810 (-ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_R.c)
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C0020C94 (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ndisIfFindCompartmentBlock @ 0x1C0020D08 (ndisIfFindCompartmentBlock.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ?ndisIfReleaseSiteId@@YAXK@Z @ 0x1C003C804 (-ndisIfReleaseSiteId@@YAXK@Z.c)
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C003CB4C (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C003E5F4 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ?ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@@Z @ 0x1C00BF5A4 (-ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_.c)
 */

__int64 __fastcall ndisNsiSetAllNetworkInfo(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  unsigned int v1; // r14d
  int v3; // ebx
  int v4; // edi
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // r12
  char v6; // r13
  _OWORD *v7; // rcx
  struct _NDIS_NSI_NETWORK_RW *v8; // rax
  __int64 v9; // rdx
  __int128 v10; // xmm1
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  int v12; // r10d
  struct _NDIS_IF_NETWORK_BLOCK *v13; // rsi
  int v14; // r10d
  int v15; // r10d
  unsigned int Flags; // eax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  __int64 v19; // r8
  _LIST_ENTRY *v20; // rcx
  _LIST_ENTRY *v21; // rax
  KIRQL v22; // bl
  char v23; // r12
  int v24; // eax
  _QWORD *v25; // r8
  KIRQL NewIrql[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct _NDIS_IF_NETWORK_BLOCK *v28; // [rsp+40h] [rbp-C8h] BYREF
  struct _GUID *v29; // [rsp+48h] [rbp-C0h]
  _QWORD v30[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h]
  struct _KEVENT Event; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_NSI_NETWORK_RW v33; // [rsp+88h] [rbp-80h] BYREF

  v1 = 0;
  v3 = 0;
  v4 = 0;
  *(_DWORD *)&NewIrql[4] = 0;
  CompartmentBlock = 0LL;
  v6 = 0;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(0x72u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1);
  KeEnterCriticalRegion();
  NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  memset(&v33, 0, sizeof(v33));
  if ( *((_DWORD *)a1 + 6) != 16 || *((_DWORD *)a1 + 10) != 528 )
    goto LABEL_4;
  v7 = (_OWORD *)*((_QWORD *)a1 + 4);
  v8 = &v33;
  v9 = 4LL;
  do
  {
    *(_OWORD *)&v8->Header.Type = *v7;
    *(_OWORD *)&v8->NetworkName.String[1] = v7[1];
    *(_OWORD *)&v8->NetworkName.String[9] = v7[2];
    *(_OWORD *)&v8->NetworkName.String[17] = v7[3];
    *(_OWORD *)&v8->NetworkName.String[25] = v7[4];
    *(_OWORD *)&v8->NetworkName.String[33] = v7[5];
    *(_OWORD *)&v8->NetworkName.String[41] = v7[6];
    v8 = (struct _NDIS_NSI_NETWORK_RW *)((char *)v8 + 128);
    v10 = v7[7];
    v7 += 8;
    *(_OWORD *)&v8[-1].NetworkName.String[249] = v10;
    --v9;
  }
  while ( v9 );
  *(_OWORD *)&v8->Header.Type = *v7;
  if ( v33.Header.Type != 0xAC || v33.Header.Revision != 1 || v33.Header.Size != 528 )
    v33.Header = (_NDIS_OBJECT_HEADER)34603436;
  v29 = (struct _GUID *)*((_QWORD *)a1 + 2);
  NetworkBlock = ndisIfFindNetworkBlock(v29);
  v12 = *((_DWORD *)a1 + 12);
  v13 = NetworkBlock;
  v28 = NetworkBlock;
  if ( v12 != 3 )
  {
    CompartmentBlock = (struct _NDIS_IF_COMPARTMENT_BLOCK *)ndisIfFindCompartmentBlock(v33.CompartmentId);
    if ( !CompartmentBlock )
      goto LABEL_4;
  }
  if ( !v12 )
  {
    if ( !v13 )
      goto LABEL_19;
    goto LABEL_35;
  }
  v14 = v12 - 1;
  if ( !v14 )
  {
    if ( v13 )
    {
      v4 = -1073741270;
      goto LABEL_42;
    }
    goto LABEL_30;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( !v13 )
    {
LABEL_30:
      v4 = ndisIfCreateNetworkBlock(CompartmentBlock, v29, &v33, (_LIST_ENTRY ***)&v28);
      if ( v4 < 0 )
        goto LABEL_42;
      v13 = v28;
      v23 = 1;
LABEL_37:
      ++v13->Ref;
      if ( v6 )
      {
        v31 = 0LL;
        v30[0] = 0LL;
        v30[1] = *((_QWORD *)a1 + 4);
        LODWORD(v31) = v3;
      }
      KeReleaseSpinLock(&ndisIfListLock, NewIrql[0]);
      v25 = v30;
      if ( v6 != 1 )
        v25 = 0LL;
      LOBYTE(v1) = v23 != 0;
      ndisNsiNotifyClientNetworkChange(v13, v1, v25);
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      NETWORKBLOCK_DECREMENT_REF(v13);
      goto LABEL_42;
    }
LABEL_35:
    v24 = ndisNsiChangeNetworkInfo(v13, &v33, *((_DWORD *)a1 + 10), 0, (unsigned int *)&NewIrql[4]);
    v3 = *(_DWORD *)&NewIrql[4];
    v4 = v24;
    if ( !*(_DWORD *)&NewIrql[4] )
      goto LABEL_42;
    v23 = 0;
    v6 = 1;
    goto LABEL_37;
  }
  if ( v15 != 1 )
    goto LABEL_4;
  if ( !v13 )
  {
LABEL_19:
    v4 = -1073741072;
    goto LABEL_42;
  }
  if ( v13->InterfaceLink.Flink != &v13->InterfaceLink || (Flags = v13->Flags, (Flags & 1) != 0) )
  {
LABEL_4:
    v4 = -1073741811;
LABEL_42:
    KeReleaseSpinLock(&ndisIfListLock, NewIrql[0]);
    goto LABEL_43;
  }
  v13->Flags = Flags | 1;
  Flink = v13->CompartmentLink.Flink;
  Blink = v13->CompartmentLink.Blink;
  if ( Flink->Blink != &v13->CompartmentLink || Blink->Flink != &v13->CompartmentLink )
    __fastfail(3u);
  --ndisIfNetworkCount;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  ndisIfReleaseSiteId(v13->NetworkInfo.SiteId);
  COMPARTMENTBLOCK_DECREMENT_REF(v19);
  v20 = v13->Link.Flink;
  v21 = v13->Link.Blink;
  if ( (struct _NDIS_IF_NETWORK_BLOCK *)v13->Link.Flink->Blink != v13
    || (struct _NDIS_IF_NETWORK_BLOCK *)v21->Flink != v13 )
  {
    __fastfail(3u);
  }
  v21->Flink = v20;
  v20->Blink = v21;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v13->AsyncEvent = &Event;
  KeReleaseSpinLock(&ndisIfListLock, NewIrql[0]);
  ndisNsiNotifyClientNetworkChange(v13, 2LL, 0LL);
  v22 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NETWORKBLOCK_DECREMENT_REF(v13);
  KeReleaseSpinLock(&ndisIfListLock, v22);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v13->AsyncEvent = 0LL;
  ExFreePoolWithTag(v13, 0);
LABEL_43:
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qD(0x73u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1, v4);
  return (unsigned int)v4;
}
