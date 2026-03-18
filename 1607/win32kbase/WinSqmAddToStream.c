/*
 * XREFs of WinSqmAddToStream @ 0x1C00BC3A0
 * Callers:
 *     <none>
 * Callees:
 *     WinSqmEventWrite @ 0x1C0052A74 (WinSqmEventWrite.c)
 *     WinSqmEventEnabled @ 0x1C0070890 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C00708DC (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

int __fastcall WinSqmAddToStream(struct _GUID *a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int *v6; // rax
  struct _GUID *v7; // rdi
  unsigned int v8; // r10d
  unsigned int v9; // ebx
  unsigned int v10; // r9d
  ULONGLONG v11; // rdx
  __int64 v12; // rcx
  int v13; // r11d
  void *v14; // rcx
  __int64 v15; // rax
  const wchar_t *v16; // rax
  const wchar_t *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _EVENT_DATA_DESCRIPTOR UserData[31]; // [rsp+20h] [rbp-E0h] BYREF
  int v22; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v23; // [rsp+260h] [rbp+160h] BYREF

  v23 = a3;
  v22 = a2;
  LODWORD(v6) = (unsigned int)memset(UserData, 0, sizeof(UserData));
  if ( a1 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a1) )
    {
      v7 = (struct _GUID *)((char *)a1 + 24);
    }
    else
    {
      v7 = (struct _GUID *)&unk_1C0101C58;
      if ( a1 )
        v7 = a1;
    }
    LODWORD(v6) = WinSqmEventEnabled(&SQM_ADD_LEGACYSTREAMROW, v7);
    if ( (_DWORD)v6 )
    {
      v8 = v23;
      UserData[0].Ptr = (ULONGLONG)v7;
      *(_QWORD *)&UserData[0].Size = 16LL;
      v9 = 0;
      if ( v23 > 9 )
        v8 = 9;
      *(_QWORD *)&UserData[1].Size = 4LL;
      v23 = v8;
      UserData[1].Ptr = (ULONGLONG)&v22;
      UserData[2].Ptr = (ULONGLONG)&unk_1C011E638;
      v6 = &v23;
      UserData[3].Ptr = (ULONGLONG)&v23;
      *(_QWORD *)&UserData[2].Size = 4LL;
      *(_QWORD *)&UserData[3].Size = 4LL;
      if ( v8 )
      {
        v10 = 6;
        while ( v10 < 0x1F )
        {
          v11 = a4 + 16LL * v9;
          v12 = v10 - 2;
          v13 = *(_DWORD *)v11;
          UserData[v12].Ptr = v11;
          *(_QWORD *)&UserData[v12].Size = 4LL;
          v14 = (void *)(v11 + 8);
          if ( v13 != 1 )
            v14 = &unk_1C0105DA4;
          v15 = v10 - 1;
          UserData[v15].Ptr = (ULONGLONG)v14;
          *(_QWORD *)&UserData[v15].Size = 4LL;
          if ( v13 == 2 )
          {
            v16 = *(const wchar_t **)(v11 + 8);
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
          v19 = v10;
          ++v9;
          v10 += 3;
          UserData[v19].Ptr = (ULONGLONG)v17;
          UserData[v19].Size = (unsigned int)v6;
          *(&UserData[0].Reserved + 1 * v19) = 0;
          if ( v9 >= v8 )
            goto LABEL_20;
        }
      }
      else
      {
LABEL_20:
        LODWORD(v6) = WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, UserData);
      }
    }
  }
  return (int)v6;
}
