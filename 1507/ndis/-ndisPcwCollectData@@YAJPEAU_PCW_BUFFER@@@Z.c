/*
 * XREFs of ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00D85D8
 * Callers:
 *     ?ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C00D8430 (-ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     NdisGroupActiveProcessorCount @ 0x1C0020250 (NdisGroupActiveProcessorCount.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C0023CB8 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6BE4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6C0C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPcwMaybeDeleteDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@@Z @ 0x1C00D8C64 (-ndisPcwMaybeDeleteDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@@Z.c)
 *     ?ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8D10 (-ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSumDataBlock@@YAXPEA_K0@Z @ 0x1C00D8FF4 (-ndisSumDataBlock@@YAXPEA_K0@Z.c)
 */

__int64 __fastcall ndisPcwCollectData(PPCW_BUFFER Buffer)
{
  ULONG active; // r15d
  struct _NDIS_PCW_DATA_BLOCK *i; // rdi
  int v4; // ebx
  unsigned __int64 *PerCpuDataForProcessor; // rax
  __int64 v6; // r9
  ULONG v7; // r8d
  NTSTATUS v8; // esi
  _NDIS_MINIPORT_BLOCK *Miniport; // r8
  struct _NDIS_MINIPORT_BLOCK *v10; // rbx
  ULONG TotalInstanceId; // r8d
  struct _PCW_DATA v14; // [rsp+38h] [rbp-D0h] BYREF
  struct _PCW_DATA Data; // [rsp+48h] [rbp-C0h] BYREF
  KLockHolder v16; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v17[38]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v18[38]; // [rsp+1A8h] [rbp+A0h] BYREF

  v18[0] = 0LL;
  active = NdisGroupActiveProcessorCount(0xFFFFu);
  memset(&v18[1], 0, 0x128uLL);
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v16, (struct KPushLockBase *)&ndisPcwMutex);
LABEL_2:
  for ( i = ndisPcwDataBlockList; ; i = i->Next )
  {
    if ( !i )
    {
      v14.Size = 304;
      v14.Data = v18;
      v8 = PcwAddInstance(Buffer, &ndisPcwSystemTotalInstanceName, 0xFFFFFFFE, 1u, &v14);
      goto LABEL_15;
    }
    memset(v17, 0, sizeof(v17));
    v4 = 0;
    if ( active )
      break;
LABEL_7:
    Miniport = i->Miniport;
    if ( Miniport )
    {
      if ( (Miniport->PcwDatapathEventMask & 0x2000000) != 0 )
      {
        if ( ndisReferenceMiniport((__int64)i->Miniport, 0x5Bu) )
        {
          ++i->ReferenceCount;
          v10 = i->Miniport;
          KLockHolder::ReleaseExclusive(&v16);
          v17[37] = ndisPcwQueryPcfMatchCount(v10);
          ndisDereferenceMiniport((__int64)v10, 0x5Bu);
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
    v8 = PcwAddInstance(Buffer, &i->TotalInstanceName, TotalInstanceId, 1u, &v14);
    if ( v8 < 0 )
      goto LABEL_15;
    ndisSumDataBlock(v18, v17);
  }
  while ( 1 )
  {
    PerCpuDataForProcessor = (unsigned __int64 *)ndisPcwGetPerCpuDataForProcessor(i, v4);
    ndisSumDataBlock(v17, PerCpuDataForProcessor);
    v7 = *(_DWORD *)(v6 + 408);
    Data.Data = (const void *)v6;
    Data.Size = 304;
    v8 = PcwAddInstance(Buffer, (PCUNICODE_STRING)(v6 + 416), v7, 1u, &Data);
    if ( v8 < 0 )
      break;
    if ( ++v4 >= active )
      goto LABEL_7;
  }
LABEL_15:
  KLockHolder::~KLockHolder(&v16);
  return (unsigned int)v8;
}
