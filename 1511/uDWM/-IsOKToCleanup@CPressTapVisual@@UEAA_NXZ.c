/*
 * XREFs of ?IsOKToCleanup@CPressTapVisual@@UEAA_NXZ @ 0x18006F6A0
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004BB7C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPressTapVisual::IsOKToCleanup(CPressTapVisual *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 48);
  result = 0LL;
  if ( !v1 || *(_BYTE *)(v1 + 72) )
    return 1LL;
  return result;
}
