/*
 * XREFs of ?ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREPARSED_DATA@@PEAEKGGGPEAJ@Z @ 0x1C0240314
 * Callers:
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C023AF78 (-GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractiveControlParser::ExtractCustomUsage(
        struct _INTERACTIVECTRL_CAPABILITIES *a1,
        struct _HIDP_PREPARSED_DATA *a2,
        CHAR *a3,
        ULONG a4,
        USAGE a5,
        USHORT a6,
        USAGE a7,
        int *a8)
{
  NTSTATUS ScaledUsageValue; // edx
  struct _INTERACTIVECTRL_CAPABILITIES *ValueCapsLength; // [rsp+60h] [rbp+8h] BYREF
  LONG UsageValue; // [rsp+70h] [rbp+18h] BYREF

  ValueCapsLength = a1;
  UsageValue = 0;
  if ( !a3 )
  {
    LOWORD(ValueCapsLength) = 0;
    HidP_GetSpecificValueCaps(HidP_Input, a5, a6, a7, 0LL, (PUSHORT)&ValueCapsLength, a2);
  }
  ScaledUsageValue = HidP_GetScaledUsageValue(HidP_Input, a5, a6, a7, &UsageValue, a2, a3, a4);
  if ( ScaledUsageValue >= 0 )
  {
    if ( a8 )
      *a8 = UsageValue;
  }
  else
  {
    return (unsigned int)-1072627708;
  }
  return (unsigned int)ScaledUsageValue;
}
