/*
 * XREFs of ?ndisPDUpdateQDepthCounter@@YAXPEAUNDIS_PD_EC@@@Z @ 0x1C0070CD8
 * Callers:
 *     ?NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z @ 0x1C0070480 (-NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisPDUpdateQDepthCounter(LARGE_INTEGER *a1)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER *i; // rbx
  unsigned __int64 QuadPart; // rcx
  __int64 HighPart; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  KLockThisExclusive v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  if ( !PerformanceFrequency.QuadPart )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    qword_1C008AFA8 = PerformanceFrequency.QuadPart / 100;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( PerformanceCounter.QuadPart - a1[19].QuadPart >= (unsigned __int64)qword_1C008AFA8 )
  {
    KLockThisExclusive::KLockThisExclusive(&v8, (struct KPushLockBase *)(qword_1C0089668 + 8));
    a1[19] = PerformanceCounter;
    for ( i = (LARGE_INTEGER *)a1[16].QuadPart; i != &a1[16]; i = (LARGE_INTEGER *)i->QuadPart )
    {
      if ( i[6].LowPart )
      {
        (*(void (__fastcall **)(LARGE_INTEGER, __int64 *))(*(_QWORD *)(i[-25].QuadPart + 16) + 16LL))(i[-25], &v9);
        QuadPart = a1[20].QuadPart;
        HighPart = (unsigned int)i[6].HighPart;
        if ( QuadPart >= 0x64 )
          v6 = (v9 + 99 * HighPart) / 0x64uLL;
        else
          v6 = (v9 + HighPart * QuadPart) / (QuadPart + 1);
        v7 = (unsigned int)i[-12].HighPart;
        i[6].HighPart = v6;
        i[7].LowPart = 100 * v6 / v7;
      }
    }
    ++a1[20].QuadPart;
    KLockHolder::~KLockHolder(&v8);
  }
}
