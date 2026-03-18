/*
 * XREFs of ?xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402F5360
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402F3D98 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402F4654 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     GetMouseMessageString @ 0x1402F59EC (GetMouseMessageString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsDdddddddddddddd @ 0x1402F7A60 (WPP_RECORDER_AND_TRACE_SF_qsDdddddddddddddd.c)
 *     xxxEndScroll @ 0x1402F857C (xxxEndScroll.c)
 */

void __fastcall xxxTrackThumb(struct tagWND *a1, __int64 a2, __int64 a3, unsigned __int64 a4, struct tagSBCALC *a5)
{
  unsigned int v5; // r14d
  struct tagWND *v6; // rsi
  __int64 v7; // rbx
  char v8; // al
  __int16 v9; // bp
  unsigned __int64 v10; // rdi
  int v11; // r8d
  int v12; // edx
  int v13; // r9d
  char v14; // r8
  int v15; // r8d
  bool v16; // zf
  int v17; // r10d
  int v18; // r9d
  char v19; // [rsp+D0h] [rbp-68h]
  bool v20; // [rsp+D1h] [rbp-67h]
  unsigned __int64 v22; // [rsp+140h] [rbp+8h]
  unsigned int v23; // [rsp+148h] [rbp+10h]

  v23 = a2;
  v5 = a2;
  v6 = a1;
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 744LL);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v19 = v8;
  v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    W32GetUserSessionState(a5, a2);
    GetMouseMessageString(v23);
    LOBYTE(v11) = v20;
    LOBYTE(v12) = v19;
    v5 = v23;
    WPP_RECORDER_AND_TRACE_SF_qsDdddddddddddddd(*((_QWORD *)WPP_GLOBAL_Control + 3), v12, v11, v13);
    v10 = a4 >> 16;
    v6 = a1;
    v9 = a4;
  }
  else
  {
    v9 = a4;
    v10 = a4 >> 16;
  }
  if ( BYTE1(v5) == 2 && v7 )
  {
    if ( (*(_DWORD *)v7 & 8) != 0 )
    {
      RecalcTrackRect((struct tagSBTRACK *)v7);
      *(_DWORD *)v7 &= ~8u;
    }
    HIDWORD(v22) = (__int16)v10;
    LODWORD(v22) = v9;
    if ( PtInRect((_DWORD *)(v7 + 32), v22) )
    {
      v16 = (v14 & 2) == 0;
      v15 = *((_DWORD *)a5 + 15);
      if ( v16 )
        LOWORD(v10) = v9;
      v17 = *(_DWORD *)(v7 + 72) + (__int16)v10;
      if ( v17 >= v15 )
      {
        v18 = v15 + *((_DWORD *)a5 + 14);
        v15 = *(_DWORD *)(v7 + 72) + (__int16)v10;
        if ( v17 >= v18 )
          v15 = v18;
      }
    }
    else
    {
      v15 = *((_DWORD *)a5 + 11);
    }
    xxxMoveThumb(v6, a5, v15);
    if ( v5 == 514 || (_GetKeyState(1LL) & 0x8000u) == 0LL )
      xxxEndScroll(v6);
  }
}
