/*
 * XREFs of ?HitTest@OneCoreUAPInputHost@@UEAAJPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800047B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OneCoreUAPInputHost::HitTest(OneCoreUAPInputHost *this, struct tagDITCALLBACKSTRUCT *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct tagDITCALLBACKSTRUCT *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           a2);
}
