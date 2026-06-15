/*
 * XREFs of ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x180011AB4
 * Callers:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180014DF0 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800183F4 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// Absent C++ exception handlers: #catch=1
__int64 __fastcall CAudioEndpointId::Copy(CAudioEndpointId *this, const struct CAudioEndpointId *a2)
{
  unsigned int v2; // ebx
  ATL::CAtlException *v4; // [rsp+28h] [rbp-10h] BYREF
  int v5; // [rsp+40h] [rbp+8h]

  v2 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::operator=(this);
  }
  catch ( ATL::CAtlException *v4 )
  {
    __eh34_catch_handler_absent(0, 0, CAudioEndpointId::Copy_::_1_::catch_0);
    v2 = v5;
    if ( v5 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12LL,
        &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        (unsigned int)v5);
    }
  }
  return v2;
}
