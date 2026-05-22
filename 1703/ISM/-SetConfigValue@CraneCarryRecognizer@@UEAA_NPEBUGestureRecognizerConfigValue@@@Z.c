/*
 * XREFs of ?SetConfigValue@CraneCarryRecognizer@@UEAA_NPEBUGestureRecognizerConfigValue@@@Z @ 0x180038690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CraneCarryRecognizer::SetConfigValue(
        CraneCarryRecognizer *this,
        const struct GestureRecognizerConfigValue *a2)
{
  char v2; // r10
  int v3; // eax

  v2 = 1;
  switch ( *(_DWORD *)a2 )
  {
    case 0x1E:
      *((_WORD *)this + 22) = *((_WORD *)a2 + 2);
      break;
    case 0x1F:
      *((_WORD *)this + 23) = *((_WORD *)a2 + 2);
      break;
    case 0x20:
      *((_WORD *)this + 24) = *((_WORD *)a2 + 2);
      break;
    case 0x21:
      v3 = *((unsigned __int16 *)a2 + 2);
      *((_DWORD *)this + 7) = v3;
      if ( v3 == 0xFFFF )
      {
        *((_DWORD *)this + 4) = 0;
        *((_BYTE *)this + 20) = 0;
        *((_DWORD *)this + 7) = 0xFFFF;
      }
      break;
    case 0x22:
      *((_WORD *)this + 25) = *((_WORD *)a2 + 2);
      break;
    default:
      return 0;
  }
  return v2;
}
