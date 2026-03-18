/*
 * XREFs of ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C002A880
 * Callers:
 *     <none>
 * Callees:
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAX_KPEA_N@Z @ 0x1C0029FE0 (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAX_.c)
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAX_KPEA_N@Z @ 0x1C002A0D8 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEA.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetBufferProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // r8d
  int v7; // r8d
  unsigned int v9; // ebx
  bool v11; // di
  char v12; // al
  char v13; // r8
  __int64 v14; // rdx
  __int128 v15; // xmm0

  v6 = a3 - 11;
  if ( !v6 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetTransformMatrixHelper(this, a2, a4, a5, a6);
  v7 = v6 - 1;
  if ( !v7 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetClipRectangleHelper(this, a2, a4, a5, a6);
  if ( v7 == 3 )
  {
    v9 = 0;
    v11 = 0;
    if ( a5 )
    {
      if ( a5 == 16 )
      {
        v13 = *((_BYTE *)this + 228);
        if ( (v13 & 1) == 0 )
          goto LABEL_19;
        v14 = *((_QWORD *)this + 26) - *a4;
        if ( !v14 )
          v14 = *((_QWORD *)this + 27) - a4[1];
        if ( v14 )
        {
LABEL_19:
          *((_DWORD *)this + 4) |= 0x80000u;
          v11 = 1;
          v15 = *(_OWORD *)a4;
          *((_BYTE *)this + 228) = v13 | 1;
          *((_OWORD *)this + 13) = v15;
        }
        Win32FreePool(a4);
      }
      else
      {
        v9 = -1073741811;
      }
    }
    else
    {
      v12 = *((_BYTE *)this + 228);
      if ( (v12 & 1) != 0 )
      {
        *((_DWORD *)this + 4) |= 0x80000u;
        v11 = 1;
        *((_BYTE *)this + 228) = v12 & 0xFE;
      }
    }
    *a6 = v11;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
