/*
 * XREFs of NtTokenManagerOpenSectionAndEvents @ 0x1C00805F0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     ?OpenSectionAndEvents@CTokenManager@@SAJPEAPEAXPEA_K00@Z @ 0x1C0080774 (-OpenSectionAndEvents@CTokenManager@@SAJPEAPEAXPEA_K00@Z.c)
 */

__int64 __fastcall NtTokenManagerOpenSectionAndEvents(HANDLE *a1, unsigned __int64 *a2, HANDLE *a3, HANDLE *a4)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  int v10; // ebx
  HANDLE Handle; // [rsp+28h] [rbp-40h] BYREF
  HANDLE v13; // [rsp+30h] [rbp-38h] BYREF
  HANDLE v14; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-28h] BYREF

  v14 = (HANDLE)-1LL;
  v8 = 0LL;
  v15 = 0LL;
  v13 = (HANDLE)-1LL;
  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  if ( UserIsCurrentProcessDwm(v9) )
  {
    v10 = CTokenManager::OpenSectionAndEvents(&v14, &v15, &v13, &Handle);
    v8 = v15;
  }
  else
  {
    v10 = -1073741790;
  }
  if ( a1 && a2 && a3 && a4 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a1 = v14;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v8;
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v13;
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = Handle;
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
  {
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
    if ( v13 != (HANDLE)-1LL )
      ObCloseHandle(v13, 1);
    if ( v14 != (HANDLE)-1LL )
      ObCloseHandle(v14, 1);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
