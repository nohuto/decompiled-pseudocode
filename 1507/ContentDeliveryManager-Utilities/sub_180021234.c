/*
 * XREFs of sub_180021234 @ 0x180021234
 * Callers:
 *     sub_18000B100 @ 0x18000B100 (sub_18000B100.c)
 *     sub_18000B160 @ 0x18000B160 (sub_18000B160.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_180021234(LPSTR lpMultiByteStr, WCHAR a2, __int64 a3, _DWORD *a4)
{
  bool v4; // zf
  int result; // eax
  WCHAR WideCharStr; // [rsp+40h] [rbp-18h] BYREF
  BOOL UsedDefaultChar; // [rsp+48h] [rbp-10h] BYREF

  v4 = a4[3] == 0;
  WideCharStr = a2;
  if ( !v4 )
  {
    if ( a2 <= 0xFFu )
    {
      *lpMultiByteStr = a2;
      return 1;
    }
    goto LABEL_6;
  }
  UsedDefaultChar = 0;
  result = WideCharToMultiByte(a4[1], 0, &WideCharStr, 1, lpMultiByteStr, a4[2], 0LL, &UsedDefaultChar);
  if ( !result || UsedDefaultChar )
  {
LABEL_6:
    *errno() = 42;
    return -1;
  }
  return result;
}
