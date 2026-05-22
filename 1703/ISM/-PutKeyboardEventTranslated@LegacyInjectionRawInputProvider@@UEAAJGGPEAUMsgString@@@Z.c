/*
 * XREFs of ?PutKeyboardEventTranslated@LegacyInjectionRawInputProvider@@UEAAJGGPEAUMsgString@@@Z @ 0x18006FA10
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::PutKeyboardEventTranslated(
        LegacyInjectionRawInputProvider *this,
        __int64 a2,
        __int64 a3,
        struct MsgString *a4)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int16 v8; // [rsp+20h] [rbp-28h]
  __int16 v9; // [rsp+28h] [rbp-20h]

  v9 = -2;
  v8 = -2;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct MsgString *, __int16, __int16, _DWORD))(**((_QWORD **)this + 12) + 56LL))(
         *((_QWORD *)this + 12),
         a2,
         a3,
         a4,
         v8,
         v9,
         0);
  v6 = v4;
  if ( v4 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 560, v4);
  return v6;
}
