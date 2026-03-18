/*
 * XREFs of xxxGetComboBoxInfo @ 0x14020490C
 * Callers:
 *     NtUserGetComboBoxInfo @ 0x1402B2F50 (NtUserGetComboBoxInfo.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     unsafe_cast_fnid_or_class_to_PCOMBOWND @ 0x140204D2C (unsafe_cast_fnid_or_class_to_PCOMBOWND.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x140204DF4 (unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX.c)
 */

__int64 __fastcall xxxGetComboBoxInfo(struct tagWND *a1, __int64 a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rcx
  PRKPROCESS **v6; // r12
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  PRKPROCESS *v10; // rcx
  int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // edx
  __int64 CurrentProcessWow64Process; // rax
  _QWORD **Address; // [rsp+20h] [rbp-C8h]
  PRKPROCESS *Addressa; // [rsp+20h] [rbp-C8h]
  _QWORD *Addressb; // [rsp+20h] [rbp-C8h]
  _QWORD *v27; // [rsp+28h] [rbp-C0h]
  __int64 *v28; // [rsp+28h] [rbp-C0h]
  __int64 *v29; // [rsp+28h] [rbp-C0h]
  _BYTE v30[48]; // [rsp+30h] [rbp-B8h]
  __int128 v31; // [rsp+60h] [rbp-88h]

  Address = 0LL;
  *(_DWORD *)v30 = 64;
  v4 = 0;
  v6 = (PRKPROCESS **)unsafe_cast_fnid_or_class_to_PCOMBOWND();
  if ( !v6 )
  {
    Address = (_QWORD **)unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(a1);
    if ( !Address )
      return xxxSendMessage(a1, 0x164u);
  }
  if ( *(_DWORD *)a2 != 64 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  if ( CurrentProcessWin32Process )
  {
    v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v9;
  }
  v10 = *(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 456LL);
  if ( v10 == (PRKPROCESS *)CurrentProcessWin32Process )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    KeAttachProcess(*v10);
  }
  if ( v6 )
  {
    Addressa = *v6;
    goto LABEL_11;
  }
  Addressb = *Address;
  if ( Addressb )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10, v9);
    ProbeForRead(Addressb, 1uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v10 = (PRKPROCESS *)Addressb[18];
    Addressa = v10;
LABEL_11:
    if ( Addressa )
    {
      v12 = PsGetCurrentProcessWow64Process(v10, v9);
      ProbeForRead(Addressa, 1uLL, v12 != 0 ? 1 : 4);
      v27 = *Addressa;
      v14 = PsGetCurrentProcessWow64Process(*Addressa, v13);
      ProbeForRead(v27, 1uLL, v14 != 0 ? 1 : 4);
      if ( v27 )
        v16 = *v27;
      else
        v16 = 0LL;
      *(_QWORD *)&v30[40] = v16;
      v28 = (__int64 *)Addressa[8];
      v17 = PsGetCurrentProcessWow64Process(v28, v15);
      ProbeForRead(v28, 1uLL, v17 != 0 ? 1 : 4);
      if ( v28 )
        v19 = *v28;
      else
        v19 = 0LL;
      if ( v19 == *(_QWORD *)a1 )
        v19 = 0LL;
      *(_QWORD *)&v31 = v19;
      v29 = (__int64 *)Addressa[9];
      v20 = PsGetCurrentProcessWow64Process(v29, v18);
      ProbeForRead(v29, 1uLL, v20 != 0 ? 1 : 4);
      if ( v29 )
        v21 = *v29;
      else
        v21 = 0LL;
      *((_QWORD *)&v31 + 1) = v21;
      *(_OWORD *)&v30[4] = *((_OWORD *)Addressa + 1);
      *(_OWORD *)&v30[20] = *((_OWORD *)Addressa + 2);
      *(_DWORD *)&v30[36] = 0;
      v22 = 0;
      if ( ((_DWORD)Addressa[10] & 3) == 1 )
      {
        v22 = 0x8000;
        *(_DWORD *)&v30[36] = 0x8000;
      }
      if ( ((_DWORD)Addressa[10] & 0x20) != 0 )
        *(_DWORD *)&v30[36] = v22 | 8;
      *(_OWORD *)a2 = *(_OWORD *)v30;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)&v30[16];
      *(_OWORD *)(a2 + 32) = *(_OWORD *)&v30[32];
      *(_OWORD *)(a2 + 48) = v31;
      v4 = 1;
    }
  }
  if ( v11 )
    KeDetachProcess();
  return v4;
}
