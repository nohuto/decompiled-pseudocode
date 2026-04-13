/*
 * XREFs of ?GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180021AAC
 * Callers:
 *     ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x180021A44 (-GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180021D80 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 */

__int64 __fastcall CallerIdentity::GetPackageFullNameFromProcess(HANDLE hProcess, PWSTR *a2, unsigned __int16 **a3)
{
  LONG v5; // eax
  signed int v6; // edi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // eax
  PWSTR v11; // rbx
  LONG v12; // eax
  PWSTR v13; // rax
  UINT32 packageFullNameLength; // [rsp+58h] [rbp+10h] BYREF
  PWSTR packageFullName; // [rsp+60h] [rbp+18h]

  *a2 = 0LL;
  packageFullNameLength = 0;
  v5 = GetPackageFullName(hProcess, &packageFullNameLength, 0LL);
  v6 = (unsigned __int16)v5 | 0x80070000;
  if ( v5 <= 0 )
    v6 = v5;
  if ( v6 == -2147024774 && packageFullNameLength )
  {
    packageFullName = 0LL;
    CoTaskMemFree(0LL);
    v10 = _AllocStringWorker<CTCoAllocPolicy>(v8, v7, v9, packageFullNameLength);
    v11 = packageFullName;
    v6 = v10;
    if ( v10 >= 0 )
    {
      v12 = GetPackageFullName(hProcess, &packageFullNameLength, packageFullName);
      v6 = (unsigned __int16)v12 | 0x80070000;
      if ( v12 <= 0 )
        v6 = v12;
      if ( v6 >= 0 )
      {
        v13 = v11;
        v11 = 0LL;
        *a2 = v13;
      }
    }
    CoTaskMemFree(v11);
  }
  return (unsigned int)v6;
}
