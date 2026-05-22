/*
 * XREFs of ?SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAXIIPEAI@Z @ 0x18000DB24
 * Callers:
 *     SetManipulationInputTarget @ 0x180005680 (SetManipulationInputTarget.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     Template_qqqqq @ 0x18000D49C (Template_qqqqq.c)
 *     Template_qq @ 0x18000D5D4 (Template_qq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

int __fastcall GestureTargetingComponent::SetManipulationInputTargetStatic(
        int a1,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5)
{
  int *v5; // rdi
  int v6; // r12d
  unsigned __int64 v9; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  int *v19; // rdi
  unsigned __int64 v20; // rax
  void *v21; // rax
  void *v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // ebx
  int result; // eax
  unsigned __int64 v27; // [rsp+40h] [rbp-88h]
  __int64 v28; // [rsp+48h] [rbp-80h] BYREF
  void *Src; // [rsp+50h] [rbp-78h]
  _BYTE v30[40]; // [rsp+58h] [rbp-70h] BYREF

  v5 = (int *)a5;
  v6 = 0;
  v28 = 0LL;
  v9 = a4;
  Src = a5;
  memset(v30, 0, sizeof(v30));
  if ( !GestureTargetingComponent::s_pMessageSession )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v11, &MinInput_Warning_CheckResult, 4, 207, 255);
    goto LABEL_25;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
  {
    Template_qqqqq(v11, &MinInput_Log_PointerFrameRouting, v12, a1, (char)a2, a3, v9);
    v13 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    {
      if ( (_DWORD)v9 )
      {
        v14 = v9;
        v27 = v9;
        do
        {
          if ( (v13 & 4) != 0 )
          {
            Template_qq(v14, &MinInput_Log_PointerFrameRouting_PointerId, 4, *v5);
            v13 = Microsoft_OneCore_MinInputEnableBits;
            v14 = v27;
          }
          ++v5;
          v27 = --v14;
        }
        while ( v14 );
      }
    }
  }
  if ( a3
    && (*(int (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)GestureTargetingComponent::s_pMessageSession + 112LL))(
         GestureTargetingComponent::s_pMessageSession,
         a3,
         v30) < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      Template_qqqqq(v15, &MinInput_Log_PointerFrameRouting_InvalidEndpoint, v16, a1, (char)a2, a3, v9);
    v6 = -1073741816;
  }
  else if ( a2 )
  {
    v6 = NtDuplicateCompositionInputSink(a2, &v28);
    if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      Template_qqqqq(v17, &MinInput_Log_PointerFrameRouting_InvalidInputSink, v18, a1, (char)a2, a3, v9);
  }
  v19 = (int *)operator new(0x58uLL);
  memset(v19, 0, 0x58uLL);
  *v19 = a1;
  *((_QWORD *)v19 + 1) = a2;
  *((_QWORD *)v19 + 2) = v28;
  v19[6] = a3;
  v20 = 4 * v9;
  *((_OWORD *)v19 + 2) = *(_OWORD *)v30;
  *((_OWORD *)v19 + 3) = *(_OWORD *)&v30[16];
  if ( !is_mul_ok(v9, 4uLL) )
    v20 = -1LL;
  *((_QWORD *)v19 + 8) = *(_QWORD *)&v30[32];
  v19[18] = v9;
  v21 = operator new[](v20);
  v22 = Src;
  *((_QWORD *)v19 + 10) = v21;
  memcpy_0(v21, v22, 4 * v9);
  v23 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), int *, __int64))(*(_QWORD *)GestureTargetingComponent::s_pMessageSession
                                                                                           + 128LL))(
          GestureTargetingComponent::s_pMessageSession,
          GestureTargetingComponent::RouteInputToTargetStatic,
          v19,
          4LL);
  v25 = v23;
  if ( v23 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v24, &MinInput_Warning_CheckResult, 4, 280, v23);
LABEL_25:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  result = v6 | 0x10000000;
  if ( v6 >= 0 )
    return v25;
  return result;
}
