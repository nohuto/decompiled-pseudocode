/*
 * XREFs of ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00D7CC8
 * Callers:
 *     ?ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C00D7B20 (-ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     NdisGroupActiveProcessorCount @ 0x1C0020670 (NdisGroupActiveProcessorCount.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C0027768 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6E6C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6E94 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPcwMaybeDeleteDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@@Z @ 0x1C00D833C (-ndisPcwMaybeDeleteDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@@Z.c)
 *     ?ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8358 (-ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSumDataBlock@@YAXPEA_K0@Z @ 0x1C00D8634 (-ndisSumDataBlock@@YAXPEA_K0@Z.c)
 */

__int64 __fastcall ndisPcwCollectData(PPCW_BUFFER Buffer)
{
  NTSTATUS v2; // esi
  ULONG active; // r14d
  struct _NDIS_PCW_DATA_BLOCK *i; // rdi
  int v5; // ebx
  unsigned __int64 *PerCpuDataForProcessor; // rax
  __int64 v7; // r9
  ULONG v8; // r8d
  _NDIS_MINIPORT_BLOCK *Miniport; // r8
  struct _NDIS_MINIPORT_BLOCK *v10; // rbx
  ULONG TotalInstanceId; // r8d
  struct _PCW_DATA v14; // [rsp+30h] [rbp-D0h] BYREF
  struct _PCW_DATA Data; // [rsp+40h] [rbp-C0h] BYREF
  KLockThisExclusive v16; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v17[38]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v18[38]; // [rsp+1A0h] [rbp+A0h] BYREF

  v2 = 0;
  active = NdisGroupActiveProcessorCount(0xFFFFu);
  memset(v18, 0, sizeof(v18));
  KLockThisExclusive::KLockThisExclusive(&v16, (struct KPushLockBase *)&ndisPcwMutex);
LABEL_2:
  for ( i = ndisPcwDataBlockList; ; i = i->Next )
  {
    if ( !i )
    {
      if ( v2 >= 0 )
      {
        v14.Size = 304;
        v14.Data = v18;
        v2 = PcwAddInstance(Buffer, &ndisPcwSystemTotalInstanceName, 0xFFFFFFFE, 1u, &v14);
      }
      goto LABEL_17;
    }
    if ( v2 < 0 )
      goto LABEL_17;
    memset(v17, 0, sizeof(v17));
    v5 = 0;
    if ( active )
      break;
LABEL_8:
    Miniport = i->Miniport;
    if ( Miniport )
    {
      if ( (Miniport->PcwDatapathEventMask & 0x2000000) != 0 )
      {
        if ( ndisReferenceMiniport((__int64)i->Miniport, 0x5Du) )
        {
          ++i->ReferenceCount;
          v10 = i->Miniport;
          KLockHolder::ReleaseExclusive(&v16);
          v17[37] = ndisPcwQueryPcfMatchCount(v10);
          ndisDereferenceMiniport((__int64)v10);
          KLockHolder::AcquireExclusive(&v16);
          if ( i->ReferenceCount-- == 1 )
          {
            ndisPcwMaybeDeleteDataBlock(i);
            goto LABEL_2;
          }
        }
      }
    }
    TotalInstanceId = i->TotalInstanceId;
    v14.Data = v17;
    v14.Size = 304;
    v2 = PcwAddInstance(Buffer, &i->TotalInstanceName, TotalInstanceId, 1u, &v14);
    if ( v2 < 0 )
      goto LABEL_17;
    ndisSumDataBlock(v18, v17);
  }
  while ( 1 )
  {
    PerCpuDataForProcessor = (unsigned __int64 *)ndisPcwGetPerCpuDataForProcessor(i, v5);
    ndisSumDataBlock(v17, PerCpuDataForProcessor);
    v8 = *(_DWORD *)(v7 + 408);
    Data.Data = (const void *)v7;
    Data.Size = 304;
    v2 = PcwAddInstance(Buffer, (PCUNICODE_STRING)(v7 + 416), v8, 1u, &Data);
    if ( v2 < 0 )
      break;
    if ( ++v5 >= active )
      goto LABEL_8;
  }
LABEL_17:
  KLockHolder::~KLockHolder(&v16);
  return (unsigned int)v2;
}
