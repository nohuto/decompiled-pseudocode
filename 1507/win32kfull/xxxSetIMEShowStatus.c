/*
 * XREFs of xxxSetIMEShowStatus @ 0x1C01568F4
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 * Callees:
 *     UpdateWinIniInt @ 0x1C01D5EE4 (UpdateWinIniInt.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E2A84 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetIMEShowStatus(unsigned int a1, __int64 a2, _DWORD *a3)
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
  if ( !(_DWORD)a2 )
    goto LABEL_3;
  ProfileUserName = CreateProfileUserName(v13, a2, a3);
  v7 = ProfileUserName;
  if ( ProfileUserName )
  {
    *a3 = UpdateWinIniInt(ProfileUserName, 35LL, 236LL, a1);
    FreeProfileUserName(v7, v13);
  }
  if ( *a3 )
  {
LABEL_3:
    gfIMEShowStatus = a1;
    if ( (*gpsi & 4) != 0 )
    {
      if ( gpqForeground )
      {
        v8 = *(_QWORD *)(gpqForeground + 72LL);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 16);
          v10 = *(_QWORD *)(v9 + 704);
          if ( v10 )
          {
            if ( (*(_DWORD *)(v9 + 448) & 1) == 0 )
            {
              v13[0] = *(_QWORD *)(gptiCurrent + 376LL);
              *(_QWORD *)(gptiCurrent + 376LL) = v13;
              v13[1] = v10;
              ++*(_DWORD *)(v10 + 8);
              xxxNotifyImeShowStatus(*(struct tagWND **)(v9 + 704));
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
