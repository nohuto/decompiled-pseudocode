/*
 * XREFs of ?Init@CGitLifetimeExtension@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x180001850
 * Callers:
 *     ?s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z @ 0x180010350 (-s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComTaskPool::CGitLifetimeExtension::Init(
        Windows::Internal::ComTaskPool::CGitLifetimeExtension *this)
{
  g_pfnGetThreadRef = SHGetThreadRef;
}
