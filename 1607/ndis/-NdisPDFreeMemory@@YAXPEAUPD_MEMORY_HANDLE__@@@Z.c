/*
 * XREFs of ?NdisPDFreeMemory@@YAXPEAUPD_MEMORY_HANDLE__@@@Z @ 0x1C00DE670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C00DD740 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDFreeMemory(_QWORD *P)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  KLockThisExclusive v5; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_q(0x58u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)P);
  KLockThisExclusive::KLockThisExclusive(&v5, (struct KPushLockBase *)(qword_1C0089668 + 8));
  v2 = P + 1;
  v3 = P[1];
  v4 = (_QWORD *)P[2];
  if ( *(_QWORD **)(v3 + 8) != P + 1 || (_QWORD *)*v4 != v2 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *v2 = 0LL;
  KLockHolder::~KLockHolder(&v5);
  if ( P )
    NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(P);
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_q(0x59u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)P);
}
