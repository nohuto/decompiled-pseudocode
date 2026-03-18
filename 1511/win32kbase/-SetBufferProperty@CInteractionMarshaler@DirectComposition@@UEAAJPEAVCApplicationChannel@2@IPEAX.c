/*
 * XREFs of ?SetBufferProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00DA5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetBufferProperty(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  char *v6; // rcx

  *a6 = 0;
  if ( a4 && a5 == 16 && a3 )
  {
    if ( a3 <= 3 )
    {
      v6 = (char *)this + 40;
      return DirectComposition::CInteractionConfigurationGroup::ProcessUpdateConfiguration((__int64)v6, a4, a3, a6);
    }
    if ( a3 - 6 <= 1 )
    {
      v6 = (char *)this + 112;
      return DirectComposition::CInteractionConfigurationGroup::ProcessUpdateConfiguration((__int64)v6, a4, a3, a6);
    }
  }
  return 3221225485LL;
}
