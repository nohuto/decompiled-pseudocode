/*
 * XREFs of xxxGetListBoxInfo @ 0x1402F2C34
 * Callers:
 *     NtUserGetListBoxInfo @ 0x1402B4090 (NtUserGetListBoxInfo.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX @ 0x1402A2F48 (unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX.c)
 */

__int64 __fastcall xxxGetListBoxInfo(struct tagWND *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  _DWORD **v4; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  PRKPROCESS *v8; // rcx
  int v9; // edi
  __int64 CurrentProcessWow64Process; // rax
  _DWORD *Address; // [rsp+70h] [rbp+18h]

  v2 = 0;
  v4 = (_DWORD **)unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX(a1);
  if ( !v4 )
    return xxxSendMessage(a1, 0x1B2u);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
  v7 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v8 = *(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 456LL);
  if ( v8 == (PRKPROCESS *)v7 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    KeAttachProcess(*v8);
  }
  Address = *v4;
  if ( *v4 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8, v7);
    ProbeForRead(Address, 1uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    if ( (Address[23] & 0x40000) != 0 )
      v2 = Address[19];
    else
      v2 = Address[8];
  }
  if ( v9 )
    KeDetachProcess();
  return v2;
}
