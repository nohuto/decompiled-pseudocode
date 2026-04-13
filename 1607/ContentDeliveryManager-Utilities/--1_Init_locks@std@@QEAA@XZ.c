/*
 * XREFs of ??1_Init_locks@std@@QEAA@XZ @ 0x180054434
 * Callers:
 *     std::_dynamic_atexit_destructor_for__initlocks__ @ 0x18005D3B0 (std--_dynamic_atexit_destructor_for__initlocks__.c)
 *     std::_dynamic_atexit_destructor_for__initlocks___0 @ 0x18005D4D0 (std--_dynamic_atexit_destructor_for__initlocks___0.c)
 * Callees:
 *     _Mtxdst @ 0x180056668 (_Mtxdst.c)
 */

void __fastcall std::_Init_locks::~_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v2; // rdi

  if ( _InterlockedDecrement(&dword_18008B430) < 0 )
  {
    v1 = &stru_18008B5B0;
    v2 = 4LL;
    do
    {
      Mtxdst(v1++);
      --v2;
    }
    while ( v2 );
  }
}
