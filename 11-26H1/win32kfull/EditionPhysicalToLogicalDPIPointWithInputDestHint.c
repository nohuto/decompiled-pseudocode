/*
 * XREFs of EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x14008C000
 * Callers:
 *     <none>
 * Callees:
 *     TransformVectorWithInputTargetPrecedence @ 0x14004C3E8 (TransformVectorWithInputTargetPrecedence.c)
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline @ 0x14008C09C (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x14008C0D8 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagPOINT __fastcall EditionPhysicalToLogicalDPIPointWithInputDestHint(
        struct tagPOINT *a1,
        struct tagPOINT a2,
        const struct _SUBPIXELS *a3,
        __int64 a4)
{
  const struct tagWND *v6; // rbx
  struct tagPOINT result; // rax
  struct tagPOINT v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  if ( *(_DWORD *)(a4 + 92) == 2 && (v6 = *(const struct tagWND **)(a4 + 80)) != 0LL )
  {
    if ( (unsigned int)Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline()
      || !(unsigned int)TransformVectorWithInputTargetPrecedence(v6, (int)&v8, (int)a3) )
    {
      PhysicalToLogicalDPIPointWithHitTest(&v8, &v8, a3, v6);
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3500LL);
  }
  result = v8;
  *a1 = v8;
  return result;
}
