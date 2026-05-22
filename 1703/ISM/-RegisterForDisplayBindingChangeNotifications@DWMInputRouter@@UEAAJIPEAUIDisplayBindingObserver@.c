/*
 * XREFs of ?RegisterForDisplayBindingChangeNotifications@DWMInputRouter@@UEAAJIPEAUIDisplayBindingObserver@@@Z @ 0x180016990
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetMatchingDeviceBindingIndex@DWMInputRouter@@IEAAJIPEAH@Z @ 0x180016ECC (-GetMatchingDeviceBindingIndex@DWMInputRouter@@IEAAJIPEAH@Z.c)
 *     ??$emplace_back@AEBQEAVPropertyNode@Input@@@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@QEAAXAEBQEAVPropertyNode@Input@@@Z @ 0x1800190A8 (--$emplace_back@AEBQEAVPropertyNode@Input@@@-$vector@PEAVPropertyNode@Input@@V-$allocator@PEAVPr.c)
 */

__int64 __fastcall DWMInputRouter::RegisterForDisplayBindingChangeNotifications(
        DWMInputRouter *this,
        unsigned int a2,
        struct IDisplayBindingObserver *a3)
{
  int MatchingDeviceBindingIndex; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  struct IDisplayBindingObserver **i; // rax
  int v11; // [rsp+40h] [rbp+8h] BYREF
  struct IDisplayBindingObserver *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v11 = -1;
  MatchingDeviceBindingIndex = DWMInputRouter::GetMatchingDeviceBindingIndex(
                                 (DWMInputRouter *)((char *)this - 48),
                                 a2,
                                 &v11);
  v7 = MatchingDeviceBindingIndex;
  if ( MatchingDeviceBindingIndex >= 0 )
  {
    v8 = 88 * (v11 + 3LL);
    for ( i = *(struct IDisplayBindingObserver ***)((char *)this + v8); ; ++i )
    {
      if ( i == *(struct IDisplayBindingObserver ***)((char *)this + v8 + 8) )
      {
        std::vector<Input::PropertyNode *>::emplace_back<Input::PropertyNode * const &>(
          (char *)this + 88 * v11 + 264,
          &v12);
        return v7;
      }
      if ( *i == a3 )
        break;
    }
    v7 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 2112, 87);
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 2105, MatchingDeviceBindingIndex);
  }
  return v7;
}
