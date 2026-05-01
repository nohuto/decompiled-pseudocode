/*
 * XREFs of ?GetPackageFullNameFromProcessId@Shared@DevPlat@@YAJKPEAIPEAG@Z @ 0x18004D434
 * Callers:
 *     ?GetPackageFullNameFromRPCContext@@YAJPEAIPEAG@Z @ 0x18004647C (-GetPackageFullNameFromRPCContext@@YAJPEAIPEAG@Z.c)
 * Callees:
 *     ?Return_GetLastErrorPreRelease@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18004C400 (-Return_GetLastErrorPreRelease@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32PreRelease@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18004C478 (-Return_Win32PreRelease@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall DevPlat::Shared::GetPackageFullNameFromProcessId(
        DWORD dwProcessId,
        UINT32 *packageFullNameLength,
        PWSTR packageFullName,
        unsigned __int16 *a4)
{
  char *v6; // rax
  const char *v7; // r9
  unsigned int v8; // edi
  char *v9; // rbx
  unsigned int LastErrorPreRelease; // eax
  unsigned int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  v8 = 0;
  v9 = v6;
  if ( v6 )
  {
    v11 = GetPackageFullName(v6, packageFullNameLength, packageFullName);
    if ( !v11 )
      goto LABEL_6;
    LastErrorPreRelease = wil::details::in1diag3::Return_Win32PreRelease(
                            retaddr,
                            168LL,
                            (__int64)"base\\appmodel\\execmodel\\shared\\utility\\appidutil.cpp",
                            (const char *)v11);
  }
  else
  {
    LastErrorPreRelease = wil::details::in1diag3::Return_GetLastErrorPreRelease(
                            retaddr,
                            (void *)0xA6,
                            (__int64)"base\\appmodel\\execmodel\\shared\\utility\\appidutil.cpp",
                            v7);
  }
  v8 = LastErrorPreRelease;
LABEL_6:
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v9);
  return v8;
}
