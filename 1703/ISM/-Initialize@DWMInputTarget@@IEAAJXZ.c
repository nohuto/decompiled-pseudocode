/*
 * XREFs of ?Initialize@DWMInputTarget@@IEAAJXZ @ 0x180019F28
 * Callers:
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z @ 0x180019FE4 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z.c)
 *     ?CreateFromINPUTDEST@DWMInputTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z @ 0x18001A10C (-CreateFromINPUTDEST@DWMInputTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z.c)
 *     ?UpdateInputTarget@EdgeGestureTarget@@QEAAJIPEAX@Z @ 0x180023D80 (-UpdateInputTarget@EdgeGestureTarget@@QEAAJIPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::Initialize(DWMInputTarget *this)
{
  __int64 **v1; // rsi
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // r9d
  __int64 *v7; // rcx
  __int64 v8; // rax

  v1 = (__int64 **)((char *)this + 56);
  v3 = CoreUICreate((char *)this + 56);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v7 = *v1;
    v8 = **v1;
    if ( *((_BYTE *)this + 132) )
    {
      v3 = (*(__int64 (__fastcall **)(__int64 *, char *, char *))(v8 + 96))(v7, (char *)this + 88, (char *)this + 64);
      v5 = v3;
      if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v6 = 128;
        goto LABEL_11;
      }
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, char *))(v8 + 112))(
             v7,
             *((unsigned int *)this + 16),
             (char *)this + 88);
      v5 = v3;
      if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v6 = 132;
        goto LABEL_11;
      }
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v6 = 124;
LABEL_11:
    Template_qqq(v4, &MinInput_Warning_CheckResult, 3, v6, v3);
  }
  return v5;
}
