/*
 * XREFs of ?SetIntegerProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00DBC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::SetIntegerProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  bool v5; // r10
  char v6; // r10

  v5 = a4 != 0;
  switch ( a3 )
  {
    case 4:
      *a5 = v5 != (*((_BYTE *)this + 152) & 1);
      *((_BYTE *)this + 152) ^= (v5 ^ *((_BYTE *)this + 152)) & 1;
      return 0LL;
    case 5:
      *a5 = v5 != ((*((_BYTE *)this + 152) & 2) != 0);
      v6 = (*((_BYTE *)this + 152) ^ (2 * v5)) & 2;
      goto LABEL_10;
    case 6:
      *a5 = v5 != ((*((_BYTE *)this + 152) & 4) != 0);
      v6 = (*((_BYTE *)this + 152) ^ (4 * v5)) & 4;
      goto LABEL_10;
    case 7:
      *a5 = v5 != ((*((_BYTE *)this + 152) & 8) != 0);
      v6 = (*((_BYTE *)this + 152) ^ (8 * v5)) & 8;
      goto LABEL_10;
    case 8:
      *a5 = v5 != ((*((_BYTE *)this + 152) & 0x10) != 0);
      v6 = (*((_BYTE *)this + 152) ^ (16 * v5)) & 0x10;
LABEL_10:
      *((_BYTE *)this + 152) ^= v6;
      return 0LL;
  }
  return DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
