/*
 * XREFs of _OpenWindowStation @ 0x1401F7BD8
 * Callers:
 *     NtUserOpenWindowStation @ 0x1401F79D0 (NtUserOpenWindowStation.c)
 *     xxxResolveDesktop @ 0x1402A52F0 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1402A5F20 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 */

__int64 __fastcall OpenWindowStation(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  NTSTATUS v3; // eax
  __int64 v5; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2;
  v5 = 0LL;
  LOBYTE(v2) = 1;
  v3 = ObOpenObjectByName(a1, ExWindowStationObjectType, v2, 0LL, a2, 0LL, &v5);
  if ( v3 < 0 )
  {
    SetLastNtError(v3);
    return 0LL;
  }
  return v5;
}
