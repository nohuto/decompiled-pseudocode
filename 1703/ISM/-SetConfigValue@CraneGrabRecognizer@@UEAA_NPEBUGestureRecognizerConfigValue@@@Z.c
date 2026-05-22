/*
 * XREFs of ?SetConfigValue@CraneGrabRecognizer@@UEAA_NPEBUGestureRecognizerConfigValue@@@Z @ 0x180039CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CraneGrabRecognizer::SetConfigValue(
        CraneGrabRecognizer *this,
        const struct GestureRecognizerConfigValue *a2)
{
  char v2; // r10

  v2 = 1;
  switch ( *(_DWORD *)a2 )
  {
    case 0x1B:
      *((_WORD *)this + 26) = *((_WORD *)a2 + 2);
      break;
    case 0x1C:
      *((_WORD *)this + 27) = *((_WORD *)a2 + 2);
      break;
    case 0x1D:
      *((_WORD *)this + 28) = *((_WORD *)a2 + 2);
      break;
    default:
      return 0;
  }
  return v2;
}
