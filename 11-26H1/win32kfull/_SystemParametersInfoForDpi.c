/*
 * XREFs of _SystemParametersInfoForDpi @ 0x1401D0720
 * Callers:
 *     NtUserSystemParametersInfoForDpi @ 0x1401D0590 (NtUserSystemParametersInfoForDpi.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetWindowNCMetricsForDpi @ 0x1400322BC (GetWindowNCMetricsForDpi.c)
 *     DeleteMetricsFont @ 0x14010FB44 (DeleteMetricsFont.c)
 *     GetScaledLogFontForDpi @ 0x1401D087C (GetScaledLogFontForDpi.c)
 *     GetDPIMETRICSForDpiUnsafe @ 0x1401D0AE8 (GetDPIMETRICSForDpiUnsafe.c)
 *     CreateScaledFont @ 0x1401D0CC4 (CreateScaledFont.c)
 *     Get96DpiMetrics @ 0x140302300 (Get96DpiMetrics.c)
 */

__int64 __fastcall SystemParametersInfoForDpi(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v11; // ebp
  __int64 DPIMETRICSForDpiUnsafe; // rax
  int v13; // r14d
  Gre::Base *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // eax
  Gre::Base *v18; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0;
  switch ( a1 )
  {
    case 41:
      if ( *(_DWORD *)a3 == 504 )
        return (unsigned int)GetWindowNCMetricsForDpi(a3, a5);
LABEL_19:
      UserSetLastError(87);
      return v5;
    case 31:
      v11 = 0;
      DPIMETRICSForDpiUnsafe = GetDPIMETRICSForDpiUnsafe(a5);
      v18 = 0LL;
      v13 = 0;
      if ( DPIMETRICSForDpiUnsafe )
      {
        v14 = *(Gre::Base **)(DPIMETRICSForDpiUnsafe + 64);
      }
      else
      {
        v15 = Get96DpiMetrics();
        v17 = CreateScaledFont(*(_QWORD *)(v15 + 64), &v18, v16, a5, 0LL, 0LL, 0LL);
        v14 = v18;
        v13 = v17;
      }
      if ( v14 && (unsigned int)GreExtGetObjectW(v14, 92, (_WORD *)a3) )
        v11 = 1;
      if ( v13 )
        DeleteMetricsFont(v14);
      return (unsigned int)v11;
    case 45:
      if ( *(_DWORD *)a3 == 108 )
      {
        *(_DWORD *)(a3 + 4) = GetDpiDependentMetric(18, a5);
        *(_DWORD *)(a3 + 8) = GetDpiDependentMetric(19, a5);
        *(_DWORD *)(a3 + 12) = (*(_DWORD *)(W32GetUserSessionState(v8, v7) + 66792) >> 21) & 1;
        return (unsigned int)GetScaledLogFontForDpi(0LL, a5, a3 + 16);
      }
      goto LABEL_19;
  }
  return v5;
}
