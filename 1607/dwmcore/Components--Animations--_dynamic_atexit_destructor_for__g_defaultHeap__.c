/*
 * XREFs of Components::Animations::_dynamic_atexit_destructor_for__g_defaultHeap__ @ 0x1800C2FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **Components::Animations::_dynamic_atexit_destructor_for__g_defaultHeap__()
{
  void **result; // rax

  result = &Components::Animations::Heap::`vftable';
  Components::Animations::g_defaultHeap = &Components::Animations::Heap::`vftable';
  return result;
}
