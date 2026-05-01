/*
 * XREFs of ??1HistoricalEnergyTracker@@QEAA@XZ @ 0x18004FD50
 * Callers:
 *     ??1AppEnergyInformation@@UEAA@XZ @ 0x18004FB40 (--1AppEnergyInformation@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall HistoricalEnergyTracker::~HistoricalEnergyTracker(HistoricalEnergyTracker *this)
{
  char *v2; // rbx
  __int64 *v3; // rcx
  __int64 *v4; // rdx
  __int64 v5; // rax

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v2 = (char *)this + 8;
  while ( 1 )
  {
    v3 = *(__int64 **)v2;
    if ( *(char **)v2 == v2 )
      break;
    v4 = (__int64 *)v3[1];
    v5 = *v3;
    *v4 = *v3;
    *(_QWORD *)(v5 + 8) = v4;
    operator delete(v3);
  }
  *((_QWORD *)v2 + 2) = 0LL;
}
