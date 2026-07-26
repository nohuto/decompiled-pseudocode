/*
 * XREFs of ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C00DA4F8
 * Callers:
 *     ndisMCommonHaltMiniport @ 0x1C00E0560 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A52D4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x1C00D7914 (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 */

void __fastcall ndisPDCleanupPDBlock(struct _NDIS_PD_BLOCK *a1)
{
  _NDIS_PD_CONFIG *PDCurrentConfig; // rcx
  void (__fastcall **PDBMDomain)(NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *); // rdi
  _LIST_ENTRY *p_PDBlockListLink; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  int v7; // [rsp+20h] [rbp-38h]
  KLockHolder v8; // [rsp+30h] [rbp-28h] BYREF

  PDCurrentConfig = a1->PDCurrentConfig;
  if ( PDCurrentConfig )
  {
    ExFreePoolWithTag(PDCurrentConfig, 0);
    a1->PDCurrentConfig = 0LL;
    a1->PDCurrentConfigSize = 0;
    a1->PDCurrentConfigBufferSize = 0;
  }
  PDBMDomain = (void (__fastcall **)(NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *))a1->PDBMDomain;
  if ( PDBMDomain )
  {
    KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v8, (struct KPushLockBase *)(qword_1C00837E0 + 8));
    p_PDBlockListLink = &a1->PDBlockListLink;
    Flink = a1->PDBlockListLink.Flink;
    Blink = a1->PDBlockListLink.Blink;
    if ( Flink->Blink != &a1->PDBlockListLink || Blink->Flink != p_PDBlockListLink )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    p_PDBlockListLink->Flink = 0LL;
    KLockHolder::ReleaseExclusive(&v8);
    a1->PDBMDomain = 0LL;
    PDBMDomain[9](a1->PDBMDomainMemberHandle);
    a1->PDBMDomainMemberHandle = 0LL;
    if ( (unsigned __int8)byte_1C0083724 >= 4u )
    {
      v7 = *((_DWORD *)PDBMDomain + 6);
      WPP_SF_qqd(0xAu, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, a1->Miniport, PDBMDomain, v7);
    }
    NDIS_PD_BM_DOMAIN::Deref((char *)PDBMDomain);
    KLockHolder::~KLockHolder(&v8);
  }
  a1->PDDmaAddressWidth = 0;
  *(_WORD *)&a1->PDBuffersManagedByDriver = 0;
}
