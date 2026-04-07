/*
 * XREFs of ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003A92C
 * Callers:
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18000905C (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18003AA9C (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x18003ABFC (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004DBCC (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180085E4C (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x180085E98 (-CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x180085F54 (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x180086784 (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x180086864 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x180087498 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180087808 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ?_RemoveRemotePressHold@CContactManager@@AEAAXI@Z @ 0x180087D60 (-_RemoveRemotePressHold@CContactManager@@AEAAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003A950 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 */

void __fastcall CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(CContactManager *this, struct CTouchVisual *a2)
{
  CContactManager::StopAndRemoveFromRootNode(this, a2);
  if ( a2 )
    CBaseObject::Release(a2);
}
