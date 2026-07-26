/*
 * XREFs of ?NdisPDBMAddMemberToDomain@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@PEBU_NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS@@PEAPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x1C00DBC70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??_GNDIS_PD_BM_GROUP@@QEAAPEAXI@Z @ 0x1C00DBC4C (--_GNDIS_PD_BM_GROUP@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall NdisPDBMAddMemberToDomain(
        struct KPushLockBase *a1,
        const struct _NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS *a2,
        struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **a3)
{
  void *MiniportAdapterContext; // r13
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *v6; // rdi
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v7; // r12
  struct _DMA_ADAPTER *v8; // r14
  __int64 v9; // rbx
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *PoolWithTag; // rax
  unsigned int v11; // ebx
  struct NDIS_PD_BM_DOMAIN_HANDLE__ *v12; // rsi
  int v13; // eax
  _DEVICE_OBJECT *v14; // rcx
  struct _DMA_ADAPTER *DmaAdapter; // rax
  _DMA_OPERATIONS *DmaOperations; // r12
  int v17; // eax
  unsigned __int16 v18; // cx
  __int64 v19; // rax
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **Value; // rdx
  _QWORD *v21; // rax
  ULONG NumberOfMapRegisters; // [rsp+20h] [rbp-59h] BYREF
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v24; // [rsp+28h] [rbp-51h]
  KLockHolder v25; // [rsp+30h] [rbp-49h] BYREF
  _DWORD DeviceDescription[16]; // [rsp+50h] [rbp-29h] BYREF

  MiniportAdapterContext = a2->MiniportAdapterContext;
  v24 = a3;
  v6 = 0LL;
  *a3 = 0LL;
  v7 = a3;
  v8 = 0LL;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v25, a1 + 1);
  if ( a2->Header.Type != 0x80 || a2->Header.Revision != 1 || a2->Header.Size < 0x10u || a2->Flags )
  {
    v11 = -1073741811;
    goto LABEL_39;
  }
  v9 = *((_QWORD *)MiniportAdapterContext + 686);
  PoolWithTag = (struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6D41444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v11 = -1073741670;
    goto LABEL_43;
  }
  v12 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)&a1[2];
  if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v12 == v12 )
  {
    *((_BYTE *)&a1[4].m_Lock.0 + 1) = *(_BYTE *)(v9 + 14);
    goto LABEL_12;
  }
  if ( a1[4].m_Lock.0 )
  {
    v11 = -1073741808;
    goto LABEL_41;
  }
  if ( *((_BYTE *)&a1[4].m_Lock.0 + 1) != *(_BYTE *)(v9 + 14) )
  {
    v11 = -1073740007;
LABEL_41:
    if ( v6 )
      NDIS_PD_BM_GROUP::`scalar deleting destructor'((NDIS_PD_BM_GROUP *)v6);
    goto LABEL_43;
  }
LABEL_12:
  if ( !*((_BYTE *)&a1[4].m_Lock.0 + 1) )
  {
    memset(&DeviceDescription[1], 0, 0x3CuLL);
    v13 = *(_DWORD *)(v9 + 20);
    v14 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterContext + 486);
    NumberOfMapRegisters = 0;
    DeviceDescription[5] = -1;
    DeviceDescription[10] = v13;
    DeviceDescription[0] = 3;
    LOWORD(DeviceDescription[1]) = 257;
    DeviceDescription[8] = 0x20000;
    DmaAdapter = IoGetDmaAdapter(v14, (struct _DEVICE_DESCRIPTION *)DeviceDescription, &NumberOfMapRegisters);
    v8 = DmaAdapter;
    if ( !DmaAdapter )
    {
      if ( (unsigned __int8)byte_1C0083724 >= 2u )
        WPP_SF_q(0xAu, &WPP_3938e34cfd3e87c199f25aea88577591_Traceguids, (__int64)MiniportAdapterContext);
      v11 = -1073741823;
      goto LABEL_41;
    }
    if ( !*(_BYTE *)&a1[4].m_Lock.0 )
    {
      DmaOperations = DmaAdapter->DmaOperations;
      v17 = DmaOperations->LeaveDmaDomain(DmaAdapter);
      v11 = v17;
      if ( v17 < 0 )
      {
        if ( (unsigned __int8)byte_1C0083724 < 2u )
          goto LABEL_39;
        v18 = 11;
        goto LABEL_25;
      }
      if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v12 == v12 )
      {
        v17 = DmaOperations->JoinDmaDomain(v8, (void *)-1LL);
        v11 = v17;
        if ( v17 < 0 )
        {
          if ( (unsigned __int8)byte_1C0083724 >= 2u )
          {
            v18 = 12;
LABEL_25:
            WPP_SF_qD(v18, &WPP_3938e34cfd3e87c199f25aea88577591_Traceguids, (__int64)MiniportAdapterContext, v17);
            goto LABEL_39;
          }
          goto LABEL_39;
        }
      }
      else
      {
        v19 = (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 8LL) + 264LL))();
        v17 = DmaOperations->JoinDmaDomain(v8, (void *)v19);
        v11 = v17;
        if ( v17 < 0 )
        {
          if ( (unsigned __int8)byte_1C0083724 >= 2u )
          {
            v18 = 13;
            goto LABEL_25;
          }
LABEL_39:
          if ( v8 )
            v8->DmaOperations->PutDmaAdapter(v8);
          goto LABEL_41;
        }
      }
      v7 = v24;
    }
    *((_QWORD *)v6 + 4) = v8;
  }
  Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)a1[3].m_Lock.Value;
  v21 = v6 + 2;
  v11 = 0;
  *((_QWORD *)v6 + 1) = v12;
  *((_QWORD *)v6 + 2) = Value;
  if ( *Value != v12 )
    __fastfail(3u);
  *Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)v21;
  a1[3].m_Lock.Value = (unsigned __int64)v21;
  *((_QWORD *)v6 + 3) = a1;
  *v7 = v6;
LABEL_43:
  KLockHolder::~KLockHolder(&v25);
  return v11;
}
