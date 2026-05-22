/*
 * XREFs of ?HitTestInternal@MPCInputRouter@@AEAAJPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180084550
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180084410 (-HitTest@MPCInputRouter@@UEAAJPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800117DC (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::HitTestInternal(MPCInputRouter *this, struct tagDITCALLBACKSTRUCT *a2)
{
  signed int v4; // ebx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[40]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v10[1] = -2LL;
  if ( ((1LL << gdwDeviceFamily) & 0x400) != 0 )
    *((_DWORD *)a2 + 46) = *((_DWORD *)this + 259);
  v4 = (***((unsigned __int8 (__fastcall ****)(_QWORD))this + 23))(*((_QWORD *)this + 23)) == 0 ? 0x80004005 : 0;
  if ( *((_BYTE *)this + 1032) && v4 < 0 )
  {
    v10[0] = 0LL;
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 121))(
           *((_QWORD *)this + 121),
           &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
           v10) >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 80LL))(v10[0]);
      if ( v5 )
      {
        v6 = NtDuplicateCompositionInputSink(v5, (char *)a2 + 32);
        if ( v6 < 0 )
        {
          wil::details::in1diag3::_FailFast_NtStatus(
            retaddr,
            (void *)0x134,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v6);
          __debugbreak();
        }
      }
      *((_DWORD *)a2 + 42) &= ~1u;
      *((_DWORD *)a2 + 31) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 72LL))(v10[0]);
      v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v10[0] + 96LL))(v10[0], v11);
      *((_OWORD *)a2 + 8) = *(_OWORD *)v7;
      *((_OWORD *)a2 + 9) = *(_OWORD *)(v7 + 16);
      *((_QWORD *)a2 + 20) = *(_QWORD *)(v7 + 32);
      v4 = 0;
    }
    v8 = v10[0];
    if ( v10[0] )
    {
      v10[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return (unsigned int)v4;
}
