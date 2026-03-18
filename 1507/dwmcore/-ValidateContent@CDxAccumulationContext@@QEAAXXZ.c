/*
 * XREFs of ?ValidateContent@CDxAccumulationContext@@QEAAXXZ @ 0x180121E3C
 * Callers:
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180104E84 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x180105820 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x180105F14 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

void __fastcall CDxAccumulationContext::ValidateContent(CDxAccumulationContext *this)
{
  __int64 v1; // rax

  if ( !*((_BYTE *)this + 16) )
  {
    v1 = *(_QWORD *)this;
    *((_BYTE *)this + 16) = 1;
    *(_BYTE *)(v1 + 1272) = 1;
    CVisual::PropagateFlags(*(struct CVisual **)this, 1, 1, 0, 0, 0, 0);
  }
}
