/*
 * XREFs of ?SetIntegerProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DCF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffectMarshaler::SetIntegerProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  bool v4; // r10
  char v5; // r10

  v4 = a3 != 0;
  switch ( a2 )
  {
    case 2:
      *a4 = v4 != (*((_BYTE *)this + 128) & 1);
      *((_BYTE *)this + 128) ^= (v4 ^ *((_BYTE *)this + 128)) & 1;
      return 0LL;
    case 5:
      *a4 = v4 != ((*((_BYTE *)this + 128) & 2) != 0);
      v5 = (*((_BYTE *)this + 128) ^ (2 * v4)) & 2;
      goto LABEL_10;
    case 8:
      *a4 = v4 != ((*((_BYTE *)this + 128) & 8) != 0);
      v5 = (*((_BYTE *)this + 128) ^ (8 * v4)) & 8;
      goto LABEL_10;
    case 11:
      *a4 = v4 != ((*((_BYTE *)this + 128) & 4) != 0);
      v5 = (*((_BYTE *)this + 128) ^ (4 * v4)) & 4;
      goto LABEL_10;
    case 12:
      *a4 = v4 != ((*((_BYTE *)this + 128) & 0x10) != 0);
      v5 = (*((_BYTE *)this + 128) ^ (16 * v4)) & 0x10;
LABEL_10:
      *((_BYTE *)this + 128) ^= v5;
      return 0LL;
  }
  return DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4);
}
