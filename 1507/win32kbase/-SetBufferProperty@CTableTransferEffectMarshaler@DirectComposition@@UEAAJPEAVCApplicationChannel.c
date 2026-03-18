/*
 * XREFs of ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D9900
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D8BE0 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEA.c)
 */

__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::SetBufferProperty(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edi
  char *v8; // rbx

  v6 = 0;
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v8 = (char *)this + 112;
        break;
      case 2:
        v8 = (char *)this + 128;
        break;
      case 3:
        v8 = (char *)this + 144;
        break;
      default:
        return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
    }
  }
  else
  {
    v8 = (char *)this + 96;
  }
  if ( v8 )
  {
    if ( (a5 & 3) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      if ( *(_QWORD *)v8 )
      {
        Win32FreePool();
        *(_QWORD *)v8 = 0LL;
      }
      *(_QWORD *)v8 = a4;
      *((_QWORD *)v8 + 1) = (unsigned int)(a5 >> 2);
      *a6 = 1;
    }
  }
  return v6;
}
