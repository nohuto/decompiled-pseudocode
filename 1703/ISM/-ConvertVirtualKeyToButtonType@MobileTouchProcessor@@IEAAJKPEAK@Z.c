/*
 * XREFs of ?ConvertVirtualKeyToButtonType@MobileTouchProcessor@@IEAAJKPEAK@Z @ 0x180057B48
 * Callers:
 *     ?Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z @ 0x180057D04 (-Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall MobileTouchProcessor::ConvertVirtualKeyToButtonType(
        MobileTouchProcessor *this,
        unsigned int a2,
        unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx

  v3 = 0;
  if ( a3 )
  {
    if ( a2 > 0x77 )
    {
      v8 = a2 - 120;
      if ( !v8 )
      {
        *a3 = 5;
        return v3;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
        *a3 = 6;
        return v3;
      }
      v10 = v9 - 1;
      if ( !v10 )
      {
        *a3 = 0;
        return v3;
      }
      v11 = v10 - 2;
      if ( !v11 )
      {
        *a3 = 9;
        return v3;
      }
      if ( v11 == 11 )
      {
        *a3 = 11;
        return v3;
      }
    }
    else
    {
      if ( a2 == 119 )
      {
        *a3 = 10;
        return v3;
      }
      v4 = a2 - 27;
      if ( !v4 )
      {
        *a3 = 2;
        return v3;
      }
      v5 = v4 - 86;
      if ( !v5 )
      {
        *a3 = 1;
        return v3;
      }
      v6 = v5 - 1;
      if ( !v6 )
      {
        *a3 = 3;
        return v3;
      }
      v7 = v6 - 3;
      if ( !v7 )
      {
        *a3 = 8;
        return v3;
      }
      if ( v7 == 1 )
      {
        *a3 = 7;
        return v3;
      }
    }
    *a3 = 0x7FFFFFFF;
    return v3;
  }
  v3 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 214, 87);
  return v3;
}
