/*
 * XREFs of RemoveProcessFromJob @ 0x14018E740
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall RemoveProcessFromJob(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // di
  bool v4; // si
  bool v5; // bp
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 i; // rdx
  bool v10; // si
  __int64 v12; // rdx
  bool v14; // si
  bool v15; // bp
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx

  v1 = *(_QWORD *)(a1 + 752);
  v3 = 1;
  v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      8,
      18,
      (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
      a1,
      v1);
  }
  if ( !v1 )
    return 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)(v1 + 36) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v3 = 0;
      }
      v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v19 = W32GetUserSessionState(WPP_GLOBAL_Control, i);
        LOBYTE(v20) = v10;
        LOBYTE(v21) = v3;
        WPP_RECORDER_AND_TRACE_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v20,
          *(_QWORD *)(v19 + 69152),
          4,
          8,
          20,
          (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
          a1,
          v1);
      }
      return 0LL;
    }
    if ( a1 == *(_QWORD *)(*(_QWORD *)(v1 + 48) + 8 * i) )
      break;
  }
  *(_QWORD *)(a1 + 752) = 0LL;
  memmove(
    (void *)(*(_QWORD *)(v1 + 48) + 8 * i),
    (const void *)(*(_QWORD *)(v1 + 48) + 8 * i + 8),
    8LL * (unsigned int)(*(_DWORD *)(v1 + 36) + ~(_DWORD)i));
  if ( (*(_DWORD *)(v1 + 36))-- == 1 )
  {
    Win32FreePool(*(void **)(v1 + 48));
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_DWORD *)(v1 + 40) = 0;
  }
  v14 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
    LOBYTE(v17) = v15;
    LOBYTE(v18) = v14;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(v16 + 69152),
      4,
      8,
      19,
      (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
      a1,
      v1);
  }
  return 1LL;
}
