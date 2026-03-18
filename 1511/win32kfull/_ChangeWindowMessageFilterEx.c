/*
 * XREFs of _ChangeWindowMessageFilterEx @ 0x1C0092274
 * Callers:
 *     NtUserChangeWindowMessageFilterEx @ 0x1C0092120 (NtUserChangeWindowMessageFilterEx.c)
 * Callees:
 *     FreeWindowMessageFilter @ 0x1C00681E4 (FreeWindowMessageFilter.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C00923E0 (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     UIPISQMChangeFilter @ 0x1C009242C (UIPISQMChangeFilter.c)
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C0092594 (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C0092680 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0092800 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C0092AEC (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C0092BF4 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00E5A54 (-VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     ?VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00F3654 (-VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z.c)
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
  int v18; // [rsp+20h] [rbp-48h]
  void **v19[7]; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v20 = 0;
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
    v19[0] = GetWindowMessageFilter(a1);
    v15 = v19[0];
    if ( a3 == 1 )
    {
      v4 = AddMessageToFilter(v19, a2, &v20);
      if ( v4 && v20 )
        *(_DWORD *)(a4 + 4) = 1;
    }
    else
    {
      if ( a3 != 2 )
        return v4;
      v4 = RemoveMessageFromFilter(v19, a2, &v20);
      if ( v4 )
      {
        if ( (unsigned int)IsMessageAllowedByFilterEx(*((void *const **)v10 + 100), a2, 0LL, 0LL)
          || (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2) )
        {
          *(_DWORD *)(a4 + 4) = 3;
        }
        else if ( v20 )
        {
          *(_DWORD *)(a4 + 4) = 2;
        }
      }
    }
    if ( v15 != v19[0] )
    {
      v17 = (struct VWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) + 808LL);
      if ( v19[0] )
        return (unsigned int)VWPLAddBase(v17, (unsigned __int64)v19[0], a1, 5u, v18);
      else
        VWPLRemoveBase(v17, 0LL, a1, v16, 0LL);
    }
    return v4;
  }
  return result;
}
