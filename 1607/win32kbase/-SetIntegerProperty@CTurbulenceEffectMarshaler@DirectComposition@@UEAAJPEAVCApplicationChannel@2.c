/*
 * XREFs of ?SetIntegerProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00F0740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTurbulenceEffectMarshaler::SetIntegerProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  bool *v5; // rax

  switch ( a3 )
  {
    case 3:
      *((_DWORD *)this + 30) = a4;
      goto LABEL_9;
    case 4:
      *((_DWORD *)this + 31) = a4;
      goto LABEL_9;
    case 5:
      *((_DWORD *)this + 32) = a4;
LABEL_9:
      v5 = a5;
      goto LABEL_10;
  }
  v5 = a5;
  if ( a3 == 6 )
  {
    *((_DWORD *)this + 33) = a4;
LABEL_10:
    *v5 = 1;
    return 0LL;
  }
  return DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
