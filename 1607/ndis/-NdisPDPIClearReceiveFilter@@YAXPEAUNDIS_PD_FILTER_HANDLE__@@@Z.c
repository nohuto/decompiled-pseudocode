/*
 * XREFs of ?NdisPDPIClearReceiveFilter@@YAXPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C00DEF90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_FILTER@@QEAAPEAXI@Z @ 0x1C00DD70C (--_GNDIS_PD_FILTER@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDPIClearReceiveFilter(_QWORD *P)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  KLockThisExclusive v14; // [rsp+20h] [rbp-28h] BYREF

  v1 = P[3];
  v3 = P[6];
  v4 = P[5];
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_q(0x32u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)P);
  KLockThisExclusive::KLockThisExclusive(&v14, (struct KPushLockBase *)(qword_1C0089668 + 8));
  v5 = P + 1;
  v6 = P[1];
  v7 = (_QWORD *)P[2];
  if ( *(_QWORD **)(v6 + 8) != P + 1 || (_QWORD *)*v7 != v5 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *v5 = 0LL;
  v8 = P + 10;
  v9 = P[10];
  v10 = (_QWORD *)P[11];
  if ( *(_QWORD **)(v9 + 8) != P + 10 || (_QWORD *)*v10 != v8 )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
  P[9] = 0LL;
  if ( v3 )
  {
    v11 = P + 7;
    v12 = P[7];
    v13 = (_QWORD *)P[8];
    if ( *(_QWORD **)(v12 + 8) != P + 7 || (_QWORD *)*v13 != v11 )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    *v11 = 0LL;
    P[6] = 0LL;
    --*(_DWORD *)(v3 + 96);
  }
  KLockHolder::~KLockHolder(&v14);
  P[5] = 0LL;
  P[3] = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v1 + 88) + 72LL))(v4);
  NDIS_PD_FILTER::`scalar deleting destructor'(P);
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_q(0x33u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)P);
}
