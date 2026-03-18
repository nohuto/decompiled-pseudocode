/*
 * XREFs of ?SetBufferProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00DC500
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D8BE0 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEA.c)
 */

__int64 __fastcall DirectComposition::CShadowEffectMarshaler::SetBufferProperty(
        DirectComposition::CShadowEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rcx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 1 )
  {
    if ( a4 && a5 == 16 )
    {
      v8 = *(_QWORD *)((char *)this + 100) - *a4;
      if ( !v8 )
        v8 = *(_QWORD *)((char *)this + 108) - a4[1];
      if ( v8 )
      {
        *(_OWORD *)((char *)this + 100) = *(_OWORD *)a4;
        *a6 = 1;
      }
      Win32FreePool();
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
  }
  return v6;
}
