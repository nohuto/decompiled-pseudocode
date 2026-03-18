/*
 * XREFs of ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180104E84
 * Callers:
 *     ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x18006278C (-FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x180105A04 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x180106194 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x180106248 (-RemoveElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdat.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010982C (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?ValidateContent@CDxAccumulationContext@@QEAAXXZ @ 0x180121E3C (-ValidateContent@CDxAccumulationContext@@QEAAXXZ.c)
 */

void __fastcall CWindowNode::FlushVistaBltTokens(CWindowNode *this)
{
  unsigned int v2; // ebp
  int v3; // eax
  struct CFlipChain **v4; // rax
  struct CFlipChain **v5; // rdi
  CDxAccumulationContext *v6; // rcx
  int Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  PVOID RestartKey; // [rsp+50h] [rbp+8h] BYREF

  RestartKey = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor((__int64)this, &EVTDESC_ETWGUID_FLUSHPENDINGDXUPDATES_Start);
  while ( 1 )
  {
    v4 = (struct CFlipChain **)RtlEnumerateGenericTableWithoutSplaying(
                                 (PRTL_GENERIC_TABLE)((char *)this + 968),
                                 &RestartKey);
    v5 = v4;
    if ( !v4 )
      break;
    v2 = 0;
    if ( *((_DWORD *)v4 + 10) )
    {
      do
      {
        CFlipChain::ProcessVistaBltToken(v5[1]);
        CWindowNode::PendingDxUpdate::ReleaseResponses((struct CFlipChain *)((char *)v5[2] + 88 * v2++));
      }
      while ( v2 < *((_DWORD *)v5 + 10) );
    }
    *((_DWORD *)v5 + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5 + 2, 0x58u);
    CMILCOMBase::InternalRelease((struct CFlipChain *)((char *)v5[1] + 16));
    v3 = *(_DWORD *)v5;
    v8 = 0LL;
    Buffer = v3;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 232LL), &Buffer);
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 968),
      v5);
    RestartKey = 0LL;
  }
  v6 = (CDxAccumulationContext *)*((_QWORD *)this + 156);
  if ( v6 )
    CDxAccumulationContext::ValidateContent(v6);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor((__int64)v6, &EVTDESC_ETWGUID_FLUSHPENDINGDXUPDATES_Stop);
}
