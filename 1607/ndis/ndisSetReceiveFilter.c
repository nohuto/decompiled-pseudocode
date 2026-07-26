/*
 * XREFs of ndisSetReceiveFilter @ 0x1C003E208
 * Callers:
 *     ndisOidPreRcvFilterSetFilter @ 0x1C00C3510 (ndisOidPreRcvFilterSetFilter.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00184DC (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceOpenByHandle @ 0x1C0018A98 (ndisReferenceOpenByHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C001B5AC (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0022244 (ndisGetOidSourceHandle.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003CC7C (ndisDereferenceReceiveQueue.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C003CE04 (ndisFindReceiveQueueByQueueId.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 *     ndisIovFindVPortByVPortId @ 0x1C0068724 (ndisIovFindVPortByVPortId.c)
 */

char __fastcall ndisSetReceiveFilter(__int64 a1)
{
  __int64 v1; // r15
  __int64 *ReceiveQueueByQueueId; // rbp
  __int64 v3; // rbx
  __int64 v5; // r12
  char *v6; // r14
  __int64 v7; // r13
  char v8; // si
  int v9; // ecx
  __int64 v10; // rax
  char v11; // r15
  char v12; // r12
  _BYTE *OidSourceHandle; // rax
  _BYTE *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  char v17; // al
  __int64 VPortByVPortId; // rax
  int v19; // edx
  bool v20; // zf
  SIZE_T v21; // r15
  char *PoolWithTag; // rax
  KSPIN_LOCK *v23; // r15
  KIRQL v24; // r10
  unsigned int v25; // edx
  KIRQL v26; // r11
  KIRQL v27; // dl
  KSPIN_LOCK *v28; // rcx
  _BYTE *v29; // r12
  unsigned int v30; // r8d
  __int64 v31; // rax
  int v32; // r10d
  _BYTE *v33; // rcx
  _BYTE *v34; // r15
  __int64 v35; // r9
  int v36; // ecx
  int v37; // eax
  int v38; // edx
  unsigned int v39; // r10d
  int v40; // r8d
  __int64 *i; // rax
  unsigned int v42; // edx
  __int64 *v43; // rdx
  __int64 v44; // rax
  __int64 **v45; // rcx
  __int64 v46; // rdx
  __int64 *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  int v52; // [rsp+30h] [rbp-78h]
  unsigned int v53; // [rsp+34h] [rbp-74h]
  unsigned int Size; // [rsp+38h] [rbp-70h]
  unsigned int Size_4; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v56; // [rsp+40h] [rbp-68h]
  __int64 v57; // [rsp+48h] [rbp-60h]
  __int64 v58; // [rsp+58h] [rbp-50h]
  char v59; // [rsp+B0h] [rbp+8h]
  char v60; // [rsp+C0h] [rbp+18h]
  KIRQL v61; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  ReceiveQueueByQueueId = 0LL;
  v3 = *(_QWORD *)a1;
  v57 = 0LL;
  v52 = 0;
  v5 = *(_QWORD *)(v1 + 40);
  v6 = 0LL;
  v7 = 0LL;
  v58 = v5;
  v53 = 0;
  v8 = 1;
  v59 = 0;
  v60 = 0;
  if ( (unsigned __int8)byte_1C00895E0 >= 4u )
    WPP_SF_q(0x14u, &WPP_e0b1f8b808d7390f894176100c6a8720_Traceguids, v3);
  v9 = 36;
  Size = 36;
  if ( *(_BYTE *)(v5 + 1) >= 2u )
  {
    v9 = 44;
    Size = 44;
    v53 = *(_DWORD *)(v5 + 40);
  }
  v10 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 40) = -1073741637;
  *(_DWORD *)(v10 + 64) = v9;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
  if ( !ndisReferenceMiniport(v3, 0x46u) )
  {
    *(_DWORD *)(a1 + 40) = -1073676286;
    v11 = 0;
    v12 = 0;
LABEL_21:
    v17 = 0;
    goto LABEL_22;
  }
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v57 = (__int64)OidSourceHandle;
    v14 = OidSourceHandle;
    if ( !ndisReferenceOpenByHandle((__int64)OidSourceHandle, 0xBu) )
    {
      *(_DWORD *)(a1 + 40) = -1073676286;
      v11 = 0;
LABEL_20:
      v12 = 1;
      goto LABEL_21;
    }
    v59 = 1;
  }
  else
  {
    v14 = 0LL;
  }
  if ( *(_QWORD *)(v3 + 4744)
    && (ndisIovNicSwitchWithoutIovSupported(v3) || (v16 = *(_QWORD *)(v3 + 4672)) != 0 && (*(_BYTE *)(v16 + 8) & 3) == 3) )
  {
    if ( *(_DWORD *)(v5 + 12) )
      goto LABEL_18;
    VPortByVPortId = ndisIovFindVPortByVPortId(v15, v53);
    v7 = VPortByVPortId;
    if ( !VPortByVPortId )
      goto LABEL_18;
    if ( !v19 )
      goto LABEL_35;
    v20 = *(_QWORD *)(VPortByVPortId + 80) == (_QWORD)v14;
  }
  else
  {
    v20 = v53 == 0;
  }
  if ( !v20 )
  {
LABEL_18:
    *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_19:
    v11 = v59;
    goto LABEL_20;
  }
LABEL_35:
  v21 = (unsigned int)(*(_DWORD *)(v5 + 28) * *(_DWORD *)(v5 + 24) + 184);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x6672444Eu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_19;
  memset(PoolWithTag, 0, (unsigned int)v21);
  *((_DWORD *)v6 + 12) = 0;
  *((_QWORD *)v6 + 8) = v57;
  *((_DWORD *)v6 + 20) = 1;
  *((_QWORD *)v6 + 7) = v3;
  memmove(v6 + 132, (const void *)v5, Size);
  *((_DWORD *)v6 + 38) = 184;
  memmove(
    v6 + 184,
    (const void *)(v5 + *(unsigned int *)(v5 + 20)),
    (unsigned int)(*(_DWORD *)(v5 + 28) * *(_DWORD *)(v5 + 24)));
  *((_QWORD *)v6 + 22) = v7;
  v23 = (KSPIN_LOCK *)(v3 + 96);
  *((_QWORD *)v6 + 5) = v6 + 32;
  *((_QWORD *)v6 + 4) = v6 + 32;
  v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1856) = 2688923;
  v25 = *(_DWORD *)(v5 + 12);
  if ( v25 )
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v3, v25);
  else
    ReceiveQueueByQueueId = *(__int64 **)(v3 + 4432);
  if ( ReceiveQueueByQueueId )
  {
    ++*((_DWORD *)ReceiveQueueByQueueId + 20);
    v60 = 1;
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v24);
  if ( !ReceiveQueueByQueueId )
    goto LABEL_43;
  if ( *(_DWORD *)(v5 + 12) )
  {
    if ( v57 )
    {
      if ( v57 != ReceiveQueueByQueueId[9] )
      {
LABEL_43:
        *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_44:
        v11 = v59;
        v12 = 1;
        v17 = v60;
        goto LABEL_22;
      }
    }
    else if ( *((_DWORD *)ReceiveQueueByQueueId + 34) == 1 )
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
      goto LABEL_44;
    }
  }
  v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  v61 = v26;
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1856) = 2688999;
  *((_QWORD *)v6 + 9) = ReceiveQueueByQueueId;
  if ( (unsigned int)(*(_DWORD *)(v3 + 3572) + 1) > 0x5555555 )
  {
    v27 = v26;
    v28 = (KSPIN_LOCK *)(v3 + 96);
LABEL_50:
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock(v28, v27);
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_44;
  }
  v29 = *(_BYTE **)(v3 + 3560);
  v30 = *(_DWORD *)(v3 + 3568);
  Size_4 = v30;
  if ( v29 && (v31 = 0LL, v30) )
  {
    v32 = 0;
    v33 = *(_BYTE **)(v3 + 3560);
    while ( *v33 == 0xFF )
    {
      v32 += 8;
      v31 = (unsigned int)(v31 + 1);
      ++v33;
      v52 = v32;
      if ( (unsigned int)v31 >= v30 )
        goto LABEL_58;
    }
    v35 = (unsigned int)v31;
    v36 = 1;
    v37 = (unsigned __int8)v29[v31];
    v38 = 0;
    while ( (v37 & v36) != 0 )
    {
      v36 *= 2;
      if ( (unsigned int)++v38 >= 8 )
        goto LABEL_58;
    }
    v39 = v38 + v32;
    v29[v35] = v36 | v37;
    v52 = v39;
  }
  else
  {
LABEL_58:
    v56 = v30 + 64;
    v34 = ExAllocatePoolWithTag(NonPagedPoolNx, v30 + 64, 0x7571444Eu);
    if ( !v34 )
    {
      v27 = v61;
      v28 = (KSPIN_LOCK *)(v3 + 96);
      goto LABEL_50;
    }
    memset(&v34[Size_4], 0, 0x40uLL);
    if ( v29 )
    {
      memmove(v34, v29, Size_4);
      v34[Size_4] = 1;
      ExFreePoolWithTag(v29, 0);
      v39 = v52;
    }
    else
    {
      *v34 = 3;
      v39 = 1;
      v52 = 1;
    }
    v26 = v61;
    *(_QWORD *)(v3 + 3560) = v34;
    v23 = (KSPIN_LOCK *)(v3 + 96);
    *(_DWORD *)(v3 + 3568) = v56;
  }
  v12 = 0;
  v40 = 0;
  *(_DWORD *)(v58 + 16) = v39;
  *((_DWORD *)v6 + 37) = v39;
  *((_DWORD *)v6 + 12) = v39;
  for ( i = *(__int64 **)(v3 + 3544); i != (__int64 *)(v3 + 3544); i = (__int64 *)*i )
  {
    v42 = *((_DWORD *)i + 12);
    if ( v42 == v39 )
    {
      v40 = -1073741270;
      goto LABEL_78;
    }
    if ( v42 > v39 )
      break;
  }
  v43 = (__int64 *)i[1];
  v44 = *v43;
  if ( *(__int64 **)(*v43 + 8) != v43 )
    __fastfail(3u);
  *(_QWORD *)v6 = v44;
  *((_QWORD *)v6 + 1) = v43;
  *(_QWORD *)(v44 + 8) = v6;
  *v43 = (__int64)v6;
  ++*(_DWORD *)(v3 + 3572);
LABEL_78:
  *(_DWORD *)(a1 + 40) = v40;
  if ( v40 )
  {
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock(v23, v26);
    goto LABEL_44;
  }
  ++*((_DWORD *)ReceiveQueueByQueueId + 21);
  v45 = (__int64 **)(ReceiveQueueByQueueId + 4);
  v46 = ReceiveQueueByQueueId[4];
  v47 = (__int64 *)(v6 + 16);
  if ( *(__int64 **)(v46 + 8) != ReceiveQueueByQueueId + 4 )
    __fastfail(3u);
  *v47 = v46;
  *((_QWORD *)v6 + 3) = v45;
  *(_QWORD *)(v46 + 8) = v47;
  *v45 = v47;
  if ( v7 )
  {
    ++*(_DWORD *)(v7 + 864);
    v48 = (_QWORD *)(v7 + 872);
    v49 = *(_QWORD *)(v7 + 872);
    if ( *(_QWORD *)(v49 + 8) != v7 + 872 )
      __fastfail(3u);
    *((_QWORD *)v6 + 4) = v49;
    *((_QWORD *)v6 + 5) = v48;
    *(_QWORD *)(v49 + 8) = v6 + 32;
    *v48 = v6 + 32;
    v50 = *(_QWORD *)(v7 + 88);
    if ( v53 )
      ++*(_DWORD *)(v50 + 656);
    else
      ++*(_DWORD *)(v50 + 652);
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock(v23, v26);
  v17 = 0;
  v11 = 0;
  v8 = 0;
LABEL_22:
  if ( *(_DWORD *)(a1 + 40) )
  {
    if ( v17 )
      ndisDereferenceReceiveQueue(ReceiveQueueByQueueId);
    if ( v11 )
      ndisMDereferenceOpenUnlocked(v57, 0xBu);
    if ( v12 )
      ndisDereferenceMiniport(v3);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = Size;
  }
  if ( (unsigned __int8)byte_1C00895E0 >= 4u )
    WPP_SF_qdD(21LL, &WPP_e0b1f8b808d7390f894176100c6a8720_Traceguids, v3, *(unsigned int *)(a1 + 40), v52);
  return v8;
}
