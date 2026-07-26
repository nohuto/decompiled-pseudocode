/*
 * XREFs of ?NdisPDCloseQueue@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C00DE120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDCloseQueue(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  KLockThisExclusive v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_q(0x60u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)P);
  KLockThisExclusive::KLockThisExclusive(&v4, (struct KPushLockBase *)(qword_1C0089668 + 8));
  v2 = (_QWORD *)*P;
  v3 = (PVOID *)P[1];
  if ( *(_QWORD **)(*P + 8LL) != P || *v3 != P )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  *P = 0LL;
  KLockHolder::~KLockHolder(&v4);
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_q(0x61u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)P);
}
