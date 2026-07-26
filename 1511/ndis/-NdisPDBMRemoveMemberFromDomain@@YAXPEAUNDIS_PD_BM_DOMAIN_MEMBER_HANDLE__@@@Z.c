/*
 * XREFs of ?NdisPDBMRemoveMemberFromDomain@@YAXPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x1C00DC250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A52D4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??_GNDIS_PD_BM_GROUP@@QEAAPEAXI@Z @ 0x1C00DBC4C (--_GNDIS_PD_BM_GROUP@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDBMRemoveMemberFromDomain(struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *this)
{
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *v2; // rax
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *v3; // rdx
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v4; // rcx
  __int64 v5; // rcx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive(
    (KLockThisExclusive *)&v6,
    (struct KPushLockBase *)(*((_QWORD *)this + 3) + 8LL));
  v2 = this + 2;
  v3 = (struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *)*((_QWORD *)this + 1);
  v4 = (struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **)*((_QWORD *)this + 2);
  if ( *((struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **)v3 + 1) != this + 2 || *v4 != v2 )
    __fastfail(3u);
  *v4 = v3;
  *((_QWORD *)v3 + 1) = v4;
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    (*(void (**)(void))(*(_QWORD *)(v5 + 8) + 8LL))();
    *((_QWORD *)this + 4) = 0LL;
  }
  KLockHolder::ReleaseExclusive(&v6);
  NDIS_PD_BM_GROUP::`scalar deleting destructor'((NDIS_PD_BM_GROUP *)this);
  KLockHolder::~KLockHolder(&v6);
}
