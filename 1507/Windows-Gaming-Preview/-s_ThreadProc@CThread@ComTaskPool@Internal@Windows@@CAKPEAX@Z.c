/*
 * XREFs of ?s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z @ 0x180010350
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CGitLifetimeExtension@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x180001850 (-Init@CGitLifetimeExtension@ComTaskPool@Internal@Windows@@QEAAXXZ.c)
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x1800102EC (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
 */

void __fastcall __noreturn Windows::Internal::ComTaskPool::CThread::s_ThreadProc(
        Windows::Internal::ComTaskPool::CThread *Parameter)
{
  Windows::Internal::ComTaskPool::CGitLifetimeExtension *v1; // rax
  HMODULE v2; // rcx

  v1 = (Windows::Internal::ComTaskPool::CGitLifetimeExtension *)Windows::Internal::ComTaskPool::CThread::s_ExecuteThreadProc(Parameter);
  Windows::Internal::ComTaskPool::CGitLifetimeExtension::Init(v1);
  FreeLibraryAndExitThread(v2, 0);
}
