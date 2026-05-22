/*
 * XREFs of ?OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z @ 0x180032440
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1800347E8 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?GetKeys@?$FixedSizeMap@G_N$0BI@@@QEAAJAEAY0BI@GPEAI@Z @ 0x180035C3C (-GetKeys@-$FixedSizeMap@G_N$0BI@@@QEAAJAEAY0BI@GPEAI@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::OnAutoRepeatTimerStatic(ControllerProcessor *this)
{
  int v2; // ebx
  int v3; // r9d
  int Keys; // eax
  int v5; // r9d
  __int64 v6; // rdi
  unsigned int v8; // [rsp+30h] [rbp-48h] BYREF
  _WORD v9[24]; // [rsp+38h] [rbp-40h] BYREF

  if ( !this )
  {
    LOBYTE(v2) = -1;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_22;
    v3 = 392;
    goto LABEL_21;
  }
  memset(v9, 0, sizeof(v9));
  v8 = 0;
  Keys = FixedSizeMap<unsigned short,bool,24>::GetKeys((char *)this + 64, v9, &v8);
  v2 = Keys;
  if ( Keys < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_15;
    v5 = 2317;
    goto LABEL_14;
  }
  v6 = 0LL;
  if ( v8 )
  {
    while ( 1 )
    {
      Keys = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, v9[v6], 1);
      v2 = Keys;
      if ( Keys < 0 )
        break;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v8 )
        goto LABEL_10;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    {
LABEL_15:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v5 = 2325;
LABEL_14:
    Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 12, v5, Keys);
    goto LABEL_15;
  }
LABEL_10:
  if ( !v8 )
  {
    Keys = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 96LL))(*((_QWORD *)this + 35));
    v2 = Keys;
    if ( Keys < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_15;
      v5 = 2330;
      goto LABEL_14;
    }
  }
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_22;
    v3 = 397;
LABEL_21:
    Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 12, v3, v2);
LABEL_22:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return (unsigned int)v2;
}
