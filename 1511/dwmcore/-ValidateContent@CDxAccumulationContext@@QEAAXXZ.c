/*
 * XREFs of ?ValidateContent@CDxAccumulationContext@@QEAAXXZ @ 0x1800A9D14
 * Callers:
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800B6648 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x1800F6F88 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x1800F716C (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

void __fastcall CDxAccumulationContext::ValidateContent(CDxAccumulationContext *this)
{
  __int64 v1; // rax

  if ( !*((_BYTE *)this + 16) )
  {
    v1 = *(_QWORD *)this;
    *((_BYTE *)this + 16) = 1;
    *(_BYTE *)(v1 + 1224) = 1;
    CVisual::PropagateFlags(*(struct CVisual **)this, 1, 1, 0, 0, 0, 0);
  }
}
