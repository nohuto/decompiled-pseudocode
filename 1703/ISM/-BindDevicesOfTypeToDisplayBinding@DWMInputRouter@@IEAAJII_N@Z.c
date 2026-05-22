/*
 * XREFs of ?BindDevicesOfTypeToDisplayBinding@DWMInputRouter@@IEAAJII_N@Z @ 0x180016A5C
 * Callers:
 *     ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x1800136A0 (-BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z.c)
 *     ?BindDevicesOfTypeToDisplay@DWMInputRouter@@UEAAJII@Z @ 0x180016A50 (-BindDevicesOfTypeToDisplay@DWMInputRouter@@UEAAJII@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z @ 0x180016D7C (-GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z.c)
 *     ?GetMatchingDeviceBindingIndex@DWMInputRouter@@IEAAJIPEAH@Z @ 0x180016ECC (-GetMatchingDeviceBindingIndex@DWMInputRouter@@IEAAJIPEAH@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::BindDevicesOfTypeToDisplayBinding(
        DWMInputRouter *this,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  struct DisplayBinding *v7; // rbx
  unsigned int v8; // r14d
  int DisplayBindingFromId; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  signed int v15; // r14d
  int MatchingDeviceBindingIndex; // eax
  __int64 v17; // rcx
  int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rcx
  unsigned int v24; // r13d
  char *v25; // r15
  _QWORD *v26; // rsi
  _QWORD *i; // rdi
  unsigned int v29; // [rsp+30h] [rbp-20h] BYREF
  struct DisplayBinding *v30; // [rsp+38h] [rbp-18h] BYREF
  void *Block[2]; // [rsp+40h] [rbp-10h] BYREF
  int v32; // [rsp+88h] [rbp+38h] BYREF

  Block[1] = (void *)-2LL;
  v32 = -1;
  v7 = 0LL;
  v30 = 0LL;
  if ( !a2 )
  {
    v8 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 2140, 87);
    goto LABEL_49;
  }
  DisplayBindingFromId = DWMInputRouter::GetDisplayBindingFromId(this, a3, &v30);
  v8 = DisplayBindingFromId;
  if ( DisplayBindingFromId < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 2144, DisplayBindingFromId);
    v7 = v30;
    goto LABEL_49;
  }
  v7 = v30;
  if ( (gdwMitConfig & 1) != 0 && ((1LL << gdwDeviceFamily) & 0x1DB5) != 0 )
  {
    Block[0] = 0LL;
    v29 = 0;
    v11 = (a2 >> 1) & 1 | 8;
    if ( (a2 & 0x20) == 0 )
      v11 = (a2 >> 1) & 1;
    v12 = (*(__int64 (__fastcall **)(struct DisplayBinding *, void **, unsigned int *))(*(_QWORD *)v30 + 56LL))(
            v30,
            Block,
            &v29);
    if ( v12 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v13, &MinInput_Warning_CheckResult, 0, 2165, v12);
      goto LABEL_15;
    }
    if ( !(unsigned int)MITBindInputTypeToMonitors(v11, v29, Block[0]) )
    {
      v15 = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
      if ( v15 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 2169, v15);
LABEL_15:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
    operator delete(Block[0]);
  }
  MatchingDeviceBindingIndex = DWMInputRouter::GetMatchingDeviceBindingIndex(this, a2, &v32);
  v8 = MatchingDeviceBindingIndex;
  if ( MatchingDeviceBindingIndex < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_49;
    v18 = 2178;
LABEL_48:
    Template_qqq(v17, &MinInput_Warning_CheckResult, 0, v18, MatchingDeviceBindingIndex);
    goto LABEL_49;
  }
  if ( a4 )
  {
    v19 = *((_QWORD *)this + 11 * v32 + 38);
    if ( v19 )
    {
      v20 = *((_QWORD *)this + 6);
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
      MatchingDeviceBindingIndex = (*(__int64 (__fastcall **)(char *, _QWORD))(v20 + 48))((char *)this + 48, v21);
      v8 = MatchingDeviceBindingIndex;
      if ( MatchingDeviceBindingIndex < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_49;
        v18 = 2182;
        goto LABEL_48;
      }
    }
  }
  v22 = 88LL * v32;
  if ( v7 )
    (*(void (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v7 + 8LL))(v7);
  v23 = *(_QWORD *)((char *)this + v22 + 304);
  *(_QWORD *)((char *)this + v22 + 304) = v7;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  *(_DWORD *)((char *)this + v22 + 248) = 0;
  *(_DWORD *)((char *)this + v22 + 252) = a2;
  v24 = 0;
  v25 = (char *)this + 252;
  do
  {
    if ( (a2 & *(_DWORD *)v25) != 0 )
    {
      v26 = *(_QWORD **)(v25 + 68);
      for ( i = *(_QWORD **)(v25 + 60); i != v26; ++i )
      {
        MatchingDeviceBindingIndex = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DisplayBinding *))(*(_QWORD *)*i + 24LL))(
                                       *i,
                                       a2,
                                       v7);
        v8 = MatchingDeviceBindingIndex;
        if ( MatchingDeviceBindingIndex < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_49;
          v18 = 2199;
          goto LABEL_48;
        }
      }
    }
    ++v24;
    v25 += 88;
  }
  while ( v24 < 5 );
LABEL_49:
  if ( v7 )
    (*(void (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
