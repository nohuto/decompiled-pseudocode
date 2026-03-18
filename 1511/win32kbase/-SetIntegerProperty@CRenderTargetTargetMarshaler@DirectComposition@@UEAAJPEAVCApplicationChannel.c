/*
 * XREFs of ?SetIntegerProperty@CRenderTargetTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C007B2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRenderTargetTargetMarshaler::SetIntegerProperty(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // edx

  v5 = 0;
  if ( a3 )
  {
    if ( a3 == 2 )
    {
      *((_DWORD *)this + 15) = a4;
      *a5 = 1;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    *((_DWORD *)this + 10) = a4;
    *a5 = 1;
  }
  return v5;
}
