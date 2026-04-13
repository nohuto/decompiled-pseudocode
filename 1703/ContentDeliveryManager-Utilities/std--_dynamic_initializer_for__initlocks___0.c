/*
 * XREFs of std::_dynamic_initializer_for__initlocks___0 @ 0x180001570
 * Callers:
 *     <none>
 * Callees:
 *     ??0_Init_locks@std@@QEAA@XZ @ 0x18006AF68 (--0_Init_locks@std@@QEAA@XZ.c)
 */

int std::_dynamic_initializer_for__initlocks___0()
{
  std::_Init_locks::_Init_locks((std::_Init_locks *)&unk_1800F3C70);
  return atexit((void (__cdecl *)())std::_dynamic_atexit_destructor_for__initlocks___0);
}
