/*
 * XREFs of ?SetBufferProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00DCB10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     memcmp @ 0x1C0088C80 (memcmp.c)
 */

__int64 __fastcall DirectComposition::CComponentTransform3DMarshaler::SetBufferProperty(
        DirectComposition::CComponentTransform3DMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  _OWORD *v8; // rsi

  v6 = 0;
  *a6 = 0;
  if ( a3 == 17 && a4 && a5 == 64 )
  {
    v8 = (_OWORD *)((char *)this + 120);
    if ( memcmp((char *)this + 120, a4, 0x40uLL) )
    {
      *v8 = *a4;
      v8[1] = a4[1];
      v8[2] = a4[2];
      v8[3] = a4[3];
      *a6 = 1;
    }
    *a6 = 1;
    Win32FreePool();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
