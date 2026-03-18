/*
 * XREFs of WinSqmAddToStream @ 0x1C00B23C0
 * Callers:
 *     ?W32kCddSqmAddToStream@@YAXKKPEAX@Z @ 0x1C00B86A0 (-W32kCddSqmAddToStream@@YAXKKPEAX@Z.c)
 * Callees:
 *     WinSqmEventEnabled @ 0x1C00631B4 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0063200 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C00677D0 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

int __fastcall WinSqmAddToStream(struct _GUID *a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int *v6; // rax
  struct _GUID *v7; // rdi
  unsigned int v8; // r10d
  unsigned int v9; // ebx
  unsigned int v10; // r9d
  _DWORD *v11; // rdx
  __int64 v12; // rcx
  int v13; // r11d
  void *v14; // rcx
  __int64 v15; // rax
  const wchar_t *v16; // rax
  const wchar_t *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _GUID *UserData; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD UserData_8[61]; // [rsp+28h] [rbp-D8h] BYREF
  int v23; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v24; // [rsp+260h] [rbp+160h] BYREF

  v24 = a3;
  v23 = a2;
  UserData = 0LL;
  LODWORD(v6) = (unsigned int)memset(UserData_8, 0, sizeof(UserData_8));
  if ( a1 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a1) )
    {
      v7 = (struct _GUID *)((char *)a1 + 24);
    }
    else
    {
      v7 = (struct _GUID *)&unk_1C00E8BB8;
      if ( a1 )
        v7 = a1;
    }
    LODWORD(v6) = WinSqmEventEnabled(&SQM_ADD_LEGACYSTREAMROW, v7);
    if ( (_DWORD)v6 )
    {
      v8 = v24;
      UserData = v7;
      UserData_8[0] = 16LL;
      v9 = 0;
      if ( v24 > 9 )
        v8 = 9;
      UserData_8[2] = 4LL;
      v24 = v8;
      UserData_8[1] = &v23;
      UserData_8[3] = &unk_1C01071E8;
      v6 = &v24;
      UserData_8[5] = &v24;
      UserData_8[4] = 4LL;
      UserData_8[6] = 4LL;
      if ( v8 )
      {
        v10 = 6;
        while ( v10 < 0x1F )
        {
          v11 = (_DWORD *)(a4 + 16LL * v9);
          v12 = 2LL * (v10 - 2);
          v13 = *v11;
          UserData_8[v12 - 1] = v11;
          UserData_8[v12] = 4LL;
          v14 = v11 + 2;
          if ( v13 != 1 )
            v14 = &unk_1C00F0CD4;
          v15 = 2LL * (v10 - 1);
          UserData_8[v15 - 1] = v14;
          UserData_8[v15] = 4LL;
          if ( v13 == 2 )
          {
            v16 = (const wchar_t *)*((_QWORD *)v11 + 1);
            v17 = v16;
          }
          else
          {
            v16 = L"0";
            v17 = L"0";
          }
          v18 = -1LL;
          do
            ++v18;
          while ( v16[v18] );
          LODWORD(v6) = 2 * v18 + 2;
          v19 = 2LL * v10;
          ++v9;
          v10 += 3;
          UserData_8[v19 - 1] = v17;
          LODWORD(UserData_8[v19]) = (_DWORD)v6;
          HIDWORD(UserData_8[v19]) = 0;
          if ( v9 >= v8 )
            goto LABEL_20;
        }
      }
      else
      {
LABEL_20:
        LODWORD(v6) = WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, (PEVENT_DATA_DESCRIPTOR)&UserData);
      }
    }
  }
  return (int)v6;
}
