/*
 * XREFs of NtGdiGetPhysicalMonitorDescription @ 0x1402217F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z @ 0x1402218B4 (-GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtGdiGetPhysicalMonitorDescription(void *a1, __int64 a2, void *a3)
{
  int v4; // ebx
  __int64 v6; // r14
  int MonitorDescription; // ebx
  unsigned __int16 Src[128]; // [rsp+20h] [rbp-128h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  memset_0(Src, 0, sizeof(Src));
  if ( v4 == 128 )
  {
    MonitorDescription = CMonitorAPI::GetMonitorDescription(*(CMonitorAPI **)(v6 + 128), a1, 0x80u, Src);
    if ( MonitorDescription >= 0 )
    {
      MonitorDescription = 0;
      RtlCopyToUser(a3, Src, 0x100uLL);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)MonitorDescription;
}
