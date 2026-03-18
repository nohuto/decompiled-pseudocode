/*
 * XREFs of ?SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYCLASS@@@Z @ 0x1C00816A8
 * Callers:
 *     SetForegroundPriority @ 0x1C0081580 (SetForegroundPriority.c)
 *     UpdateProcessPriorityForSpinning @ 0x1C00815F4 (UpdateProcessPriorityForSpinning.c)
 * Callees:
 *     ?SetProcessPriorityByClass@@YAXPEAUtagPROCESSINFO@@W4_PROCESS_PRIORITY_BYCLASS@@@Z @ 0x1C00817A4 (-SetProcessPriorityByClass@@YAXPEAUtagPROCESSINFO@@W4_PROCESS_PRIORITY_BYCLASS@@@Z.c)
 */

__int64 __fastcall SetForegroundPriorityProcess(struct _KPROCESS **a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v4; // edi
  struct _KPROCESS *v5; // rbp
  char v7; // si
  struct _KPROCESS ***v8; // rdx
  __int64 v9; // rdx
  char ProcessPriorityClass; // al
  __int64 v11; // rdx

  result = *(unsigned int *)(a2 + 440);
  v4 = a3;
  v5 = *a1;
  if ( (result & 0xC) != 0 || (result & 1) != 0 || (result & 0x40000) != 0 && a3 != 1 )
    return result;
  v7 = 0;
  if ( (*((_DWORD *)a1 + 3) & 0x400000) != 0 )
  {
    v4 = 0;
    ProcessPriorityClass = PsGetProcessPriorityClass(*a1);
    LOBYTE(v11) = 1;
    v7 = ProcessPriorityClass;
    result = PsSetProcessPriorityClass(v5, v11);
  }
  v8 = (struct _KPROCESS ***)gppiForegroundOld;
  if ( gppiForegroundOld )
  {
    if ( (struct _KPROCESS **)gppiForegroundOld != a1 )
    {
      result = gppiScreenSaver;
      if ( a1 == (struct _KPROCESS **)gppiScreenSaver )
        goto LABEL_7;
      result = SetProcessPriorityByClass(gppiForegroundOld, 0LL);
      v8 = (struct _KPROCESS ***)gppiForegroundOld;
    }
    *v8 = 0LL;
  }
LABEL_7:
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v9 = 1LL;
    }
    else
    {
      if ( v4 != 2 )
        return result;
      v9 = 2LL;
    }
  }
  else
  {
    if ( gppiScreenSaver && (struct _KPROCESS **)gppiScreenSaver != a1 )
    {
      *v8 = a1;
      goto LABEL_11;
    }
    v9 = 0LL;
  }
  SetProcessPriorityByClass(a1, v9);
LABEL_11:
  if ( v7 )
  {
    LOBYTE(v8) = v7;
    PsSetProcessPriorityClass(v5, v8);
  }
  if ( v4 )
  {
    if ( MEMORY[0xFFFFF780000002D8] == gSessionId )
      MEMORY[0xFFFFF78000000338] = PsGetProcessId(v5);
  }
  return GreDxgkSetProcessStatus(a1, 1LL);
}
