/*
 * XREFs of ?RegGetString@@YA_NQEAUHKEY__@@QEBGPEAGK@Z @ 0x180169734
 * Callers:
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall RegGetString(HKEY a1, const unsigned __int16 *const a2, BYTE *a3, DWORD a4)
{
  char v4; // bl
  DWORD v6[6]; // [rsp+30h] [rbp-18h] BYREF
  DWORD v7; // [rsp+68h] [rbp+20h] BYREF

  v7 = a4;
  v4 = 0;
  v6[0] = 62;
  if ( a1 && !RegQueryValueExW(a1, L"BuildBranch", 0LL, &v7, a3, v6) )
    return v7 == 1;
  return v4;
}
