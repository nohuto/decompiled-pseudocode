/*
 * XREFs of ?SetIntegerProperty@CInteractionMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D8490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetIntegerProperty(
        DirectComposition::CInteractionMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v4; // r10d
  char v6; // dl
  char v7; // cl

  v4 = 0;
  if ( a2 == 5 )
  {
    v6 = *((_BYTE *)this + 216);
    if ( ((v6 & 2) != 0) == (a3 != 0) )
      return v4;
    v7 = (v6 ^ (2 * (a3 != 0))) & 2;
    goto LABEL_8;
  }
  if ( a2 == 8 )
  {
    v6 = *((_BYTE *)this + 216);
    if ( ((v6 & 4) != 0) == (a3 != 0) )
      return v4;
    v7 = (v6 ^ (4 * (a3 != 0))) & 4;
LABEL_8:
    *((_BYTE *)this + 216) = v6 ^ v7;
    *a4 = 1;
    *((_DWORD *)this + 4) |= 0x400u;
    return v4;
  }
  return (unsigned int)-1073741811;
}
