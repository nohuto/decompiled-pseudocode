/*
 * XREFs of ?NdisPDRemoveProviderFromBMGroup@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00E01A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
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
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_q(0x4Bu, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, BugCheckParameter4);
  KLockThisExclusive::KLockThisExclusive(
    (KLockThisExclusive *)&v8,
    (struct KPushLockBase *)(*(_QWORD *)&qword_1C0085808 + 8LL));
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
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_q(0x4Cu, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, BugCheckParameter4);
  KLockHolder::~KLockHolder(&v8);
}
