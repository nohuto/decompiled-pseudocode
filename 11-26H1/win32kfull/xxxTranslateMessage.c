/*
 * XREFs of xxxTranslateMessage @ 0x14005BDE8
 * Callers:
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 *     NtUserTranslateMessage @ 0x14005BD50 (NtUserTranslateMessage.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402F4BF4 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1402FAAB4 (xxxHelpLoop.c)
 * Callees:
 *     _PostMessageExtended @ 0x140020024 (_PostMessageExtended.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxTranslateMessage(__int64 a1, int a2)
{
  int v3; // ecx
  int v5; // r12d
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax
  unsigned int v8; // ebx
  struct tagTHREADINFO *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // ebp
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  int v17; // esi
  __int64 v18; // r14
  __int64 v19; // rcx
  int v21; // r12d
  unsigned int v22; // edi
  __int64 v23; // rcx
  struct tagWND *v24; // rbp
  _WORD *v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rax
  int v30; // [rsp+50h] [rbp-68h] BYREF
  _OWORD v31[2]; // [rsp+58h] [rbp-60h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v30 = 0;
  v5 = 0;
  memset(v31, 0, sizeof(v31));
  v6 = (unsigned int)(v3 - 256);
  if ( (_DWORD)v6 )
  {
    v6 = (unsigned int)(v6 - 1);
    if ( (_DWORD)v6 )
    {
      v6 = (unsigned int)(v6 - 3);
      if ( (_DWORD)v6 )
      {
        if ( (_DWORD)v6 != 1 )
          return 0LL;
      }
      else
      {
        v5 = 1;
      }
    }
  }
  v7 = PtiCurrent(v6);
  v8 = *(_DWORD *)(a1 + 8);
  v9 = v7;
  LOBYTE(v11) = *((_BYTE *)PtiCurrent(v10) + 1456);
  EtwTraceBeginTranslateMessage(v11, v8);
  v12 = *((_QWORD *)v9 + 80);
  if ( v12 && ((v28 = *(__int64 **)(*(_QWORD *)v12 + 16LL)) != 0LL ? (v29 = *v28) : (v29 = 0LL), v29 == *(_QWORD *)a1) )
    v13 = a2 | 1;
  else
    v13 = a2 & 0xFFFFFFFE;
  v14 = *(_QWORD *)(a1 + 24);
  v15 = xxxInternalToUnicode(
          *(unsigned __int16 *)(a1 + 16),
          WORD1(v14),
          *((_QWORD *)v9 + 58) + 280LL,
          v31,
          16,
          0,
          v13,
          &v30,
          0LL);
  v17 = v15;
  v18 = v14 | v30 & 0x4000000;
  if ( !v15 )
  {
    LOBYTE(v19) = *((_BYTE *)PtiCurrent(v16) + 1456);
    EtwTraceEndTranslateMessage(v19, v8);
    if ( (v13 & 2) == 0 )
      return (unsigned int)(v17 + 1);
    return 0LL;
  }
  v21 = 4 * v5;
  if ( v15 <= 0 )
    v17 = -v15;
  v22 = v21 + (v15 <= 0) + 258;
  if ( (v30 & 0x8000) != 0 )
    v18 |= 0x80000000uLL;
  else
    LODWORD(v18) = v18 & 0x7FFFFFFF;
  v24 = (struct tagWND *)ValidateHwnd(*(_QWORD *)a1);
  if ( !v24 )
  {
    LOBYTE(v27) = *((_BYTE *)PtiCurrent(v23) + 1456);
    EtwTraceEndTranslateMessage(v27, v8);
    return 0LL;
  }
  v25 = v31;
  while ( v17 > 0 )
  {
    PostMessageExtended(v24, v22, (unsigned __int16)*v25, v18 | ((unsigned int)v17 > 1 ? 0x2000000 : 0), 0LL);
    *v25 = 0;
    --v17;
    ++v25;
  }
  LOBYTE(v26) = *((_BYTE *)PtiCurrent(v23) + 1456);
  EtwTraceEndTranslateMessage(v26, v8);
  return 1LL;
}
