/*
 * XREFs of ?s_OnKernelInputEventStatic@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z @ 0x18006A9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KernelInputConnection<tagQMSGINPUTREPORT>::s_OnKernelInputEventStatic(
        __int64 a1,
        __int64 a2,
        int a3,
        const char *a4)
{
  __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a3 != 120 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4C,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\KernelInputConnection\\KernelInputConnection.h",
      a4);
    JUMPOUT(0x18006AA1ELL);
  }
  v4 = *(_QWORD *)(a1 + 120);
  v7 = a2;
  if ( !v4 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 16LL))(v4, &v7);
  return 0LL;
}
