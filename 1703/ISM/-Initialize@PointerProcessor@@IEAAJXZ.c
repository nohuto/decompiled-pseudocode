/*
 * XREFs of ?Initialize@PointerProcessor@@IEAAJXZ @ 0x18005D9F8
 * Callers:
 *     ?Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z @ 0x180057D04 (-Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z.c)
 *     ?Initialize@MouseProcessor@@IEAAJPEBGJ@Z @ 0x180058C14 (-Initialize@MouseProcessor@@IEAAJPEBGJ@Z.c)
 *     ?Create@PointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18005D940 (-Create@PointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18005FB60 (-Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x18003BD50 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PointerProcessor::Initialize(PointerProcessor *this)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // r9d
  __int64 v7; // rax

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3));
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v2 + 80LL))(
         v2,
         *((_QWORD *)this + 4),
         (char *)this + 40);
  v5 = v3;
  if ( v3 >= 0 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v3 = KeyboardModifierState::Create((struct KeyboardModifierState **)this + 9);
      v5 = v3;
      if ( v3 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3));
        v3 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 72LL))(v7, (char *)this + 48);
        v5 = v3;
        if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v6 = 78;
          goto LABEL_13;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v6 = 76;
        goto LABEL_13;
      }
    }
    else
    {
      v5 = -2147418113;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 73, 255);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v6 = 69;
LABEL_13:
    Template_qqq(v4, &MinInput_Warning_CheckResult, 0, v6, v3);
  }
  return v5;
}
