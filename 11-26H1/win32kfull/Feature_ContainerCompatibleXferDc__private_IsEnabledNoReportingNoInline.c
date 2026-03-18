/*
 * XREFs of Feature_ContainerCompatibleXferDc__private_IsEnabledNoReportingNoInline @ 0x14019780C
 * Callers:
 *     ?bBeginXfer@XFERDCOBJ@@SA_NPEAUHDC__@@K@Z @ 0x140197540 (-bBeginXfer@XFERDCOBJ@@SA_NPEAUHDC__@@K@Z.c)
 *     ?bEndXfer@XFERDCOBJ@@SA_NPEAUHDC__@@@Z @ 0x140197674 (-bEndXfer@XFERDCOBJ@@SA_NPEAUHDC__@@@Z.c)
 * Callees:
 *     Feature_ContainerCompatibleXferDc__private_IsEnabledFallback @ 0x140297108 (Feature_ContainerCompatibleXferDc__private_IsEnabledFallback.c)
 */

__int64 Feature_ContainerCompatibleXferDc__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_ContainerCompatibleXferDc__private_featureState & 2) != 0 )
    return Feature_ContainerCompatibleXferDc__private_featureState & 1;
  else
    return Feature_ContainerCompatibleXferDc__private_IsEnabledFallback(
             (unsigned int)Feature_ContainerCompatibleXferDc__private_featureState,
             0LL);
}
