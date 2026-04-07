/*
 * XREFs of ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x1800134F0
 * Callers:
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x180013510 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004BB7C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     <none>
 */

bool __fastcall CContactManager::CheckShowContact(__int64 a1, int a2, int a3)
{
  if ( *(_BYTE *)(a1 + 324) )
    return a3 == (a3 & CContactManager::DWMSC_PRESENTATIONMODE);
  else
    return a3 == (a3 & a2);
}
