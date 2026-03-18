/*
 * XREFs of ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C003B640
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C003CA20 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetBufferProperty(
        LARGE_INTEGER *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        LARGE_INTEGER *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edi
  LARGE_INTEGER v10; // rax

  v6 = 0;
  *a6 = 0;
  if ( a3 == 21 )
  {
    if ( a5 == 8 )
    {
      this[29] = KeQueryPerformanceCounter(0LL);
      v10 = *a4;
      LOBYTE(this[31].LowPart) &= ~2u;
      this[30] = v10;
      *a6 = 1;
      this[2].LowPart &= ~0x1000u;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(
                           (DirectComposition::CBaseExpressionMarshaler *)this,
                           a2,
                           a3,
                           a4,
                           a5,
                           a6);
  }
  return v6;
}
