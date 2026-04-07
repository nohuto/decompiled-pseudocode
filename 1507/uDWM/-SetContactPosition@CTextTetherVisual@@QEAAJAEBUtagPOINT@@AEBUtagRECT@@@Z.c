/*
 * XREFs of ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x180083920
 * Callers:
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180080170 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180080A2C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
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

  v3 = *((_BYTE *)this + 457) == 0;
  v4 = *a2;
  *((struct tagPOINT *)this + 39) = *a2;
  if ( v3 )
  {
    v5 = (__int128)*a3;
    *((struct tagPOINT *)this + 42) = v4;
    *((_OWORD *)this + 20) = v5;
  }
  return CTextTetherVisual::UpdateInstructions(this);
}
