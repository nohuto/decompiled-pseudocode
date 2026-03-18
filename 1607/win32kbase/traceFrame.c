/*
 * XREFs of traceFrame @ 0x1C00D9450
 * Callers:
 *     RIMFixUpCompleteFrame @ 0x1C00D9B58 (RIMFixUpCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C000BC70 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00D1F58 (WPP_RECORDER_SF_d.c)
 *     tracePointerFlags @ 0x1C00D9530 (tracePointerFlags.c)
 */

__int64 __fastcall traceFrame(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // r9d
  __int64 result; // rax
  _DWORD *v5; // r14
  int v6; // edx
  __int64 v7; // [rsp+28h] [rbp-20h]

  v1 = 0;
  v3 = 44;
  if ( !*(_DWORD *)(a1 + 56) )
    v3 = 45;
  result = WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             3,
             5,
             v3,
             (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids);
  if ( *(_DWORD *)(a1 + 24) )
  {
    v5 = (_DWORD *)(*(_QWORD *)(a1 + 88) + 48LL);
    do
    {
      LODWORD(v7) = *((unsigned __int16 *)v5 - 20);
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        5u,
        0x2Eu,
        (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
        v7);
      WPP_RECORDER_SF_DD(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        5,
        43,
        (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids,
        *v5,
        v5[1]);
      result = tracePointerFlags((unsigned int)*(v5 - 5));
      ++v1;
      v5 += 42;
    }
    while ( v1 < *(_DWORD *)(a1 + 24) );
  }
  return result;
}
