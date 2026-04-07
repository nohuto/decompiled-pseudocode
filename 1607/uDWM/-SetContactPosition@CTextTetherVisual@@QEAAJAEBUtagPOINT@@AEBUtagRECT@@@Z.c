/*
 * XREFs of ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x18006FD10
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004DBCC (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180087808 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTextTetherVisual::SetContactPosition(
        CTextTetherVisual *this,
        const struct tagPOINT *a2,
        const struct tagRECT *a3)
{
  bool v3; // zf
  struct tagPOINT v4; // rax
  __int128 v5; // xmm0

  v3 = *((_BYTE *)this + 409) == 0;
  v4 = *a2;
  *(struct tagPOINT *)((char *)this + 308) = *a2;
  if ( v3 )
  {
    v5 = (__int128)*a3;
    *(struct tagPOINT *)((char *)this + 332) = v4;
    *(_OWORD *)((char *)this + 316) = v5;
  }
  return CTextTetherVisual::UpdateInstructions(this);
}
