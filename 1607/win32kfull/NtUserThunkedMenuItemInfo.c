/*
 * XREFs of NtUserThunkedMenuItemInfo @ 0x1C006B280
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuItemInfo @ 0x1C0067564 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C006B448 (xxxInsertMenuItem.c)
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
  PCWSTR v11; // rdx
  int v12; // ebx
  __int64 v13; // rcx
  WCHAR *v14; // rdx
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r10
  int v18; // eax
  int inserted; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v23; // [rsp+30h] [rbp-A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v25[4]; // [rsp+50h] [rbp-88h] BYREF
  _OWORD v26[5]; // [rsp+70h] [rbp-68h] BYREF

  EnterCrit(0LL, 1LL);
  v10 = (_OWORD *)a5;
  if ( a5 >= W32UserProbeAddress )
    v10 = (_OWORD *)W32UserProbeAddress;
  v26[0] = *v10;
  v26[1] = v10[1];
  v26[2] = v10[2];
  v26[3] = v10[3];
  v26[4] = v10[4];
  v11 = SourceString;
  v12 = 0;
  if ( SourceString )
  {
    if ( (unsigned __int64)SourceString >= W32UserProbeAddress )
      v11 = (PCWSTR)W32UserProbeAddress;
    v13 = *(unsigned int *)v11;
    v23 = *(_DWORD *)v11;
    *(_DWORD *)&DestinationString.Length = *(_DWORD *)v11;
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
    v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v25;
    v25[1] = v17;
    ++*(_DWORD *)(v17 + 8);
    if ( a4 )
      inserted = xxxInsertMenuItem(v17, a2, a3, (unsigned int)v26, &DestinationString);
    else
      inserted = xxxSetMenuItemInfo(v17, a2, a3, (__int64)v26, &DestinationString);
    v12 = inserted;
    ThreadUnlock1(v21, v20);
  }
LABEL_27:
  UserSessionSwitchLeaveCrit(v13, v14);
  return v12;
}
