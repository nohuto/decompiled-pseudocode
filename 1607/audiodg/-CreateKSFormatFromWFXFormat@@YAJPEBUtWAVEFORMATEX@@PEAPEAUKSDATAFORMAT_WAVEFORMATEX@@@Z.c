/*
 * XREFs of ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x140011A80
 * Callers:
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140011710 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 * Callees:
 *     memcpy_0 @ 0x140019602 (memcpy_0.c)
 */

__int64 __fastcall CreateKSFormatFromWFXFormat(const struct tWAVEFORMATEX *Src, struct KSDATAFORMAT_WAVEFORMATEX **a2)
{
  struct KSDATAFORMAT_WAVEFORMATEX *v4; // rax

  if ( !Src || !a2 )
    return 2147500035LL;
  if ( Src->wFormatTag == 0xFFFE && Src->cbSize < 0x16u )
    return 2147942487LL;
  v4 = (struct KSDATAFORMAT_WAVEFORMATEX *)CoTaskMemAlloc(Src->cbSize + 82LL);
  *a2 = v4;
  if ( !v4 )
    return 2147942414LL;
  v4->DataFormat.FormatSize = Src->cbSize + 82;
  (*a2)->DataFormat.Flags = 0;
  (*a2)->DataFormat.SampleSize = 0;
  (*a2)->DataFormat.Reserved = 0;
  (*a2)->DataFormat.MajorFormat = GUID_73647561_0000_0010_8000_00aa00389b71;
  (*a2)->DataFormat.Specifier = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
  memcpy_0(&(*a2)->WaveFormatEx, Src, Src->cbSize + 18LL);
  if ( Src->wFormatTag == 0xFFFE )
  {
    *((_OWORD *)&(*a2)->DataFormat.Alignment + 2) = *(_OWORD *)((char *)&Src[1].nSamplesPerSec + 2);
  }
  else
  {
    (*a2)->DataFormat.SubFormat = GUID_00000000_0000_0010_8000_00aa00389b71;
    (*a2)->DataFormat.SubFormat.Data1 = Src->wFormatTag;
  }
  return 0LL;
}
