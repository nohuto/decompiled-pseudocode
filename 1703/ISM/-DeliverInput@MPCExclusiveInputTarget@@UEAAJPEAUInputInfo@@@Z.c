/*
 * XREFs of ?DeliverInput@MPCExclusiveInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180087640
 * Callers:
 *     ?DeliverInput@MPCExclusiveInputTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x180088360 (-DeliverInput@MPCExclusiveInputTarget@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Template_qqqq @ 0x180005870 (Template_qqqq.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCExclusiveInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180086E34 (-MPCExclusiveInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCExclusiveInputTarget::DeliverInput(
        MPCExclusiveInputTarget *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  unsigned int v7; // esi
  struct IInputTarget *v9; // rdi
  _DWORD *v10; // rcx
  ISMTracing *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      a4);
    __debugbreak();
  }
  if ( !*((_DWORD *)a2 + 10) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      a4);
    __debugbreak();
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    Template_qqqq((__int64)this, &MinInput_Log_InputInfo, 8, *(_DWORD *)a2, *((_DWORD *)a2 + 1), *((_DWORD *)a2 + 2));
  if ( !*((_QWORD *)this + 6) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      a4);
    JUMPOUT(0x180087768LL);
  }
  *((_QWORD *)a2 + 69) = *((_QWORD *)this + 8);
  *((_DWORD *)a2 + 156) = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 6) + 24LL))(
         *((_QWORD *)this + 6),
         a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = (struct IInputTarget *)*((_QWORD *)this + 6);
    v10 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v10 )
    {
      if ( *v10 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCExclusiveInputTarget_DeliverInput_(v11, v9, a2);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xD0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
