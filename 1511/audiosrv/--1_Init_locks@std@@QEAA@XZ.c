/*
 * XREFs of ??1_Init_locks@std@@QEAA@XZ @ 0x180046EC4
 * Callers:
 *     std::_dynamic_atexit_destructor_for__initlocks__ @ 0x18004D0D0 (std--_dynamic_atexit_destructor_for__initlocks__.c)
 * Callees:
 *     ??1CCriticalSection@ATL@@QEAA@XZ @ 0x18006556C (--1CCriticalSection@ATL@@QEAA@XZ.c)
 */

void __fastcall std::_Init_locks::~_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v2; // rdi

  if ( _InterlockedDecrement(&dword_1800E500C) < 0 )
  {
    v1 = &stru_1800E5B00;
    v2 = 4LL;
    do
    {
      ATL::CCriticalSection::~CCriticalSection(v1++);
      --v2;
    }
    while ( v2 );
  }
}
