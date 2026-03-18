/*
 * XREFs of ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0063128
 * Callers:
 *     WinSqmSetDWORD @ 0x1C0063010 (WinSqmSetDWORD.c)
 *     WinSqmIncrementDWORD @ 0x1C0063110 (WinSqmIncrementDWORD.c)
 *     WinSqmAddToAverageDWORD @ 0x1C00B23A0 (WinSqmAddToAverageDWORD.c)
 *     ?W32kCddSqmSetIfMaxDWORD@@YAXKK@Z @ 0x1C00B8700 (-W32kCddSqmSetIfMaxDWORD@@YAXKK@Z.c)
 *     ?W32kCddSqmSetIfMinDWORD@@YAXKK@Z @ 0x1C00B8720 (-W32kCddSqmSetIfMinDWORD@@YAXKK@Z.c)
 * Callees:
 *     WinSqmEventEnabled @ 0x1C00631B4 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0063200 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C00677D0 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

void __fastcall _WinSqmDWORDEvent(PCEVENT_DESCRIPTOR EventDescriptor, struct _GUID *a2, int a3, int a4)
{
  struct _GUID *v6; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+20h] [rbp-58h] BYREF
  int v8; // [rsp+B0h] [rbp+38h] BYREF
  int v9; // [rsp+B8h] [rbp+40h] BYREF

  v9 = a4;
  v8 = a3;
  memset(UserData, 0, sizeof(UserData));
  if ( a2 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a2) )
    {
      v6 = (struct _GUID *)((char *)a2 + 24);
    }
    else
    {
      v6 = (struct _GUID *)&unk_1C00E8BB8;
      if ( a2 )
        v6 = a2;
    }
    if ( (unsigned int)WinSqmEventEnabled(EventDescriptor, v6) )
    {
      UserData[1].Ptr = (ULONGLONG)&v8;
      UserData[2].Ptr = (ULONGLONG)&unk_1C01071E8;
      UserData[3].Ptr = (ULONGLONG)&v9;
      UserData[0].Ptr = (ULONGLONG)v6;
      *(_QWORD *)&UserData[0].Size = 16LL;
      *(_QWORD *)&UserData[1].Size = 4LL;
      *(_QWORD *)&UserData[2].Size = 4LL;
      *(_QWORD *)&UserData[3].Size = 4LL;
      WinSqmEventWrite(EventDescriptor, 4u, UserData);
    }
  }
}
