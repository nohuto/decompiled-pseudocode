/*
 * XREFs of ?UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18003444C
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800326C0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1800358DC (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::UpdatePointerTimer(ControllerProcessor *this, struct InputInfo *a2)
{
  char v3; // di
  bool v4; // r14
  bool v5; // bp
  bool v6; // si
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // esi
  int v10; // r9d
  char v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = 1;
  if ( !*((_BYTE *)a2 + 768) )
  {
    v4 = COERCE_DOUBLE(*((_QWORD *)a2 + 92) & _xmm) <= 0.239532470703125
      && COERCE_DOUBLE(*((_QWORD *)a2 + 93) & _xmm) <= 0.239532470703125;
    v5 = COERCE_DOUBLE(*((_QWORD *)a2 + 94) & _xmm) <= 0.265167236328125
      && COERCE_DOUBLE(*((_QWORD *)a2 + 95) & _xmm) <= 0.265167236328125;
    v6 = COERCE_DOUBLE(*((_QWORD *)a2 + 90) & _xmm) <= 0.1171875
      && COERCE_DOUBLE(*((_QWORD *)a2 + 91) & _xmm) <= 0.1171875;
    if ( v5 && !*((_BYTE *)this + 368) && *((_DWORD *)this + 302) == 1 )
      ControllerProcessor::TryUpdateInteractionType(this, 0LL);
    if ( v6 && ((*((_DWORD *)this + 302) - 16) & 0xFFFFFFEF) == 0 )
      ControllerProcessor::TryUpdateInteractionType(this, 0LL);
    if ( v4 && v5 && v6 )
      v3 = 0;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 36) + 24LL))(*((_QWORD *)this + 36), &v12);
  v9 = v7;
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_35;
    v10 = 1620;
    goto LABEL_34;
  }
  if ( v3 )
  {
    if ( !*((_DWORD *)this + 59) && !v12 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 36) + 80LL))(
             *((_QWORD *)this + 36),
             0LL,
             166666LL);
      v9 = v7;
      if ( v7 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_35;
        v10 = 1626;
LABEL_34:
        Template_qqq(v8, &MinInput_Warning_CheckResult, 12, v10, v7);
LABEL_35:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
  }
  return v9;
}
