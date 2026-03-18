/*
 * XREFs of ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@H@Z @ 0x1C007878C
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C0078618 (_RegisterRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C0079288 (-IsLegacyDevice@@YAHGG@Z.c)
 */

__int64 __fastcall HidRequestValidityCheck(struct tagRAWINPUTDEVICE *const a1, int a2)
{
  struct tagRAWINPUTDEVICE *v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  int v6; // r8d
  int v7; // r10d
  bool v8; // zf
  int v10; // ecx
  __int64 CurrentProcessWin32Process; // rax
  bool v12; // zf

  v3 = a1;
  v4 = 0LL;
  if ( (*((_DWORD *)a1 + 1) & 0xFFFFC0CE) != 0 )
    goto LABEL_32;
  if ( !*(_WORD *)a1 )
    goto LABEL_27;
  if ( !a2 )
  {
    a1 = (struct tagRAWINPUTDEVICE *const)*((_QWORD *)a1 + 1);
    if ( a1 )
      v4 = ValidateHwnd(a1);
  }
  v5 = *((_DWORD *)v3 + 1);
  if ( (v5 & 0x200) != 0 )
  {
    if ( *(_WORD *)v3 != 1 )
      goto LABEL_32;
    a1 = (struct tagRAWINPUTDEVICE *const)*((unsigned __int16 *)v3 + 1);
    if ( (_WORD)a1 == 2 )
    {
      if ( (v5 & 0xF0) != 0x30 || !v4 )
        goto LABEL_32;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
      a1 = *(struct tagRAWINPUTDEVICE *const *)(v4 + 16);
      v12 = *((_QWORD *)a1 + 48) == CurrentProcessWin32Process;
    }
    else
    {
      v12 = (_WORD)a1 == 6;
    }
    if ( !v12 )
      goto LABEL_32;
  }
  v6 = *((_DWORD *)v3 + 1);
  if ( (v6 & 0x400) != 0 && (*(_WORD *)v3 != 1 || *((_WORD *)v3 + 1) != 6 || (v6 & 0xF0) != 0x30) )
    goto LABEL_32;
  if ( (v6 & 1) == 0 )
    goto LABEL_9;
  if ( (((*((_DWORD *)v3 + 1) & 0xF0) - 16) & 0xFFFFFFDF) == 0 )
  {
LABEL_32:
    v10 = 1004;
    goto LABEL_28;
  }
  if ( *((_QWORD *)v3 + 1) )
    goto LABEL_27;
LABEL_9:
  v7 = *((_DWORD *)v3 + 1) & 0xF0;
  if ( (v6 & 0xF0) == 0 )
    goto LABEL_10;
  if ( v7 != 32 )
  {
    if ( v7 != 16 )
    {
      if ( v7 != 48 )
        goto LABEL_27;
      v8 = (unsigned int)IsLegacyDevice(*(_WORD *)v3, *((_WORD *)v3 + 1)) == 0;
LABEL_11:
      if ( v8 )
        goto LABEL_27;
      goto LABEL_12;
    }
    if ( (v6 & 0x1100) != 0 )
      goto LABEL_27;
LABEL_10:
    v8 = *((_WORD *)v3 + 1) == 0;
    goto LABEL_11;
  }
  if ( *((_WORD *)v3 + 1) )
    goto LABEL_27;
LABEL_12:
  if ( v7 == 16 )
  {
    if ( (v6 & 0x1100) != 0 || *((_QWORD *)v3 + 1) )
      goto LABEL_27;
    return 1LL;
  }
  if ( a2 || !*((_QWORD *)v3 + 1) )
  {
    if ( !v4 )
      goto LABEL_17;
  }
  else if ( !v4 )
  {
    goto LABEL_27;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 384LL) == PsGetCurrentProcessWin32Process(a1) )
  {
LABEL_17:
    if ( (*((_DWORD *)v3 + 1) & 0x1100) != 0 && !v4 && (!a2 || !*((_QWORD *)v3 + 1)) )
      goto LABEL_27;
    return 1LL;
  }
LABEL_27:
  v10 = 87;
LABEL_28:
  UserSetLastError(v10);
  return 0LL;
}
