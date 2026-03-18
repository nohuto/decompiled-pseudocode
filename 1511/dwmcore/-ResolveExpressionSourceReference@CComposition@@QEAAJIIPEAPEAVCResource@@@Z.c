/*
 * XREFs of ?ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z @ 0x1801015C0
 * Callers:
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x18011E31C (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferen.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180128008 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800944B0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180094FB8 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CComposition::ResolveExpressionSourceReference(
        CComposition *this,
        unsigned int a2,
        unsigned int a3,
        struct CResource **a4)
{
  int AttachedChannel; // eax
  CMILRefCountBase *v7; // rsi
  unsigned int v8; // ebx
  struct CResource *ResourceWithoutType; // rax
  CMILRefCountBase *v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  AttachedChannel = CComposition::GetAttachedChannel(this, a2, &v11);
  v7 = v11;
  v8 = AttachedChannel;
  if ( AttachedChannel >= 0 )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(*((CResourceTable **)v11 + 3), a3);
    if ( ResourceWithoutType )
    {
      *a4 = ResourceWithoutType;
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)ResourceWithoutType + 8LL))(ResourceWithoutType);
      v8 = 0;
    }
    else
    {
      v8 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xDD3u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, 0xDCCu);
  }
  if ( v7 )
    CMILRefCountBase::Release(v7);
  return v8;
}
