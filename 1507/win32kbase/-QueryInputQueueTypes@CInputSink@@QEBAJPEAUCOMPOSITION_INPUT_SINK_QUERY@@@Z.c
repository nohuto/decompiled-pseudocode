/*
 * XREFs of ?QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY@@@Z @ 0x1C0022188
 * Callers:
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY@@@Z @ 0x1C0020788 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputSink::QueryInputQueueTypes(CInputSink *this, struct COMPOSITION_INPUT_SINK_QUERY *a2)
{
  *(_DWORD *)a2 = 20;
  *((_DWORD *)a2 + 1) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 16LL))(*((_QWORD *)this + 6));
  *((_DWORD *)a2 + 2) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 16LL))(*((_QWORD *)this + 7));
  *((_DWORD *)a2 + 3) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 16LL))(*((_QWORD *)this + 8));
  *((_DWORD *)a2 + 4) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 16LL))(*((_QWORD *)this + 9));
  return 0LL;
}
