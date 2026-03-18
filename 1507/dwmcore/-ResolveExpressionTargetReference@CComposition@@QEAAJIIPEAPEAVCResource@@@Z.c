/*
 * XREFs of ?ResolveExpressionTargetReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z @ 0x1800E3BF8
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18010E508 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x18010E9D4 (-TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180068618 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18006CEEC (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CComposition::ResolveExpressionTargetReference(
        CComposition *this,
        unsigned int a2,
        unsigned int a3,
        struct CResource **a4)
{
  int AttachedChannel; // eax
  CMILRefCountBase *v7; // rbp
  unsigned int v8; // edi
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
    }
    else
    {
      v8 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xDF1u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, 0xDEAu);
  }
  if ( v7 )
    CMILRefCountBase::Release(v7);
  return v8;
}
