/*
 * XREFs of ?NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z @ 0x1C00D81A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??_GNDIS_PD_CLIENT@@QEAAPEAXI@Z @ 0x1C00D77CC (--_GNDIS_PD_CLIENT@@QEAAPEAXI@Z.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C00DA5E4 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 */

void __fastcall NdisPDCleanup(struct PD_CLIENT_HANDLE__ *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _RTL_BITMAP *v5; // rcx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_q(0x15u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)this);
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v6, (struct KPushLockBase *)(qword_1C00837E0 + 8));
  v2 = (_QWORD *)((char *)this + 8);
  v3 = *((_QWORD *)this + 1);
  v4 = (_QWORD *)*((_QWORD *)this + 2);
  if ( *(struct PD_CLIENT_HANDLE__ **)(v3 + 8) != (struct PD_CLIENT_HANDLE__ *)((char *)this + 8) || (_QWORD *)*v4 != v2 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = (_RTL_BITMAP *)qword_1C00837E0;
  *v2 = 0LL;
  RtlClearBit(v5 + 2, *((unsigned __int16 *)this + 56));
  KLockHolder::~KLockHolder(&v6);
  ndisPDDereferenceClientDriver(*((void **)this + 11));
  *((_QWORD *)this + 11) = 0LL;
  NDIS_PD_CLIENT::`scalar deleting destructor'(this);
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_q(0x16u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)this);
}
