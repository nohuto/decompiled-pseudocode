/*
 * XREFs of xxxSetIMEShowStatus @ 0x1C01341F8
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 * Callees:
 *     UpdateWinIniInt @ 0x1C01CE8E8 (UpdateWinIniInt.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01D97D8 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetIMEShowStatus(unsigned int a1, int a2, _DWORD *a3)
{
  __int64 ProfileUserName; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  *a3 = 0;
  if ( gfIMEShowStatus == a1 )
    return 1LL;
  if ( !a2 )
    goto LABEL_4;
  ProfileUserName = CreateProfileUserName(v13);
  v7 = ProfileUserName;
  if ( ProfileUserName )
  {
    *a3 = UpdateWinIniInt(ProfileUserName, 35LL, 236LL, a1);
    FreeProfileUserName(v7, v13);
  }
  if ( *a3 )
  {
LABEL_4:
    gfIMEShowStatus = a1;
    if ( (*gpsi & 4) != 0 )
    {
      if ( gpqForeground )
      {
        v8 = *(_QWORD *)(gpqForeground + 80LL);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 16);
          v10 = *(_QWORD *)(v9 + 696);
          if ( v10 )
          {
            if ( (*(_DWORD *)(v9 + 440) & 1) == 0 )
            {
              v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v13;
              v13[1] = v10;
              ++*(_DWORD *)(v10 + 8);
              xxxNotifyImeShowStatus(*(struct tagWND **)(v9 + 696));
              ThreadUnlock1(v12, v11);
            }
          }
        }
      }
    }
    return 1LL;
  }
  return 0LL;
}
