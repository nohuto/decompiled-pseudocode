/*
 * XREFs of ?NdisPDFreeBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00DEC80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C00DDF58 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
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
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_q(0x53u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)P);
  KLockThisExclusive::KLockThisExclusive(
    (KLockThisExclusive *)&v8,
    (struct KPushLockBase *)(*(_QWORD *)&qword_1C0085808 + 8LL));
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
      if ( (unsigned __int8)byte_1C0085324 >= 4u )
        WPP_SF_qq(0x54u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, P, v7);
      *v6 = 0LL;
      NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(v7);
    }
    while ( v2 );
  }
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_q(0x55u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)P);
}
