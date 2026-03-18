/*
 * XREFs of ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180108D64
 * Callers:
 *     ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x180037AC0 (-FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800BA8EC (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA7E4 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?FindElement@?$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@QEAAPEAVTokenToWindowRecord@CLegacySurfaceManager@@K@Z @ 0x1800B0CAC (-FindElement@-$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@QEAAPEAVTokenToWi.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1800B3708 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     ?ValidateContent@CDxAccumulationContext@@QEAAXXZ @ 0x1800B7A24 (-ValidateContent@CDxAccumulationContext@@QEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@QEAAHPEAVTokenToWindowRecord@CLegacySurfaceManager@@@Z @ 0x18011B924 (-RemoveElement@-$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@QEAAHPEAVTokenT.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x1801406D8 (-RemoveElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdat.c)
 */

void __fastcall CWindowNode::FlushVistaBltTokens(CWindowNode *this)
{
  unsigned int v2; // r14d
  __int64 v3; // rbx
  __int64 v4; // rbx
  PVOID Element; // rax
  struct CFlipChain **v6; // rax
  struct CFlipChain **v7; // rdi
  CDxAccumulationContext *v8; // rcx
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  RestartKey = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor((__int64)this, &EVTDESC_ETWGUID_FLUSHPENDINGDXUPDATES_Start);
  while ( 1 )
  {
    v6 = (struct CFlipChain **)RtlEnumerateGenericTableWithoutSplaying(
                                 (PRTL_GENERIC_TABLE)((char *)this + 728),
                                 &RestartKey);
    v7 = v6;
    if ( !v6 )
      break;
    v2 = 0;
    if ( *((_DWORD *)v6 + 10) )
    {
      do
      {
        v3 = 88LL * v2;
        CFlipChain::ProcessVistaBltToken(
          v7[1],
          *(_QWORD *)((char *)v7[2] + v3 + 8),
          *(_QWORD *)((char *)v7[2] + v3 + 24),
          (float *)((char *)v7[2] + v3 + 32));
        CWindowNode::PendingDxUpdate::ReleaseResponses((struct CFlipChain *)((char *)v7[2] + v3));
        ++v2;
      }
      while ( v2 < *((_DWORD *)v7 + 10) );
    }
    *((_DWORD *)v7 + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)(v7 + 2), 0x58u);
    CMILCOMBase::InternalRelease((struct CFlipChain *)((char *)v7[1] + 16));
    v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    Element = CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::FindElement(
                (struct _RTL_GENERIC_TABLE *)(v4 + 232),
                *(_DWORD *)v7);
    if ( Element )
      CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::RemoveElement(v4 + 232, Element);
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 728),
      v7);
    RestartKey = 0LL;
  }
  v8 = (CDxAccumulationContext *)*((_QWORD *)this + 126);
  if ( v8 )
    CDxAccumulationContext::ValidateContent(v8);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor((__int64)v8, &EVTDESC_ETWGUID_FLUSHPENDINGDXUPDATES_Stop);
}
