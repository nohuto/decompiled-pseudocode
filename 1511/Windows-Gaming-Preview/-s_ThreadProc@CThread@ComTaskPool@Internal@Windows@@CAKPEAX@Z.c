/*
 * XREFs of ?s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z @ 0x18000FEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CGitLifetimeExtension@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x1800017B0 (-Init@CGitLifetimeExtension@ComTaskPool@Internal@Windows@@QEAAXXZ.c)
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x18000FE5C (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
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
