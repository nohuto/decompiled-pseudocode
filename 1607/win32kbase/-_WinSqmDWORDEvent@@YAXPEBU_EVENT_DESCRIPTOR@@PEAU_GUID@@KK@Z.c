/*
 * XREFs of ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0070808
 * Callers:
 *     WinSqmSetDWORD @ 0x1C00706F0 (WinSqmSetDWORD.c)
 *     WinSqmIncrementDWORD @ 0x1C00707F0 (WinSqmIncrementDWORD.c)
 *     WinSqmAddToAverageDWORD @ 0x1C00BC380 (WinSqmAddToAverageDWORD.c)
 * Callees:
 *     WinSqmEventWrite @ 0x1C0052A74 (WinSqmEventWrite.c)
 *     WinSqmEventEnabled @ 0x1C0070890 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C00708DC (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
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
      v6 = (struct _GUID *)&unk_1C0101C58;
      if ( a2 )
        v6 = a2;
    }
    if ( (unsigned int)WinSqmEventEnabled(EventDescriptor, v6) )
    {
      UserData[0].Reserved = 0;
      UserData[1].Reserved = 0;
      UserData[2].Reserved = 0;
      UserData[3].Reserved = 0;
      UserData[1].Ptr = (ULONGLONG)&v8;
      UserData[2].Ptr = (ULONGLONG)&unk_1C011E638;
      UserData[3].Ptr = (ULONGLONG)&v9;
      UserData[0].Ptr = (ULONGLONG)v6;
      UserData[0].Size = 16;
      UserData[1].Size = 4;
      UserData[2].Size = 4;
      UserData[3].Size = 4;
      WinSqmEventWrite(EventDescriptor, 4u, UserData);
    }
  }
}
