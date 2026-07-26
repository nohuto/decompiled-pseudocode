/*
 * XREFs of ?NdisPDCloseQueue@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C00DE880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDCloseQueue(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_q(0x60u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)P);
  KLockThisExclusive::KLockThisExclusive(
    (KLockThisExclusive *)&v4,
    (struct KPushLockBase *)(*(_QWORD *)&qword_1C0085808 + 8LL));
  v2 = (_QWORD *)*P;
  v3 = (PVOID *)P[1];
  if ( *(_QWORD **)(*P + 8LL) != P || *v3 != P )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  *P = 0LL;
  KLockHolder::~KLockHolder(&v4);
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_q(0x61u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)P);
}
