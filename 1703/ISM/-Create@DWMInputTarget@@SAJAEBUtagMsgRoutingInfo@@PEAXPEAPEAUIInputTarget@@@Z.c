/*
 * XREFs of ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z @ 0x180019FE4
 * Callers:
 *     ?CreateRoutingTarget@GestureTargetingTarget@@AEAAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z @ 0x1800105C4 (-CreateRoutingTarget@GestureTargetingTarget@@AEAAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget.c)
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x180013940 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJIPEAXPEAPEAUIInputTarget@@@Z @ 0x1800141EC (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJIPEAXPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@PEAX@Z @ 0x180019C5C (--0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@PEAX@Z.c)
 *     ?Initialize@DWMInputTarget@@IEAAJXZ @ 0x180019F28 (-Initialize@DWMInputTarget@@IEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputTarget::Create(const struct tagMsgRoutingInfo *a1, void *a2, struct IInputTarget **a3)
{
  int v6; // ebx
  int v7; // r9d
  DWMInputTarget *v8; // rax
  DWMInputTarget *v9; // rbx
  DWMInputTarget *v10; // rdi
  int v11; // eax
  __int64 v12; // rcx

  if ( a3 )
  {
    *a3 = 0LL;
    v8 = (DWMInputTarget *)malloc(0xC8uLL);
    v9 = v8;
    if ( v8 )
      memset(v8, 0, 0xC8uLL);
    if ( v9 )
      v10 = DWMInputTarget::DWMInputTarget(v9, a1, a2);
    else
      v10 = 0LL;
    if ( !v10 )
    {
      v6 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v6;
      v7 = 159;
      goto LABEL_4;
    }
    v11 = DWMInputTarget::Initialize(v10);
    v6 = v11;
    if ( v11 >= 0 )
    {
      *a3 = v10;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v12, &MinInput_Warning_CheckResult, 3, 162, v11);
    }
    if ( v6 < 0 )
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v10 + 5) + 24LL))((__int64)v10 + 40, 1LL);
  }
  else
  {
    v6 = -2147467261;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 150;
LABEL_4:
      Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 3, v7, v6);
    }
  }
  return (unsigned int)v6;
}
