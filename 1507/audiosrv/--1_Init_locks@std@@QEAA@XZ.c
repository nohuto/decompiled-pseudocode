/*
 * XREFs of ??1_Init_locks@std@@QEAA@XZ @ 0x180042F84
 * Callers:
 *     std::_dynamic_atexit_destructor_for__initlocks__ @ 0x180049010 (std--_dynamic_atexit_destructor_for__initlocks__.c)
 * Callees:
 *     ??1CCriticalSection@ATL@@QEAA@XZ @ 0x180066D2C (--1CCriticalSection@ATL@@QEAA@XZ.c)
 */

void __fastcall std::_Init_locks::~_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v2; // rdi

  if ( _InterlockedDecrement(&dword_1800E700C) < 0 )
  {
    v1 = &stru_1800E7B10;
    v2 = 4LL;
    do
    {
      ATL::CCriticalSection::~CCriticalSection(v1++);
      --v2;
    }
    while ( v2 );
  }
}
