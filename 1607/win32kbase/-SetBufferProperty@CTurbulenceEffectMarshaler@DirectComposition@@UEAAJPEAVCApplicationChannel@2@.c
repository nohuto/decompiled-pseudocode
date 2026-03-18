/*
 * XREFs of ?SetBufferProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00F06C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0003DE0 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 */

__int64 __fastcall DirectComposition::CTurbulenceEffectMarshaler::SetBufferProperty(
        DirectComposition::CTurbulenceEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  char *v7; // rdx

  v6 = 0;
  *a6 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v7 = (char *)this + 104;
    }
    else
    {
      if ( a3 != 2 )
        return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
      v7 = (char *)this + 112;
    }
  }
  else
  {
    v7 = (char *)this + 96;
  }
  if ( v7 )
  {
    if ( a4 )
    {
      if ( *(_QWORD *)v7 != *a4 )
      {
        *(_QWORD *)v7 = *a4;
        *a6 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v6;
}
