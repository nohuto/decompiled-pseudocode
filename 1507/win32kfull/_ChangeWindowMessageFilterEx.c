/*
 * XREFs of _ChangeWindowMessageFilterEx @ 0x1C00E2230
 * Callers:
 *     NtUserChangeWindowMessageFilterEx @ 0x1C00E20E0 (NtUserChangeWindowMessageFilterEx.c)
 * Callees:
 *     FreeWindowMessageFilter @ 0x1C008A1A4 (FreeWindowMessageFilter.c)
 *     ?VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00ACA7C (-VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C00E239C (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     UIPISQMChangeFilter @ 0x1C00E23E8 (UIPISQMChangeFilter.c)
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C00E2550 (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00E25CC (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00E27BC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00E284C (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C00E2954 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00E3ABC (-VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 */

__int64 __fastcall ChangeWindowMessageFilterEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // edi
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v10; // r13
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r9d
  void **v15; // r15
  int v16; // r9d
  struct VWPL **v17; // rcx
  void **v18[7]; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v19 = 0;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  *(_DWORD *)(a4 + 4) = 0;
  v10 = CurrentProcessWin32Process;
  UIPISQMChangeFilter(CurrentProcessWin32Process);
  if ( !gbEnforceUIPI )
    return 1LL;
  result = ValidateChangeMessageFilter(v10, a2);
  if ( (_DWORD)result )
  {
    if ( !a3 )
    {
      FreeWindowMessageFilter(a1, v12, v13, v14);
      return 1LL;
    }
    v18[0] = GetWindowMessageFilter(a1);
    v15 = v18[0];
    if ( a3 == 1 )
    {
      v4 = AddMessageToFilter(v18, a2, &v19);
      if ( v4 && v19 )
        *(_DWORD *)(a4 + 4) = 1;
    }
    else
    {
      if ( a3 != 2 )
        return v4;
      v4 = RemoveMessageFromFilter(v18, a2, &v19);
      if ( v4 )
      {
        if ( (unsigned int)IsMessageAllowedByFilterEx(*((void *const **)v10 + 100), a2, 0LL, 0LL)
          || (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2) )
        {
          *(_DWORD *)(a4 + 4) = 3;
        }
        else if ( v19 )
        {
          *(_DWORD *)(a4 + 4) = 2;
        }
      }
    }
    if ( v15 != v18[0] )
    {
      v17 = (struct VWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) + 808LL);
      if ( v18[0] )
        return (unsigned int)VWPLAddBase(v17, (__int64)v18[0], a1, 5u);
      else
        VWPLRemoveBase(v17, 0LL, a1, v16, 0LL);
    }
    return v4;
  }
  return result;
}
