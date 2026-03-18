/*
 * XREFs of GetSharedResourceData @ 0x1C007A060
 * Callers:
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C004066C (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0040750 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x1C0048798 (-Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall GetSharedResourceData(unsigned int a1, _QWORD *a2)
{
  char v2; // r8
  __int64 (__fastcall *v3)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CHostVisualMarshaler **); // rax

  v2 = 1;
  if ( a1 <= 0x40 )
  {
    switch ( a1 )
    {
      case 0x40u:
        *a2 = 0LL;
        v3 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CHostVisualMarshaler **))CreateSharedMatrixTransformMarshaler;
        goto LABEL_4;
      case 0x20u:
        *a2 = CreateTargetVisualMarshaler;
        v3 = CreateHostVisualMarshaler;
        goto LABEL_4;
      case 0x27u:
        *a2 = CreateSharedReadDesktopTargetMarshaler;
        v3 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CHostVisualMarshaler **))CreateSharedWriteDesktopTargetMarshaler;
        goto LABEL_4;
      case 0x18u:
        goto LABEL_18;
      case 0x1Cu:
        *a2 = 0LL;
        v3 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CHostVisualMarshaler **))CreateSharedMatrixTransform3DMarshaler;
        goto LABEL_4;
      case 0x3Au:
LABEL_18:
        a2[1] = 0LL;
        *a2 = CreateSharedReadTransformMarshaler;
        return v2;
    }
    return 0;
  }
  if ( a1 != 65 )
  {
    switch ( a1 )
    {
      case 'f':
        *a2 = CreateSharedReadInteractionMarshaler;
        v3 = CreateSharedInteractionMarshaler;
        goto LABEL_4;
      case '`':
        *a2 = CreateSharedReadAnimationTriggerMarshaler;
        v3 = CreateSharedWriteAnimationTriggerMarshaler;
        goto LABEL_4;
      case 'Y':
        *a2 = CreateSharedReadScalarMarshaler;
        v3 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CHostVisualMarshaler **))CreateSharedWriteScalarMarshaler;
        goto LABEL_4;
      case 'c':
        *a2 = CreateSharedReadPrimitiveColorMarshaler;
        v3 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CHostVisualMarshaler **))CreateSharedWritePrimitiveColorMarshaler;
        goto LABEL_4;
    }
    return 0;
  }
  *a2 = CreateSharedReadTransformMarshaler;
  v3 = CreateSharedManipulationTransformMarshaler;
LABEL_4:
  a2[1] = v3;
  return v2;
}
