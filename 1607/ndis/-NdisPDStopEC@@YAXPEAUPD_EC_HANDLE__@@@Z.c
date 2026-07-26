/*
 * XREFs of ?NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z @ 0x1C00DFD50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDStopEC(_UNICODE_STRING *P)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v3; // r9
  wchar_t **p_Buffer; // rax
  wchar_t *Buffer; // rdx
  wchar_t **v6; // rcx
  void *v7; // rcx
  KLockThisExclusive v8; // [rsp+30h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_qqq(0x5Cu, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, P, *(_QWORD *)&P[2].Length, CurrentThread);
  v3 = *(_QWORD *)&P[2].Length;
  if ( (struct _KTHREAD *)v3 != CurrentThread )
    ndisBugCheckEx(0x23uLL, 1uLL, (ULONG_PTR)P[1].Buffer, v3);
  KLockThisExclusive::KLockThisExclusive(&v8, (struct KPushLockBase *)(qword_1C0089668 + 8));
  p_Buffer = &P->Buffer;
  Buffer = P->Buffer;
  v6 = *(wchar_t ***)&P[1].Length;
  if ( *((_UNICODE_STRING **)Buffer + 1) != (_UNICODE_STRING *)&P->Buffer || *v6 != (wchar_t *)p_Buffer )
    __fastfail(3u);
  *v6 = Buffer;
  *((_QWORD *)Buffer + 1) = v6;
  *p_Buffer = 0LL;
  KLockHolder::~KLockHolder(&v8);
  v7 = *(void **)&P[2].Length;
  P[1].Buffer = 0LL;
  ObfDereferenceObject(v7);
  *(_QWORD *)&P[2].Length = 0LL;
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_q(0x5Du, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)P);
  NDIS_PD_EC::`scalar deleting destructor'(P);
}
