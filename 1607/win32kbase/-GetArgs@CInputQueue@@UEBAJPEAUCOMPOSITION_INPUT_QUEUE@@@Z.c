/*
 * XREFs of ?GetArgs@CInputQueue@@UEBAJPEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00F2AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputQueue::GetArgs(CInputQueue *this, struct COMPOSITION_INPUT_QUEUE *a2)
{
  *(_DWORD *)a2 = (*(__int64 (__fastcall **)(CInputQueue *))(*(_QWORD *)this + 16LL))(this);
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 2);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 2);
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 6);
  *((_DWORD *)a2 + 10) = *((_DWORD *)this + 14);
  return 0LL;
}
