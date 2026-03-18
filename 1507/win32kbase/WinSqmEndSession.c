/*
 * XREFs of WinSqmEndSession @ 0x1C006B940
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006AD40 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     WinSqmEventEnabled @ 0x1C0066FA4 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0066FF0 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C006B9E4 (-UnregisterWinSqmProvider@@YAKXZ.c)
 *     WinSqmEventWrite @ 0x1C007B6C4 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

int WinSqmEndSession()
{
  struct _GUID *v0; // rbx
  int v1; // esi
  int result; // eax
  void *Data4; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF
  void *v5; // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+38h] [rbp-20h]

  v0 = gSqmSession;
  UserData.Ptr = 0LL;
  v1 = 0;
  *(_QWORD *)&UserData.Size = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  result = (_DWORD)gSqmSession - 1;
  if ( (unsigned __int64)&gSqmSession[-1].Data4[7] <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(gSqmSession) )
    {
      Data4 = v0[1].Data4;
      v1 = 1;
    }
    else
    {
      Data4 = v0;
    }
    result = WinSqmEventEnabled(&SQM_END_SESSION, Data4);
    if ( result )
    {
      UserData.Reserved = 0;
      v5 = &unk_1C0106558;
      UserData.Ptr = (ULONGLONG)Data4;
      UserData.Size = 16;
      v6 = 4LL;
      result = WinSqmEventWrite(&SQM_END_SESSION, 2u, &UserData);
    }
    if ( v1 )
    {
      Win32FreePool();
      return UnregisterWinSqmProvider();
    }
  }
  return result;
}
