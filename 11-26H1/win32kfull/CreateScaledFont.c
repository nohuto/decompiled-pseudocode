/*
 * XREFs of CreateScaledFont @ 0x1401D0CC4
 * Callers:
 *     GetWindowNCMetricsForDpi @ 0x1400322BC (GetWindowNCMetricsForDpi.c)
 *     _SystemParametersInfoForDpi @ 0x1401D0720 (_SystemParametersInfoForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1401D087C (GetScaledLogFontForDpi.c)
 *     ?EnsureDpiMetricsForDpi@@YAXPEAUtagDPIMETRICS@@H@Z @ 0x1402A6318 (-EnsureDpiMetricsForDpi@@YAXPEAUtagDPIMETRICS@@H@Z.c)
 *     EnsureDpiServerInfoForDpi @ 0x1402A648C (EnsureDpiServerInfoForDpi.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x140102238 (GreCreateFontIndirectW.c)
 *     GetCharDimensions @ 0x140124F40 (GetCharDimensions.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall CreateScaledFont(Gre::Base *a1, __int64 *a2, __int64 a3, INT a4, _DWORD *a5, _DWORD *a6, __int64 a7)
{
  unsigned int v8; // ebx
  INT v10; // eax
  __int64 FontIndirectW; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 UserSessionState; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int CharDimensions; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  INT a[23]; // [rsp+20h] [rbp-98h] BYREF
  __int16 v26; // [rsp+7Ch] [rbp-3Ch]

  v8 = 0;
  *a2 = 0LL;
  v26 = 0;
  if ( (unsigned int)GreExtGetObjectW(a1, 96, a) )
  {
    a[0] = EngMulDiv(a[0], a4, 96);
    v10 = EngMulDiv(a[1], a4, 96);
    v26 = 257;
    a[1] = v10;
    FontIndirectW = GreCreateFontIndirectW((__int128 *)a);
    *a2 = FontIndirectW;
    v14 = FontIndirectW;
    if ( FontIndirectW )
    {
      if ( a5 || a6 || (v8 = 1, a7) )
      {
        UserSessionState = W32GetUserSessionState(v13, v12);
        v16 = GreSelectFont(*(Gre::Base **)(*(_QWORD *)(UserSessionState + 56968) + 64LL), v14);
        v19 = W32GetUserSessionState(v18, v17);
        CharDimensions = GetCharDimensions(*(HDC *)(*(_QWORD *)(v19 + 56968) + 64LL), a7, a6);
        if ( a5 )
          *a5 = CharDimensions;
        v23 = W32GetUserSessionState(v22, v21);
        GreSelectFont(*(Gre::Base **)(*(_QWORD *)(v23 + 56968) + 64LL), v16);
        return 1;
      }
    }
  }
  return v8;
}
