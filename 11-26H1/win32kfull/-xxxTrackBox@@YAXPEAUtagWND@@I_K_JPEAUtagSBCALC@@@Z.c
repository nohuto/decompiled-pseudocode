/*
 * XREFs of ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402F5100
 * Callers:
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402F4100 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     _SetSystemTimer @ 0x1401DA8CC (_SetSystemTimer.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402F3D98 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402F43C0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402F5658 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     GetMouseMessageString @ 0x1402F59EC (GetMouseMessageString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsDdd @ 0x1402F7890 (WPP_RECORDER_AND_TRACE_SF_qsDdd.c)
 *     xxxEndScroll @ 0x1402F857C (xxxEndScroll.c)
 */

void __fastcall xxxTrackBox(struct tagWND *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // esi
  __int64 v7; // rdi
  bool v8; // r15
  bool v9; // r13
  unsigned __int64 v10; // rbp
  int v11; // r8d
  int v12; // edx
  int v13; // r9d
  BOOL v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // r8
  BOOL v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // esi
  unsigned int v23; // esi
  __int64 v24; // rax
  struct tagWND *v25; // rdx
  unsigned __int64 v26; // [rsp+A0h] [rbp+8h]

  v5 = a2;
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 744LL);
  v8 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    v10 = a4 >> 16;
    GetMouseMessageString(v5);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_qsDdd(*((_QWORD *)WPP_GLOBAL_Control + 3), v12, v11, v13);
  }
  else
  {
    v10 = a4 >> 16;
  }
  if ( v7 && (!v5 || BYTE1(v5) == 2) )
  {
    if ( (*(_DWORD *)v7 & 8) != 0 )
    {
      RecalcTrackRect((struct tagSBTRACK *)v7);
      *(_DWORD *)v7 &= ~8u;
    }
    LODWORD(v26) = (__int16)a4;
    HIDWORD(v26) = (__int16)v10;
    v14 = PtInRect((_DWORD *)(v7 + 32), v26);
    v18 = v14;
    if ( v14 == (v17 & 1)
      || (zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v7, v14, *(_DWORD *)(v7 + 56)),
          v16 = *((_QWORD *)a1 + 2),
          v7 == *(_QWORD *)(v16 + 744)) )
    {
      v20 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19904);
      v21 = *(_DWORD *)(v20 + 4976) >> 3;
      v22 = v5 - 512;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          if ( v23 == 1 )
            xxxEndScroll(a1);
LABEL_26:
          if ( v7 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 744LL) )
            *(_DWORD *)v7 ^= (v18 ^ (unsigned __int8)*(_DWORD *)v7) & 1;
          return;
        }
        *(_QWORD *)(v7 + 64) = 0LL;
        v21 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v20, v19) + 19904) + 4976LL);
      }
      if ( v18 )
      {
        if ( v18 != (*(_DWORD *)v7 & 1) )
        {
          v24 = SetSystemTimer((__int64)a1, 65534LL, v21, (__int64)xxxContScroll, 0);
          v25 = *(struct tagWND **)(v7 + 24);
          *(_QWORD *)(v7 + 64) = v24;
          if ( v25 )
            xxxDoScroll(*(struct tagWND **)(v7 + 16), v25, *(_DWORD *)(v7 + 56), 0LL, (*(_DWORD *)v7 >> 1) & 1);
        }
      }
      goto LABEL_26;
    }
  }
}
