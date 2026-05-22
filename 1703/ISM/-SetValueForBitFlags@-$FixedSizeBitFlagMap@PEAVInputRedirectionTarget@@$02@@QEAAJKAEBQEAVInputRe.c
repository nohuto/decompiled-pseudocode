/*
 * XREFs of ?SetValueForBitFlags@?$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$02@@QEAAJKAEBQEAVInputRedirectionTarget@@@Z @ 0x1800831B4
 * Callers:
 *     ?EnableInputRedirection@InputRedirectionComponent@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x180082D60 (-EnableInputRedirection@InputRedirectionComponent@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall FixedSizeBitFlagMap<InputRedirectionTarget *,3>::SetValueForBitFlags(__int64 a1, int a2, _QWORD *a3)
{
  _DWORD *v3; // r9
  unsigned int v4; // ebx
  unsigned int v5; // r11d
  int v7; // r9d
  unsigned int v8; // eax
  _DWORD *i; // r8
  __int64 v10; // rcx

  v3 = (_DWORD *)a1;
  v4 = 0;
  LOBYTE(a1) = 0;
  v5 = 0;
  if ( a2 )
  {
    v8 = 0;
    for ( i = v3; ; i += 4 )
    {
      if ( *i == a2 )
      {
        *(_QWORD *)&v3[4 * v8 + 2] = *a3;
        return v4;
      }
      if ( (a2 & *i) != 0 )
        break;
      if ( !(_BYTE)a1 && !*i )
      {
        v5 = v8;
        LOBYTE(a1) = 1;
      }
      if ( ++v8 >= 3 )
      {
        if ( !(_BYTE)a1 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 145, 5);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v10 = 2LL * v5;
        v3[2 * v10] = a2;
        *(_QWORD *)&v3[2 * v10 + 2] = *a3;
        return v4;
      }
    }
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v4;
    v7 = 126;
    goto LABEL_4;
  }
  v4 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 111;
LABEL_4:
    Template_qqq(a1, &MinInput_Warning_CheckResult, 0, v7, 87);
  }
  return v4;
}
