/*
 * XREFs of ?SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D5DF0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C00D5914 (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C00D5FBC (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetBufferProperty(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        const struct D2D1_INK_BEZIER_SEGMENT *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // ebx
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax

  v6 = 0;
  *a6 = 0;
  if ( a3 >= 6 )
  {
    if ( !a4 || a5 != 36 * (a5 / 0x24) )
      goto LABEL_30;
    v11 = DirectComposition::CInkMarshaler::SetSegments(this, a3 - 6, a4, a5 / 0x24, a6);
    goto LABEL_29;
  }
  if ( !a3 )
  {
    if ( !a4 || a5 != 16 )
      goto LABEL_30;
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)a4;
    goto LABEL_22;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( !a4 || a5 != 28 )
      return (unsigned int)-1073741811;
    *(_OWORD *)((char *)this + 56) = *(_OWORD *)a4;
    *((_QWORD *)this + 9) = *((_QWORD *)a4 + 2);
    *((_DWORD *)this + 20) = *((_DWORD *)a4 + 6);
LABEL_22:
    *((_DWORD *)this + 4) &= ~0x40u;
LABEL_18:
    *a6 = 1;
    goto LABEL_32;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( !a4 || a5 != 12 )
      return (unsigned int)-1073741811;
    *(_QWORD *)((char *)this + 84) = *(_QWORD *)a4;
    v12 = *((_DWORD *)a4 + 2);
    *((_DWORD *)this + 4) &= ~0x80u;
    *((_DWORD *)this + 23) = v12;
    goto LABEL_18;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( !a4 || a5 != 36 * (a5 / 0x24) )
      goto LABEL_30;
    v11 = DirectComposition::CInkMarshaler::AddSegments(this, a4, a5 / 0x24, a6);
LABEL_29:
    v6 = v11;
    goto LABEL_31;
  }
  if ( v9 == 2 )
  {
    if ( a4 && a5 == 36 )
    {
      v10 = *((_QWORD *)this + 16);
      if ( !v10 )
        return (unsigned int)-1073741811;
      v11 = DirectComposition::CInkMarshaler::SetSegments(this, v10 - 1, a4, 1u, a6);
      goto LABEL_29;
    }
LABEL_30:
    v6 = -1073741811;
LABEL_31:
    if ( v6 < 0 )
      return (unsigned int)v6;
LABEL_32:
    Win32FreePool();
    return (unsigned int)v6;
  }
  return (unsigned int)-1073741811;
}
