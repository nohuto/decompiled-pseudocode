/*
 * XREFs of ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x180034670
 * Callers:
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180033154 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x18003332C (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1800347E8 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?RemoveKey@?$FixedSizeMap@G_N$0BI@@@QEAAJAEBG@Z @ 0x180035BD8 (-RemoveKey@-$FixedSizeMap@G_N$0BI@@@QEAAJAEBG@Z.c)
 *     ?GetKeys@?$FixedSizeMap@G_N$0BI@@@QEAAJAEAY0BI@GPEAI@Z @ 0x180035C3C (-GetKeys@-$FixedSizeMap@G_N$0BI@@@QEAAJAEAY0BI@GPEAI@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall ControllerProcessor::LiftPressedVirtualKeys(ControllerProcessor *this, char a2)
{
  int Keys; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 i; // rbp
  unsigned __int16 v8; // si
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r9d
  unsigned __int16 v13[2]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-64h] BYREF
  _WORD v15[24]; // [rsp+38h] [rbp-60h] BYREF

  memset(v15, 0, sizeof(v15));
  v14 = 0;
  Keys = FixedSizeMap<unsigned short,bool,24>::GetKeys((char *)this + 64, v15, &v14);
  v6 = Keys;
  if ( Keys < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v5, &MinInput_Warning_CheckResult, 12, 1662, Keys);
    if ( IsDebuggerPresent() )
      __debugbreak();
    goto LABEL_25;
  }
  for ( i = 0LL; (unsigned int)i < v14; i = (unsigned int)(i + 1) )
  {
    v8 = v15[i];
    v13[0] = v8;
    if ( a2 )
    {
      if ( v8 == 196 || v8 == 7 || v8 == 208 )
        continue;
    }
    else if ( (unsigned __int16)(v8 - 37) > 3u )
    {
      continue;
    }
    v9 = FixedSizeMap<unsigned short,bool,24>::RemoveKey((char *)this + 64, v13);
    if ( v9 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v11 = 1671;
LABEL_22:
        Template_qqq(v10, &MinInput_Warning_CheckResult, 12, v11, v9);
      }
LABEL_23:
      if ( IsDebuggerPresent() )
        __debugbreak();
LABEL_25:
      __fastfail(7u);
    }
    v9 = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, v8, 0);
    v6 = v9;
    if ( v9 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v11 = 1675;
        goto LABEL_22;
      }
      goto LABEL_23;
    }
  }
  return v6;
}
