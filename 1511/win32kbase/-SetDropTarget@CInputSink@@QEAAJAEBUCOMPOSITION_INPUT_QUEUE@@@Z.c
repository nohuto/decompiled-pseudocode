/*
 * XREFs of ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C000344C
 * Callers:
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00032D4 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputSink::SetDropTarget(CInputSink *this, const struct COMPOSITION_INPUT_QUEUE *a2)
{
  struct IInputQueue **v2; // rbx
  __int64 v4; // rcx

  v2 = (struct IInputQueue **)((char *)this + 80);
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    (*(void (__fastcall **)(struct IInputQueue *))(*(_QWORD *)*v2 + 8LL))(*v2);
    *v2 = 0LL;
  }
  return CInputSink::CreateInputQueue(a2, v2);
}
