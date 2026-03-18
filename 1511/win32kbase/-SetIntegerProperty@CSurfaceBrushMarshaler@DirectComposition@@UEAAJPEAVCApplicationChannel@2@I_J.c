/*
 * XREFs of ?SetIntegerProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00DC260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::SetIntegerProperty(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d

  v5 = 0;
  *a5 = 0;
  v6 = a3 - 4;
  if ( !v6 )
  {
    if ( *((_DWORD *)this + 18) == a4 )
      return v5;
    *((_DWORD *)this + 4) |= 0x80u;
    *((_DWORD *)this + 18) = a4;
    goto LABEL_8;
  }
  if ( v6 == 1 )
  {
    if ( *((_DWORD *)this + 19) == a4 )
      return v5;
    *((_DWORD *)this + 4) |= 0x100u;
    *((_DWORD *)this + 19) = a4;
LABEL_8:
    *a5 = 1;
    return v5;
  }
  return (unsigned int)-1073741811;
}
