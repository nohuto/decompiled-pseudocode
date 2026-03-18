/*
 * XREFs of ?SetBufferProperty@CPencilMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00E5DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddSegments@CPencilMarshaler@DirectComposition@@AEAAJPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z @ 0x1C00E598C (-AddSegments@CPencilMarshaler@DirectComposition@@AEAAJPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z.c)
 *     ?SetSegments@CPencilMarshaler@DirectComposition@@AEAAJIPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z @ 0x1C00E6060 (-SetSegments@CPencilMarshaler@DirectComposition@@AEAAJIPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CPencilMarshaler::SetBufferProperty(
        DirectComposition::CPencilMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        const struct D2D1_PENCIL_SEGMENT *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  int v12; // eax

  v6 = 0;
  *a6 = 0;
  if ( a3 >= 0xA )
  {
    if ( a4 && a5 == 20 * (a5 / 0x14) )
      return (unsigned int)DirectComposition::CPencilMarshaler::SetSegments(this, a3 - 10, a4, a5 / 0x14, a6);
    return (unsigned int)-1073741811;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( !a4 || a5 != 32 )
      return (unsigned int)-1073741811;
    *((_OWORD *)this + 3) = *(_OWORD *)a4;
    *((_OWORD *)this + 4) = *((_OWORD *)a4 + 1);
LABEL_17:
    *((_DWORD *)this + 4) &= ~0x20u;
    goto LABEL_13;
  }
  v8 = v7 - 3;
  if ( !v8 )
  {
    if ( !a4 || a5 != 16 )
      return (unsigned int)-1073741811;
    *(_OWORD *)((char *)this + 104) = *(_OWORD *)a4;
    goto LABEL_17;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    if ( !a4 || a5 != 16 )
      return (unsigned int)-1073741811;
    *((_OWORD *)this + 8) = *(_OWORD *)a4;
    goto LABEL_17;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 == 1 && a4 && a5 == 20 * (a5 / 0x14) )
      return (unsigned int)DirectComposition::CPencilMarshaler::AddSegments(this, a4, a5 / 0x14, a6);
    return (unsigned int)-1073741811;
  }
  if ( !a4 || a5 != 12 )
    return (unsigned int)-1073741811;
  *((_QWORD *)this + 10) = *(_QWORD *)a4;
  v12 = *((_DWORD *)a4 + 2);
  *((_DWORD *)this + 4) &= ~0x40u;
  *((_DWORD *)this + 22) = v12;
LABEL_13:
  *a6 = 1;
  return v6;
}
