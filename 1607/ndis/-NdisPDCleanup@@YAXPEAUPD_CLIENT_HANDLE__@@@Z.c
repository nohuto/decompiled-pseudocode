/*
 * XREFs of ?NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z @ 0x1C00DE060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_CLIENT@@QEAAPEAXI@Z @ 0x1C00DD68C (--_GNDIS_PD_CLIENT@@QEAAPEAXI@Z.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C00E049C (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 */

void __fastcall NdisPDCleanup(struct PD_CLIENT_HANDLE__ *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _RTL_BITMAP *v5; // rcx
  KLockThisExclusive v6; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_q(0x15u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)this);
  KLockThisExclusive::KLockThisExclusive(&v6, (struct KPushLockBase *)(qword_1C0089668 + 8));
  v2 = (_QWORD *)((char *)this + 8);
  v3 = *((_QWORD *)this + 1);
  v4 = (_QWORD *)*((_QWORD *)this + 2);
  if ( *(struct PD_CLIENT_HANDLE__ **)(v3 + 8) != (struct PD_CLIENT_HANDLE__ *)((char *)this + 8) || (_QWORD *)*v4 != v2 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = (_RTL_BITMAP *)qword_1C0089668;
  *v2 = 0LL;
  RtlClearBit(v5 + 2, *((unsigned __int16 *)this + 56));
  KLockHolder::~KLockHolder(&v6);
  ndisPDDereferenceClientDriver(*((void **)this + 11));
  *((_QWORD *)this + 11) = 0LL;
  NDIS_PD_CLIENT::`scalar deleting destructor'(this);
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_q(0x16u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)this);
}
