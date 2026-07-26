/*
 * XREFs of ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C00637B4
 * Callers:
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00D1B78 (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D2060 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z @ 0x1C00D2270 (-ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwReferenceMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_K@Z @ 0x1C00D24E8 (-ndisPcwReferenceMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_K@Z.c)
 */

__int64 __fastcall ndisPcwGetReferencesForConsumer(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  void *v4; // rsi
  unsigned int v5; // r13d
  __int64 v6; // rbp
  char v7; // r12
  ULONG v8; // r15d
  KIRQL v9; // al
  struct _NDIS_MINIPORT_BLOCK *v10; // rbx
  KIRQL v11; // di
  unsigned int v12; // edi
  __int64 v13; // rbp
  PVOID PoolWithTag; // rax
  PVOID v15; // rbp
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlockInternal; // rax
  struct _NDIS_PCW_DATA_BLOCK *v17; // rdi
  __int64 v18; // rcx
  KLockHolder v20; // [rsp+20h] [rbp-68h] BYREF
  ULONG ActiveProcessorCount; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  v6 = a3;
  v7 = 1;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v8 = ActiveProcessorCount;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v20, &ndisPcwMutex);
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v10 = ndisMiniportList;
  v11 = v9;
  if ( ndisMiniportList )
  {
    while ( 1 )
    {
      if ( !v7 )
        goto LABEL_22;
      if ( v10->PnPDeviceState != NdisPnPDeviceStarted || !ndisReferenceMiniport((__int64)v10) )
        goto LABEL_21;
      KeReleaseSpinLock(&ndisMiniportListLock, v11);
      v12 = 0;
      if ( !v8 )
        goto LABEL_18;
      v13 = a2;
      while ( !ndisPcwMatchInstance(v10, v12, *(const struct _UNICODE_STRING **)(v13 + 8)) )
      {
LABEL_11:
        if ( ++v12 >= v8 )
          goto LABEL_18;
      }
      if ( v3 < v5 )
        goto LABEL_16;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * (2 * v5 + 1), 0x7763444Eu);
      v15 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      if ( v4 )
      {
        memmove(PoolWithTag, v4, 8LL * v5);
        ExFreePoolWithTag(v4, 0);
      }
      v4 = v15;
      v5 = 2 * v5 + 1;
      v8 = ActiveProcessorCount;
      v13 = a2;
LABEL_16:
      MiniportDataBlockInternal = ndisPcwGetMiniportDataBlockInternal(v10);
      v17 = MiniportDataBlockInternal;
      if ( MiniportDataBlockInternal )
      {
        ndisPcwReferenceMiniportDataBlock(MiniportDataBlockInternal, a1, *(_QWORD *)v13);
        v18 = v3++;
        *((_QWORD *)v4 + v18) = v17;
      }
LABEL_18:
      if ( v5 > 0x10000 )
        v7 = 0;
      v11 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport((__int64)v10, 0x57u);
LABEL_21:
      v10 = v10->NextGlobalMiniport;
      if ( !v10 )
      {
LABEL_22:
        v6 = a3;
        goto LABEL_23;
      }
    }
    v8 = ActiveProcessorCount;
    v7 = 0;
    v13 = a2;
    goto LABEL_11;
  }
LABEL_23:
  KeReleaseSpinLock(&ndisMiniportListLock, v11);
  *(_DWORD *)(v6 + 40) = v3;
  *(_QWORD *)(v6 + 48) = v4;
  KLockHolder::~KLockHolder(&v20);
  return 0LL;
}
