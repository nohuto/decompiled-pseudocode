/*
 * XREFs of _ChangeWindowMessageFilterEx @ 0x1C009B5B4
 * Callers:
 *     NtUserChangeWindowMessageFilterEx @ 0x1C009B460 (NtUserChangeWindowMessageFilterEx.c)
 * Callees:
 *     FreeWindowMessageFilter @ 0x1C005583C (FreeWindowMessageFilter.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C0098880 (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C009898C (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C009B338 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C009B730 (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     UIPISQMChangeFilter @ 0x1C009B77C (UIPISQMChangeFilter.c)
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C009B8E4 (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C009B9D0 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C0108B9C (-VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     ?VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C0113A60 (-VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall ChangeWindowMessageFilterEx(struct tagWND *a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v7; // esi
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v10; // r13
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r9d
  void **v14; // r15
  int v15; // r9d
  struct VWPL **v17; // rcx
  int v18; // [rsp+20h] [rbp-48h]
  void **v19[7]; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v20 = 0;
  v7 = a2;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2);
  *(_DWORD *)(a4 + 4) = 0;
  v10 = CurrentProcessWin32Process;
  UIPISQMChangeFilter(CurrentProcessWin32Process);
  if ( gbEnforceUIPI )
  {
    if ( !(unsigned int)ValidateChangeMessageFilter(v10, v7) )
      return 0LL;
    if ( a3 )
    {
      v19[0] = GetWindowMessageFilter(a1);
      v14 = v19[0];
      if ( a3 == 1 )
      {
        v4 = AddMessageToFilter(v19, v7, &v20);
        if ( v4 && v20 )
          *(_DWORD *)(a4 + 4) = 1;
      }
      else
      {
        if ( a3 != 2 )
          return v4;
        v4 = RemoveMessageFromFilter(v19, v7, &v20);
        if ( v4 )
        {
          if ( (unsigned int)IsMessageAllowedByFilterEx(*((void *const **)v10 + 99), v7, 0LL, 0LL)
            || (unsigned int)IsMessageAlwaysAllowedAcrossIL(v7) )
          {
            *(_DWORD *)(a4 + 4) = 3;
          }
          else if ( v20 )
          {
            *(_DWORD *)(a4 + 4) = 2;
          }
        }
      }
      if ( v14 != v19[0] )
      {
        v17 = (struct VWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) + 800LL);
        if ( v19[0] )
          return (unsigned int)VWPLAddBase(v17, (unsigned __int64)v19[0], a1, 5u, v18);
        else
          VWPLRemoveBase(v17, 0LL, a1, v15, 0LL);
      }
      return v4;
    }
    FreeWindowMessageFilter(a1, v11, v12, v13);
  }
  return 1LL;
}
