/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180061814
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180064118 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x180095788 (-Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x180095998 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x180096FFC (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18010E508 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?QueryFeatureOverride@@YAHIPEAW4reg_FeatureEnabledState@@@Z @ 0x18010FED4 (-QueryFeatureOverride@@YAHIPEAW4reg_FeatureEnabledState@@@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18012908C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x180148DEC (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 StringCchPrintfW(wchar_t *Buffer, __int64 a2, const unsigned __int16 *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = _vsnwprintf(Buffer, a2 - 1, a3, Args);
    if ( v6 < 0 )
      goto LABEL_9;
    if ( v6 == v5 )
    {
      Buffer[v5] = 0;
      return (unsigned int)v4;
    }
    if ( v6 > v5 )
    {
LABEL_9:
      Buffer[v5] = 0;
      return (unsigned int)-2147024774;
    }
  }
  return (unsigned int)v4;
}
