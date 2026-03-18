/*
 * XREFs of ?SetIntegerProperty@CAnalogExclusiveViewMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00E7890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnalogExclusiveViewMarshaler::SetIntegerProperty(
        DirectComposition::CAnalogExclusiveViewMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d

  v5 = 0;
  if ( a3 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      v5 = -1073741811;
      if ( v6 == 2 && !*((_QWORD *)this + 6) && (*((_DWORD *)this + 4) & 0x20) != 0 )
      {
        *((_QWORD *)this + 6) = a4;
        return 0;
      }
    }
    else
    {
      *((_DWORD *)this + 11) = a4;
      *a5 = 1;
    }
  }
  else
  {
    *((_DWORD *)this + 10) = a4;
    *a5 = 1;
  }
  return v5;
}
