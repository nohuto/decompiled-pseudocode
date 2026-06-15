/*
 * XREFs of WPP_SF_dddS @ 0x1800A3D14
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002AF60 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_dddS(
        TRACEHANDLE LoggerHandle,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  const wchar_t *v10; // rcx
  int v12; // [rsp+98h] [rbp+20h] BYREF

  v12 = a4;
  if ( a7 )
  {
    if ( *a7 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a7[v9] );
      v8 = 2 * v9 + 2;
    }
    else
    {
      v8 = 14LL;
    }
  }
  else
  {
    v8 = 10LL;
  }
  if ( a7 )
  {
    v10 = L"<NULL>";
    if ( *a7 )
      v10 = a7;
  }
  else
  {
    v10 = L"NULL";
  }
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
           0x15u,
           &v12,
           4LL,
           &a5,
           4LL,
           &a6,
           4LL,
           v10,
           v8,
           0LL);
}
