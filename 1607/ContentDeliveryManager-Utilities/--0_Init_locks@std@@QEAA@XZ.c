/*
 * XREFs of ??0_Init_locks@std@@QEAA@XZ @ 0x18005439C
 * Callers:
 *     std::_dynamic_initializer_for__initlocks__ @ 0x180001480 (std--_dynamic_initializer_for__initlocks__.c)
 *     std::_dynamic_initializer_for__initlocks___0 @ 0x1800014D0 (std--_dynamic_initializer_for__initlocks___0.c)
 * Callees:
 *     _Mtxinit @ 0x180056678 (_Mtxinit.c)
 */

std::_Init_locks *__fastcall std::_Init_locks::_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rdi

  if ( !_InterlockedIncrement(&dword_18008B430) )
  {
    v2 = &stru_18008B5B0;
    v3 = 4LL;
    do
    {
      Mtxinit(v2++);
      --v3;
    }
    while ( v3 );
  }
  return this;
}
