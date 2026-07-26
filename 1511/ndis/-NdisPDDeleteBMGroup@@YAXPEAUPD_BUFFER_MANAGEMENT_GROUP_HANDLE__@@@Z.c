/*
 * XREFs of ?NdisPDDeleteBMGroup@@YAXPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z @ 0x1C00D85A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??_GNDIS_PD_BM_GROUP@@QEAAPEAXI@Z @ 0x1C00DBC4C (--_GNDIS_PD_BM_GROUP@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDDeleteBMGroup(struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *this)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rcx
  unsigned int v5; // edx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_q(0x4Du, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)this);
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v6, (struct KPushLockBase *)(qword_1C00837E0 + 8));
  if ( *((struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **)this + 4) != (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)this + 32) )
    ndisBugCheckEx(0x23uLL, 6uLL, (ULONG_PTR)this, *(_QWORD *)(*((_QWORD *)this + 3) + 88LL));
  v2 = (_QWORD *)((char *)this + 8);
  v3 = *((_QWORD *)this + 1);
  v4 = (_QWORD *)*((_QWORD *)this + 2);
  if ( *(struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **)(v3 + 8) != (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)this + 8)
    || (_QWORD *)*v4 != v2 )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *v2 = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  KLockHolder::~KLockHolder(&v6);
  NDIS_PD_BM_GROUP::`scalar deleting destructor'(this, v5);
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_q(0x4Eu, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)this);
}
