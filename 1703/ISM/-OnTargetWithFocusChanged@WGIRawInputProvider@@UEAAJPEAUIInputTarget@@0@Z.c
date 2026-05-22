/*
 * XREFs of ?OnTargetWithFocusChanged@WGIRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180060E80
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJK@Z @ 0x18006120C (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::OnTargetWithFocusChanged(
        WGIRawInputProvider *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // r9d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF

  v12 = 0;
  if ( a3 )
  {
    v13 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
           a3,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v13);
    if ( v4 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_6;
      v6 = 173;
      goto LABEL_5;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 32LL))(v13, &v12);
    if ( v4 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_6:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v6 = 175;
LABEL_5:
      Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v6, v4);
      goto LABEL_6;
    }
    v7 = v13;
    v13 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = WGIRawInputProvider::SetInputFocusProcess((WGIRawInputProvider *)((char *)this - 8), v12);
  v10 = v8;
  if ( v8 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 178, v8);
  return v10;
}
