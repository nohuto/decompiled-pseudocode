/*
 * XREFs of WPP_SF_Sdx @ 0x1800A3C64
 * Callers:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18002B7C0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_Sdx(TRACEHANDLE a1, _DWORD a2, _DWORD a3, const wchar_t *a4, ...)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  const wchar_t *v6; // rax
  __int64 v8; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v8 = va_arg(va1, _QWORD);
  if ( a4 )
  {
    if ( *a4 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( a4[v5] );
      v4 = 2 * v5 + 2;
    }
    else
    {
      v4 = 14LL;
    }
  }
  else
  {
    v4 = 10LL;
  }
  if ( a4 )
  {
    v6 = L"<NULL>";
    if ( *a4 )
      v6 = a4;
  }
  else
  {
    v6 = L"NULL";
  }
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
           0x1Eu,
           v6,
           v4,
           va,
           4LL,
           va1,
           8LL,
           0LL);
}
