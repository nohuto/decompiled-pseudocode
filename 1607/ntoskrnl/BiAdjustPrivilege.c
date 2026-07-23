/*
 * XREFs of BiAdjustPrivilege @ 0x14053C320
 * Callers:
 *     BiReleasePrivilege @ 0x14053C260 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14053C2AC (BiAcquirePrivilege.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenThreadTokenEx @ 0x14015A7D0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x14015A7F0 (ZwOpenProcessTokenEx.c)
 *     ZwAdjustPrivilegesToken @ 0x14015AA10 (ZwAdjustPrivilegesToken.c)
 */

__int64 __fastcall BiAdjustPrivilege(unsigned int a1, char a2, bool *a3)
{
  NTSTATUS v6; // ebx
  ULONG v7; // eax
  NTSTATUS v9; // eax
  HANDLE Handle[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG ReturnLength; // [rsp+40h] [rbp-30h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [rsp+48h] [rbp-28h] BYREF
  struct _TOKEN_PRIVILEGES PreviousState; // [rsp+58h] [rbp-18h] BYREF

  Handle[0] = (HANDLE)-1LL;
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0 )
  {
    v6 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x28u, 1u, 0x200u, Handle);
    if ( v6 >= 0 )
      goto LABEL_3;
    v9 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x28u, 0, 0x200u, Handle);
  }
  else
  {
    v9 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, Handle);
  }
  v6 = v9;
LABEL_3:
  if ( v6 >= 0 )
  {
    Handle[1] = (HANDLE)a1;
    NewState.PrivilegeCount = 0;
    NewState.Privileges[0].Attributes = 0;
    NewState.Privileges[0].Luid = (LUID)a1;
    v7 = 0;
    if ( a2 )
      v7 = 2;
    NewState.PrivilegeCount = 1;
    NewState.Privileges[0].Attributes = v7;
    v6 = ZwAdjustPrivilegesToken(Handle[0], 0, &NewState, 0x10u, &PreviousState, &ReturnLength);
    if ( v6 == 262 )
      v6 = -1073741727;
    if ( v6 >= 0 )
    {
      if ( PreviousState.PrivilegeCount )
        *a3 = (PreviousState.Privileges[0].Attributes & 2) != 0;
      else
        *a3 = a2 != 0;
    }
    if ( Handle[0] != (HANDLE)-1LL )
      ZwClose(Handle[0]);
  }
  return (unsigned int)v6;
}
