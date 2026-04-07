/*
 * XREFs of ?OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z @ 0x1800890D8
 * Callers:
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x1800875D8 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTextTetherVisual::OnTetherAnchorChange(
        CTextTetherVisual *this,
        const struct tagPOINT *a2,
        int a3,
        int a4)
{
  __int64 v4; // rax
  enum DEVICE_SCALE_FACTOR v5; // edx
  int v6; // eax

  v4 = (__int64)*a2;
  v5 = SCALE_180_PERCENT;
  *((_QWORD *)this + 37) = v4;
  v6 = 100;
  *((_DWORD *)this + 77) = a4;
  if ( a3 < 180 )
    v5 = a3;
  if ( v5 > SCALE_100_PERCENT )
    v6 = v5;
  *((_DWORD *)this + 76) = v6;
  return CTextTetherVisual::UpdateInstructions(this);
}
