/*
 * XREFs of ?SetIsNonPrimaryDeviceInActiveSession@SessionBasedPointerDeviceArbitration@@AEAAJK_N@Z @ 0x18005E920
 * Callers:
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x18005E99C (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall SessionBasedPointerDeviceArbitration::SetIsNonPrimaryDeviceInActiveSession(
        SessionBasedPointerDeviceArbitration *this,
        int a2,
        char a3)
{
  int v3; // eax
  _DWORD *v4; // r9
  unsigned int v5; // ebx
  unsigned int i; // r10d

  v3 = -1;
  v4 = (_DWORD *)((char *)this + 24);
  v5 = 0;
  for ( i = 0; i < 0x14; ++i )
  {
    if ( *v4 == a2 )
    {
      if ( !a3 )
        *v4 = 0;
    }
    else if ( !*v4 && v3 == -1 )
    {
      v3 = i;
    }
    ++v4;
  }
  if ( a3 )
  {
    if ( v3 == -1 )
    {
      v5 = -2147418113;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 69, 255);
    }
    else
    {
      *((_DWORD *)this + v3 + 6) = a2;
    }
  }
  return v5;
}
