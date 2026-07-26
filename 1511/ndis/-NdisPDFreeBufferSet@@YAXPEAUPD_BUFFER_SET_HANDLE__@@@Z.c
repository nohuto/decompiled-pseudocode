/*
 * XREFs of ?NdisPDFreeBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00D86B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C00D7880 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDFreeBufferSet(_QWORD *P)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  _QWORD *v7; // rbp
  KLockHolder v8; // [rsp+20h] [rbp-28h] BYREF

  v2 = P;
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_q(0x53u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)P);
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v8, (struct KPushLockBase *)(qword_1C00837E0 + 8));
  v3 = P + 1;
  v4 = P[1];
  v5 = (_QWORD *)P[2];
  if ( *(_QWORD **)(v4 + 8) != P + 1 || (_QWORD *)*v5 != v3 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  *v3 = 0LL;
  KLockHolder::~KLockHolder(&v8);
  if ( P )
  {
    do
    {
      v6 = v2 + 9;
      v7 = v2;
      v2 = (_QWORD *)v2[9];
      if ( (unsigned __int8)byte_1C0083724 >= 4u )
        WPP_SF_qq(0x54u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, P, v7);
      *v6 = 0LL;
      NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(v7);
    }
    while ( v2 );
  }
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_q(0x55u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)P);
}
