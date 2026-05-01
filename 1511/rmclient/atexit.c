/*
 * XREFs of atexit @ 0x180008F14
 * Callers:
 *     Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x180001020 (Windows--Internal--Details--_dynamic_initializer_for___git__.c)
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_levelDecreasedEvent__ @ 0x180001040 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_levelDecreasedEvent__.c)
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_levelIncreasedEvent__ @ 0x180001060 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_levelIncreasedEvent__.c)
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_limitChangeEvent__ @ 0x180001080 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_limitChangeEvent__.c)
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_pProxy__ @ 0x1800010A0 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_pProxy__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800010F0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     DllGetActivationFactory @ 0x180006D00 (DllGetActivationFactory.c)
 *     DllCanUnloadNow @ 0x180006E60 (DllCanUnloadNow.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180006F20 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 * Callees:
 *     _onexit_0 @ 0x180008E70 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
