/*
 * XREFs of ?NdisPDBMAllocateCommonBuffer@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@KKKPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00DBF40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_dq @ 0x1C0047594 (WPP_SF_dq.c)
 *     WPP_SF_dqd @ 0x1C006D68C (WPP_SF_dqd.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

__int64 __fastcall NdisPDBMAllocateCommonBuffer(
        struct KPushLockBase *a1,
        int a2,
        int a3,
        unsigned int a4,
        union _LARGE_INTEGER *a5,
        void **a6)
{
  size_t v8; // rsi
  int v10; // ebx
  struct NDIS_PD_BM_DOMAIN_HANDLE__ *v11; // rax
  void *ContiguousNodeMemory; // rax
  void *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  KLockHolder v19; // [rsp+50h] [rbp-38h] BYREF

  v8 = a4;
  a5->QuadPart = 0LL;
  *a6 = 0LL;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v19, a1 + 1);
  if ( a2 )
  {
    v10 = -1073741811;
  }
  else
  {
    v11 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)&a1[2];
    if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v11 == v11 )
    {
      v10 = -1073741436;
    }
    else if ( *((_BYTE *)&a1[4].m_Lock.0 + 1) )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v8, 0LL, -1LL, 0x200000LL, 4, a3);
      v13 = ContiguousNodeMemory;
      if ( ContiguousNodeMemory )
      {
        memset(ContiguousNodeMemory, 0, v8);
        *a6 = v13;
        ++HIDWORD(a1[4].m_Lock.Ptr);
        v10 = 0;
      }
      else
      {
        v10 = -1073741670;
        if ( (unsigned __int8)byte_1C0083724 >= 2u )
          WPP_SF_dq(0xEu, &WPP_3938e34cfd3e87c199f25aea88577591_Traceguids, v8, a1);
      }
    }
    else
    {
      v14 = *(_QWORD *)(*(_QWORD *)v11 + 24LL);
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 264LL))(v14);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _QWORD, int, union _LARGE_INTEGER *, void **))(*(_QWORD *)(v14 + 8) + 232LL))(
              v14,
              v15,
              0LL,
              (unsigned int)v8,
              1,
              0LL,
              a3,
              a5,
              a6);
      if ( v10 < 0 )
      {
        if ( (unsigned __int8)byte_1C0083724 >= 2u )
          WPP_SF_dqd(v17, v16, v8, (__int64)a1);
      }
      else
      {
        memset(*a6, 0, v8);
        ++HIDWORD(a1[4].m_Lock.Ptr);
      }
    }
  }
  KLockHolder::~KLockHolder(&v19);
  return (unsigned int)v10;
}
