/*
 * XREFs of CacheRotationInfo @ 0x1C00FFEA0
 * Callers:
 *     QueryAutoRotationState @ 0x1C007D804 (QueryAutoRotationState.c)
 *     xxxSetAutoRotationState @ 0x1C01D0D30 (xxxSetAutoRotationState.c)
 * Callees:
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C00FFF10 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 */

__int64 CacheRotationInfo()
{
  __int64 result; // rax
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  dword_1C032304C = 0;
  dword_1C0323054 = 0;
  dword_1C0323050 = 0;
  dword_1C0323034 = 0;
  result = GetCurrentOrientation(&v1);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741789 || (_DWORD)result == -2147483643 )
    {
      dword_1C0323050 = 1;
    }
    else if ( (_DWORD)result == -1071774975 )
    {
      dword_1C0323054 = 1;
    }
    else
    {
      dword_1C032304C = 1;
    }
  }
  else
  {
    result = v1;
    dword_1C0323034 = v1;
  }
  return result;
}
