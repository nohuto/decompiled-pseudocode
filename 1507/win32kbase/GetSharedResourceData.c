/*
 * XREFs of GetSharedResourceData @ 0x1C0013E50
 * Callers:
 *     ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x1C0023F00 (-Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z.c)
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002E574 (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002E658 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 * Callees:
 *     <none>
 */

char __fastcall GetSharedResourceData(
        unsigned int a1,
        __int64 (__fastcall **a2)(const struct DirectComposition::CSharedSystemResource *a1, int a2, struct DirectComposition::CTargetVisualMarshaler **a3))
{
  char v2; // r8
  __int64 (__fastcall *v3)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedMatrixTransformMarshaler **); // rax

  v2 = 1;
  if ( a1 <= 0x3B )
  {
    switch ( a1 )
    {
      case 0x3Bu:
        *a2 = 0LL;
        v3 = CreateSharedMatrixTransformMarshaler;
        goto LABEL_4;
      case 0x1Fu:
        *a2 = CreateTargetVisualMarshaler;
        v3 = CreateHostVisualMarshaler;
        goto LABEL_4;
      case 0x25u:
        *a2 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CTargetVisualMarshaler **))CreateSharedReadDesktopTargetMarshaler;
        v3 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedMatrixTransformMarshaler **))CreateSharedWriteDesktopTargetMarshaler;
        goto LABEL_4;
      case 0x18u:
        goto LABEL_17;
      case 0x1Cu:
        *a2 = 0LL;
        v3 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedMatrixTransformMarshaler **))CreateSharedMatrixTransform3DMarshaler;
        goto LABEL_4;
      case 0x35u:
LABEL_17:
        a2[1] = 0LL;
        *a2 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CTargetVisualMarshaler **))CreateSharedReadTransformMarshaler;
        return v2;
    }
    return 0;
  }
  if ( a1 != 60 )
  {
    switch ( a1 )
    {
      case 'S':
        *a2 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CTargetVisualMarshaler **))CreateSharedReadAnimationTriggerMarshaler;
        v3 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedMatrixTransformMarshaler **))CreateSharedWriteAnimationTriggerMarshaler;
        goto LABEL_4;
      case 'L':
        *a2 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CTargetVisualMarshaler **))CreateSharedReadScalarMarshaler;
        v3 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedMatrixTransformMarshaler **))CreateSharedWriteScalarMarshaler;
        goto LABEL_4;
      case 'U':
        *a2 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CTargetVisualMarshaler **))CreateSharedReadPrimitiveColorMarshaler;
        v3 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedMatrixTransformMarshaler **))CreateSharedWritePrimitiveColorMarshaler;
        goto LABEL_4;
      case 'X':
        *a2 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CTargetVisualMarshaler **))CreateSharedReadInteractionMarshaler;
        v3 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedMatrixTransformMarshaler **))CreateSharedInteractionMarshaler;
        goto LABEL_4;
    }
    return 0;
  }
  *a2 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CTargetVisualMarshaler **))CreateSharedReadTransformMarshaler;
  v3 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedMatrixTransformMarshaler **))CreateSharedManipulationTransformMarshaler;
LABEL_4:
  a2[1] = v3;
  return v2;
}
