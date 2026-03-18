/*
 * XREFs of ?ReleaseAllReferences@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1C004C524
 * Callers:
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C004BBB0 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 * Callees:
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C004C654 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 */

void __fastcall DirectComposition::CInteractionConfigurationGroup::ReleaseAllReferences(
        DirectComposition::CInteractionConfigurationGroup *this,
        __int64 a2)
{
  __int64 v3; // rdx

  LOBYTE(a2) = 1;
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
    (char *)this + 16,
    a2);
  LOBYTE(v3) = 1;
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
    (char *)this + 40,
    v3);
}
