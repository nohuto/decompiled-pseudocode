/*
 * XREFs of ?SetIntegerProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00DA620
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
  unsigned int v5; // r10d
  int v7; // r8d
  int v8; // r8d
  char v9; // r8
  char v10; // cl

  v5 = 0;
  v7 = a3 - 5;
  if ( !v7 )
  {
    if ( ((*((_BYTE *)this + 216) & 2) != 0) == (a4 != 0) )
      return v5;
    *((_BYTE *)this + 216) ^= (*((_BYTE *)this + 216) ^ (2 * (a4 != 0))) & 2;
    *a5 = 1;
LABEL_12:
    *((_DWORD *)this + 4) |= 0x400u;
    return v5;
  }
  v8 = v7 - 3;
  if ( !v8 )
  {
    v9 = *((_BYTE *)this + 216);
    if ( ((v9 & 4) != 0) == (a4 != 0) )
      return v5;
    v10 = (v9 ^ (4 * (a4 != 0))) & 4;
LABEL_7:
    *((_BYTE *)this + 216) = v9 ^ v10;
    *a5 = 1;
    goto LABEL_12;
  }
  if ( v8 == 1 )
  {
    v9 = *((_BYTE *)this + 216);
    if ( ((v9 & 8) != 0) == (a4 != 0) )
      return v5;
    v10 = (v9 ^ (8 * (a4 != 0))) & 8;
    goto LABEL_7;
  }
  return (unsigned int)-1073741811;
}
