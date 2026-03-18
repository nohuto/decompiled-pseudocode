/*
 * XREFs of ?SetIntegerProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DCA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTurbulenceEffectMarshaler::SetIntegerProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  switch ( a2 )
  {
    case 3:
      *((_DWORD *)this + 30) = a3;
      goto LABEL_9;
    case 4:
      *((_DWORD *)this + 31) = a3;
      goto LABEL_9;
    case 5:
      *((_DWORD *)this + 32) = a3;
      goto LABEL_9;
    case 6:
      *((_DWORD *)this + 33) = a3;
LABEL_9:
      *a4 = 1;
      return 0LL;
  }
  return DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4);
}
