/*
 * XREFs of ?SetBufferProperty@CColorBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D80E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CColorBrushMarshaler::SetBufferProperty(
        DirectComposition::CColorBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int128 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm0

  v6 = 0;
  *a6 = 0;
  if ( !a3 && a4 && a5 == 16 )
  {
    v7 = *a4;
    *((_DWORD *)this + 4) |= 0x40u;
    *(_OWORD *)((char *)this + 40) = v7;
    *a6 = 1;
    Win32FreePool();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
