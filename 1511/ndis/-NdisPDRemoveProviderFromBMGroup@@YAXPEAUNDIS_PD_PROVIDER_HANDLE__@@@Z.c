/*
 * XREFs of ?NdisPDRemoveProviderFromBMGroup@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00D9C00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

void __fastcall NdisPDRemoveProviderFromBMGroup(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR i; // rbx
  ULONG_PTR v3; // rcx
  __int64 v4; // r8
  ULONG_PTR v5; // r8
  __int64 v6; // r8
  _QWORD *v7; // rax
  KLockHolder v8; // [rsp+20h] [rbp-28h] BYREF

  for ( i = BugCheckParameter4; *(_BYTE *)(i + 96); i = *(_QWORD *)(i + 80) )
    ;
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_q(0x4Bu, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, BugCheckParameter4);
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v8, (struct KPushLockBase *)(qword_1C00837E0 + 8));
  v3 = i + 24;
  v4 = *(_QWORD *)(i + 24);
  if ( !v4 )
    ndisBugCheckEx(0x23uLL, 6uLL, 0LL, BugCheckParameter4);
  if ( v4 == *(_QWORD *)(i + 32) )
  {
    v5 = v4 - 32;
    if ( *(_QWORD *)(v5 + 48) != v5 + 48 )
      ndisBugCheckEx(0x23uLL, 6uLL, v5, *(_QWORD *)(*(_QWORD *)(v5 + 24) + 88LL));
  }
  v6 = *(_QWORD *)v3;
  v7 = *(_QWORD **)(i + 32);
  if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || *v7 != v3 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *(_QWORD *)v3 = 0LL;
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_q(0x4Cu, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, BugCheckParameter4);
  KLockHolder::~KLockHolder(&v8);
}
