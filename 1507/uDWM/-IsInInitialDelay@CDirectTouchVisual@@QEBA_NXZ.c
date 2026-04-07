/*
 * XREFs of ?IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ @ 0x180081EF4
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180080A2C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDirectTouchVisual::IsInInitialDelay(CDirectTouchVisual *this)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax

  v1 = *((_QWORD *)this + 47);
  result = 0LL;
  if ( v1 )
    return *(_BYTE *)(v1 + 72) == 0;
  return result;
}
