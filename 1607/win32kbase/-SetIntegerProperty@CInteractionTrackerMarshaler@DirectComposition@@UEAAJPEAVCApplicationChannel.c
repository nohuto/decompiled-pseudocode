/*
 * XREFs of ?SetIntegerProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00E94F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetIntegerProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx

  v5 = 0;
  switch ( a3 )
  {
    case 9:
      *((_DWORD *)this + 4) &= ~0x800u;
      *((_DWORD *)this + 27) = a4;
      *a5 = 1;
      return v5;
    case 13:
      *((_DWORD *)this + 4) &= ~0x400u;
      *((_DWORD *)this + 30) = a4;
      goto LABEL_16;
    case 15:
      *((_DWORD *)this + 4) &= ~0x1000u;
      *((_DWORD *)this + 31) = a4;
      goto LABEL_16;
    case 18:
      if ( *((_DWORD *)this + 45) == a4 )
        return v5;
      *((_DWORD *)this + 4) &= ~0x4000u;
      *((_DWORD *)this + 45) = a4;
LABEL_16:
      *a5 = 1;
      return v5;
    case 28:
      *((_DWORD *)this + 4) &= ~0x80000u;
      *((_DWORD *)this + 38) = a4;
      goto LABEL_16;
    case 30:
      *((_DWORD *)this + 4) &= ~0x100000u;
      *((_DWORD *)this + 39) = a4;
      goto LABEL_16;
    case 41:
      *((_DWORD *)this + 4) &= ~0x100u;
      *((_DWORD *)this + 16) = a4;
      goto LABEL_16;
    case 45:
      *((_DWORD *)this + 4) &= ~0x200u;
      *((_DWORD *)this + 20) = a4;
      goto LABEL_16;
  }
  return (unsigned int)-1073741811;
}
