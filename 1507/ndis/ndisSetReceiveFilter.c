/*
 * XREFs of ndisSetReceiveFilter @ 0x1C0039558
 * Callers:
 *     ndisOidPreRcvFilterSetFilter @ 0x1C00C58F0 (ndisOidPreRcvFilterSetFilter.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0003024 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     ndisReferenceOpenByHandle @ 0x1C001EC00 (ndisReferenceOpenByHandle.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003800C (ndisDereferenceReceiveQueue.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C0038194 (ndisFindReceiveQueueByQueueId.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     ndisIovFindVPortByVPortId @ 0x1C0065540 (ndisIovFindVPortByVPortId.c)
 */

char __fastcall ndisSetReceiveFilter(__int64 a1)
{
  __int64 v1; // r15
  __int64 *ReceiveQueueByQueueId; // rbp
  __int64 v3; // rbx
  __int64 v5; // r12
  _DWORD *v6; // r14
  __int64 v7; // r13
  char v8; // si
  int v9; // ecx
  __int64 v10; // rax
  char v11; // r15
  char v12; // r12
  _BYTE *OidSourceHandle; // rax
  _BYTE *v14; // r15
  __int64 v15; // rax
  char v16; // al
  __int64 VPortByVPortId; // rax
  int v18; // edx
  bool v19; // zf
  SIZE_T v20; // r15
  _DWORD *PoolWithTag; // rax
  KIRQL v22; // r10
  unsigned int v23; // edx
  KIRQL v24; // r15
  KIRQL v25; // dl
  unsigned __int8 *v26; // rax
  unsigned int v27; // r9d
  __int64 v28; // rcx
  int v29; // r11d
  _BYTE *v30; // rdx
  _BYTE *v31; // r15
  __int64 v32; // r10
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  unsigned int v36; // r11d
  int v37; // r8d
  __int64 *i; // rax
  unsigned int v39; // edx
  __int64 *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  char *v43; // rax
  __int64 v44; // rcx
  char *v45; // rdx
  __int64 v46; // rax
  int v48; // [rsp+30h] [rbp-78h]
  unsigned int v49; // [rsp+34h] [rbp-74h]
  unsigned int Size; // [rsp+38h] [rbp-70h]
  unsigned int Size_4; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v52; // [rsp+40h] [rbp-68h]
  __int64 v53; // [rsp+48h] [rbp-60h]
  void *Src; // [rsp+50h] [rbp-58h]
  char v55; // [rsp+B0h] [rbp+8h]
  char v56; // [rsp+C0h] [rbp+18h]
  KIRQL v57; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  ReceiveQueueByQueueId = 0LL;
  v3 = *(_QWORD *)a1;
  v53 = 0LL;
  v48 = 0;
  v5 = *(_QWORD *)(v1 + 40);
  v6 = 0LL;
  v7 = 0LL;
  v55 = 0;
  v49 = 0;
  v8 = 1;
  v56 = 0;
  if ( (unsigned __int8)byte_1C0085320 >= 4u )
    WPP_SF_q(0x14u, &WPP_63298f27d84d406e2a9901f9d2228ddf_Traceguids, v3);
  v9 = 36;
  Size = 36;
  if ( *(_BYTE *)(v5 + 1) >= 2u )
  {
    v9 = 44;
    Size = 44;
    v49 = *(_DWORD *)(v5 + 40);
  }
  v10 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 40) = -1073741637;
  *(_DWORD *)(v10 + 64) = v9;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
  if ( !ndisReferenceMiniport(v3, 0x44u) )
  {
    *(_DWORD *)(a1 + 40) = -1073676286;
    v11 = 0;
    v12 = 0;
LABEL_20:
    v16 = 0;
    goto LABEL_21;
  }
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v53 = (__int64)OidSourceHandle;
    v14 = OidSourceHandle;
    if ( !ndisReferenceOpenByHandle((__int64)OidSourceHandle, 0xBu) )
    {
      *(_DWORD *)(a1 + 40) = -1073676286;
      v11 = 0;
LABEL_19:
      v12 = 1;
      goto LABEL_20;
    }
    v55 = 1;
  }
  else
  {
    v14 = 0LL;
  }
  v15 = *(_QWORD *)(v3 + 4672);
  if ( v15 && (*(_BYTE *)(v15 + 8) & 3) == 3 && *(_QWORD *)(v3 + 4744) )
  {
    if ( *(_DWORD *)(v5 + 12) )
      goto LABEL_17;
    VPortByVPortId = ndisIovFindVPortByVPortId(v3, v49);
    v7 = VPortByVPortId;
    if ( !VPortByVPortId )
      goto LABEL_17;
    if ( !v18 )
      goto LABEL_34;
    v19 = *(_QWORD *)(VPortByVPortId + 80) == (_QWORD)v14;
  }
  else
  {
    v19 = v49 == 0;
  }
  if ( !v19 )
  {
LABEL_17:
    *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_18:
    v11 = v55;
    goto LABEL_19;
  }
LABEL_34:
  v20 = (unsigned int)(*(_DWORD *)(v5 + 24) * *(_DWORD *)(v5 + 28) + 184);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v20, 0x6672444Eu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_18;
  memset(PoolWithTag, 0, (unsigned int)v20);
  v6[12] = 0;
  *((_QWORD *)v6 + 8) = v53;
  v6[20] = 1;
  *((_QWORD *)v6 + 7) = v3;
  memmove(v6 + 33, (const void *)v5, Size);
  v6[38] = 184;
  memmove(
    v6 + 46,
    (const void *)(v5 + *(unsigned int *)(v5 + 20)),
    (unsigned int)(*(_DWORD *)(v5 + 24) * *(_DWORD *)(v5 + 28)));
  *((_QWORD *)v6 + 22) = v7;
  *((_QWORD *)v6 + 5) = v6 + 8;
  *((_QWORD *)v6 + 4) = v6 + 8;
  v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1856) = 2688920;
  v23 = *(_DWORD *)(v5 + 12);
  if ( v23 )
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v3, v23);
  else
    ReceiveQueueByQueueId = *(__int64 **)(v3 + 4432);
  if ( ReceiveQueueByQueueId )
  {
    ++*((_DWORD *)ReceiveQueueByQueueId + 20);
    v56 = 1;
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v22);
  if ( !ReceiveQueueByQueueId )
    goto LABEL_42;
  if ( *(_DWORD *)(v5 + 12) )
  {
    if ( v53 )
    {
      if ( v53 != ReceiveQueueByQueueId[9] )
      {
LABEL_42:
        *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_43:
        v11 = v55;
        v12 = 1;
        v16 = v56;
        goto LABEL_21;
      }
    }
    else if ( *((_DWORD *)ReceiveQueueByQueueId + 34) == 1 )
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
      goto LABEL_43;
    }
  }
  v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  v57 = v24;
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1856) = 2688996;
  *((_QWORD *)v6 + 9) = ReceiveQueueByQueueId;
  if ( (unsigned int)(*(_DWORD *)(v3 + 3572) + 1) > 0x5555555 )
  {
    v25 = v24;
LABEL_49:
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v25);
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_43;
  }
  v26 = *(unsigned __int8 **)(v3 + 3560);
  v27 = *(_DWORD *)(v3 + 3568);
  Src = v26;
  Size_4 = v27;
  if ( v26 && (v28 = 0LL, v27) )
  {
    v29 = 0;
    v30 = *(_BYTE **)(v3 + 3560);
    while ( *v30 == 0xFF )
    {
      v29 += 8;
      v28 = (unsigned int)(v28 + 1);
      ++v30;
      v48 = v29;
      if ( (unsigned int)v28 >= v27 )
        goto LABEL_57;
    }
    v32 = (unsigned int)v28;
    v33 = 1;
    v34 = v26[v28];
    v35 = 0;
    while ( (v34 & v33) != 0 )
    {
      v33 *= 2;
      if ( (unsigned int)++v35 >= 8 )
        goto LABEL_57;
    }
    v36 = v35 + v29;
    v26[v32] = v33 | v34;
    v48 = v36;
  }
  else
  {
LABEL_57:
    v52 = v27 + 64;
    v31 = ExAllocatePoolWithTag(NonPagedPoolNx, v27 + 64, 0x7571444Eu);
    if ( !v31 )
    {
      v25 = v57;
      goto LABEL_49;
    }
    memset(&v31[Size_4], 0, 0x40uLL);
    if ( Src )
    {
      memmove(v31, Src, Size_4);
      v31[Size_4] = 1;
      ExFreePoolWithTag(Src, 0);
      v36 = v48;
    }
    else
    {
      *v31 = 3;
      v36 = 1;
      v48 = 1;
    }
    *(_QWORD *)(v3 + 3560) = v31;
    v24 = v57;
    *(_DWORD *)(v3 + 3568) = v52;
  }
  *(_DWORD *)(v5 + 16) = v36;
  v12 = 0;
  v6[37] = v36;
  v6[12] = v36;
  v37 = 0;
  for ( i = *(__int64 **)(v3 + 3544); i != (__int64 *)(v3 + 3544); i = (__int64 *)*i )
  {
    v39 = *((_DWORD *)i + 12);
    if ( v39 == v36 )
    {
      v37 = -1073741270;
      goto LABEL_77;
    }
    if ( v39 > v36 )
      break;
  }
  v40 = (__int64 *)i[1];
  v41 = *v40;
  *(_QWORD *)v6 = *v40;
  *((_QWORD *)v6 + 1) = v40;
  if ( *(__int64 **)(v41 + 8) != v40 )
    __fastfail(3u);
  *(_QWORD *)(v41 + 8) = v6;
  *v40 = (__int64)v6;
  ++*(_DWORD *)(v3 + 3572);
LABEL_77:
  *(_DWORD *)(a1 + 40) = v37;
  if ( v37 )
  {
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v24);
    goto LABEL_43;
  }
  ++*((_DWORD *)ReceiveQueueByQueueId + 21);
  v42 = ReceiveQueueByQueueId[4];
  v43 = (char *)(v6 + 4);
  *((_QWORD *)v6 + 2) = v42;
  *((_QWORD *)v6 + 3) = ReceiveQueueByQueueId + 4;
  if ( *(__int64 **)(v42 + 8) != ReceiveQueueByQueueId + 4 )
    __fastfail(3u);
  *(_QWORD *)(v42 + 8) = v43;
  ReceiveQueueByQueueId[4] = (__int64)v43;
  if ( v7 )
  {
    ++*(_DWORD *)(v7 + 864);
    v44 = *(_QWORD *)(v7 + 872);
    v45 = (char *)(v6 + 8);
    *((_QWORD *)v6 + 4) = v44;
    *((_QWORD *)v6 + 5) = v7 + 872;
    if ( *(_QWORD *)(v44 + 8) != v7 + 872 )
      __fastfail(3u);
    *(_QWORD *)(v44 + 8) = v45;
    *(_QWORD *)(v7 + 872) = v45;
    v46 = *(_QWORD *)(v7 + 88);
    if ( v49 )
      ++*(_DWORD *)(v46 + 652);
    else
      ++*(_DWORD *)(v46 + 648);
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v24);
  v16 = 0;
  v11 = 0;
  v8 = 0;
LABEL_21:
  if ( *(_DWORD *)(a1 + 40) )
  {
    if ( v16 )
      ndisDereferenceReceiveQueue(ReceiveQueueByQueueId);
    if ( v11 )
      ndisMDereferenceOpenUnlocked(v53);
    if ( v12 )
      ndisDereferenceMiniport(v3, 0x44u);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = Size;
  }
  if ( (unsigned __int8)byte_1C0085320 >= 4u )
    WPP_SF_qdD(21LL, &WPP_63298f27d84d406e2a9901f9d2228ddf_Traceguids, v3, *(unsigned int *)(a1 + 40), v48);
  return v8;
}
