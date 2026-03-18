/*
 * XREFs of CacheRotationInfo @ 0x1C010CBD0
 * Callers:
 *     QueryAutoRotationState @ 0x1C0096AE4 (QueryAutoRotationState.c)
 *     xxxSetAutoRotationState @ 0x1C01D295C (xxxSetAutoRotationState.c)
 * Callees:
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C010CC40 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 */

__int64 CacheRotationInfo()
{
  __int64 result; // rax
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  dword_1C0323D7C = 0;
  dword_1C0323D84 = 0;
  dword_1C0323D80 = 0;
  dword_1C0323D64 = 0;
  result = GetCurrentOrientation(&v1);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741789 || (_DWORD)result == -2147483643 )
    {
      dword_1C0323D80 = 1;
    }
    else if ( (_DWORD)result == -1071774975 )
    {
      dword_1C0323D84 = 1;
    }
    else
    {
      dword_1C0323D7C = 1;
    }
  }
  else
  {
    result = v1;
    dword_1C0323D64 = v1;
  }
  return result;
}
