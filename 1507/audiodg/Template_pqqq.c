/*
 * XREFs of Template_pqqq @ 0x14003CC40
 * Callers:
 *     ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14003C510 (-GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 */

ULONG __fastcall Template_pqqq(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-50h] BYREF
  int *v8; // [rsp+30h] [rbp-40h]
  __int64 v9; // [rsp+38h] [rbp-38h]
  char *v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-28h]
  char *v12; // [rsp+50h] [rbp-20h]
  __int64 v13; // [rsp+58h] [rbp-18h]
  __int64 v14; // [rsp+90h] [rbp+20h] BYREF
  int v15; // [rsp+98h] [rbp+28h] BYREF

  v15 = a4;
  v14 = a3;
  UserData.Ptr = (ULONGLONG)&v14;
  *(_QWORD *)&UserData.Size = 8LL;
  v9 = 4LL;
  v8 = &v15;
  v11 = 4LL;
  v10 = &a5;
  v12 = &a6;
  v13 = 4LL;
  return EventWrite(Microsoft_Windows_AudioHandle, &EVT_GLITCH_CP_SERVER_OUTPUT_READ_POINTER_OVERWRITE, 4u, &UserData);
}
