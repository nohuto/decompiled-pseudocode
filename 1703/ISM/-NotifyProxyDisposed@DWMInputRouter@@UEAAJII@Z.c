/*
 * XREFs of ?NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z @ 0x180013540
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetKeys@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@@I@Z @ 0x180018C18 (-GetKeys@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::NotifyProxyDisposed(DWMInputRouter *this, int a2, int a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  int Keys; // eax
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  _OWORD v20[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h]

  v3 = *((unsigned int *)this + 15);
  v7 = 0;
  if ( (_DWORD)v3 )
  {
    v8 = operator new[](saturated_mul(v3, 0x28uLL));
    v10 = v8;
    if ( v8 )
    {
      Keys = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetKeys((char *)this + 48, v8, (unsigned int)v3);
      v7 = Keys;
      if ( Keys >= 0 )
      {
        v13 = 0LL;
        while ( 1 )
        {
          if ( LODWORD(v10[5 * v13]) == a2 && HIDWORD(v10[5 * v13]) == a3 )
          {
            v14 = *(_OWORD *)&v10[5 * v13 + 2];
            v20[0] = *(_OWORD *)&v10[5 * v13];
            v15 = v10[5 * v13 + 4];
            v16 = *((_QWORD *)this + 3);
            v20[1] = v14;
            v21 = v15;
            v17 = (*(__int64 (__fastcall **)(char *, _OWORD *))(v16 + 32))((char *)this + 24, v20);
            v7 = v17;
            if ( v17 < 0 )
              break;
          }
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= (unsigned int)v3 )
          {
            operator delete(v10);
            return v7;
          }
        }
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v18, &MinInput_Warning_CheckResult, 0, 812, v17);
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v12, &MinInput_Warning_CheckResult, 0, 800, Keys);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 795, 14);
    }
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return v7;
}
