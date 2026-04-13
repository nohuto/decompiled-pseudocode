/*
 * XREFs of std::_dynamic_initializer_for__initlocks___0 @ 0x1800013E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0_Init_locks@std@@QEAA@XZ @ 0x1800234B4 (--0_Init_locks@std@@QEAA@XZ.c)
 */

int std::_dynamic_initializer_for__initlocks___0()
{
  std::_Init_locks::_Init_locks((std::_Init_locks *)&unk_18003D540);
  return atexit((void (__cdecl *)())std::_dynamic_atexit_destructor_for__initlocks___0);
}
