/*
 * XREFs of ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00E1A48
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00E1818 (_RegisterRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C00E2690 (-IsLegacyDevice@@YAHGG@Z.c)
 */

__int64 __fastcall HidRequestValidityCheck(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r10d
  bool v12; // zf
  __int64 v14; // rcx
  __int16 v16; // ax
  __int64 v17; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v19; // zf

  v4 = 0LL;
  if ( a3 == 1 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    if ( a3 == 2 )
    {
      v7 = 1;
      goto LABEL_4;
    }
  }
  v6 = *(_DWORD *)(a1 + 4);
  v7 = 0;
  if ( (v6 & 0xFFFFC0CE) != 0 )
    goto LABEL_51;
LABEL_4:
  if ( !*(_WORD *)a1 )
    goto LABEL_27;
  if ( a2
    && *(_WORD *)a1 == 1
    && *(_WORD *)(a1 + 2) == 6
    && !((*(_DWORD *)(a1 + 4) & 1) != 0
       ? ((*(_DWORD *)(a2 + 100) >> 11) & 1) == v7
       : (*(_DWORD *)(a2 + 100) & 0x800) == 0) )
  {
    goto LABEL_27;
  }
  if ( !v5 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( v8 )
      v4 = ValidateHwnd(v8);
  }
  v9 = *(unsigned int *)(a1 + 4);
  if ( (v9 & 0x200) != 0 )
  {
    if ( *(_WORD *)a1 != 1 )
      goto LABEL_51;
    v16 = *(_WORD *)(a1 + 2);
    if ( v16 == 2 )
    {
      v17 = (unsigned __int8)v9 & 0xF0;
      if ( (_BYTE)v17 != 48 || !v4 )
        goto LABEL_51;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17, a2);
      v9 = *(_QWORD *)(v4 + 16);
      v19 = *(_QWORD *)(v9 + 376) == CurrentProcessWin32Process;
    }
    else
    {
      v19 = v16 == 6;
    }
    if ( !v19 )
      goto LABEL_51;
  }
  v10 = *(_DWORD *)(a1 + 4);
  if ( (v10 & 0x400) != 0 && (*(_WORD *)a1 != 1 || *(_WORD *)(a1 + 2) != 6 || (v10 & 0xF0) != 0x30) )
    goto LABEL_51;
  if ( (v10 & 1) == 0 )
    goto LABEL_14;
  if ( (((*(_DWORD *)(a1 + 4) & 0xF0) - 16) & 0xFFFFFFDF) == 0 )
  {
LABEL_51:
    v14 = 1004LL;
    goto LABEL_28;
  }
  if ( *(_QWORD *)(a1 + 8) )
    goto LABEL_27;
LABEL_14:
  v11 = *(_DWORD *)(a1 + 4) & 0xF0;
  if ( (v10 & 0xF0) == 0 )
    goto LABEL_15;
  if ( v11 != 32 )
  {
    if ( v11 != 16 )
    {
      if ( v11 != 48 )
        goto LABEL_27;
      v12 = (unsigned int)IsLegacyDevice(*(_WORD *)a1, *(_WORD *)(a1 + 2)) == 0;
LABEL_16:
      if ( v12 )
        goto LABEL_27;
      goto LABEL_17;
    }
    if ( (v10 & 0x1100) != 0 )
      goto LABEL_27;
LABEL_15:
    v12 = *(_WORD *)(a1 + 2) == 0;
    goto LABEL_16;
  }
  if ( *(_WORD *)(a1 + 2) )
    goto LABEL_27;
LABEL_17:
  if ( v11 == 16 )
  {
    if ( (v10 & 0x1100) != 0 || *(_QWORD *)(a1 + 8) )
      goto LABEL_27;
    return 1LL;
  }
  if ( v5 || !*(_QWORD *)(a1 + 8) )
  {
    if ( !v4 )
      goto LABEL_22;
  }
  else if ( !v4 )
  {
    goto LABEL_27;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 376LL) == PsGetCurrentProcessWin32Process(v9, a2) )
  {
LABEL_22:
    if ( (*(_DWORD *)(a1 + 4) & 0x1100) != 0 && !v4 && (!v5 || !*(_QWORD *)(a1 + 8)) )
      goto LABEL_27;
    return 1LL;
  }
LABEL_27:
  v14 = 87LL;
LABEL_28:
  UserSetLastError(v14);
  return 0LL;
}
