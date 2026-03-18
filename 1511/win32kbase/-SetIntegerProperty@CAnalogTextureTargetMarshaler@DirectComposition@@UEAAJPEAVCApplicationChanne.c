/*
 * XREFs of ?SetIntegerProperty@CAnalogTextureTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00DAB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnalogTextureTargetMarshaler::SetIntegerProperty(
        DirectComposition::CAnalogTextureTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d

  v5 = 0;
  if ( !a3 )
  {
    *((_DWORD *)this + 10) = a4;
    *a5 = 1;
    return v5;
  }
  v6 = a3 - 1;
  if ( !v6 )
  {
    *((_DWORD *)this + 11) = a4;
    goto LABEL_7;
  }
  if ( v6 == 1 )
  {
    *((_DWORD *)this + 12) = a4;
LABEL_7:
    *a5 = 1;
    return v5;
  }
  return (unsigned int)-1073741811;
}
