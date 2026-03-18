/*
 * XREFs of NtUserThunkedMenuItemInfo @ 0x1C0054FE0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuItemInfo @ 0x1C0052CB8 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C00551A4 (xxxInsertMenuItem.c)
 */

__int64 __fastcall NtUserThunkedMenuItemInfo(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned __int64 a5,
        PCWSTR SourceString)
{
  _OWORD *v10; // rax
  unsigned int *v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  WCHAR *v14; // rdx
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r10
  int v18; // eax
  unsigned int inserted; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v23; // [rsp+30h] [rbp-A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v25[5]; // [rsp+48h] [rbp-90h] BYREF
  int v26[4]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v27; // [rsp+80h] [rbp-58h]
  __int128 v28; // [rsp+90h] [rbp-48h]
  __int128 v29; // [rsp+A0h] [rbp-38h]
  __int128 v30; // [rsp+B0h] [rbp-28h]

  EnterCrit(1LL);
  v10 = (_OWORD *)a5;
  if ( a5 >= W32UserProbeAddress )
    v10 = (_OWORD *)W32UserProbeAddress;
  *(_OWORD *)v26 = *v10;
  v27 = v10[1];
  v28 = v10[2];
  v29 = v10[3];
  v30 = v10[4];
  v11 = (unsigned int *)SourceString;
  v12 = 0;
  if ( SourceString )
  {
    if ( (unsigned __int64)SourceString >= W32UserProbeAddress )
      v11 = (unsigned int *)W32UserProbeAddress;
    v13 = *v11;
    v23 = *v11;
    *(_DWORD *)&DestinationString.Length = *v11;
    v14 = (WCHAR *)*((_QWORD *)v11 + 1);
    DestinationString.Buffer = v14;
    if ( ((unsigned __int8)v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (unsigned __int64)v14 + (unsigned __int16)v13 + 2;
    if ( v15 >= W32UserProbeAddress
      || (unsigned __int16)v13 > HIWORD(v23)
      || (v13 & 1) != 0
      || v15 <= (unsigned __int64)v14 )
    {
      *W32UserProbeAddress = 0;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  if ( (*(_DWORD *)(a5 + 4) & 1) == 0 || (*(_DWORD *)(a5 + 12) & 0xFFFFEF74) == 0 )
  {
    v16 = ValidateHmenu(a1);
    v17 = v16;
    if ( a4 )
    {
      if ( !v16 )
        goto LABEL_27;
      v18 = *(_DWORD *)(v16 + 40);
      if ( (v18 & 0x40) != 0 || (v18 & 0x200) != 0 )
        goto LABEL_27;
    }
    else if ( !v16 || (*(_DWORD *)(v16 + 40) & 0x40) != 0 )
    {
      goto LABEL_27;
    }
    v25[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v25;
    v25[1] = v17;
    ++*(_DWORD *)(v17 + 8);
    if ( a4 )
      inserted = xxxInsertMenuItem(v17, a2, a3, (int)v26, &DestinationString);
    else
      inserted = xxxSetMenuItemInfo(v17, a2, a3, (__int64)v26, &DestinationString);
    v12 = inserted;
    ThreadUnlock1(v21, v20);
  }
LABEL_27:
  UserSessionSwitchLeaveCrit(v13, v14);
  return v12;
}
