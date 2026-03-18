/*
 * XREFs of CacheRotationInfo @ 0x1C00EBFA0
 * Callers:
 *     QueryAutoRotationState @ 0x1C0098B04 (QueryAutoRotationState.c)
 *     xxxSetAutoRotationState @ 0x1C01CA438 (xxxSetAutoRotationState.c)
 * Callees:
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C00EC148 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 */

int CacheRotationInfo()
{
  int CurrentOrientation; // eax
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  dword_1C032947C = 0;
  dword_1C0329484 = 0;
  dword_1C0329480 = 0;
  dword_1C0329464 = 0;
  CurrentOrientation = GetCurrentOrientation(&v2);
  if ( CurrentOrientation < 0 )
  {
    if ( CurrentOrientation == -1073741789 || CurrentOrientation == -2147483643 )
    {
      dword_1C0329480 = 1;
    }
    else if ( CurrentOrientation == -1071774975 )
    {
      dword_1C0329484 = 1;
    }
    else
    {
      dword_1C032947C = 1;
    }
  }
  else
  {
    dword_1C0329464 = v2;
  }
  return UpdateAutoRotationRegistrySetting(
           dword_1C0329464,
           L"LastOrientation",
           0,
           L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
}
