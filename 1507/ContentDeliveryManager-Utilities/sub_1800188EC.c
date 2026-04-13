/*
 * XREFs of sub_1800188EC @ 0x1800188EC
 * Callers:
 *     sub_18000F804 @ 0x18000F804 (sub_18000F804.c)
 *     sub_180012108 @ 0x180012108 (sub_180012108.c)
 *     sub_180012308 @ 0x180012308 (sub_180012308.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     sub_18001B4D0 @ 0x18001B4D0 (sub_18001B4D0.c)
 *     sub_18001BD50 @ 0x18001BD50 (sub_18001BD50.c)
 *     sub_18001C0D0 @ 0x18001C0D0 (sub_18001C0D0.c)
 *     sub_18001C450 @ 0x18001C450 (sub_18001C450.c)
 *     sub_18001C7D0 @ 0x18001C7D0 (sub_18001C7D0.c)
 * Callees:
 *     sub_18000263C @ 0x18000263C (sub_18000263C.c)
 */

HSTRING_HEADER *__fastcall sub_1800188EC(HSTRING_HEADER *hstringHeader, const WCHAR **a2)
{
  HSTRING *v2; // r9
  const WCHAR *v4; // rcx
  unsigned __int64 v5; // rax
  HRESULT StringReference; // eax

  v2 = (HSTRING *)&hstringHeader[1];
  hstringHeader[1].Reserved.Reserved1 = 0LL;
  v4 = *a2;
  v5 = -1LL;
  do
    ++v5;
  while ( v4[v5] );
  if ( v5 > 0xFFFFFFFF )
  {
    sub_18000263C(0x80070216);
    __debugbreak();
  }
  StringReference = WindowsCreateStringReference(v4, v5, hstringHeader, v2);
  if ( StringReference < 0 )
  {
    sub_18000263C(StringReference);
    JUMPOUT(0x180018955LL);
  }
  return hstringHeader;
}
