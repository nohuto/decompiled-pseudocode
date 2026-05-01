/*
 * XREFs of ?Init@CGitLifetimeExtension@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x1800017B0
 * Callers:
 *     ?s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z @ 0x18000FEC0 (-s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComTaskPool::CGitLifetimeExtension::Init(
        Windows::Internal::ComTaskPool::CGitLifetimeExtension *this)
{
  g_pfnGetThreadRef = SHGetThreadRef;
}
