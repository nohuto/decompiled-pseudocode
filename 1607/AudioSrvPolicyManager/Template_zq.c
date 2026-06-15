/*
 * XREFs of Template_zq @ 0x18000A6B8
 * Callers:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18000B818 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

ULONG __fastcall Template_zq(__int64 a1, __int64 a2, const wchar_t *a3, int a4)
{
  __int64 v4; // rax
  ULONG v5; // ecx
  const wchar_t *v6; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF
  int *v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = a4;
  if ( a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a3[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  UserData.Size = v5;
  UserData.Reserved = 0;
  v6 = L"NULL";
  if ( a3 )
    v6 = a3;
  v10 = 4LL;
  UserData.Ptr = (ULONGLONG)v6;
  v9 = &v11;
  return EventWrite(0LL, &EVT_AUDIOSRV_SOUND_LEVEL_CHANGED, 2u, &UserData);
}
