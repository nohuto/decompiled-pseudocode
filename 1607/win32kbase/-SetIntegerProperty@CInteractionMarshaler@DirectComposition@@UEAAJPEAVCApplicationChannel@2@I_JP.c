/*
 * XREFs of ?SetIntegerProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C004BB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetIntegerProperty(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d
  char v7; // dl
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  char v11; // cl
  char v12; // dl
  int v14; // r8d
  int v15; // r8d
  char v16; // cl
  char v17; // dl
  char v18; // cl

  v5 = 0;
  v7 = a4 != 0;
  v8 = a3 - 5;
  if ( !v8 )
  {
    v18 = *((_BYTE *)this + 240);
    if ( ((v18 & 2) != 0) == v7 )
      return v5;
    *((_BYTE *)this + 240) = v18 ^ (v18 ^ (2 * v7)) & 2;
    *a5 = 1;
    goto LABEL_7;
  }
  v9 = v8 - 3;
  if ( !v9 )
  {
    v11 = *((_BYTE *)this + 240);
    if ( ((v11 & 4) != 0) == v7 )
      return v5;
    v12 = (v11 ^ (4 * v7)) & 4;
    goto LABEL_6;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v14 = v10 - 2;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 != 1 )
          return (unsigned int)-1073741811;
        v16 = *((_BYTE *)this + 240);
        if ( ((v16 & 0x40) != 0) == v7 )
          return v5;
        v17 = (v16 ^ (v7 << 6)) & 0x40;
      }
      else
      {
        v16 = *((_BYTE *)this + 240);
        if ( ((v16 & 0x20) != 0) == v7 )
          return v5;
        v17 = (v16 ^ (32 * v7)) & 0x20;
      }
      *((_BYTE *)this + 240) = v16 ^ v17;
      *a5 = 1;
      *((_DWORD *)this + 4) |= 0x800u;
      return v5;
    }
    v11 = *((_BYTE *)this + 240);
    if ( ((v11 & 0x10) != 0) == v7 )
      return v5;
    v12 = (v11 ^ (16 * v7)) & 0x10;
    goto LABEL_6;
  }
  v11 = *((_BYTE *)this + 240);
  if ( ((v11 & 8) != 0) != v7 )
  {
    v12 = (v11 ^ (8 * v7)) & 8;
LABEL_6:
    *((_BYTE *)this + 240) = v11 ^ v12;
    *a5 = 1;
LABEL_7:
    *((_DWORD *)this + 4) |= 0x200u;
  }
  return v5;
}
