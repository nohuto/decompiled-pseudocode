/*
 * XREFs of ?s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x180008E50
 * Callers:
 *     <none>
 * Callees:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180009128 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CThread::s_ThreadPoolCallback(
        PTP_CALLBACK_INSTANCE Instance,
        Windows::Internal::ComTaskPool::CThread *Context)
{
  HMODULE v4; // rdi

  CallbackMayRunLong(Instance);
  Windows::Internal::ComTaskPool::CThread::_ThreadProc(Context);
  v4 = (HMODULE)*((_QWORD *)Context + 9);
  *((_QWORD *)Context + 9) = 0LL;
  (*(void (__fastcall **)(Windows::Internal::ComTaskPool::CThread *))(*(_QWORD *)Context + 16LL))(Context);
  FreeLibraryWhenCallbackReturns(Instance, v4);
}
