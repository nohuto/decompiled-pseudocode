/*
 * XREFs of ?NdisPDBMFreeCommonBuffer@@YAXPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@KT_LARGE_INTEGER@@PEAX@Z @ 0x1C00DC1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

void __fastcall NdisPDBMFreeCommonBuffer(struct KPushLockBase *a1, unsigned int a2, union _LARGE_INTEGER a3, void *a4)
{
  char v7; // [rsp+20h] [rbp-38h]
  KLockHolder v8; // [rsp+30h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v8, a1 + 1);
  if ( *((_BYTE *)&a1[4].m_Lock.0 + 1) )
  {
    MmFreeContiguousMemory(a4);
  }
  else
  {
    v7 = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, union _LARGE_INTEGER, void *, char))(*(_QWORD *)(*(_QWORD *)(a1[2].m_Lock.Value + 24)
                                                                                           + 8LL)
                                                                               + 24LL))(
      *(_QWORD *)(a1[2].m_Lock.Value + 24),
      a2,
      a3,
      a4,
      v7);
  }
  --HIDWORD(a1[4].m_Lock.Ptr);
  KLockHolder::~KLockHolder(&v8);
}
