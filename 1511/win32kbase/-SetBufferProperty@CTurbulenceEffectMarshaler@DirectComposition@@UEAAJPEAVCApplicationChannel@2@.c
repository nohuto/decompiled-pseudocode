/*
 * XREFs of ?SetBufferProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00DE920
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C0003D20 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEA.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CTurbulenceEffectMarshaler::SetBufferProperty(
        DirectComposition::CTurbulenceEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  char *v7; // rdx

  v6 = 0;
  *a6 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v7 = (char *)this + 96;
    }
    else
    {
      if ( a3 != 2 )
        return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
      v7 = (char *)this + 104;
    }
  }
  else
  {
    v7 = (char *)this + 88;
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
      Win32FreePool();
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v6;
}
