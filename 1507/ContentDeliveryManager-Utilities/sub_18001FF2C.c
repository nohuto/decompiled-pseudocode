/*
 * XREFs of sub_18001FF2C @ 0x18001FF2C
 * Callers:
 *     sub_18001FEC4 @ 0x18001FEC4 (sub_18001FEC4.c)
 * Callees:
 *     sub_180020200 @ 0x180020200 (sub_180020200.c)
 */

__int64 __fastcall sub_18001FF2C(HANDLE hProcess, PWSTR *a2)
{
  LONG v4; // eax
  signed int v5; // edi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // eax
  PWSTR v10; // rbx
  LONG v11; // eax
  PWSTR v12; // rax
  UINT32 packageFullNameLength; // [rsp+58h] [rbp+10h] BYREF
  PWSTR packageFullName; // [rsp+60h] [rbp+18h]

  *a2 = 0LL;
  packageFullNameLength = 0;
  v4 = GetPackageFullName(hProcess, &packageFullNameLength, 0LL);
  v5 = (unsigned __int16)v4 | 0x80070000;
  if ( v4 <= 0 )
    v5 = v4;
  if ( v5 == -2147024774 && packageFullNameLength )
  {
    packageFullName = 0LL;
    CoTaskMemFree(0LL);
    v9 = sub_180020200(v7, v6, v8, packageFullNameLength);
    v10 = packageFullName;
    v5 = v9;
    if ( v9 >= 0 )
    {
      v11 = GetPackageFullName(hProcess, &packageFullNameLength, packageFullName);
      v5 = (unsigned __int16)v11 | 0x80070000;
      if ( v11 <= 0 )
        v5 = v11;
      if ( v5 >= 0 )
      {
        v12 = v10;
        v10 = 0LL;
        *a2 = v12;
      }
    }
    CoTaskMemFree(v10);
  }
  return (unsigned int)v5;
}
