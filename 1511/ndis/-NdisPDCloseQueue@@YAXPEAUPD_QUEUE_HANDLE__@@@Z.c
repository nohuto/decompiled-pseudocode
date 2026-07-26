/*
 * XREFs of ?NdisPDCloseQueue@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C00D8260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

void __fastcall NdisPDCloseQueue(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_q(0x60u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)P);
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v4, (struct KPushLockBase *)(qword_1C00837E0 + 8));
  v2 = (_QWORD *)*P;
  v3 = (PVOID *)P[1];
  if ( *(_QWORD **)(*P + 8LL) != P || *v3 != P )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  *P = 0LL;
  KLockHolder::~KLockHolder(&v4);
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_q(0x61u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)P);
}
