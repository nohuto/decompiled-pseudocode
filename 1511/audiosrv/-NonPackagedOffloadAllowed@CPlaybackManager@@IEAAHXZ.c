/*
 * XREFs of ?NonPackagedOffloadAllowed@CPlaybackManager@@IEAAHXZ @ 0x1800A12D0
 * Callers:
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x180029B80 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPlaybackManager::NonPackagedOffloadAllowed(CPlaybackManager *this)
{
  unsigned int v1; // ebx
  DWORD v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+54h] [rbp+Ch]
  int v5; // [rsp+58h] [rbp+10h] BYREF

  v4 = HIDWORD(this);
  v3 = 4;
  v1 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"AllowClassicOffload",
          0x18u,
          0LL,
          &v5,
          &v3) )
    return v5 != 0;
  return v1;
}
