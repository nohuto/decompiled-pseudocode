/*
 * XREFs of ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x1800F716C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x1800A5F98 (-FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800B68C8 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x180069228 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ValidateContent@CDxAccumulationContext@@QEAAXXZ @ 0x1800A9D14 (-ValidateContent@CDxAccumulationContext@@QEAAXXZ.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AE584 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x180123DE0 (-RemoveElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdat.c)
 */

void __fastcall CWindowNode::FlushVistaBltTokens(CWindowNode *this)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  int v4; // eax
  struct CFlipChain **v5; // rax
  struct CFlipChain **v6; // rdi
  CDxAccumulationContext *v7; // rcx
  int Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  PVOID RestartKey; // [rsp+50h] [rbp+8h] BYREF

  RestartKey = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor((__int64)this, &EVTDESC_ETWGUID_FLUSHPENDINGDXUPDATES_Start);
  while ( 1 )
  {
    v5 = (struct CFlipChain **)RtlEnumerateGenericTableWithoutSplaying(
                                 (PRTL_GENERIC_TABLE)((char *)this + 920),
                                 &RestartKey);
    v6 = v5;
    if ( !v5 )
      break;
    v2 = 0;
    if ( *((_DWORD *)v5 + 10) )
    {
      do
      {
        v3 = 88LL * v2;
        CFlipChain::ProcessVistaBltToken(
          v6[1],
          *(_QWORD *)((char *)v6[2] + v3 + 8),
          *(_QWORD *)((char *)v6[2] + v3 + 24),
          (__int64)v6[2] + v3 + 32);
        CWindowNode::PendingDxUpdate::ReleaseResponses((struct CFlipChain *)((char *)v6[2] + v3));
        ++v2;
      }
      while ( v2 < *((_DWORD *)v6 + 10) );
    }
    *((_DWORD *)v6 + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize(v6 + 2, 0x58u);
    CMILCOMBase::InternalRelease((struct CFlipChain *)((char *)v6[1] + 16));
    v4 = *(_DWORD *)v6;
    v9 = 0LL;
    Buffer = v4;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 232LL), &Buffer);
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 920),
      v6);
    RestartKey = 0LL;
  }
  v7 = (CDxAccumulationContext *)*((_QWORD *)this + 150);
  if ( v7 )
    CDxAccumulationContext::ValidateContent(v7);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor((__int64)v7, &EVTDESC_ETWGUID_FLUSHPENDINGDXUPDATES_Stop);
}
