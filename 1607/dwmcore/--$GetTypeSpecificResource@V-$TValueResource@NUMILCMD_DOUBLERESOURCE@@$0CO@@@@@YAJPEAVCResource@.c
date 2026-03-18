/*
 * XREFs of ??$GetTypeSpecificResource@V?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@@Z @ 0x1800B1944
 * Callers:
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@PEAM@Z @ 0x180024E6C (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@PEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetTypeSpecificResource<TValueResource<double,MILCMD_DOUBLERESOURCE,46>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, 46LL) )
    {
      *a3 = a1;
    }
    else
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    }
  }
  return v3;
}
