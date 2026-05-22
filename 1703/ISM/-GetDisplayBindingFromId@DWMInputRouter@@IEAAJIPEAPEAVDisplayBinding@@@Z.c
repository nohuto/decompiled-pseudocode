/*
 * XREFs of ?GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z @ 0x180016D7C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001248C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x1800136A0 (-BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z.c)
 *     ?UnregisterDisplayBinding@DWMInputRouter@@UEAAJI@Z @ 0x180016880 (-UnregisterDisplayBinding@DWMInputRouter@@UEAAJI@Z.c)
 *     ?BindDevicesOfTypeToDisplayBinding@DWMInputRouter@@IEAAJII_N@Z @ 0x180016A5C (-BindDevicesOfTypeToDisplayBinding@DWMInputRouter@@IEAAJII_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::GetDisplayBindingFromId(DWMInputRouter *this, int a2, struct DisplayBinding **a3)
{
  unsigned int v5; // edx
  unsigned int v6; // edi
  unsigned int v7; // r9d
  int v8; // r9d
  unsigned int v10; // r8d
  unsigned int v11; // edx
  __int64 v12; // rbx
  struct DisplayBinding *v13; // rbx

  if ( a2 == *((_DWORD *)this + 200) || (v5 = *((_DWORD *)this + 198), v6 = 0, v7 = 0, !v5) )
  {
LABEL_5:
    v6 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v6;
    v8 = 2218;
    goto LABEL_7;
  }
  while ( *(_DWORD *)(*((_QWORD *)this + 98) + 16LL * v7) != a2 )
  {
    if ( ++v7 >= v5 )
      goto LABEL_5;
  }
  if ( a2 == *((_DWORD *)this + 200) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 116, 87);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v10 = *((_DWORD *)this + 198);
  v11 = 0;
  if ( !v10 )
  {
LABEL_19:
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 133, 5);
    v6 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v6;
    v8 = 2221;
LABEL_7:
    Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v8, 5);
    return v6;
  }
  v12 = *((_QWORD *)this + 98);
  while ( *(_DWORD *)(v12 + 16LL * v11) != a2 )
  {
    if ( ++v11 >= v10 )
      goto LABEL_19;
  }
  v13 = *(struct DisplayBinding **)(v12 + 16LL * v11 + 8);
  (*(void (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v13 + 8LL))(v13);
  *a3 = v13;
  return v6;
}
