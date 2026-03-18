/*
 * XREFs of ?ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAUIExpressionSource@@@Z @ 0x1800E3B2C
 * Callers:
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@@Z @ 0x180101D7C (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferen.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010D618 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180068618 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18006CEEC (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CComposition::ResolveExpressionSourceReference(
        CComposition *this,
        unsigned int a2,
        unsigned int a3,
        struct IExpressionSource **a4)
{
  int AttachedChannel; // eax
  CMILRefCountBase *v7; // rdi
  unsigned int v8; // ebx
  struct CResource *ResourceWithoutType; // rax
  unsigned int v11; // [rsp+20h] [rbp-28h]
  CMILRefCountBase *v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0LL;
  AttachedChannel = CComposition::GetAttachedChannel(this, a2, &v12);
  v7 = v12;
  v8 = AttachedChannel;
  if ( AttachedChannel >= 0 )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(*((CResourceTable **)v12 + 3), a3);
    if ( !ResourceWithoutType )
    {
      v8 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xDC5u);
      goto LABEL_10;
    }
    AttachedChannel = (**(__int64 (__fastcall ***)(struct CResource *, GUID *, struct IExpressionSource **))ResourceWithoutType)(
                        ResourceWithoutType,
                        &GUID_0d3e77a0_a365_4a0b_b476_396fef364781,
                        a4);
    v8 = AttachedChannel;
    if ( AttachedChannel >= 0 )
    {
      v8 = 0;
      goto LABEL_10;
    }
    v11 = 3528;
  }
  else
  {
    v11 = 3518;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, v11);
LABEL_10:
  if ( v7 )
    CMILRefCountBase::Release(v7);
  return v8;
}
