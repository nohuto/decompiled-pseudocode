/*
 * XREFs of _ChangeWindowMessageFilterEx @ 0x14012BF48
 * Callers:
 *     NtUserChangeWindowMessageFilterEx @ 0x14012A3A0 (NtUserChangeWindowMessageFilterEx.c)
 * Callees:
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x14012EF8C (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14012EFF0 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1401BB0C4 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 *     FreeWindowMessageFilter @ 0x1401C0FCC (FreeWindowMessageFilter.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1401C1018 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1401D1644 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1401E5364 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1401ED19C (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x140209734 (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ChangeWindowMessageFilterEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 CurrentProcessWin32Process; // rax
  void *const **v10; // rsi
  UIPrivilegeIsolation *v11; // rcx
  __int64 result; // rax
  void **v13; // r12
  int v14; // r9d
  struct tagVWPL **v15; // rcx
  int v16; // [rsp+20h] [rbp-48h]
  void **v17[7]; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v18 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v10 = (void *const **)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = (void *const **)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  *(_DWORD *)(a4 + 4) = 0;
  if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline()
    && !UIPrivilegeIsolation::Enforced(v11) )
  {
    return 1LL;
  }
  result = ValidateChangeMessageFilter((struct tagPROCESSINFO *)v10, a2);
  if ( (_DWORD)result )
  {
    if ( !a3 )
    {
      FreeWindowMessageFilter(a1);
      return 1LL;
    }
    v17[0] = GetWindowMessageFilter(a1);
    v13 = v17[0];
    if ( a3 == 1 )
    {
      v4 = AddMessageToFilter(v17, a2, &v18);
      if ( v4 && v18 )
        *(_DWORD *)(a4 + 4) = 1;
    }
    else
    {
      if ( a3 != 2 )
        return v4;
      v4 = RemoveMessageFromFilter(v17, a2, &v18);
      if ( v4 )
      {
        if ( (unsigned int)IsMessageAllowedByFilterEx(v10[105], a2, 0LL, 0LL)
          || (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2) )
        {
          *(_DWORD *)(a4 + 4) = 3;
        }
        else if ( v18 )
        {
          *(_DWORD *)(a4 + 4) = 2;
        }
      }
    }
    if ( v13 != v17[0] )
    {
      v15 = (struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 848LL);
      if ( v17[0] )
        return (unsigned int)VWPLAddBase(v15, (unsigned __int64)v17[0], a1, 5u, v16);
      else
        VWPLRemoveBase(v15, 0LL, a1, v14, 0LL);
    }
    return v4;
  }
  return result;
}
