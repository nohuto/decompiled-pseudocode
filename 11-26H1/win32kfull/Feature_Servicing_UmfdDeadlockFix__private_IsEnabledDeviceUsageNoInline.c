/*
 * XREFs of Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x14032A224
 * Callers:
 *     NtGdiExtEscape @ 0x14027EE60 (NtGdiExtEscape.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 * Callees:
 *     Feature_Servicing_UmfdDeadlockFix__private_IsEnabledFallback @ 0x14032A260 (Feature_Servicing_UmfdDeadlockFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_UmfdDeadlockFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_UmfdDeadlockFix__private_featureState & 1;
  else
    return Feature_Servicing_UmfdDeadlockFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_UmfdDeadlockFix__private_featureState,
             3LL);
}
