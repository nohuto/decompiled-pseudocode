/*
 * XREFs of ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x180008DE8
 * Callers:
 *     ?s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z @ 0x180008F50 (-s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z.c)
 * Callees:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180009128 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CThread::s_ExecuteThreadProc(
        Windows::Internal::ComTaskPool::CThread *a1)
{
  __int64 v2; // rdi

  Windows::Internal::ComTaskPool::CThread::_ThreadProc(a1);
  v2 = *((_QWORD *)a1 + 9);
  *((_QWORD *)a1 + 9) = 0LL;
  (*(void (__fastcall **)(Windows::Internal::ComTaskPool::CThread *))(*(_QWORD *)a1 + 16LL))(a1);
  return v2;
}
