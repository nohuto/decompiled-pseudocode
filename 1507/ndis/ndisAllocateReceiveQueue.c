/*
 * XREFs of ndisAllocateReceiveQueue @ 0x1C003787C
 * Callers:
 *     ndisOidPreRcvFilterAllocateQueue @ 0x1C00C5720 (ndisOidPreRcvFilterAllocateQueue.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0003024 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     ndisReferenceOpenByHandle @ 0x1C001EC00 (ndisReferenceOpenByHandle.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisAddReceiveQueueToList @ 0x1C003781C (ndisAddReceiveQueueToList.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 */

char __fastcall ndisAllocateReceiveQueue(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rsi
  _BYTE *v3; // r15
  __int64 v4; // rbx
  __int64 v6; // r13
  char v7; // bp
  int v8; // eax
  unsigned __int16 v9; // cx
  unsigned __int64 v10; // rdx
  char v11; // r12
  char v12; // al
  char v13; // r15
  _BYTE *OidSourceHandle; // rax
  PVOID PoolWithTag; // rax
  char v16; // al
  KIRQL v17; // r15
  int v18; // ecx
  KIRQL v19; // dl
  __int64 v20; // rax
  int v21; // r9d
  unsigned __int8 *v22; // r8
  unsigned int v23; // r11d
  unsigned int v24; // edx
  int v25; // ecx
  _BYTE *v26; // rax
  _BYTE *v27; // r15
  __int64 v28; // r10
  int v29; // ecx
  int v30; // eax
  int v31; // edx
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // eax
  unsigned int Size; // [rsp+30h] [rbp-68h]
  __int64 v38; // [rsp+38h] [rbp-60h]
  void *Src; // [rsp+40h] [rbp-58h]
  char v40; // [rsp+A0h] [rbp+8h]
  KIRQL v41; // [rsp+B0h] [rbp+18h]
  int v42; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0LL;
  v42 = 0;
  v3 = 0LL;
  v4 = *(_QWORD *)a1;
  v40 = 0;
  v6 = *(_QWORD *)(v1 + 40);
  v7 = 1;
  v38 = 0LL;
  if ( (unsigned __int8)byte_1C0085320 >= 4u )
    WPP_SF_q(0xEu, &WPP_63298f27d84d406e2a9901f9d2228ddf_Traceguids, v4);
  v8 = 1096;
  *(_DWORD *)(a1 + 40) = -1073741637;
  v9 = *(_WORD *)(v6 + 2);
  v10 = v9;
  if ( v9 >= 0x448u )
    v10 = 1096LL;
  if ( v10 >= *(unsigned int *)(v1 + 48) )
  {
    v8 = *(_DWORD *)(v1 + 48);
  }
  else if ( v9 < 0x448u )
  {
    v8 = v9;
  }
  *(_DWORD *)(v1 + 60) = 0;
  v11 = 2;
  *(_DWORD *)(v1 + 64) = v8;
  if ( *(_DWORD *)(v6 + 8) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_11:
    v12 = 0;
    v13 = 0;
    goto LABEL_61;
  }
  if ( !ndisReferenceMiniport(v4, 0x43u) )
  {
    *(_DWORD *)(a1 + 40) = -1073676286;
    goto LABEL_11;
  }
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v38 = (__int64)OidSourceHandle;
    v3 = OidSourceHandle;
    if ( !ndisReferenceOpenByHandle((__int64)OidSourceHandle, 0xAu) )
    {
      *(_DWORD *)(a1 + 40) = -1073676286;
      v12 = 0;
LABEL_18:
      v13 = 1;
      goto LABEL_61;
    }
    v40 = 1;
  }
  if ( *(_DWORD *)(v6 + 8) == 1 && !v3 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_23:
    v12 = v40;
    goto LABEL_18;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4C8uLL, 0x7571444Eu);
  v2 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_23;
  }
  memset(PoolWithTag, 0, 0x4C8uLL);
  *(_DWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 64) = v4;
  *(_QWORD *)(v2 + 72) = v3;
  *(_QWORD *)(v2 + 40) = v2 + 32;
  *(_QWORD *)(v2 + 32) = v2 + 32;
  *(_QWORD *)(v2 + 96) = v2 + 88;
  *(_QWORD *)(v2 + 88) = v2 + 88;
  *(_DWORD *)(v2 + 80) = 1;
  memmove((void *)(v2 + 128), (const void *)v6, *(unsigned int *)(v1 + 64));
  *(_WORD *)(v2 + 130) = *(_WORD *)(v1 + 64);
  v16 = *(_BYTE *)(v2 + 129);
  if ( (unsigned __int8)v16 >= 2u )
    v16 = 2;
  *(_BYTE *)(v2 + 129) = v16;
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  v41 = v17;
  v18 = *(_DWORD *)(v4 + 3540);
  *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 1856) = 2687452;
  if ( (unsigned int)(v18 + 1) > 0x3BCBAD )
  {
    *(_QWORD *)(v4 + 520) = 0LL;
    *(_DWORD *)(v4 + 1856) = 0;
LABEL_30:
    v19 = v17;
LABEL_31:
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v19);
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_32;
  }
  v20 = *(_QWORD *)(v4 + 3592);
  v21 = 0;
  if ( !v20 )
  {
    *(_QWORD *)(v4 + 520) = 0LL;
    *(_DWORD *)(v4 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v17);
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_32;
  }
  if ( v18 == *(_DWORD *)(v20 + 16) )
  {
    *(_QWORD *)(v4 + 520) = 0LL;
    *(_DWORD *)(v4 + 1856) = 0;
    goto LABEL_30;
  }
  v22 = *(unsigned __int8 **)(v4 + 3528);
  v23 = *(_DWORD *)(v4 + 3536);
  Src = v22;
  Size = v23;
  if ( v22 && (v24 = 0, v23) )
  {
    v25 = 0;
    v26 = *(_BYTE **)(v4 + 3528);
    while ( *v26 == 0xFF )
    {
      v25 += 8;
      ++v24;
      ++v26;
      v42 = v25;
      if ( v24 >= v23 )
        goto LABEL_42;
    }
    v28 = v24;
    v29 = 1;
    v30 = v22[v24];
    while ( (v30 & v29) != 0 )
    {
      v29 *= 2;
      if ( (unsigned int)++v21 >= 8 )
        goto LABEL_42;
    }
    v31 = v21 + v42;
    v22[v28] = v29 | v30;
    v42 += v21;
  }
  else
  {
LABEL_42:
    v27 = ExAllocatePoolWithTag(NonPagedPoolNx, v23 + 64, 0x7571444Eu);
    if ( !v27 )
    {
      *(_QWORD *)(v4 + 520) = 0LL;
      *(_DWORD *)(v4 + 1856) = 0;
      v19 = v41;
      goto LABEL_31;
    }
    memset(&v27[Size], 0, 0x40uLL);
    if ( Src )
    {
      memmove(v27, Src, Size);
      v27[Size] = 1;
      ExFreePoolWithTag(Src, 0);
      v31 = v42;
    }
    else
    {
      v31 = 1;
      *v27 = 3;
      v42 = 1;
    }
    *(_QWORD *)(v4 + 3528) = v27;
    v17 = v41;
    *(_DWORD *)(v4 + 3536) = Size + 64;
  }
  *(_DWORD *)(v6 + 12) = v31;
  *(_DWORD *)(v2 + 140) = v31;
  *(_DWORD *)(v2 + 48) = v31;
  v32 = ndisAddReceiveQueueToList(v4, v2);
  *(_DWORD *)(a1 + 40) = v32;
  if ( !v32 )
  {
    if ( v38 )
    {
      v33 = *(_QWORD *)(v38 + 832);
      v34 = v2 + 16;
      *(_QWORD *)(v2 + 16) = v33;
      *(_QWORD *)(v2 + 24) = v38 + 832;
      if ( *(_QWORD *)(v33 + 8) != v38 + 832 )
        __fastfail(3u);
      *(_QWORD *)(v33 + 8) = v34;
      *(_QWORD *)(v38 + 832) = v34;
      ++*(_DWORD *)(v38 + 848);
    }
    *(_QWORD *)(v4 + 520) = 0LL;
    *(_DWORD *)(v4 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v17);
    v12 = 0;
    *(_DWORD *)(v2 + 52) = 1;
    v13 = 0;
    v7 = 0;
    goto LABEL_60;
  }
  *(_QWORD *)(v4 + 520) = 0LL;
  *(_DWORD *)(v4 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v17);
LABEL_32:
  v12 = v40;
  v13 = 1;
LABEL_60:
  v11 = 2;
LABEL_61:
  if ( *(_DWORD *)(a1 + 40) )
  {
    if ( v12 )
      ndisMDereferenceOpenUnlocked(v38);
    if ( v13 )
      ndisDereferenceMiniport(v4, 0x43u);
    if ( v2 )
      ExFreePoolWithTag((PVOID)v2, 0);
  }
  else
  {
    v35 = *(_DWORD *)(v1 + 64);
    *(_DWORD *)(v1 + 60) = v35;
    *(_WORD *)(v6 + 2) = v35;
    if ( *(_BYTE *)(v6 + 1) < 2u )
      v11 = *(_BYTE *)(v6 + 1);
    *(_BYTE *)(v6 + 1) = v11;
  }
  if ( (unsigned __int8)byte_1C0085320 >= 4u )
    WPP_SF_qdD(15LL, &WPP_63298f27d84d406e2a9901f9d2228ddf_Traceguids, v4, *(unsigned int *)(a1 + 40), v42);
  return v7;
}
