/*
 * XREFs of ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C00DA6AC
 * Callers:
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C00DA378 (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     WPP_SF_qqLd @ 0x1C006CF58 (WPP_SF_qqLd_ea_1C006CF58.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A52D4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x1C00D7914 (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 *     ?ndisPDFindAndReferenceBMDomainUnderLock@@YAPEAUNDIS_PD_BM_DOMAIN@@K@Z @ 0x1C00DA680 (-ndisPDFindAndReferenceBMDomainUnderLock@@YAPEAUNDIS_PD_BM_DOMAIN@@K@Z.c)
 *     ?ndisPdAreBMsCompatible@@YAEPEBU_NDIS_PD_BLOCK@@PEBUNDIS_PD_BM_DOMAIN@@@Z @ 0x1C00DAD80 (-ndisPdAreBMsCompatible@@YAEPEBU_NDIS_PD_BLOCK@@PEBUNDIS_PD_BM_DOMAIN@@@Z.c)
 */

__int64 __fastcall ndisPDInitializeMiniportBufferManagement(struct _NDIS_PD_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  struct NDIS_PD_BM_DOMAIN *v3; // rax
  struct NDIS_PD_BM_DOMAIN *v4; // rbx
  unsigned int v5; // edi
  bool v6; // zf
  char *PoolWithTag; // rax
  _QWORD *v8; // rax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  void (*PDBMFreeCommonBuffer)(struct NDIS_PD_BM_DOMAIN_HANDLE__ *, unsigned int, union _LARGE_INTEGER, void *); // rax
  int v11; // eax
  unsigned int PDDomainId; // ecx
  struct NDIS_PD_BM_DOMAIN *v13; // rdi
  char *v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _LIST_ENTRY *v20; // rdx
  _LIST_ENTRY *p_PDBlockListLink; // rax
  __int128 v23; // [rsp+30h] [rbp-30h] BYREF
  KLockHolder v24; // [rsp+40h] [rbp-20h] BYREF
  int v25; // [rsp+80h] [rbp+20h] BYREF
  BOOL v26; // [rsp+84h] [rbp+24h]

  *(_QWORD *)((char *)&v23 + 1) = 0LL;
  *(_DWORD *)((char *)&v23 + 9) = 0;
  *(_WORD *)((char *)&v23 + 13) = 0;
  HIBYTE(v23) = 0;
  Miniport = a1->Miniport;
  LODWORD(v23) = 1048960;
  if ( a1->PDBuffersManagedByDriver )
    *((_QWORD *)&v23 + 1) = Miniport->MiniportAdapterContext;
  else
    *((_QWORD *)&v23 + 1) = Miniport;
  if ( a1->PDDomainId )
  {
    KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v24, (struct KPushLockBase *)(qword_1C00837E0 + 8));
    v3 = ndisPDFindAndReferenceBMDomainUnderLock(a1->PDDomainId);
    v4 = v3;
    if ( v3 && !ndisPdAreBMsCompatible(a1, v3) )
      goto LABEL_7;
    KLockHolder::~KLockHolder(&v24);
    if ( v4 )
    {
LABEL_30:
      v17 = (*((__int64 (__fastcall **)(_QWORD, __int128 *, NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **))v4 + 8))(
              *((_QWORD *)v4 + 4),
              &v23,
              &a1->PDBMDomainMemberHandle);
      if ( v17 >= 0 )
      {
        KLockThisExclusive::KLockThisExclusive(
          (KLockThisExclusive *)&v24,
          (struct KPushLockBase *)(qword_1C00837E0 + 8));
        a1->PDBMDomain = v4;
        v20 = (_LIST_ENTRY *)*((_QWORD *)v4 + 6);
        p_PDBlockListLink = &a1->PDBlockListLink;
        a1->PDBlockListLink.Flink = (_LIST_ENTRY *)((char *)v4 + 40);
        a1->PDBlockListLink.Blink = v20;
        if ( v20->Flink != (_LIST_ENTRY *)((char *)v4 + 40) )
          __fastfail(3u);
        v20->Flink = p_PDBlockListLink;
        *((_QWORD *)v4 + 6) = p_PDBlockListLink;
        if ( (unsigned __int8)byte_1C0083724 >= 4u )
          WPP_SF_qqd(0xFu, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, a1->Miniport, v4, *((_DWORD *)v4 + 6));
        KLockHolder::~KLockHolder(&v24);
        v5 = 0;
        v4 = 0LL;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0083724 >= 2u )
          WPP_SF_qqLd(v19, v18, a1->Miniport, v4, *((_DWORD *)v4 + 6), v17, v23);
        v5 = -1073740007;
      }
      goto LABEL_39;
    }
  }
  v6 = a1->PDDomainId == 0;
  v25 = 524672;
  v26 = v6;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x68uLL, 0x6D41444Eu);
  v4 = (struct NDIS_PD_BM_DOMAIN *)PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 1) = 1;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_QWORD *)PoolWithTag + 7) = 0LL;
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_QWORD *)PoolWithTag + 9) = 0LL;
    *((_QWORD *)PoolWithTag + 10) = 0LL;
    *((_QWORD *)PoolWithTag + 11) = 0LL;
    *((_QWORD *)PoolWithTag + 12) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    v8 = PoolWithTag + 40;
    v8[1] = v8;
    *v8 = v8;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    return (unsigned int)-1073741670;
  if ( a1->PDBuffersManagedByDriver )
  {
    DriverHandle = a1->Miniport->DriverHandle;
    *((_QWORD *)v4 + 7) = DriverHandle->PDBMCreateDomain;
    *((_QWORD *)v4 + 8) = DriverHandle->PDBMAddMemberToDomain;
    *((_QWORD *)v4 + 9) = DriverHandle->PDBMRemoveMemberFromDomain;
    *((_QWORD *)v4 + 10) = DriverHandle->PDBMDeleteDomain;
    *((_QWORD *)v4 + 11) = DriverHandle->PDBMAllocateCommonBuffer;
    PDBMFreeCommonBuffer = (void (*)(struct NDIS_PD_BM_DOMAIN_HANDLE__ *, unsigned int, union _LARGE_INTEGER, void *))DriverHandle->PDBMFreeCommonBuffer;
  }
  else
  {
    *((_QWORD *)v4 + 7) = NdisPDBMCreateDomain;
    *((_QWORD *)v4 + 8) = NdisPDBMAddMemberToDomain;
    *((_QWORD *)v4 + 9) = NdisPDBMRemoveMemberFromDomain;
    *((_QWORD *)v4 + 10) = NdisPDBMDeleteDomain;
    *((_QWORD *)v4 + 11) = NdisPDBMAllocateCommonBuffer;
    PDBMFreeCommonBuffer = NdisPDBMFreeCommonBuffer;
  }
  *((_QWORD *)v4 + 12) = PDBMFreeCommonBuffer;
  v11 = (*((__int64 (__fastcall **)(int *, __int64))v4 + 7))(&v25, (__int64)v4 + 32);
  v5 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned __int8)byte_1C0083724 >= 2u )
      WPP_SF_qD(0xDu, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)a1->Miniport, v11);
    goto LABEL_39;
  }
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v24, (struct KPushLockBase *)(qword_1C00837E0 + 8));
  PDDomainId = a1->PDDomainId;
  if ( !PDDomainId )
  {
    v14 = (char *)v4 + 8;
    v15 = qword_1C00837E0 + 8248;
    v16 = *(_QWORD **)(qword_1C00837E0 + 8256);
    *((_QWORD *)v4 + 1) = qword_1C00837E0 + 8248;
    *((_QWORD *)v4 + 2) = v16;
    if ( *v16 != v15 )
      __fastfail(3u);
    goto LABEL_28;
  }
  v13 = ndisPDFindAndReferenceBMDomainUnderLock(PDDomainId);
  if ( !v13 )
  {
    v14 = (char *)v4 + 8;
    *((_DWORD *)v4 + 6) = a1->PDDomainId;
    v15 = qword_1C00837E0 + 8248;
    v16 = *(_QWORD **)(qword_1C00837E0 + 8256);
    *((_QWORD *)v4 + 1) = qword_1C00837E0 + 8248;
    *((_QWORD *)v4 + 2) = v16;
    if ( *v16 != v15 )
      __fastfail(3u);
LABEL_28:
    *v16 = v14;
    *(_QWORD *)(v15 + 8) = v14;
    goto LABEL_29;
  }
  KLockHolder::ReleaseExclusive(&v24);
  NDIS_PD_BM_DOMAIN::Deref((char *)v4);
  v4 = v13;
  if ( ndisPdAreBMsCompatible(a1, v13) )
  {
LABEL_29:
    KLockHolder::~KLockHolder(&v24);
    goto LABEL_30;
  }
LABEL_7:
  v5 = -1073740007;
  KLockHolder::~KLockHolder(&v24);
LABEL_39:
  if ( v4 )
    NDIS_PD_BM_DOMAIN::Deref((char *)v4);
  return v5;
}
