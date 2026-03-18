/*
 * XREFs of ?SetIntegerProperty@CDesktopTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C007A370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDesktopTargetMarshaler::SetIntegerProperty(
        DirectComposition::CDesktopTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx

  v5 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      *((_DWORD *)this + 4) |= 0x40u;
      *((_DWORD *)this + 12) = a4;
      *a5 = 1;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((_QWORD *)this + 5) = a4;
    *a5 = 1;
  }
  return v5;
}
