/*
 * XREFs of ?GetDisplayInformation@ControllerProcessor@@AEAAJXZ @ 0x1800328EC
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180031DA8 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800326C0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::GetDisplayInformation(ControllerProcessor *this)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  int v6; // r9d
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3));
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 80LL))(v2, *((_QWORD *)this + 4), &v14);
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_19;
    v6 = 581;
LABEL_4:
    Template_qqq(v4, &MinInput_Warning_CheckResult, 12, v6, v3);
    goto LABEL_19;
  }
  v7 = v14;
  if ( v14 != *((_QWORD *)this + 5) )
  {
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v8 = *((_QWORD *)this + 5);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 5) = v7;
  }
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
  {
    v12 = 0;
    v13 = 0;
    v3 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v9 + 32LL))(v9, &v12, &v13);
    v5 = v3;
    if ( v3 >= 0 )
    {
      *((_DWORD *)this + 81) = v12;
      *((_DWORD *)this + 82) = v13;
      goto LABEL_19;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_19;
    v6 = 599;
    goto LABEL_4;
  }
  v5 = -2147467261;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(0LL, &MinInput_Warning_CheckResult, 12, 592, 3);
LABEL_19:
  v10 = v14;
  v14 = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v5;
}
