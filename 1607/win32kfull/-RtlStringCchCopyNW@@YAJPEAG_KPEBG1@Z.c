/*
 * XREFs of ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00E514C
 * Callers:
 *     ?ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z @ 0x1C00E4E0C (-ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C00E6460 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserCreateWindowStation @ 0x1C00E9E50 (NtUserCreateWindowStation.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHKIPEBG0@Z @ 0x1C00EAED8 (-xxxbEnumerateRegistryFontsInternal@@YAHKIPEBG0@Z.c)
 *     _SetWatermarkStrings @ 0x1C0130860 (_SetWatermarkStrings.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01C2AC8 (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C01F9E70 (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  int v4; // r10d
  __int64 v5; // r9
  signed __int64 v6; // r8
  unsigned __int16 v7; // ax

  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( !a2 )
      return (unsigned int)v4;
  }
  else if ( a4 > 0x7FFFFFFE )
  {
    v4 = -1073741811;
  }
  else
  {
    v4 = 0;
    if ( !a2 )
      goto LABEL_14;
    v5 = a4 - a2;
    v6 = a3 - a1;
    do
    {
      if ( !(v5 + a2) )
        break;
      v7 = *(_WORD *)&a1[v6];
      if ( !v7 )
        break;
      *(_WORD *)a1 = v7;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    if ( !a2 )
    {
LABEL_14:
      a1 -= 2;
      v4 = -2147483643;
    }
  }
  *(_WORD *)a1 = 0;
  return (unsigned int)v4;
}
